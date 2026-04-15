# Servo Motor Control using Arduino

This project demonstrates how to control a servo motor using an Arduino. The servo rotates to three different angles—0°, 90°, and 180°—with a one-second delay between each movement. It is a simple and beginner-friendly project for understanding PWM-based motor control.

---

## 📌 Project Overview
Servo motors are widely used in robotics and automation. In this project, an Arduino sends control signals to position the servo at specific angles. The movement repeats continuously, making it ideal for learning the basics of embedded systems and motion control.

---

## 🛠️ Components Required
- Arduino Uno (or any compatible Arduino board)
- Servo Motor (e.g., SG90)
- Jumper Wires
- Breadboard (optional)
- USB Cable for programming and power

---

## 🔌 Circuit Connections

| Servo Wire Color | Connection |
|------------------|------------|
| Red              | 5V         |
| Brown/Black      | GND        |
| Yellow/Orange    | Digital Pin 9 |

---

### ▶️ How to Run the Project
- Connect the servo motor to the Arduino as shown above.
- Open the Arduino IDE.
- Create a new sketch and paste the code.
- Select the correct board and port:
- Board: Arduino Uno
- Port: As per your system
- Click Upload.
- Observe the servo rotating between 0°, 90°, and 180°.


### ⚙️ How It Works
- The Servo.h library enables precise control of servo motors.
- myServo.attach(9) connects the servo to digital pin 9.
- myServo.write(angle) sets the servo position.
- delay(1000) provides a one-second pause between movements.


### 🚀 Applications
- Robotic Arms
- Automated Doors
- Camera Pan-Tilt Systems
- RC Vehicles
- Smart Home Automation
- Educational and DIY Projects



### Future Improvements
- Control the servo using a potentiometer.
- Add push-button control for manual positioning.
- Integrate with ESP32 or IoT platforms.
- Control multiple servo motors simultaneously.



### Author
Sandesh Aryal


### License
It is free and open source.You can modify it according to your requirements.





