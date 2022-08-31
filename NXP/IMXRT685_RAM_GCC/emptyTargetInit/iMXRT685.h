#include "iMXRT685_sfr.h"

#define SYSPLLCLKSEL_SFRO           0
#define SYSPLLCLKSEL_CLK_IN         1
#define SYSPLLCLKSEL_4860M_IRC      2

#define NVIC_SRC_CTIMER0            10

#define ITM_BASE_ADDRESS (0xE0000000UL)
#define memW32(address) (*(unsigned long*)(address))
#define memW16(address) (*(unsigned short*)(address))
#define memW8(address) (*(unsigned char*)(address))

#define ITM_LOCK_ACCESS_REGISTER (ITM_BASE_ADDRESS + 0x0FB0UL)
#define ITM_TRACE_ENABLE_REGISTER (ITM_BASE_ADDRESS + 0x0E00UL)
#define ITM_TRACE_PRIVILEGE_REGISTER (ITM_BASE_ADDRESS + 0x0E40UL)
