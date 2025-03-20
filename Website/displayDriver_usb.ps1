# Http Server setup
$url = "http://localhost:8080/";
$http = [System.Net.HttpListener]::new();
$http.Prefixes.Add($url);
$http.Start();

# Serial port setup
$signPort = "COM"
$enteredPort = Read-Host "Enter Comm PORT"
$signPort = $signPort + $enteredPort
$baudRate = Read-Host "Enter Baud Rate"

# Initializing the serial port ("8" is for the data bits ber byte in the communication)
$out_port_a = new-Object System.IO.Ports.SerialPort $signPort,$baudRate,None,8,one
$out_port_a.open()

# Log ready message to terminal 
if ($http.IsListening)
{
   write-host "Connected to the Scoreboard!  " -f 'black' -b 'gre'
   write-host " Please Minimize this Window!  " -f 'black' -b 'gre'
}

# Helper functions
function send-data-to-display($data)
{
    $out_port_a.WriteLine($data)
    write-host($data)
}

function pad-text($value)
{
    # Default command
    $cmd = "*"

    # Default screen display type (t - top)
    $display = "t"

    # Handling the different commands
    switch ($value.command)
    {
        'scroll'
        { 
            $cmd = "scroll"
        }
        'pause'
        { 
            $cmd = "pause"
        }
        'static'
        { 
            $cmd = "static"
        }
        default
        {
            $cmd = "static"
        }
    }

    # Handling the different screen display types
    switch ($value.display)
    {
        't'
        { 
            $display = "t"
        }
        'b'
        { 
             $display = "b"
        }
        'f'
        { 
             $display = "f"
        }
        default
        {
             $display = "t"
        }
    }

    # "$" is a separator
    $returnValue = "$" + $cmd + "$" + $display + "[" + $value.data + "]"

    return $returnValue
}

# Main loop
while ($http.IsListening)
{
    $context = $http.GetContext()
    
    # Handle POST requests
    if ($context.Request.HttpMethod -eq 'POST' -and $context.Request.RawUrl -eq '/dashboard/post')
    {
        $FormContent = [System.IO.StreamReader]::new($context.Request.InputStream).ReadToEnd()
        $dataToSend = $FormContent | ConvertFrom-Json

        if ($dataToSend.command -eq 'postRaw')
        {
            send-data-to-display($dataToSend.data)
        }
        else
        {
            $formattedData = pad-text($dataToSend)
            send-data-to-display($formattedData)
        }

        # Send response
        $buffer = [System.Text.Encoding]::UTF8.GetBytes("")
        $context.Response.ContentLength64 = $buffer.Length
        $context.Response.AppendHeader("Access-Control-Allow-Origin","*")
        $context.Response.OutputStream.Write($buffer, 0, $buffer.Length)
        $context.Response.OutputStream.Close()
    }

    # Handle kill command
    if ($context.Request.HttpMethod -eq 'POST' -and $context.Request.RawUrl -eq '/kill')
    {
        $context.Response.OutputStream.Close()
        $http.Stop()
        $out_port_a.Close()
        break
    }
}