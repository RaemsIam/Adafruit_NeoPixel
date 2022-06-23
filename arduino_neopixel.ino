#include <Adafruit_NeoPixel.h> //Including the NeoPixel module
#define PIN 10 // This indicates the digital pin to which the WS2812 LEDs(Neo Pixels) are connected
#define NUMPIXELS 60 // The number of connected WS2812 LEDs or NeoPixels is specified here

Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800); //Puts the important information in the variable strip
int pause=100; // 100 milliseconds pause
int pauseM=800; // 800 milliseconds pause
int pauseL=3000; // 3000 milliseconds pause
int buttonState = 0; //Set the button state to 0(Down)
const int ButtonPin = 5; //Indicates the digital pin to which the button is connected

// Setup
void setup() 
{
  // Initialisation of the NeoPixel
  strip.begin(); 
  strip.clear();
  strip.show();
}

// Main
void loop()
{
  buttonState = digitalRead(ButtonPin);
  if (buttonState == HIGH) 
  { 
    // When the button is pressed
    
  }
}
