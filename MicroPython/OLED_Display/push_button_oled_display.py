from machine import Pin,I2C
import ssd1306
import time
import micropython

#I2C Intialization
i2c=I2C(0,scl=Pin(22),sda=Pin(21))


#Oled Object
oled = ssd1306.SSD1306_I2C(128,64,i2c)


#Circuit Elements
led1 = Pin(17,Pin.OUT)
led2 = Pin(14,Pin.OUT)
push_button = Pin(16,Pin.IN,Pin.PULL_UP)

#Debounce Variable
last_time = 0
DEBOUNCE_DELAY = 100

push_button_count =0

#Interrupt Function
def button_interrupt_func(pin):
    global last_time,push_button_count
    current_time = time.ticks_ms()
    
    
    if time.ticks_diff(current_time , last_time) > DEBOUNCE_DELAY:
        last_time = current_time
        
    
        push_button_count+=1
        
        if push_button_count %6 == 0:
            try:
                strr="LED2 OFF"
                micropython.schedule(schedule_heavy_task,strr)
                led2.value(0)
                
            except RuntimeError:
                pass
        
        if push_button_count %6 == 1:
            try:
                strr="Hello"
                micropython.schedule(schedule_heavy_task,strr)
                
            except RuntimeError:
                pass
            
        if push_button_count %6 == 2:
            try:
                strr="World"
                micropython.schedule(schedule_heavy_task,strr)
                
            except RuntimeError:
                pass
            
        if push_button_count %6 == 3:
            try:
                strr="Led1 ON"
                micropython.schedule(schedule_heavy_task,strr)
                led1.value(1)
                
            except RuntimeError:
                pass
        
        if push_button_count %6 == 4:
            try:
                strr="Led1 OFF"
                micropython.schedule(schedule_heavy_task,strr)
                led1.value(0)
                
            except RuntimeError:
                pass
            
        if push_button_count %6 == 5:
            try:
                strr="Led2 ON"
                micropython.schedule(schedule_heavy_task,strr)
                led2.value(1)
                
            except RuntimeError:
                pass
            
#Scheduled Function
def schedule_heavy_task(strr:String):
    oled_display(strr)

#Oled Display Function
def oled_display(str:String):
    oled.fill(0)
    oled.text(str,10,20,1)
    oled.show()

#Button Interrupt
push_button.irq(handler=button_interrupt_func , trigger=Pin.IRQ_FALLING)

try:
    while True:
        
        time.sleep(0.6)

except KeyboardInterrupt:
    print("Exciting...\n")
    time.sleep(0.5)
    led1.value(0)
    led2.value(0)
    push_button.irq(handler=None)
    oled.poweroff()
    print("Excited Sucessfully....\n")