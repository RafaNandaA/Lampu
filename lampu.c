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
  int n=0;
  while(n<20){
    if(n>10) {
      for(int i=16; i<20; i++) {
        pixels1.setPixelColor(i, pixels1.Color(0, 0, 0));
      }
      for(int i=40; i<44; i++) {
        pixels1.setPixelColor(i, pixels1.Color(0, 0, 0));
      }
      pixels1.show(); // Send the updated pixel colors to the hardware
    }
    else {
      for(int i=16; i<20; i++) {
        pixels1.setPixelColor(i, pixels1.Color(85, 85, 85));
      }
      for(int i=20; i<24; i++) {
        pixels1.setPixelColor(i, pixels1.Color(0, 255, 0));
      }
    //Lampu 4-1
      for(int i=24; i<39; i++) {
        pixels1.setPixelColor(i, pixels1.Color(85, 85, 85));
      }
      for(int i=40; i<44; i++) {
        if(i !=39){
          pixels1.setPixelColor(i, pixels1.Color(85, 85, 85));
        }
      } 
      for(int i=44; i<48; i++) {
        pixels1.setPixelColor(i, pixels1.Color(255, 0, 0));
      }
      pixels1.setPixelColor(39, pixels1.Color(40, 40, 160));//Gara gara lampunya rusak anjing
      pixels1.show(); 
    }


    for(int i=0; i<7; i++) {
      pixels1.setPixelColor(i, pixels1.Color(255, 255, 255));
      pixels1.setPixelColor(i+1, pixels1.Color(255, 255, 255));
      pixels1.setPixelColor(i+7, pixels1.Color(255, 0, 0));
      pixels1.setPixelColor(i+8, pixels1.Color(255, 0, 0));
      delay(10);
      pixels1.show();
      pixels1.setPixelColor(i, pixels1.Color(0, 0, 0));
      pixels1.setPixelColor(i+1, pixels1.Color(0, 0, 0));
      pixels1.setPixelColor(i+7, pixels1.Color(0, 0, 0));
      pixels1.setPixelColor(i+8, pixels1.Color(0, 0, 0));
      pixels1.show();
    }
    n+=1;
  }

}
