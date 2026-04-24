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
#define LED1 A1
#define LED2 A2

long duration;
float distance_cm;

String input = "";
String corretPassword = "1234";

int attempt = 0;

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

  //--------------Calculation Part--------------

  //.....Convert to Distance......
  distance_cm = duration * 0.034/2;

  // //---------Map distance ot Servo Angle
  // //Map 0-50cm ---> 0-180 degrees
  // int servo_angle = map(distance_cm ,0,50,0,180);
  // servo_angle = constrain(servo_angle,0,180);

  oled.clearDisplay();
  oled.setTextSize(2);
  oled.setTextColor(WHITE);

  char customKeys = customKeyPad.getKey();

  if(distance_cm <2){
    oled.setCursor(5,10);
    oled.print("LOW Dist: ");
    oled.print(distance_cm);
    digitalWrite(LED1,LOW);
}

if(distance_cm >2 and distance_cm <=15){
  oled.setCursor(5,20);
  oled.print("OBJ Detected: ");
  oled.print(distance_cm);
  digitalWrite(LED1,HIGH);
}

if(distance_cm >50{
    oled.setCursor(5,25);
    oled.print("OUT Dist: ");
    oled.print(distance_cm);

}

  if(customKeys){

    input+=cutomeKeys;

    oled.setCursor(5,30);
    oled.println("Password: ");

    if (input.length()==4){
      if(input == correctPassword){
        attempt = 0;
        digotalWrite(LED2,LOW);
        oled.setCursor(5,40);
        oled.print("Access Granted");
        servo.write(90);  //Opens Door

      }

      else{
        attempt+=1;
        oled.setCursor(5,40);
        oled.print("No Access");
        servo.write(0);  //Closes Door

        if(attempt >=3){
        oled.setCursor(5,50);
        oled.print("System LOCKED");
        servo.write(0);  //Closes Door
        digitalWrite(LED2,HIGH);
        delay(7000);  
        attempt = 0;
        }
   
    
      }

      input = "";  //Reset

  }

  oled.display();

  delay(400);

}