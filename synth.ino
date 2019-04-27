#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>

// GUItool: begin automatically generated code
AudioSynthWaveformDc globalDetuneDC;    //xy=95.33332824707031,624.3332824707031
AudioSynthWaveformModulated synthOscA2; //xy=428.33331298828125,634.3332824707031
AudioSynthWaveformModulated synthOscB2; //xy=433.6666259765625,701.6665954589844
AudioSynthWaveformModulated synthOscA1; //xy=438,330
AudioSynthWaveformModulated synthOscB1; //xy=443.33331298828125,397.33331298828125
AudioSynthWaveformModulated synthOscA4; //xy=441.33331298828125,1222.3333435058594
AudioSynthWaveformModulated synthOscA3; //xy=444.33331298828125,936.3333435058594
AudioSynthWaveformModulated synthOscB4; //xy=446.6666259765625,1289.6666564941406
AudioSynthWaveformModulated synthOscB3; //xy=449.6666259765625,1003.6666564941406
AudioMixer4 synthMixer2;                //xy=607.3333129882812,672.3332824707031
AudioMixer4 synthMixer1;                //xy=617,368
AudioMixer4 synthMixer4;                //xy=620.3333129882812,1260.3333435058594
AudioMixer4 synthMixer3;                //xy=623.3333129882812,974.3333435058594
AudioFilterStateVariable synthFilter2;  //xy=778.3333129882812,677.3332824707031
AudioEffectEnvelope envFilGenerator2;   //xy=781.3333129882812,738.3333129882812
AudioSynthWaveformDc envFilDC2;         //xy=781.3333129882812,785.3333129882812
AudioFilterStateVariable synthFilter1;  //xy=788,373
AudioEffectEnvelope envFilGenerator1;   //xy=791,434.0000305175781
AudioSynthWaveformDc envFilDC1;         //xy=791,481.0000305175781
AudioFilterStateVariable synthFilter4;  //xy=791.3333129882812,1265.3333435058594
AudioFilterStateVariable synthFilter3;  //xy=794.3333129882812,979.3333435058594
AudioEffectEnvelope envFilGenerator4;   //xy=794.3333129882812,1326.3333740234375
AudioSynthWaveformDc envFilDC4;         //xy=794.3333129882812,1373.3333740234375
AudioEffectEnvelope envFilGenerator3;   //xy=797.3333129882812,1040.3333740234375
AudioSynthWaveformDc envFilDC3;         //xy=797.3333129882812,1087.3333740234375
AudioSynthWaveformDc envAmpDC2;         //xy=954.3333129882812,552.3332672119141
AudioEffectMultiply envAmpMultiply2;    //xy=961.3333129882812,658.3332824707031
AudioSynthWaveformDc envAmpDC1;         //xy=964,247.99998474121094
AudioEffectEnvelope envAmpGenerator2;   //xy=964.3333129882812,608.3332824707031
AudioSynthWaveformDc envAmpDC4;         //xy=967.3333129882812,1140.3333282470703
AudioEffectMultiply envAmpMultiply1;    //xy=971,354
AudioSynthWaveformDc envAmpDC3;         //xy=970.3333129882812,854.3333282470703
AudioEffectEnvelope envAmpGenerator1;   //xy=974,304
AudioEffectMultiply envAmpMultiply4;    //xy=974.3333129882812,1246.3333435058594
AudioEffectMultiply envAmpMultiply3;    //xy=977.3333129882812,960.3333435058594
AudioEffectEnvelope envAmpGenerator4;   //xy=977.3333129882812,1196.3333435058594
AudioEffectEnvelope envAmpGenerator3;   //xy=980.3333129882812,910.3333435058594
AudioMixer4 synthMasterOut;             //xy=1241,560
AudioEffectChorus chorus;               //xy=1378.3333740234375,966.3333129882812
AudioEffectFreeverb freeverbs;          //xy=1379.3333740234375,913.3333129882812
AudioAmplifier chorusAmp;               //xy=1516.3333740234375,966.3333129882812
AudioAmplifier reverbAmp;               //xy=1530.3333740234375,913.3333129882812
AudioInputI2S lineIn;                   //xy=1623,778
AudioMixer4 rightOut;                   //xy=1769,870
AudioMixer4 leftOut;                    //xy=1772,687
AudioOutputI2S lineOut;                 //xy=1919,783
AudioConnection patchCord1(globalDetuneDC, 0, synthOscB1, 0);
AudioConnection patchCord2(globalDetuneDC, 0, synthOscB2, 0);
AudioConnection patchCord3(globalDetuneDC, 0, synthOscB3, 0);
AudioConnection patchCord4(globalDetuneDC, 0, synthOscB4, 0);
AudioConnection patchCord5(synthOscA2, 0, synthMixer2, 0);
AudioConnection patchCord6(synthOscB2, 0, synthMixer2, 1);
AudioConnection patchCord7(synthOscA1, 0, synthMixer1, 0);
AudioConnection patchCord8(synthOscB1, 0, synthMixer1, 1);
AudioConnection patchCord9(synthOscA4, 0, synthMixer4, 0);
AudioConnection patchCord10(synthOscA3, 0, synthMixer3, 0);
AudioConnection patchCord11(synthOscB4, 0, synthMixer4, 1);
AudioConnection patchCord12(synthOscB3, 0, synthMixer3, 1);
AudioConnection patchCord13(synthMixer2, 0, synthFilter2, 0);
AudioConnection patchCord14(synthMixer1, 0, synthFilter1, 0);
AudioConnection patchCord15(synthMixer4, 0, synthFilter4, 0);
AudioConnection patchCord16(synthMixer3, 0, synthFilter3, 0);
AudioConnection patchCord17(synthFilter2, 0, envAmpMultiply2, 1);
AudioConnection patchCord18(envFilGenerator2, 0, synthFilter2, 1);
AudioConnection patchCord19(envFilDC2, envFilGenerator2);
AudioConnection patchCord20(synthFilter1, 0, envAmpMultiply1, 1);
AudioConnection patchCord21(envFilGenerator1, 0, synthFilter1, 1);
AudioConnection patchCord22(envFilDC1, envFilGenerator1);
AudioConnection patchCord23(synthFilter4, 0, envAmpMultiply4, 1);
AudioConnection patchCord24(synthFilter3, 0, envAmpMultiply3, 1);
AudioConnection patchCord25(envFilGenerator4, 0, synthFilter4, 1);
AudioConnection patchCord26(envFilDC4, envFilGenerator4);
AudioConnection patchCord27(envFilGenerator3, 0, synthFilter3, 1);
AudioConnection patchCord28(envFilDC3, envFilGenerator3);
AudioConnection patchCord29(envAmpDC2, envAmpGenerator2);
AudioConnection patchCord30(envAmpMultiply2, 0, synthMasterOut, 1);
AudioConnection patchCord31(envAmpDC1, envAmpGenerator1);
AudioConnection patchCord32(envAmpGenerator2, 0, envAmpMultiply2, 0);
AudioConnection patchCord33(envAmpDC4, envAmpGenerator4);
AudioConnection patchCord34(envAmpMultiply1, 0, synthMasterOut, 0);
AudioConnection patchCord35(envAmpDC3, envAmpGenerator3);
AudioConnection patchCord36(envAmpGenerator1, 0, envAmpMultiply1, 0);
AudioConnection patchCord37(envAmpMultiply4, 0, synthMasterOut, 3);
AudioConnection patchCord38(envAmpMultiply3, 0, synthMasterOut, 2);
AudioConnection patchCord39(envAmpGenerator4, 0, envAmpMultiply4, 0);
AudioConnection patchCord40(envAmpGenerator3, 0, envAmpMultiply3, 0);
AudioConnection patchCord41(synthMasterOut, 0, leftOut, 0);
AudioConnection patchCord42(synthMasterOut, 0, rightOut, 1);
AudioConnection patchCord43(synthMasterOut, freeverbs);
AudioConnection patchCord44(synthMasterOut, chorus);
AudioConnection patchCord45(chorus, chorusAmp);
AudioConnection patchCord46(freeverbs, reverbAmp);
AudioConnection patchCord47(chorusAmp, 0, rightOut, 3);
AudioConnection patchCord48(chorusAmp, 0, leftOut, 2);
AudioConnection patchCord49(reverbAmp, 0, rightOut, 2);
AudioConnection patchCord50(reverbAmp, 0, leftOut, 1);
AudioConnection patchCord51(lineIn, 0, leftOut, 3);
AudioConnection patchCord52(lineIn, 1, rightOut, 0);
AudioConnection patchCord53(rightOut, 0, lineOut, 1);
AudioConnection patchCord54(leftOut, 0, lineOut, 0);
AudioControlSGTL5000 sgtl5000_1; //xy=1767,605
// GUItool: end automatically generated code

