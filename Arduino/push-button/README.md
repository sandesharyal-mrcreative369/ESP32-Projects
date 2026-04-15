# 🔘 Push Button Interface with Arduino

This project demonstrates how to interface a push button with an Arduino using the internal pull-up resistor. The button's status is displayed on the Serial Monitor, making it an ideal beginner project for learning digital input handling.

---

## 📌 Project Overview
The Arduino reads the state of a push button connected to a digital pin. When the button is pressed, a message is printed to the Serial Monitor. This project introduces the concept of digital input, internal pull-up resistors, and serial communication.

---

## 🛠️ Components Required
- Arduino Uno (or any compatible Arduino board)
- Push Button
- Jumper Wires
- Breadboard (optional)
- USB Cable

---

## 🔌 Circuit Connections

| Component | Arduino Connection |
|-----------|-------------------|
| Push Button Pin 1 | Digital Pin 8 |
| Push Button Pin 2 | GND |

**Note:** No external resistor is required because the internal pull-up resistor is used.

---


###  How to Run the Project
- Connect the push button as shown in the circuit diagram.
- Open the Arduino IDE.
- Copy and paste the code into a new sketch.
- Select the correct board and port:
- Board: Arduino Uno
- Port: As per your system.
- Click Upload.
- Open the Serial Monitor and set the baud rate to 9600.
- Press the button to observe the output.


### How It Works
- INPUT_PULLUP activates the Arduino's internal pull-up resistor.
- The button reads:
- LOW (0) when pressed.
- HIGH (1) when released.
- The Arduino continuously monitors the button and prints its status to the Serial Monitor.


### Applications
- Digital input detection
- Home automation systems
- Embedded system prototyping
- User interface controls
- Robotics and IoT projects


### Future Improvements
- Add an LED indicator.
- Implement software debouncing.
- Control devices using multiple buttons.
- Integrate with ESP32 and IoT platforms.


### Author
Sandesh Aryal


### License
This is open source and free to use.You can modify the code according to your requirements.

