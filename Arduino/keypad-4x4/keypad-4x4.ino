/*
  This is a simple 4x4 Keypad using 16 Push-Buttons.
  You can use lees than 16 or more than 16 Push-Buttons according to your Requirement.
  Only thing is that according to your number of Push-Buttons,you have to initalize the no.of rows,columns and and Keys Matrix.
  If it is 3x3 then initalize and map 3x3 matrix of keys and according map no of rows and columns
*/


//Including Keypad Header file
#include <Keypad.h>

const byte ROWS = 4; // Number of rows
const byte COLS = 4; // Number of columns

//Initializing and mapping Keys Matrix
char keys[ROWS][COLS] = {
 {'1', '2', '3', 'A'},
 {'4', '5', '6', 'B'},
 {'7', '8', '9', 'C'},
 {'*', '0', '#', 'D'}
}; //Matrix of KeyPad

byte rowPins[ROWS] = {13, 12, 11, 10}; // Connect to row pins
byte colPins[COLS] = {5, 4, 3, 2}; // Connect to column pins

Keypad customKeypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);  //Object Creation

void setup() {
  Serial.begin(9600);
}

void loop() {
  char customKey = customKeypad.getKey();  //Getting Keys

  //Checking if key is pressed,and printing that key
  if (customKey) {
    Serial.println(customKey);
  }
}