// The op-z parameters
// First page
float ffreq = 2000;
float fres = 1; //from 0.7 to 5.0
float detuneB = 0.0;

//ADSR parameters
float attack = 20;
float decay = 50;
float sustain = 0.6;
float release = 500;

// Number of samples in each delay line
#define CHORUS_DELAY_LENGTH (32 * AUDIO_BLOCK_SAMPLES)
// Allocate the delay lines for left and right channels
short l_delayline[CHORUS_DELAY_LENGTH];
short r_delayline[CHORUS_DELAY_LENGTH];

unsigned long getEnvelopeReleaseTime()
{
    return (unsigned long)release;
}

void setupAudio()
{
    AudioMemory(140);
    setupStgl();

    globalDetuneDC.amplitude(detuneB);
    freeverbs.roomsize(0.95);
    freeverbs.damping(0.88);
    chorus.begin(l_delayline, CHORUS_DELAY_LENGTH, 3);

    setupOscilators();
    setupEnvelopes();
    setupFilters();
    setupMixers();
}

void setupStgl()
{
    sgtl5000_1.enable();
    sgtl5000_1.volume(0.5);

    // Make a note on the input gotchas
    sgtl5000_1.inputSelect(AUDIO_INPUT_LINEIN);
    sgtl5000_1.lineInLevel(0);
    sgtl5000_1.adcHighPassFilterDisable();
}

