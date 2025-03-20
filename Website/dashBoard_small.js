const API_URL = 'http://localhost:8080';

async function sendMessage()
{
	const message = document.getElementById('message').value;
	const animation = document.querySelector('input[name="animation"]:checked').value;
	const display = document.querySelector('input[name="display"]:checked').value;

	if (!message)
	{
		alert('Please enter a message');
		return;
	}

	validateInput(message, animation, display)

	try
	{
		const response = await fetch(`${API_URL}/dashboard/post`,
		{
			method: 'POST',
			body: JSON.stringify(
			{
				command: animation,
				display: display,
				data: message
			})
		});

		if (!response.ok)
		{
			throw new Error('Failed to send message');
		}
	}
	catch (error)
	{
		alert('Error connecting to server');
		console.error('Error:', error);
	}
}

async function killServer()
{
	if (!confirm('Are you sure you want to stop the server?'))
	{
		return;
	}

	try
	{
		const response = await fetch(`${API_URL}/kill`,
		{
			method: 'POST'
		});

		if (response.ok)
		{
			alert('Server stopped successfully');
			document.querySelector('.control-panel').innerHTML = '<h1>Server Stopped</h1><p>The server has been shutdown. Please close this window.</p>';
		}
		else
		{
			throw new Error('Failed to stop server');
		}
	}
	catch (error)
	{
		alert('Error connecting to server');
		console.error('Error:', error);
	}
}

function validateInput(input, animation, display)
{
	if (animation === "statc")
	{
		if (input.length > 20)
		{
			alert('Too many characters');
		}
	}
}

async function startTimer()
{
	const minutes = document.getElementById('minutes').value;
	const seconds = document.getElementById('seconds').value;

	if (minutes.length > 0 || seconds.length > 0)
	{
		alert('Too many characters in minutes or seconds input');
		return;
	}

	const message = minutes + ":" + seconds; // Applying the timer format here
	const animation = "statc";
	const display = "full";

	validateInput();

	try
	{
		const response = await fetch(`${API_URL}/dashboard/post`,
		{
			method: 'POST',
			body: JSON.stringify(
			{
				command: animation,
				display: display,
				data: message
			})
		});

		if (!response.ok)
		{
			throw new Error('Failed to send message');
		}
	}
	catch (error)
	{
		alert('Error connecting to server');
		console.error('Error:', error);
	}
}