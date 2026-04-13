/*
  This is a simple 4x4 Keypad interfacing project using 16 push-buttons.

  You can use fewer or more than 16 push-buttons according to your requirements.
  The only requirement is to initialize the number of rows, columns, and the key matrix accordingly.

  For example:
  - If you are using a 3x3 keypad, initialize a 3x3 key matrix.
  - Update the number of rows and columns to match your keypad configuration.
*/

//Including Keypad Library
#include <Keypad.h>

// Initializing and mapping the key matrix
const byte ROWS = 4; // Number of rows
const byte COLS = 4; // Number of columns

//Initializing and mapping Keys Matrix
char keys[ROWS][COLS] = {
 {'1', '2', '3', 'A'},
 {'4', '5', '6', 'B'},
 {'7', '8', '9', 'C'},
 {'*', '0', '#', 'D'}
}; //KeyPad Matrix


// Connecting keypad pins to Arduino digital pins
byte rowPins[ROWS] = {13, 12, 11, 10}; // Row pins
byte colPins[COLS] = {5, 4, 3, 2}; // CColumn pins

// Creating the keypad object
Keypad customKeypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);  

void setup() {
  // Initialize serial communication
  Serial.begin(9600);
}

void loop() {
    // Read the pressed key
  char customKey = customKeypad.getKey();  

  // Print the pressed key to the Serial Monitor
  if (customKey) {
    Serial.println(customKey);
  }
}
