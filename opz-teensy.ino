#include "MIDIUSB.h"

// For testing/debug
int period = 1500;
unsigned long time_now = 0;
unsigned long time_now1 = 0;
bool serialDebug = false;

void setup()
{
  if (serialDebug)
  {
    Serial.begin(9600);
  }
  setupAudio();
}

void loop()
{
  readUSB();
  //testYourself();
}

// Read MIDI packests from usb
void readUSB()
{
  midiEventPacket_t rx = MidiUSB.read();
  if (rx.header != 0)
  {
    parse(rx);
  }
}

// Can be used to test if everything works without an op-z or other midi device.
void testYourself()
{
  if (millis() > time_now + period)
  {
    time_now = millis();
    d_onNote(44);
  }

  if (millis() > time_now + 300)
  {
    time_now1 = millis();
    d_offNote(44);
  }
}
