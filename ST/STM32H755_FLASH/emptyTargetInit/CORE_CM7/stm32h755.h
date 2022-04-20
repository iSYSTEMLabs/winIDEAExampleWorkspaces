#include "stm32h7xx.h"
#define memW32(address) (*(unsigned long*)(address))
#define memW16(address) (*(unsigned short*)(address))
#define memW8(address) (*(unsigned char*)(address))
#define ITM_BASE_ADDRESS (0xE0000000UL)
#define PWR_REGULATOR_VOLTAGE_SCALE1 (PWR_D3CR_VOS_1|PWR_D3CR_VOS_0)