void setupOscilators()
{
    synthOscA1.frequency(440);
    synthOscA1.amplitude(1.0);
    synthOscA1.begin(1, 440.0, WAVEFORM_TRIANGLE);

    synthOscB1.frequency(440);
    synthOscB1.amplitude(1.0);
    synthOscB1.begin(1, 440.0, WAVEFORM_SQUARE);
    synthOscB1.frequencyModulation(1);
    ///
    synthOscA2.frequency(440);
    synthOscA2.amplitude(1.0);
    synthOscA2.begin(1, 440.0, WAVEFORM_TRIANGLE);

    synthOscB2.frequency(440);
    synthOscB2.amplitude(1.0);
    synthOscB2.begin(1, 440.0, WAVEFORM_SQUARE);
    synthOscB2.frequencyModulation(1);
    ///
    synthOscA3.frequency(440);
    synthOscA3.amplitude(1.0);
    synthOscA3.begin(1, 440.0, WAVEFORM_TRIANGLE);

    synthOscB3.frequency(440);
    synthOscB3.amplitude(1.0);
    synthOscB3.begin(1, 440.0, WAVEFORM_SQUARE);
    synthOscB3.frequencyModulation(1);
    //
    synthOscA4.frequency(440);
    synthOscA4.amplitude(1.0);
    synthOscA4.begin(1, 440.0, WAVEFORM_TRIANGLE);

    synthOscB4.frequency(440);
    synthOscB4.amplitude(1.0);
    synthOscB4.begin(1, 440.0, WAVEFORM_SQUARE);
    synthOscB4.frequencyModulation(1);
}

void setupFilters()
{
    synthFilter1.frequency(ffreq);
    synthFilter1.octaveControl(1);
    //
    synthFilter2.frequency(ffreq);
    synthFilter2.octaveControl(1);
    //
    synthFilter3.frequency(ffreq);
    synthFilter3.octaveControl(1);
    //
    synthFilter4.frequency(ffreq);
    synthFilter4.octaveControl(1);
}

