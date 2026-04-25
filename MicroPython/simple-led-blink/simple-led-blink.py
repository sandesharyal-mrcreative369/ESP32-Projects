from machine import Pin
import time

#Led object Creation
led = Pin(13,Pin.OUT)

#Infinitely runs
while True:
    
    led.value(1)  #LED ON
    time.sleep(1) #Delays 1 seconds
    
    led.value(0)  #LED OFF
    time.sleep(1)