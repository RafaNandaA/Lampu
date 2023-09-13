#include <Adafruit_NeoPixel.h>
#define PIN 6    // Define the pin you're connecting to
#define NUMPIXELS 48 // Define the number of NeoPixels in the strip

Adafruit_NeoPixel pixels1 = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  pixels1.begin();
  pixels1.show(); // Initialize all pixels to 'off'
}

void loop() {
  //Lampu 6
  for(int i=0; i<8; i++) {
    pixels1.setPixelColor(i, pixels1.Color(85, 85, 85));
  }
  //Lampu 5 
  for(int i=8; i<16; i++) {
    pixels1.setPixelColor(i, pixels1.Color(255, 0, 0));
  }
  //Lampu 4-1
  for(int i=16; i<40; i++) {
    if(19<i<24){
      pixels1.setPixelColor(i, pixels1.Color(0, 255, 0));
    }
    else{
      pixels1.setPixelColor(i, pixels1.Color(85, 85, 85));
    }

  }

  for(int i=40; i<44; i++) {
    if(i !=39){
      pixels1.setPixelColor(i, pixels1.Color(85, 85, 85));
    }
    else{
      pixels1.setPixelColor(39, pixels1.Color(40, 40, 180));//Gara gara lampunya rusak anjing
    }
    
  }

  for(int i=44; i<48; i++) {
    pixels1.setPixelColor(i, pixels1.Color(255, 0, 0));
  }
  pixels1.show();

  delay(1000);

  for(int i=20; i<24; i++) {
    pixels1.setPixelColor(i, pixels1.Color(0, 0, 0));
  }
  for(int i=40; i<44; i++) {
    pixels1.setPixelColor(i, pixels1.Color(0, 0, 0));
  }
  pixels1.show(); // Send the updated pixel colors to the hardware
  // Set color green for the last 4 LEDs (indexes 4-7)
  delay(1000);
}
