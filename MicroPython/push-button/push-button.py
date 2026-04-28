from machine import Pin
import time

# Create button object on GPIO 13 as input with pull-up resistor
btn = Pin(13,Pin.IN,Pin.PULL_UP)
"""
Note:
    With Pin.PULL_UP:

--> Not pressed → 1

--> Pressed → 0
"""


while True:
    state = btn.value()    # Read button state
    print(state)
    
    if state != 1:
        print("Button is pressed")
        
    time.sleep(0.3)
    