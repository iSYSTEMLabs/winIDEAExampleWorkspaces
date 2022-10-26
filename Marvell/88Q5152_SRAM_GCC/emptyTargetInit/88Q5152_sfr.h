#include <stdint.h>

struct VFP_Byte_registers_tag
{
  uint8_t B0;
  uint8_t B1;
  uint8_t B2;
  uint8_t B3;
  uint8_t B4;
  uint8_t B5;
  uint8_t B6;
  uint8_t B7;
  uint8_t B8;
  uint8_t B9;
  uint8_t B10;
  uint8_t B11;
  uint8_t B12;
  uint8_t B13;
  uint8_t B14;
  uint8_t B15;
  uint8_t B16;
  uint8_t B17;
  uint8_t B18;
  uint8_t B19;
  uint8_t B20;
  uint8_t B21;
  uint8_t B22;
  uint8_t B23;
  uint8_t B24;
  uint8_t B25;
  uint8_t B26;
  uint8_t B27;
  uint8_t B28;
  uint8_t B29;
  uint8_t B30;
  uint8_t B31;
};

#define VFP_Byte_registers (*(volatile struct VFP_Byte_registers_tag *) 0x0)

