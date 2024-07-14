/// @file    
/// @brief   
/// @example 

#include <FastLED.h>
#include <RGBW.h>

// Number of LEDs in your strip and OUTPUT data pin 

#define NUMBER_LEDS 10
#define DATA_PIN 3 


//correction of space
//the number of LEDs is good for RGB but not for RGBW which contains a small additional W LED. 
//It is therefore necessary to add more space by artificially increasing the number of LEDs.

#define NUM_LEDS NUMBER_LEDS*2 // to gain space


// Definition of LED strip

CRGB leds[NUM_LEDS];

void setup() { 

	FastLED.addLeds<SK6812, DATA_PIN>(leds, NUM_LEDS);  //initialisation of strip

}

void loop() { 

  //RGBW_color( LED strip  ,location of LED, R, G, B, W);  

  RGBW_color( leds ,1, 255, 0, 0, 0); // light on red the second LED of the strip
  FastLED.show();
  
  delay(1000);

  RGBW_color( leds ,1, 0, 0, 0, 0); // Black
  FastLED.show();

  delay(1000);


}
