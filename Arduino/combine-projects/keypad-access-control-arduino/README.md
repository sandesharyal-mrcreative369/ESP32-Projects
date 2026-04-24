# 🔌 Smart Locking System using Arduino

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
| (Red) LED 1    | A1 + Resistor          |
| (Blue) LED 2   | A2 + Resistor          | 
| Cathode        | GND                    |

---

### ⚙️ Servo Motor

| Wire Color | Connection |
|-----------|-----------|
| Red        | 3.3V      |
| Brown/Black| GND       |
| Orange     | PWM 11    |

---

### 🔌 Arduino Power

| Pin | Connection |
|-----|-----------|
| 5V  | Components VCC |
| GND | Common Ground  |


## 🧠 Working Principle

1. User inputs via keypad  
2. System processes the input  
3. Ultrasonic sensor measures distance  
4. Data is shown on OLED display  
5. Based on logic:
   - LEDs turn ON/OFF  
   - Servo motor rotates  
   - 3 Attempts for unlocking password
   - if 3 attempts fails then system automatically locks for 7 seconds.

---



## 💻 How to Upload Code

1. Open Arduino IDE  
2. Select Board: Arduino Uno  
3. Select correct COM Port  
4. Upload the `.ino` file  

---

## 📌 Applications

- Smart security systems  
- Distance-based automation  
- Embedded system learning project  
- Smart Radar System
---

## ⚠️ Notes

- Ensure stable power supply for servo  
- Check OLED I2C address if not working  
- Use proper wiring for keypad  

---

## 👨‍💻 Author

Sandesh Aryal


### License

- This projects is free and open-source code.
- Modicification of this code is allowed according to your project needs.

- If you like this Projects then give a like,share with your friends who are interested in Embedded System,IOT.