// Ultrasonic Sensor Distance Measurement using HC-SR04

// Define pins
const int trigpin = 7;  // Trigger pin (OUTPUT)
const int echopin = 8;  // Echo pin (INPUT)

// Variables to store time and distance
long duration;
float distance_cm;


void setup() {

  Serial.begin(9600);  // Start serial communication

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

  // -------- Print Result --------
  Serial.print("Distance: ");
  Serial.print(distance_cm);
  Serial.println(" cm");

  delay(500); // Small delay for readability

}