void setupEnvelopes()
{
    envAmpDC1.amplitude(1);
    envFilDC1.amplitude(1);

    envAmpGenerator1.attack(attack);
    envAmpGenerator1.decay(decay);
    envAmpGenerator1.sustain(sustain);
    envAmpGenerator1.release(release);

    envFilGenerator1.attack(attack);
    envFilGenerator1.decay(decay);
    envFilGenerator1.sustain(sustain);
    envFilGenerator1.release(release);
    //
    envAmpDC2.amplitude(1);
    envFilDC2.amplitude(1);

    envAmpGenerator2.attack(attack);
    envAmpGenerator2.decay(decay);
    envAmpGenerator2.sustain(sustain);
    envAmpGenerator2.release(release);

    envFilGenerator2.attack(attack);
    envFilGenerator2.decay(decay);
    envFilGenerator2.sustain(sustain);
    envFilGenerator2.release(release);
    //
    envAmpDC3.amplitude(1);
    envFilDC3.amplitude(1);

    envAmpGenerator3.attack(attack);
    envAmpGenerator3.decay(decay);
    envAmpGenerator3.sustain(sustain);
    envAmpGenerator3.release(release);

    envFilGenerator3.attack(attack);
    envFilGenerator3.decay(decay);
    envFilGenerator3.sustain(sustain);
    envFilGenerator3.release(release);
    //
    envAmpDC4.amplitude(1);
    envFilDC4.amplitude(1);

    envAmpGenerator4.attack(attack);
    envAmpGenerator4.decay(decay);
    envAmpGenerator4.sustain(sustain);
    envAmpGenerator4.release(release);

    envFilGenerator4.attack(attack);
    envFilGenerator4.decay(decay);
    envFilGenerator4.sustain(sustain);
    envFilGenerator4.release(release);
}

void setupMixers()
{
    float gainVal = 0.3;
    for (int i = 0; i < 4; i++)
    {
        synthMixer1.gain(i, gainVal);
        synthMixer2.gain(i, gainVal);
        synthMixer3.gain(i, gainVal);
        synthMixer4.gain(i, gainVal);
    }
}

// First voice
void s_onNote1(uint8_t note)
{
    AudioNoInterrupts();
    synthOscA1.frequency(midicps((float)note));
    synthOscB1.frequency(midicps((float)note - 12));
    envAmpGenerator1.noteOn();
    envFilGenerator1.noteOn();
    AudioInterrupts();

    reportDSPUsage();
}

void s_offNote1()
{
    envAmpGenerator1.noteOff();
    envFilGenerator1.noteOff();
}

void s_cancelNote1()
{
    AudioNoInterrupts();
    envAmpGenerator1.release(0.0);
    envFilGenerator1.release(0.0);
    envAmpGenerator1.noteOff();
    envFilGenerator1.noteOff();
    AudioInterrupts();

    AudioNoInterrupts();
    envAmpGenerator1.release(release);
    envFilGenerator1.release(release);
    AudioInterrupts();
}

// Second voice
void s_onNote2(uint8_t note)
{
    AudioNoInterrupts();
    synthOscA2.frequency(midicps((float)note));
    synthOscB2.frequency(midicps((float)note - 12));
    envAmpGenerator2.noteOn();
    envFilGenerator2.noteOn();
    AudioInterrupts();

    reportDSPUsage();
}

void s_offNote2()
{
    envAmpGenerator2.noteOff();
    envFilGenerator2.noteOff();
}

void s_cancelNote2()
{
    AudioNoInterrupts();
    envAmpGenerator2.release(0.0);
    envFilGenerator2.release(0.0);
    envAmpGenerator2.noteOff();
    envFilGenerator2.noteOff();
    AudioInterrupts();

    AudioNoInterrupts();
    envAmpGenerator2.release(release);
    envFilGenerator2.release(release);
    AudioInterrupts();
}

// Third voice
void s_onNote3(uint8_t note)
{
    AudioNoInterrupts();
    synthOscA3.frequency(midicps((float)note));
    synthOscB3.frequency(midicps((float)note - 12));
    envAmpGenerator3.noteOn();
    envFilGenerator3.noteOn();
    AudioInterrupts();

    reportDSPUsage();
}

void s_offNote3()
{
    envAmpGenerator3.noteOff();
    envFilGenerator3.noteOff();
}

void s_cancelNote3()
{
    AudioNoInterrupts();
    envAmpGenerator3.release(0.0);
    envFilGenerator3.release(0.0);
    envAmpGenerator3.noteOff();
    envFilGenerator3.noteOff();
    AudioInterrupts();

    AudioNoInterrupts();
    envAmpGenerator3.release(release);
    envFilGenerator3.release(release);
    AudioInterrupts();
}
// Fourth voice
void s_onNote4(uint8_t note)
{
    AudioNoInterrupts();
    synthOscA4.frequency(midicps((float)note));
    synthOscB4.frequency(midicps((float)note - 12));
    envAmpGenerator4.noteOn();
    envFilGenerator4.noteOn();
    AudioInterrupts();

    reportDSPUsage();
}

