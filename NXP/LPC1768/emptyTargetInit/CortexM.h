#ifndef __CortexM3_LPC17xx_h__
#define __CortexM3_LPC17xx_h__
#include "lpc17xx_systick.h"
#include "lpc17xx_gpio.h"

#define TIM2  0x000
#define TIM_IT_Update 0x000 

#define memW32(address) (*(unsigned long*)(address))
#define ITM_BASE_ADDRESS (0xE0000000UL)
#define ITM_LOCK_ACCESS_REGISTER (ITM_BASE_ADDRESS + 0x0FB0UL)
#define ITM_TRACE_ENABLE_REGISTER (ITM_BASE_ADDRESS + 0x0E00UL)
#define ITM_TRACE_PRIVILEGE_REGISTER (ITM_BASE_ADDRESS + 0x0E40UL)

#endif
