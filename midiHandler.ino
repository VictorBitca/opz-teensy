#include "MIDIUSB.h"

void parse(midiEventPacket_t p)
{
  switch (p.header)
  {
  case 0:
    break; //No pending events
  case 0x9:
    onN(p);
    break;
  case 0x8:
    offN(p);
    break;
  case 0x0B:
    onCC(p);
    break;
  default:
    break;
  }
}

// handling parameter changes
// byte1 is the channel
// byte2 is the control
// byte3 is the value
void onCC(midiEventPacket_t p)
{
  if (getMidiChannel(p.byte1) == 13)
  {
    // First page
    if (p.byte2 == 1)
    {
      setParamA(p.byte3);
      return;
    }
    if (p.byte2 == 2)
    {
      setParamB(p.byte3);
      return;
    }
    // First page
    if (p.byte2 == 3)
    {
      setFilterFreq(p.byte3);
      return;
    }
    if (p.byte2 == 4)
    {
      setFilterRes(p.byte3);
      return;
    }

    // ADSR page
    if (p.byte2 == 5)
    {
      setAtack(p.byte3);
      return;
    }
    if (p.byte2 == 6)
    {
      setDecay(p.byte3);
      return;
    }
    if (p.byte2 == 7)
    {
      setSustain(p.byte3);
      return;
    }
    if (p.byte2 == 8)
    {
      setRelease(p.byte3);
      return;
    }
    //LFO page
    if (p.byte2 == 9)
    {
      setLFOLevel(p.byte3);
      return;
    }
    if (p.byte2 == 10)
    {
      setLFOFreq(p.byte3);
      return;
    }
    if (p.byte2 == 11)
    {
      setLFODestination(p.byte3);
      return;
    }
    if (p.byte2 == 12)
    {
      setLFOShape(p.byte3);
      return;
    }
    // Levels page
    if (p.byte2 == 13)
    {
      setFXSend(p.byte3);
      return;
    }
    if (p.byte2 == 14)
    {
      setFXParam(p.byte3);
      return;
    }
    if (p.byte2 == 15)
    {
      setStereoBalance(p.byte3);
      return;
    }
    if (p.byte2 == 16)
    {
      setLevel(p.byte3);
      return;
    }
  }
}

// byte1 is the channel
// byte2 is the note
// byte3 is the velocity
void onN(midiEventPacket_t p)
{
  if (getMidiChannel(p.byte1) == 13)
  {
    d_onNote(p.byte2);
  }
}

void offN(midiEventPacket_t p)
{
  if (getMidiChannel(p.byte1) == 13)
  {
    d_offNote(p.byte2);
  }
}

// Utils
uint8_t getMidiChannel(uint8_t value)
{
    uint8_t mask = 0x0f; // 00001111
    return mask & value;
}
