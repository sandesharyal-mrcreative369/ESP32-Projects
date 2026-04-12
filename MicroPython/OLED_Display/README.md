# 📟 ESP32 OLED Display with Interrupt and Scheduling (MicroPython)

## 📌 Project Overview
This project demonstrates an interactive embedded system using the **ESP32** programmed in **MicroPython**. It integrates an OLED display, a push button, and two LEDs to showcase real-time user interaction using **Interrupts** and **Scheduling Functions**.

When the push button is pressed, messages are displayed on the OLED screen. Each press triggers different actions, including LED control and status updates. After six button presses, the sequence completes and resets. This project highlights efficient event-driven programming in embedded systems.

---

## 🚀 Features
- 📟 OLED display interfacing using I2C
- 🔘 Push button input using hardware interrupt
- 💡 Control of two LEDs
- 🧠 Real-time event handling using Interrupt Service Routine (ISR)
- ⏱️ Use of MicroPython Scheduling (`micropython.schedule`)
- 🔢 Displays unique messages for each button press
- 📊 LED ON/OFF status shown on the OLED
- 🎓 Ideal for learning embedded systems and IoT concepts

---

## 🛠️ Components Required

| Component | Quantity |
|-----------|----------|
| ESP32 Development Board | 1 |
| SSD1306 OLED Display (I2C) | 1 |
| LEDs | 2 |
| Push Button | 1 |
| Resistors (220Ω–330Ω) | 2 |
| Breadboard | 1 |
| Jumper Wires | As required |

---

## 🔌 Circuit Connections

### 📟 OLED Display (I2C)

| OLED Pin | ESP32 Pin |
|----------|-----------|
| VCC | 3.3V |
| GND | GND |
| SCL | GPIO 22 |
| SDA | GPIO 21 |

### 💡 LEDs

| LED | ESP32 Pin |
|-----|-----------|
| LED 1 | GPIO 2 |
| LED 2 | GPIO 4 |

### 🔘 Push Button

| Button Pin | ESP32 Connection |
|------------|------------------|
| One Leg | GPIO 15 |
| Other Leg | GND |

**Note:** The internal pull-up resistor of the ESP32 is used in the code.

---

## 📂 Project Structure

