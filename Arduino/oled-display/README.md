# 📺 Arduino OLED Display - Hello World

This project demonstrates how to interface an **SSD1306 OLED display** with an Arduino using I2C communication. The display shows a simple message: **"Hello OLED"**.

---

## 🚀 Features

* OLED display initialization using I2C
* Text display using Adafruit libraries
* Clean and minimal example for beginners
* Serial debugging for connection verification

---

## 🧰 Components Required

* Arduino UNO Board
* SSD1306 OLED Display (128x64)
* Jumper Wires

---

## 🔌 Circuit Connections

| OLED Pin | ESP32 Connection |
| -------- | ---------------- |
| VCC      | 3.3V / 5V        |
| GND      | GND              |
| SDA      | A4               |
| SCL      | A5               |

> ⚠️ Note: I2C pins may vary depending on your Arduino board.

---

## 📦 Libraries Required

Install the following libraries from Arduino Library Manager:

* Adafruit SSD1306
* Adafruit GFX

---

## ⚙️ How It Works

1. Initializes OLED display with I2C address `0x3C`
2. Clears the display buffer
3. Sets text size, color, and position
4. Displays "Hello OLED" on the screen

---

## ▶️ Output

The OLED screen will display:

```
Hello OLED
```

---

## 🛠️ Troubleshooting

* Make sure the I2C address is correct (commonly `0x3C`)
* Check wiring connections
* Use an I2C scanner if display is not detected
* Ensure required libraries are installed

---

## 📌 Future Improvements

* Display sensor data (temperature, distance, etc.)
* Add animations
* Integrate with buttons or WiFi features

---

## 👨‍💻 Author

Sandesh Aryal

---

## ⭐ Support

If you like this project, give it a ⭐ on GitHub!
