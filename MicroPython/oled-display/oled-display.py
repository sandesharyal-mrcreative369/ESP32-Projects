#Import required libraries
from machine import Pin,I2C
import ssd1306
import time

#I2C Intialization
i2c=I2C(0,scl=Pin(22),sda=Pin(21))

#Oled Object
oled = ssd1306.SSD1306_I2C(128,64,i2c)

sms = "Hello OLED" #Write your own message

while True:
    oled.fill(0) # Clear the OLED screen
    """
    oled.text(x-position, y-position, text-visibility
    x-position --> 0 to 127
    y-postion --> 0 to 63
    text-visibility has two values:
    1 --> pixels ON (white text on black background)
    0 --> pixels OFF (black / invisible if background is black)
    """
    oled.text(sms,10,20,1)
    
    # Update the display
    oled.show()
    
    # Small delay to reduce unnecessary refresh
    time.sleep(1)