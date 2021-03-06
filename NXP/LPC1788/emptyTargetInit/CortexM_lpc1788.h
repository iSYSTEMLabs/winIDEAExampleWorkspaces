#ifndef __lpc1788_h__
#define __lpc1788_h__
 

#define ITM_BASE_ADDRESS (0xE0000000UL)
#define ITM_LOCK_ACCESS_REGISTER (ITM_BASE_ADDRESS + 0x0FB0UL)
#define ITM_TRACE_ENABLE_REGISTER (ITM_BASE_ADDRESS + 0x0E00UL)
#define ITM_TRACE_PRIVILEGE_REGISTER (ITM_BASE_ADDRESS + 0x0E40UL)

#define CLKSRCSEL 0x400FC10C
#define CCLKSEL 0x400FC104

#define PLL0CON 0x400FC080
#define PLL0CFG 0x400FC084
#define PLL0STAT 0x400FC088
#define PLL0FEED 0x400FC08C

#define SYSTIMER_LOAD 0xE000E014
#define SYSTIMER_CTRL 0xE000E010

#define PCLKSEL 0x400FC1A8

#define PINSEL10 0x4002C028

#define SYSTICK_CTRL 0xE000E010
#define SYSTICK_LOAD 0xE000E014
#define SYSTICK_VAL 0xE000E018
#define SYSTICK_CALIB 0xE000E01C

#define FIO1_DIR 0x20098020
#define FIO1_PIN 0x20098034

#define MEMWR32(adr,val) *((unsigned long*)adr) = val;
#define MEMRD32(adr) *((unsigned long*)adr)

void initCPU(void);
void initClock(void);

void initSysTick(void);

#endif
