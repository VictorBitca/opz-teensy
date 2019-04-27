/*
 * MIDIUSB_test.ino
 *
 * Created: 4/6/2015 10:47:08 AM
 * Author: gurbrinder grewal
 * Modified by Arduino LLC (2015)
 */

#include "MIDIUSB.h"
#include <FastLED.h>

#define NUM_LEDS 30
#define DATA_PIN 32

CRGB leds[NUM_LEDS];

const int ledPin = 13;
// First parameter is the event type (0x09 = note on, 0x08 = note off).
// Second parameter is note-on/note-off, combined with the channel.
// Channel can be anything between 0-15. Typically reported to the user as 1-16.
// Third parameter is the note number (48 = middle C).
// Fourth parameter is the velocity (64 = normal, 127 = fastest).

void setup()
{
  FastLED.addLeds<WS2812B, DATA_PIN, GRB>(leds, NUM_LEDS);
  FastLED.setBrightness(1);
  clearAllLeds();

  pinMode(ledPin, OUTPUT);
}

void loop()
{
  midiEventPacket_t rx = MidiUSB.read();
  if (rx.header != 0)
  {
    parse(rx);
  }
}