void s_offNote4()
{
    envAmpGenerator4.noteOff();
    envFilGenerator4.noteOff();
}

void s_cancelNote4()
{
    AudioNoInterrupts();
    envAmpGenerator4.release(0.0);
    envFilGenerator4.release(0.0);
    envAmpGenerator4.noteOff();
    envFilGenerator4.noteOff();
    AudioInterrupts();

    AudioNoInterrupts();
    envAmpGenerator4.release(release);
    envFilGenerator4.release(release);
    AudioInterrupts();
}

// On op-z parameters update
// First page
void setParamA(int8_t input)
{
    float mapped = map_uint8_float(input, 0, 127, 0, 8);

    if (isBetween(mapped, 0, 1))
    {
        synthOscA1.begin(WAVEFORM_SINE);
        synthOscB1.begin(WAVEFORM_SQUARE);
        synthOscA2.begin(WAVEFORM_SINE);
        synthOscB2.begin(WAVEFORM_SQUARE);
        synthOscA3.begin(WAVEFORM_SINE);
        synthOscB3.begin(WAVEFORM_SQUARE);
        synthOscA4.begin(WAVEFORM_SINE);
        synthOscB4.begin(WAVEFORM_SQUARE);
    }
    else if (isBetween(mapped, 1, 2))
    {
        synthOscA1.begin(WAVEFORM_SAWTOOTH);
        synthOscB1.begin(WAVEFORM_SQUARE);
        synthOscA2.begin(WAVEFORM_SAWTOOTH);
        synthOscB2.begin(WAVEFORM_SQUARE);
        synthOscA3.begin(WAVEFORM_SAWTOOTH);
        synthOscB3.begin(WAVEFORM_SQUARE);
        synthOscA4.begin(WAVEFORM_SAWTOOTH);
        synthOscB4.begin(WAVEFORM_SQUARE);
    }
    else if (isBetween(mapped, 2, 3))
    {
        synthOscA1.begin(WAVEFORM_TRIANGLE);
        synthOscB1.begin(WAVEFORM_SQUARE);
        synthOscA2.begin(WAVEFORM_TRIANGLE);
        synthOscB2.begin(WAVEFORM_SQUARE);
        synthOscA3.begin(WAVEFORM_TRIANGLE);
        synthOscB3.begin(WAVEFORM_SQUARE);
        synthOscA4.begin(WAVEFORM_TRIANGLE);
        synthOscB4.begin(WAVEFORM_SQUARE);
    }
    else if (isBetween(mapped, 3, 4))
    {
        synthOscA1.begin(WAVEFORM_SINE);
        synthOscB1.begin(WAVEFORM_SAWTOOTH_REVERSE);
        synthOscA2.begin(WAVEFORM_SINE);
        synthOscB2.begin(WAVEFORM_SAWTOOTH_REVERSE);
        synthOscA3.begin(WAVEFORM_SINE);
        synthOscB3.begin(WAVEFORM_SAWTOOTH_REVERSE);
        synthOscA4.begin(WAVEFORM_SINE);
        synthOscB4.begin(WAVEFORM_SAWTOOTH_REVERSE);
    }
    else if (isBetween(mapped, 5, 6))
    {
        synthOscA1.begin(WAVEFORM_SAWTOOTH_REVERSE);
        synthOscB1.begin(WAVEFORM_SQUARE);
        synthOscA2.begin(WAVEFORM_SAWTOOTH_REVERSE);
        synthOscB2.begin(WAVEFORM_SQUARE);
        synthOscA3.begin(WAVEFORM_SAWTOOTH_REVERSE);
        synthOscB3.begin(WAVEFORM_SQUARE);
        synthOscA4.begin(WAVEFORM_SAWTOOTH_REVERSE);
        synthOscB4.begin(WAVEFORM_SQUARE);
    }
    else if (isBetween(mapped, 6, 7))
    {
        synthOscA1.begin(WAVEFORM_SQUARE);
        synthOscB1.begin(WAVEFORM_SQUARE);
        synthOscA2.begin(WAVEFORM_SQUARE);
        synthOscB2.begin(WAVEFORM_SQUARE);
        synthOscA3.begin(WAVEFORM_SQUARE);
        synthOscB3.begin(WAVEFORM_SQUARE);
        synthOscA4.begin(WAVEFORM_SQUARE);
        synthOscB4.begin(WAVEFORM_SQUARE);
    }
    else if (isBetween(mapped, 7, 8))
    {
        synthOscA1.begin(WAVEFORM_SAWTOOTH_REVERSE);
        synthOscB1.begin(WAVEFORM_SAWTOOTH);
        synthOscA2.begin(WAVEFORM_SAWTOOTH_REVERSE);
        synthOscB2.begin(WAVEFORM_SAWTOOTH);
        synthOscA3.begin(WAVEFORM_SAWTOOTH_REVERSE);
        synthOscB3.begin(WAVEFORM_SAWTOOTH);
        synthOscA4.begin(WAVEFORM_SAWTOOTH_REVERSE);
        synthOscB4.begin(WAVEFORM_SAWTOOTH);
    }
}

