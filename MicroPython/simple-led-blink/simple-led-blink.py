# Import the Pin class to control GPIO pins
from machine import Pin

# Import the time module for delay functions
import time

# Create an LED object on GPIO 13 and set it as output
led = Pin(13,Pin.OUT)

# Run the program continuously
while True:
    
    led.value(1)  #LED ON
    time.sleep(1) #Delays 1 seconds
    
    led.value(0)  #LED OFF
    time.sleep(1)