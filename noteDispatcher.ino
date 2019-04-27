#include "Arduino.h"
#include "limits.h"

/*
Manages the synth voices.
Picks a free synth voice to play a note if available.
if not then intrerupts a synth voice that is in the release phase of its envelope,
does not play any notes is all synth voices are busy.
*/

const int synths = 4;
unsigned long synthsExpireTime[synths] = {0, 0, 0, 0};
uint8_t notes[synths] = {0, 0, 0, 0};

void d_onNote(uint8_t note)
{
    bool playedOnAFreeSynth = tryPlayingOnAFreeSynth(note);

    if (playedOnAFreeSynth)
    {
        if (serialDebug)
        {
            Serial.println("Played on a free synth");
        }

        return;
    }
    else
    {
        tryPlayingOnADyingSynth(note);
    }
}

bool tryPlayingOnAFreeSynth(uint8_t note)
{
    for (int i = 0; i < synths; i++)
    {
        if (synthsExpireTime[i] < millis()) // check if synth is free
        {
            synthsExpireTime[i] = ULONG_MAX; // mark the synth as active
            notes[i] = note;

            switch (i)
            {
            case 0:
                s_onNote1(note);
                break;
            case 1:
                s_onNote2(note);
                break;
            case 2:
                s_onNote3(note);
                break;
            case 3:
                s_onNote4(note);
                break;
            default:
                break;
            }

            return true;
        }
    }
    return false;
}

void tryPlayingOnADyingSynth(uint8_t note)
{
    if (serialDebug)
    {
        Serial.println("Trying on a dying synth");
    }

    for (int i = 0; i < synths; i++)
    {
        if (synthsExpireTime[i] != ULONG_MAX) // check if synth is dying
        {
            synthsExpireTime[i] = ULONG_MAX; // mark the synth as active
            notes[i] = note;

            switch (i)
            {
            case 0:
                s_onNote1(note);
                break;
            case 1:
                s_onNote2(note);
                break;
            case 2:
                s_onNote3(note);
                break;
            case 3:
                s_onNote4(note);
                break;
            default:
                break;
            }

            if (serialDebug)
            {
                Serial.println("Used a dying synth");
            }

            break;
        }
    }
}

void d_offNote(uint8_t note)
{
    for (int i = 0; i < synths; i++)
    {
        if (notes[i] == note)
        {
            synthsExpireTime[i] = millis() + getEnvelopeReleaseTime();
            notes[i] = 0;

            switch (i)
            {
            case 0:
                s_offNote1();
                break;
            case 1:
                s_offNote2();
                break;
            case 2:
                s_offNote3();
                break;
            case 3:
                s_offNote4();
                break;
            default:
                break;
            }
            break;
        }
    }
}
