#include "Arduino.h"

void dot()
{
  digitalWrite(ledPin, HIGH);
  delay(50);
  digitalWrite(ledPin, LOW);
}

void blinkLed(int i)
{
  leds[i] = CRGB::Red;
  FastLED.show();
  delay(25);
  leds[i] = CRGB::Black;
  FastLED.show();
}

void clearAllLeds()
{
  for (int i = 0; i < NUM_LEDS; i++)
  {
    leds[i] = CRGB::Black;
    FastLED.show();
  }
}
