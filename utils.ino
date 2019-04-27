uint8_t map(uint8_t x, uint8_t in_min, uint8_t in_max, uint8_t out_min, uint8_t out_max)
{
 return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}

uint8_t getChannel(uint8_t value) {
  uint8_t mask = 0x0f;   // 00001111
  return mask & value;
}