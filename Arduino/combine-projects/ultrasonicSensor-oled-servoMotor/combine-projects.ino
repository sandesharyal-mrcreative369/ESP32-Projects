// -------- Include Required Libraries --------
#include <Servo.h>    // Servo motor library

#include<Wire.h>   // Library for I2C communication
#include<Adafruit_SSD1306.h>    // Library for OLED display
#include<Adafruit_GFX.h>    // Graphics library for text and shapes

// Create a Servo object
Servo myServo;

// Create OLED display object using I2C (no reset pin, so -1)
Adafruit_SSD1306 oled(128,64,&Wire,-1);

// -------- Define Pins --------
#define SERVO_PIN 5   // Arduino UNO PWM pin for servo

const int trigpin = 7;  // Ultarsonic Trigger pin (OUTPUT) 
const int echopin = 8;  // Ultrasonic Echo pin (INPUT)

// Define OLED display width and heigh
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

// Variables to store time and distance
long duration;
float distance_cm;

void setup() {
  
  Serial.begin(9600);  // Start serial communication

  // Attach servo to pin
  myServo.attach(SERVO_PIN);
  
  // Initialize OLED display with I2C address 0x3C
  if(!oled.begin(SSD1306_SWITCHCAPVCC,0x3C))
  {
    Serial.print("Failed to connect");
    while(true);   // Stop execution if OLED is not detected
  }

  // Clear any previous data from display buffer
  oled.clearDisplay();

  pinMode(trigpin,OUTPUT);   // Set trig pin as output
  pinMode(echopin,INPUT);   // Set echo pin as input
}

void loop() {
  // -------- Generate Trigger Pulse --------
  digitalWrite(trigpin,LOW);
  delayMicroseconds(2);   // Ensure clean LOW signal

  digitalWrite(trigpin,HIGH);
  delayMicroseconds(10);    // Send 10µs pulse
  digitalWrite(trigpin,LOW);
  
 
  // -------- Read Echo Pulse --------
  duration = pulseIn(echopin,HIGH);    // Measure time of HIGH pulse

  // -------- Convert to Distance --------
  // Speed of sound = 0.034 cm/µs
  distance_cm = duration*0.034/2;

  // -------- Map Distance to Servo Angle --------
  // Map 0–50 cm → 0–180 degrees
 int servo_angle = map(distance_cm,0,50,0,180);
 servo_angle = constrain(servo_angle, 0, 180);

 //Moves Servo to servo_angle
 myServo.write(servo_angle);  // object_name.write(angle)

 // -------- Print Result --------
  Serial.print("Distance: ");
  Serial.print(distance_cm);
  Serial.println("cm");

 Serial.print("Postion of Servo motor = ");
 Serial.println(servo_angle);

  // -------- OLED Display --------
 oled.clearDisplay();    // Clear display buffer

 oled.setTextSize(2);     // Set text size (1–8)
 oled.setTextColor(WHITE);  // Set text color

 //For Line-1
 oled.setCursor(0,10);     // Set cursor position (x, y)
 oled.print("Servo: ");   // Print message to buffer
 oled.print(servo_angle);
 oled.print("deg");

 //For Line-2
 oled.setCursor(0,30);     
 oled.print("Distance: ");   
 oled.print(distance_cm);
 oled.print("cm");

 oled.display();   // Show buffer content on screen

 delay(100);   // Optional delay for stability


}