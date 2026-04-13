# 🔢 4x4 Keypad Interfacing with ESP32/Arduino

This project demonstrates how to interface a 4x4 matrix keypad with a Arduino using the Keypad library. When a key is pressed, the corresponding character is displayed on the Serial Monitor.

---

## 📌 Project Overview
The 4x4 keypad consists of 16 push-buttons arranged in a matrix of rows and columns. This project reads the pressed key and prints it to the Serial Monitor, making it ideal for password systems, calculators, and user input interfaces.

---

## 🛠️ Components Required
- ESP32 or Arduino Board
- 4x4 Matrix Keypad
- Breadboard
- Jumper Wires
- USB Cable

---

## 🔌 Circuit Connections

| Keypad Pin | Microcontroller Pin |
|-------------|---------------------|
| R1 | 13 |
| R2 | 12 |
| R3 | 11 |
| R4 | 10 |
| C1 | 5 |
| C2 | 4 |
| C3 | 3 |
| C4 | 2 |

> ⚠️ Note: Pin numbers can be modified according to your hardware setup.

---

## 📚 Library Required
Install the **Keypad** library from the Arduino Library Manager.

**Steps:**
1. Open Arduino IDE.
2. Go to **Sketch → Include Library → Manage Libraries**.
3. Search for **Keypad**.
4. Install the library by Mark Stanley and Alexander Brevig.

---


## 💻 Arduino Code
The complete code is available in:
- keypad-4x4.ino

---

## ▶️ How It Works
1. The Keypad library scans the rows and columns to detect key presses.
2. When a key is pressed, the corresponding character is identified.
3. The detected key is sent to the Serial Monitor.
4. The process repeats continuously in the `loop()` function.

---

## 📸 Output
Open the Serial Monitor (9600 baud rate):
5
9
A
0
D


---

## 🚀 Applications
- Password-based door lock systems
- Calculators
- Security systems
- User input interfaces
- Embedded system projects

---

## 👨‍💻 Author
**Sandesh Aryal**

---

## 📜 License
This project is open-source and intended for educational purposes.