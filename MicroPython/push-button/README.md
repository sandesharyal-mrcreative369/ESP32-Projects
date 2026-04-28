# Push Button Input with ESP32 using MicroPython

This project demonstrates how to read a **push button** using **ESP32** and **MicroPython**.  
The button state is printed in the serial shell, and a message is displayed when the button is pressed.

---

# 📌 Features

- Reads push button input
- Uses internal pull-up resistor
- Detects button press events
- Beginner-friendly MicroPython example

---

# 🛠 Components Required

- ESP32 Development Board  
- Push Button  
- Jumper Wires  
- USB Cable  
- Computer with Thonny IDE  

---

# 🔌 Circuit Connections

| Push Button Pin | ESP32 Connection |
|-----------------|------------------|
| One Side        | GPIO 13          |
| Other Side      | GND              |

---

### ⚙ How It Works
- The push button is connected to GPIO 13
- Internal pull-up resistor keeps the default state HIGH
- When pressed, the pin connects to GND
- The program reads the state continuously
- If pressed, it prints a message in the shell


### Understanding Pull-Up Logic
- Button State	GPIO Value
- Not Pressed -->	1
- Pressed	  -->   0

- This means the logic is inverted compared to normal expectations.


### License
Sandesh Aryal

### Contirbutions
- You can contribute this code and use the code for building the circuitiry system.

