# 📟 Simple LCD Display with ESP32

This project demonstrates how to interface a 16×2 LCD with an ESP32 using the Arduino IDE. The LCD displays a greeting message along with a time delay. It is a beginner-friendly project for understanding LCD interfacing and basic output control.

---

## 📌 Project Overview

In this project, the ESP32 prints **"Hello"** on a 16×2 LCD and then displays **"1"** and **"2"** with a delay of one second between each output. This example helps beginners learn how to initialize and control an LCD using Arduino programming.

---

## 🛠️ Components Required

* ESP32 Development Board
* 16×2 LCD Display
* 10kΩ Potentiometer (for contrast adjustment)
* Breadboard
* Jumper Wires
* USB Cable

---

## 🔌 Circuit Connections

| LCD Pin  | ESP32 Connection            |
| -------- | --------------------------- |
| VSS      | GND                         |
| VDD      | 5V                          |
| V0       | Middle pin of Potentiometer |
| RS       | GPIO 12                     |
| RW       | GND                         |
| E        | GPIO 11                     |
| D4       | GPIO 5                      |
| D5       | GPIO 4                      |
| D6       | GPIO 3                      |
| D7       | GPIO 2                      |
| A (LED+) | 5V                          |
| K (LED−) | GND                         |

> ⚠️ Note: GPIO pins can be adjusted according to your hardware setup.


## ▶️ How It Works

1. The LCD is initialized using `lcd.begin(16, 2)`.
2. The message **"Hello"** is displayed on the first row.
3. The number **"1"** appears after a 1-second delay.
4. The number **"2"** is displayed after another 1-second delay.
5. The `loop()` function remains empty to prevent repetition.

---

## 📂 Project Structure

```
ESP32-Projects/
└── Arduino/
    └── LCD_Display/
        ├── LCD_Display.ino
        ├── LCD_Display_Circuit_Diagram.png
        └── README.md
```

---

## 🚀 Getting Started

1. Open the Arduino IDE.
2. Select **ESP32 Dev Module** from the Boards Manager.
3. Connect the ESP32 via USB.
4. Upload the code to the board.
5. Adjust the potentiometer to control the LCD contrast.

---

## 📸 Output

```
Hello
1
2
```

---

## 📚 Applications

* Beginner embedded systems projects
* Learning LCD interfacing
* Displaying sensor data
* User interface for IoT devices

---

## 👨‍💻 Author

**Sandesh Aryal**

---

## 📄 License

This project is open-source and available for educational purposes.
