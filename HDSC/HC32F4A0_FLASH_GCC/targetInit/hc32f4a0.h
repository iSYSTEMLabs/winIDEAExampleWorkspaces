#include "hc32f4a0_sfr.h"

#define SCB_VTOR (*(volatile unsigned int *)0xE000ED08)

// PWC

#define WRITE_ENABLE_MASK         (0xA5 << 8)

// CMU

#define CMU_PLLHCFGR_PLLSRC_XTAL  0
#define CMU_PLLHCFGR_PLLSRC_HRC   1

#define CMU_CKSWR_SW_PLLH         0b101

#define CMU_MCOSEL_SYSCLK         0b1011

void enterAndExitStopMode(void);
#define memW32(address) (*(unsigned long*)(address))
#define memW16(address) (*(unsigned short*)(address))
#define memW8(address) (*(unsigned char*)(address))
#define ITM_BASE_ADDRESS (0xE0000000UL)
#define ITM_LOCK_ACCESS_REGISTER (ITM_BASE_ADDRESS + 0x0FB0UL)
#define ITM_TRACE_ENABLE_REGISTER (ITM_BASE_ADDRESS + 0x0E00UL)
#define ITM_TRACE_PRIVILEGE_REGISTER (ITM_BASE_ADDRESS + 0x0E40UL)