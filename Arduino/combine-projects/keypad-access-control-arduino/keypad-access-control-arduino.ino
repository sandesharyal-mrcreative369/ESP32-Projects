// ---------Adding necessary Libraries--------
#include<Keypad.h>   // Keypad library
#include<Wire.h>   // Library for I2C communication
#include<Adafruit_SSD1306.h>  // Library for OLED display
#include<Adafruit_GFX.h>   // Graphics library for text and shapes


#include<Servo.h>  // Servo Motor Library

// -----OLED Display Setup ----------
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

// Create OLED display object using I2C (no reset pin, so -1)
Adafruit_SSD1306 oled(128,64,&Wire,-1);

// -------Servo Setup ------
Servo servo;

// -------- Keypad Setup -----------
const byte ROWS = 4;
const byte COLS = 4;

// ---------Ultrasonic Sensor Pins ---------
const int trigPin = 13;
const int echoPin = 12;

// ------------ Other Components -----------
#define Servo_Pin 11
#define LED1 A1 //(RED LED)   /Motion / Distance Indicator
#define LED2 A2 //(BLUE LED)  /Security / Lock Indicato

long duration;
float distance_cm;

String input = "";   // User entered password
String corretPassword = "1234"; // Correct password
// Note:- You can overwrite with your password

int attempt = 0;  // Counts wrong attempts

// --------- Keypad Layout -----------
char keys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

// ---------------- Keypad Pin Connections ----------------
byte rowPins[ROWS] = {10,9,8,7};
byte colPins[COLS] = {6,5,4,3};

// Create keypad object
Keypad customKeyPad = Keypad(makeKeymap(keys),rowPins,colPins,ROWS,COLS);

void setup(){
  Serial.begin(9600);    // Start Serial Monitor

  // Set sensor pin modes
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  
  // Set LED pins as output
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);

  // Attach servo motor
  servo.attach(Servo_Pin);

  // Initialize OLED display with I2C address 0x3C
  if(!oled.begin(SSD1306_SWITCHCAPVCC,0x3C)){
    Serial.print("Failed to Connect...");

    // Stop execution if OLED is not detected
    while(true);
  }

  oled.clearDisplay();  // Clear any previous data from display buffer


}

void loop(){
  // ---------- Ultrasonic Sensor Signal Generation -------------
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  
  // Read echo pulse duration
  duration = pulseIn(echoPin,HIGH);

  //--------------Calculation Part--------------

  //.....Convert to Distance......
  distance_cm = duration * 0.034/2;
 
  // ------ OLED Display Setup -------
  oled.clearDisplay();   // Clear display buffer
  oled.setTextSize(2);   // Set text size (1–8)
  oled.setTextColor(WHITE);   // Set text color

  // ------ Read Keypad Input ---------
  char customKeys = customKeyPad.getKey();

  // -------- Distance Conditions ---------
  // Very low distance
  if(distance_cm <2){
    oled.setCursor(5,10);   // Set cursor position (x, y)
    oled.print("LOW Dist: ");
    oled.print(distance_cm);
    digitalWrite(LED1,LOW);
}

// Object detected nearby
if(distance_cm >2 and distance_cm <=15){
  oled.setCursor(5,20);
  oled.print("OBJ Detected: ");
  oled.print(distance_cm);
  digitalWrite(LED1,HIGH);
}
  
// Out of range
if(distance_cm >50{
    oled.setCursor(5,25);
    oled.print("OUT Dist: ");
    oled.print(distance_cm);

}
  // ------Password Input Logic --------
  if(customKeys){
    // Add pressed key to input string
    input+=cutomeKeys;

    oled.setCursor(5,30);
    oled.println("Password: ");

    // Check when 4 digits entered
    if (input.length()==4){

      // Checking correct password
      if(input == correctPassword){
        attempt = 0;
        digotalWrite(LED2,LOW);
        oled.setCursor(5,40);
        oled.print("Access Granted");
        servo.write(90);  //Opens Door

      }
      
      // Wrong password
      else{

        attempt+=1;
        oled.setCursor(5,40);
        oled.print("No Access");
        servo.write(0);  //Closes Door
        
        // Lock system after 3 wrong attempts
        if(attempt >=3){
        oled.setCursor(5,50);
        oled.print("System LOCKED");

        servo.write(0);  //Closes Door

        digitalWrite(LED2,HIGH);

        delay(7000);   // Lock for 7 sec
        attempt = 0;
        }

      }

      input = "";  //Reset input after checking

  }

  // Show buffer content on screen
  oled.display();

  delay(400);

}