void setParamB(int8_t input)
{
    float mapped = map_uint8_float(input, 0, 127, 0, 0.1);
    detuneB = mapped;
    globalDetuneDC.amplitude(detuneB);
}

void setFilterFreq(int8_t input)
{
    float mapped = map_uint8_float(input, 0, 127, 20, 8000);
    synthFilter1.frequency(mapped);
    synthFilter2.frequency(mapped);
    synthFilter3.frequency(mapped);
    synthFilter4.frequency(mapped);
}

void setFilterRes(int8_t input)
{
    float mapped = map_uint8_float(input, 0, 127, 0.7, 5);
    synthFilter1.resonance(mapped);
    synthFilter2.resonance(mapped);
    synthFilter3.resonance(mapped);
    synthFilter4.resonance(mapped);
}

// Second page
void setAtack(int8_t input)
{
    attack = map_uint8_float(input, 0, 127, 5, 3000);
    envAmpGenerator1.attack(attack);
    envAmpGenerator2.attack(attack);
    envAmpGenerator3.attack(attack);
    envAmpGenerator4.attack(attack);
}

void setDecay(int8_t input)
{
    decay = map_uint8_float(input, 0, 127, 5, 3000);
    envAmpGenerator1.decay(decay);
    envAmpGenerator2.decay(decay);
    envAmpGenerator3.decay(decay);
    envAmpGenerator4.decay(decay);
}

void setSustain(int8_t input)
{
    sustain = map_uint8_float(input, 0, 127, 0, 1);
    envAmpGenerator1.sustain(sustain);
    envAmpGenerator2.sustain(sustain);
    envAmpGenerator3.sustain(sustain);
    envAmpGenerator4.sustain(sustain);
}

void setRelease(int8_t input)
{
    release = map_uint8_float(input, 0, 127, 5, 3000);
    envAmpGenerator1.release(release);
    envAmpGenerator2.release(release);
    envAmpGenerator3.release(release);
    envAmpGenerator4.release(release);
}

// Third page
void setLFOLevel(int8_t input)
{
    float mapped = map_uint8_float(input, 0, 127, 0, 1);
}

void setLFOFreq(int8_t input)
{
    float mapped = map_uint8_float(input, 0, 127, 0, 1);
}

void setLFODestination(int8_t input)
{
    float mapped = map_uint8_float(input, 0, 127, 0, 1);
}

void setLFOShape(int8_t input)
{
    float mapped = map_uint8_float(input, 0, 127, 0, 1);
}

//Fourth page
void setFXSend(int8_t input)
{
    float mapped = map_uint8_float(input, 0, 127, 0, 1);
    reverbAmp.gain(mapped);
}

void setFXParam(int8_t input)
{
    float mapped = map_uint8_float(input, 0, 127, 0, 1);
    chorusAmp.gain(mapped);
}

void setStereoBalance(int8_t input)
{
}

void setLevel(int8_t input)
{
    // A typical place where clipping occurs is where two or more oscilators mix
    float mapped = map_uint8_float(input, 0, 127, 0, 1);
    for (int i = 0; i < 4; i++)
    {
        synthMixer1.gain(i, mapped);
        synthMixer2.gain(i, mapped);
        synthMixer3.gain(i, mapped);
        synthMixer4.gain(i, mapped);
    }
}

// Status report
void reportDSPUsage()
{
    if (serialDebug)
    {
        Serial.print("mem: ");
        Serial.print(AudioMemoryUsageMax());
        Serial.print(", cpu: ");
        Serial.println(AudioProcessorUsageMax());
    }
}
