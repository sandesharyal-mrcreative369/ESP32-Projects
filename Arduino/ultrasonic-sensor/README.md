# 📏 Ultrasonic Sensor Distance Measurement (HC-SR04)

This project demonstrates how to measure distance using an **HC-SR04 Ultrasonic Sensor** with an Arduino. The measured distance is displayed on the Serial Monitor.

---

## 🚀 Features

* Distance measurement using ultrasonic waves
* Real-time output on Serial Monitor
* Beginner-friendly project
* Accurate and simple implementation

---

## 🧰 Components Required

* Arduino Board (e.g., Arduino Uno)
* HC-SR04 Ultrasonic Sensor
* Jumper Wires
* Breadboard (optional)

---

## 🔌 Circuit Connections

| HC-SR04 Pin | Arduino Connection |
| ----------- | ------------------ |
| VCC         | 5V                 |
| GND         | GND                |
| TRIG        | Pin 7              |
| ECHO        | Pin 8              |

---

## ⚙️ Working Principle

1. The **Trig pin** sends a 10µs HIGH pulse.
2. The sensor emits ultrasonic waves.
3. Waves reflect back after hitting an object.
4. The **Echo pin** returns a pulse based on time taken.
5. Distance is calculated using the speed of sound.

---

## 🧮 Formula Used

Distance is calculated using:

```
distance = (duration × 0.034) / 2
```

* `duration` = time taken by sound wave (µs)
* `0.034` = speed of sound in cm/µs
* Divide by 2 because the signal travels forward and back

---

## ▶️ Output

The Serial Monitor will display:

```
Distance: XX cm
```

---

## 🛠️ How to Run

1. Connect the circuit as shown above
2. Open Arduino IDE
3. Upload the code to your Arduino
4. Open Serial Monitor (9600 baud rate)
5. Observe distance values in real-time

---

## ⚠️ Notes

* Ensure correct wiring of TRIG and ECHO pins
* Keep sensor stable for accurate readings
* Avoid obstacles too close (<2 cm) or too far (>400 cm)

---

## 📌 Future Improvements

* Display distance on OLED/LCD
* Add buzzer for obstacle alert
* Integrate with IoT (ESP32 + WiFi)
* Build a parking sensor system

---

## 👨‍💻 Author

Sandesh Aryal

---

## ⭐ Support

If you like this project, consider giving it a ⭐ on GitHub!
