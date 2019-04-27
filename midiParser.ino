#include "MIDIUSB.h"

void parse(midiEventPacket_t rx) {
  if (rx.header != 0)
  {
    /*
    // Control change
    if (rx.header == 0x0B) {
      blinkLed(0);
    }

    //on note
    if (rx.header == 0x09) {
      blinkLed(1);
    }
    //off note
    if (rx.header == 0x08) {
      blinkLed(2);
    }
    */

    // handling parameter changes
    // if (rx.byte2 == 1)
    // {
    //   blinkLed(0);
    // }
    // if (rx.byte2 == 2)
    // {
    //   blinkLed(1);
    // }
    // if (rx.byte2 == 3)
    // {
    //   blinkLed(2);
    // }
    // if (rx.byte2 == 4)
    // {
    //   blinkLed(3);
    // }
    // if (rx.byte2 == 5)
    // {
    //   blinkLed(4);
    // }
    // if (rx.byte2 == 6)
    // {
    //   blinkLed(5);
    // }

    //read value
    //blinkLed(map(rx.byte3, 0, 127, 0, 15));

    //read channel
    blinkLed(getChannel(rx.byte1));
  }
}