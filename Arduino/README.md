# 🤖 Ultrasonic Sensor + Servo + OLED (Arduino Uno)

This project combines an **HC-SR04 Ultrasonic Sensor**, **Servo Motor**, and **OLED Display** to create a smart distance-based servo control system.

---

## 🚀 Features

* Measures distance using ultrasonic sensor
* Moves servo based on object distance
* Displays distance and servo angle on OLED
* Real-time serial monitoring

---

## 🧰 Components Required

* Arduino Uno
* HC-SR04 Ultrasonic Sensor
* Servo Motor (SG90 or similar)
* SSD1306 OLED Display (128x64)
* Jumper Wires
* Breadboard

---

## 🔌 Circuit Connections

### Ultrasonic Sensor

| Pin  | Arduino |
| ---- | ------- |
| VCC(Red Color)     | 5V      |
| GND(Black Color)   | GND     |
| TRIG(Blue Color)   | 7       |
| ECHO(Yellow Color) | 8       |

---

### Servo Motor

| Wire   | Arduino |
| ------ | ------- |
| VCC(Red Color)     | 5V      |
| GND(Black Color)   | GND     |
| Signal(Pink Color) | 5       |

---

### OLED Display (I2C)

| Pin | Arduino |
| --- | ------- |
| VCC(Red color)    | 5V      |
| GND(Black Color)  | GND     |
| SDA(Greenn Color) | A4      |
| SCL(Orange Color) | A5      |

---

## ⚙️ Working Principle

1. Ultrasonic sensor measures distance
2. Distance is converted into servo angle (0–180°)
3. Servo rotates accordingly
4. OLED displays:

   * Distance (cm)
   * Servo angle (degrees)

---

### ⚠️ Important Hardware Note (Arduino Uno)
Servo must be connected to a PWM pin (like 5) ✔️

Ultrasonic sensor uses normal digital pins ✔️

OLED uses I2C (A4 = SDA, A5 = SCL)


## 🧮 Formula Used

distance = (duration × 0.034) / 2

duration = time taken by sound wave (µs)
0.034 = speed of sound in cm/µs
Divide by 2 because the signal travels forward and back

---

## ▶️ Output

* Servo rotates based on object distance
* OLED shows real-time values
* Serial Monitor displays debug data

---

## ⚠️ Notes

* Use external power for servo if unstable
* Keep sensor within 2–50 cm for best results
* Check OLED I2C address (usually 0x3C)

---

### ▶️ How to Run the Project

- Connect the servo motor,OLED-Display,Ultrasonic-Sensor to the Arduino as shown in the diagram.
- Open the Arduino IDE.
- Create a new sketch and paste the code.
- Select the correct board and port:
- Board: Arduino Uno
- Port: As per your system
- Click Upload.


## 📌 Future Improvements

* Add buzzer for obstacle alert
* Create radar scanning system
* Add WiFi monitoring using ESP32

---

## 👨‍💻 Author

Sandesh Aryal

---

## ⭐ Support

If you like this project, give it a ⭐ on GitHub!


### License

This is free open-source.It is made for educational purpose.
You can mocify according to your Projects requirement.