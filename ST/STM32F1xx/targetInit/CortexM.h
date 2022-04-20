#ifndef __CortexM3_STM32_h__
#define __CortexM3_STM32_h__
#include "stm32f10x_conf.h"
#include "FWLib\library\inc\stm32f10x_systick.h"
#include "FWLib\library\inc\stm32f10x_nvic.h"
#include "FWLib\library\inc\stm32f10x_gpio.h"
#include "FWLib\library\inc\stm32f10x_rcc.h"
#include "FWLib\library\inc\stm32f10x_tim.h"

#define FLASH_LATENCY_CYCLE_2 (u32)0x02

#define memW32(address) (*(unsigned long*)(address))
#define memW16(address) (*(unsigned short*)(address))
#define memW8(address) (*(unsigned char*)(address))
#define ITM_BASE_ADDRESS (0xE0000000UL)
#define ITM_LOCK_ACCESS_REGISTER (ITM_BASE_ADDRESS + 0x0FB0UL)
#define ITM_TRACE_ENABLE_REGISTER (ITM_BASE_ADDRESS + 0x0E00UL)
#define ITM_TRACE_PRIVILEGE_REGISTER (ITM_BASE_ADDRESS + 0x0E40UL)

#endif
