document.addEventListener('DOMContentLoaded', function() {
    const pixelBoard = document.getElementById('pixelBoard');
    const colorPicker = document.getElementById('colorPicker');
    const eraserBtn = document.getElementById('eraserBtn');
    const clearBtn = document.getElementById('clearBtn');
    const invertBtn = document.getElementById('invertBtn');
    const sendBtn = document.getElementById('sendBtn');
    
    let currentColor = '#000000';
    let isDrawing = false;
    let isErasing = false;
    
    // Create pixel board
    function createPixelBoard()
    {
        pixelBoard.innerHTML = '';
        
        for (let row = 0; row < 15; row++)
        {
            for (let col = 0; col < 60; col++)
            {
                const pixel = document.createElement('div');
                pixel.className = 'pixel';
                pixel.dataset.row = row;
                pixel.dataset.col = col;
                pixel.style.backgroundColor = '#ffffff';
                
                pixel.addEventListener('mousedown', startDrawing);
                pixel.addEventListener('mouseover', draw);
                pixel.addEventListener('touchstart', handleTouch);
                pixel.addEventListener('touchmove', handleTouchMove);
                
                pixelBoard.appendChild(pixel);
            }
        }
        
        document.addEventListener('mouseup', stopDrawing);
        document.addEventListener('touchend', stopDrawing);
    }
    
    function startDrawing(e)
    {
        isDrawing = true;
        draw(e);
    }
    
    function draw(e)
    {
        if (!isDrawing)
            return;
        
        if (isErasing)
        {
            e.target.style.backgroundColor = '#ffffff';
        }
        else
        {
            e.target.style.backgroundColor = currentColor;
        }
    }
    
    function stopDrawing()
    {
        isDrawing = false;
    }
    
    function handleTouch(e)
    {
        e.preventDefault();
        startDrawing(e);
    }
    
    function handleTouchMove(e)
    {
        e.preventDefault();
        const touch = e.touches[0];
        const pixel = document.elementFromPoint(touch.clientX, touch.clientY);
        
        if (pixel && pixel.classList.contains('pixel'))
        {
            if (isErasing)
            {
                pixel.style.backgroundColor = '#ffffff';
            }
            else
            {
                pixel.style.backgroundColor = currentColor;
            }
        }
    }
    
    // Color picker event
    colorPicker.addEventListener('input', function(e)
    {
        currentColor = e.target.value;
        isErasing = false;
        eraserBtn.style.backgroundColor = '#333';
    });
    
    // Eraser button
    eraserBtn.addEventListener('click', function()
    {
        isErasing = !isErasing;
        if (isErasing)
        {
            eraserBtn.style.backgroundColor = '#f7c331';
        }
        else
        {
            eraserBtn.style.backgroundColor = '#e9e9e9';
        }
    });
    
    // Clear button
    clearBtn.addEventListener('click', function()
    {
        const pixels = document.querySelectorAll('.pixel');
        pixels.forEach(pixel =>
        {
            pixel.style.backgroundColor = '#ffffff';
        });
    });
    
    // Initialize board
    createPixelBoard();
});