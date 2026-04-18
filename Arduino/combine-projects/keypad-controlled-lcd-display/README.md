# 🔢 4x4 Keypad with 16x2 LCD Interfacing using Arduino UNO

This project demonstrates how to interface a **4x4 matrix keypad** with a **16x2 LCD display** using an Arduino UNO. When a key is pressed, the corresponding character is displayed on the LCD and printed on the Serial Monitor.

It is an excellent beginner-friendly embedded systems project for learning about input devices, display modules, and Arduino programming.

---

## 📌 Features

- 🔢 Reads input from a 4x4 matrix keypad
- 📟 Displays pressed keys on a 16x2 LCD
- 🖥️ Prints key values to the Serial Monitor
- ⚡ Efficient and responsive design
- 🧩 Uses standard Arduino libraries
- 📚 Easy to understand and beginner-friendly
- 🔧 Compatible with Arduino UNO

---

## 🛠️ Components Required

| Component | Quantity |
|-----------|----------|
| Arduino UNO | 1 |
| 16x2 LCD Display (HD44780) | 1 |
| 4x4 Matrix Keypad (16 Push Buttons) | 1 |
| Breadboard | 1 |
| 10kΩ Potentiometer (for LCD contrast) OR 1kΩ–10kΩ resistor | 1 |
| Jumper Wires | As required |
| USB Cable | 1 |

---

## 🔌 Circuit Connections

### 📟 LCD to Arduino

| LCD Pin | Arduino UNO |
|---------|-------------|
| VSS | GND                           |
| VDD | 5V                            |
| V0 | GND through a 1kΩ–10kΩ resistor|
| RS | 13                             |
| RW | GND                            |
| E  | 12                             |
| D4 | 11                             |
| D5 | 10                             |
| D6 | A0                             |
| D7 | A1                             |
| K (LED−) | GND                      |

### 🔢 Keypad to Arduino

| Keypad Pin | Arduino UNO |
|------------|-------------|
| Row 1 | 6 |
| Row 2 | 7 |
| Row 3 | 8 |
| Row 4 | 9 |
| Column 1 | 5 |
| Column 2 | 4 |
| Column 3 | 3 |
| Column 4 | 2 |

---

> 🔹 **Note:**
> - The V0 pin controls the contrast of the LCD.
> - A **1kΩ–10kΩ resistor** connected between V0 and GND provides a fixed contrast.
> - A **10kΩ potentiometer** is recommended for adjustable contrast.
> - If the display appears too dark or too faint, adjust the resistor value.


> ⚠️ Note: GPIO pins can be adjusted according to your hardware setup

### ▶️ How to Run the Project
- Connect the components as shown in the circuit diagram.

- Open the Arduino IDE.

- Install the required libraries:
- Keypad by Mark Stanley and Alexander Brevig
- LiquidCrystal (pre-installed with Arduino IDE).
- Select the correct board:
- Tools → Board → Arduino UNO
- Select the correct COM port:
- Tools → Port → COMx
- Upload the code to the Arduino.
- Open the Serial Monitor at 9600 baud.
- Press any key on the keypad to see the output on the LCD and Serial Monitor.

### Future Improvements
- 🔐 Password-based door lock system
- 🧮 Calculator using keypad and LCD
-⏱️ Timer or stopwatch
-🏧 ATM-style user interface
-🏠 Smart home control panel
-🔢 Menu-driven embedded applications

### Library	Description
- Keypad -->	Handles matrix keypad input
- LiquidCrystal	--> Controls the 16x2 LCD display

### 🤝 Contributing
- Contributions are welcome! Feel free to fork this repository and submit pull requests to enhance the project.

### 👨‍💻 Author
- Sandesh Aryal
- GitHub: https://github.com/sandesharyal-mrcreative369
- Project: Arduino Keypad LCD Interface

