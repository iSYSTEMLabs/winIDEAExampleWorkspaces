#include "GD32F450.h"


void initClock()
{
  // Enable XTAL and clock monitor (switches to internal 16MHz clock automatically if detects issues with XTAL)
  RCU_CTL |= (1 << RCU_CTL_HXTALEN);
  while(!(RCU_CTL & RCU_CTL_XTALSTB));
  
  // Making sure that reserved bits are kept the same
  unsigned long tmp = RCU_PLL & 0x20000000;
  
  // fXTAL is 25MHz and we want fCPU to be 200MHz, so we have to multiply it by 8
  // fCPU = fXTAL * N/(P*PSC) = 8fXTAL -> N = 4(P*PSC)
  tmp |= (0xF << RCU_PLLQ)  | // Q is divider for USB, TRNG, SDIO, so we just max it to be safe
         (1 << RCU_PLLSEL)  | // Select XTAL as input clock to PLL
         (1 << RCU_PLLP)    | // P = 4
         (160 << RCU_PLLN)  | // N = 8(P*PSC) = 8*20 = 160
         (5 << RCU_PLLPSC);   // PSC = 5
  RCU_PLL = tmp;
  RCU_CTL |= (1 << RCU_CTL_PLLEN);
  while(!(RCU_CTL & (1 << RCU_CTL_PLLSTB)));
  
  // Switch system clock to PLL and wait until switch
  RCU_CFG0 = (0b10 << RCU_CFG0_SCS);
  while((RCU_CFG0 & (0b11 << RCU_CFG0_SCSS)) != (0b10 << RCU_CFG0_SCSS));
}


void initTimer()
{
  SYSTICK_RVR = 200000; // 200k/200MHz = 1ms
  SYSTICK_CVR = 0;
  SYSTICK_CSR = (1 << SYSTICK_CSR_ENABLE) |
                (1 << SYSTICK_CSR_TICKINT) |
                (1 << SYSTICK_CSR_CLKSOURCE);
}

void targetEnableInterrupts()
{
  __asm volatile ("cpsie i");
}


void targetInit()
{
  #ifndef EMPTY_TARGET_INIT

  initClock();
  initTimer();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}


void disableWatchdog()
{
  
}

int blink = 0;
