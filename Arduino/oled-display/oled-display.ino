#include<Wire.h>   // Library for I2C communication
#include<Adafruit_SSD1306.h>    // Library for OLED display
#include<Adafruit_GFX.h>    // Graphics library for text and shapes

// Define OLED display width and heigh
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

// Create OLED display object using I2C (no reset pin, so -1)
Adafruit_SSD1306 oled(128,64,&Wire,-1);

void setup(){

// Start serial communication for debugging
  Serial.begin(115200);

  // Initialize OLED display with I2C address 0x3C
  if(!oled.begin(SSD1306_SWITCHCAPVCC,0x3C))
  {
    Serial.print("Failed to connect");
    while(true);   // Stop execution if OLED is not detected
  }

  // Clear any previous data from display buffer
  oled.clearDisplay();
}

void loop(){

oled.clearDisplay();     // Clear display buffer

oled.setTextSize(2);     // Set text size (1–8)
oled.setTextColor(WHITE);  // Set text color

oled.setCursor(10,5);       // Set cursor position (x, y)

oled.print("Hello OLED: ");    // Print message to buffer

oled.display();            // Show buffer content on screen

delay(1000);               // Optional delay for stability

}