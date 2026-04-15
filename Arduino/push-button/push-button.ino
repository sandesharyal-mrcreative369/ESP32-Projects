/*
  Project: Push Button Interface with Arduino
  Description:
  This program reads the state of a push button connected to an Arduino.
  When the button is pressed, a message is displayed on the Serial Monitor.

  Author: Sandesh Aryal
 
*/


//Define Pin connected to push button
#define push_button_pin 5

void setup(){
 
   // Initialize serial communication at 9600 bits per second
   Serial.begin(9600);

  // Configure the push button pin as INPUT_PULLUP
  // This enables the internal pull-up resistor
  pinMode(push_button_pin,INPUT_PULLUP);
}

void loop(){

 // Read the current state of the push button
int buttonState = digitalRead(push_button_pin);

// Check if the button is pressed
  // With INPUT_PULLUP:
  // Pressed  -> LOW (0)
  // Released -> HIGH (1)
  
if(buttonState==0)
  Serial.print("Button is clicked");
  Serial.println(read);
}
else{
  Serial.print("Button is not clicked");
  Serial.println(read);
}

// Small delay to improve readability in the Serial Monitor
delay(300);

}