//This is 16*2 LCD Display

//Initializing header file for LCD
#include <LiquidCrystal.h>

//Object creation of LCD
LiquidCrystal lcd(12,11,8,7,6,5);
                  //Pins number

void setup() {
//Initializing LCD
lcd.begin(16,2); //lcd.begin(columns,rows)
 
}

void loop() {

  //Setting up thr Cursor on LCD              
  lcd.setCursor(3,0);  //lcd.setCursor(columns,rows)
  
  //Printing String on LCD
  lcd.println("Hello");

  lcd.setCursor(5,1);
  //Printing Time on LCD
  lcd.println(millis()/1000);


}

