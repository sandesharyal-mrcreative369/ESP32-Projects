# OLED Text Display with ESP32 using MicroPython

This project demonstrates how to interface an SSD1306 OLED Display with an ESP32 using MicroPython.  
A custom message is displayed on the OLED screen continuously.

---

# 📌 Features

- Displays custom text on OLED
- Uses I2C communication
- Beginner-friendly MicroPython project
- Easy to modify message and display position

---

# 🛠 Components Required

- ESP32 Development Board  
- SSD1306 OLED Display (128x64)  
- Jumper Wires  
- USB Cable  
- Computer with Thonny IDE  

---

# 🔌 Circuit Connections

| OLED Pin | ESP32 Connection |
|--------|------------------|
| VCC    | 3.3V / 5V        |
| GND    | GND              |
| SCL    | GPIO 22          |
| SDA    | GPIO 21          |

---


### ⚙ How It Works
- ESP32 communicates with the OLED using I2C protocol
- The screen is cleared before every update
- A text message is displayed at position (10,20)
- The display refreshes every second

### 🎯 Customization
- You can change the displayed text:
sms = "Your Message"

- You can also change the display position:
oled.text(sms, 30, 40, 1)

### License
Sandesh Aryal

### Contirbutions
You can contribute this code and use the code for building the circuitiry system.
