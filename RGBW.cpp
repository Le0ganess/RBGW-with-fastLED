#include "Arduino.h"
#include "RGBW.h"
#include "FastLED.h"



void RGBW_color( CRGB *leds  ,int led, int R, int G, int B, int W)
{
  
    int ind;
    ind= led*4;

    leds[0][ind]=G;
    leds[0][ind+1]=R;
    leds[0][ind+2]=B;
    leds[0][ind+3]=W;

}