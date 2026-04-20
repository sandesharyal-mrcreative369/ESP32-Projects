# 🔌 Arduino Multi-Component Smart Project

This project demonstrates the integration of multiple hardware components using Arduino Uno. It combines a keypad, ultrasonic sensor, OLED display, LEDs, and a servo motor into a single system.

---



## 🚀 Features

- 4x4 Keypad Input System  
- Distance Measurement using HC-SR04 Ultrasonic Sensor  
- OLED Display Output (SSD1306)  
- LED Indicators  
- Servo Motor Control  
- Combined system logic  

---

## 🧰 Components Used

- Arduino Uno  
- HC-SR04 Ultrasonic Sensor  
- SSD1306 OLED Display (0.96")  
- 4x4 Matrix Keypad  
- Servo Motor (SG90 or similar)  
- LEDs (x2)  
- Resistors  
- Breadboard  
- Jumper Wires  

---


## 🔌 Circuit Connections

### 📏 Ultrasonic Sensor (HC-SR04)

| Pin        | Connection        |
|------------|------------------|
| VCC        | 5V               |
| GND        | GND              |
| TRIG       | 13               |
| ECHO       | 12               |

---

### 🖥️ OLED Display (SSD1306 - I2C)

| Pin        | Connection        |
|------------|------------------|
| VCC        | 5V               |
| GND        | GND              |
| SDA        | A4               |
| SCL        | A5               |

---

### 🔢 4x4 Keypad

| Keypad Pins | Connection        |
|------------|------------------|
| Row Pins    |   10 , 9 , 8 , 7  |
| Column Pins |    6 , 5,  4,  3  |

---

### 💡 LEDs

| Component | Connection              |
|----------|------------------------|
| LED 1     | A2 + Resistor          |
| LED 2     | A4 + Resistor          | 
| Cathode   | GND                    |

---

### ⚙️ Servo Motor

| Wire Color | Connection |
|-----------|-----------|
| Red        | 3.3V        |
| Brown/Black| GND       |
| Orange     | PWM 11    |

---

### 🔌 Arduino Power

| Pin | Connection |
|-----|-----------|
| 5V  | Components VCC |
| GND | Common Ground  |

