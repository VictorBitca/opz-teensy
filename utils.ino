#include "Arduino.h"

bool isBetween(float in, float lower, float upper) {
    if (in < upper && in >= lower) {
        return true; 
    }
    return false;
}

uint8_t map_uint8(uint8_t x, uint8_t in_min, uint8_t in_max, uint8_t out_min, uint8_t out_max)
{
    return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}

float map_uint8_float(uint8_t x, uint8_t in_min, uint8_t in_max, float out_min, float out_max)
{
    return ((float)(x - in_min)) * (out_max - out_min) / ((float)(in_max - in_min)) + out_min;
}

float map_float(float x, float in_min, float in_max, float out_min, float out_max)
{
    return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}

float midicps(float note)
{
    return (float)440. * pow((float)2., (note - (float)69.) * (float)0.083333333333);
}

