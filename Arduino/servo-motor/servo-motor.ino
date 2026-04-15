//Includes Servo Motor library
#include <Servo.h>

// Create a Servo object
Servo myServo;

void setup() {
// Attach the servo to pin 9
//object_name.attach(pin_Number)
myServo.attach(9);
}

void loop() {
// Move the servo to 0 degrees
myServo.write(0); // object_name.write(angle)
delay(1000);

// Move the servo to 90 degrees
myServo.write(90);
delay(1000);

// Move the servo to 180 degrees
myServo.write(180);
delay(1000);
}