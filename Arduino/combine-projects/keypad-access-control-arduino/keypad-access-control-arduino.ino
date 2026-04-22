#include<Keypad.h>

#include<Wire.h>
#include<Adafruit_SSD1306.h>
#include<Adafruit_GFX.h>

#include<Servo.h>


#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

Adafruit_SSD1306 oled(128,64,&Wire,-1);
Servo servo;


const byte ROWS = 4;
const byte COLS = 4;

const int trigPin = 13;
const int echoPin = 12;

#define Servo_Pin 11
#define LED1 A2 
#define LED2 A4

long duration;
float distance_cm;


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

  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);

  servo.attach(Servo_Pin);


  if(!oled.begin(SSD1306_SWITCHCAPVCC,0x3C)){
    Serial.print("Failed to Connect...");
    while(true);
  }

  oled.clearDisplay();


}

void loop(){

  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  
  duration = pulseIn(echoPin,HIGH);

  //.....Convert to Distance......
  distance_cm = duration * 0.034/2;


  oled.clearDisplay();
  oled.setTextSize(2);
  oled.setTextColor(WHITE);

  oled.setCursor(5,10);
  oled.print("Password: ");

  char customKeys = customKeyPad.getKey();

  if(customKeys){
      if (cusotmezkeys == "1234"){
        oled.setCursor(5,20);
        oled.printz("Correct PW: ");

        // Start servo Motor

      }
      else{
        oled.setCursor(5,20);
        oled.print("Incorrect PW: ");
        oled.clearDisplay();
      }

  }

  oled.display();

  delay(400);

}