#include<Keypad.h>

const byte ROWS = 4;
const byte COLS = 4;

char keys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};


byte rowPins[ROWS] = {10,9,8,7};
byte colPins[COLS] = {6,5,4,3};

Keypad customKeyPad = Keypad(makeKeymap(keys),rowPins,colPins,ROWS,COLS);

void setup(){
  Serial.begin(9600);


}

void loop(){
    char customKeys = customKeyPad.getKey();

    if(customKeys){
        Serial.println(customKeys);

    }

}