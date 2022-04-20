#include "IMXRT1015.h"
#include "IMXRT1015_sfr.h"
#include "main.h"

extern void InterruptRoutine(void);

void disableWatchdog(void) 
{
  SRC_SCR = 0x50480520; // Mask RTWDOG (Watchdog 3) to prevent reset - RM page 861
}


void initClock(void)
{
  // Enable external 24M oscillator
  XTALOSC24M_MISC0 |= (1 << 16);  // Enable XTALOSC24M stability detection
  while(!(XTALOSC24M_MISC0 |= (1 << 15)));  // Wait until XTALOSC24M is stable
  
  CCM_CBCMR |= (1 << 12);  // PERIPH_CLK2_SEL to OSC24M
  
  CCM_CBCDR |= (1 << 25); // Select PERIPH_CLK_SEL to PERIPH_CLK2
  while(CCM_CDHIPR & (1 << CCM_CDHIPR_PERIPH_CLK_SEL_BUSY)); // Wait until handshake is in progress
  while(CCM_CDHIPR & (1 << CCM_CDHIPR_PERIPH2_CLK_SEL_BUSY)); // Wait until handshake is in progress
  
  // System clock is now external oscillator
  
  DCDC_REG3 |= (0x1F << 0);  // VCC_SOC to 1.575V 

  // PLL 6 (ENET_PLL - 500MHz)
  CCM_ANALOG_PLL_ENET |= (1 << 22); // Enable ENET_500M_REF_EN
  CCM_ANALOG_PLL_ENET &= ~(1 << 12); // Disable POWERDOWN mode of PLL 6 (Power ON)
  while(!(CCM_ANALOG_PLL_ENET & (1 << 31))); // Wait until PLL 6 is locked
  CCM_ANALOG_PLL_ENET &= ~(1 << 16);  // Stop PLL 6 bypass mode
  
  CCM_CBCDR |= (3 << 8); // Prescale IPG clock by 4 (limited to 150MHz)
  
  CCM_CBCMR |= (3 << 18); // Switch PRE_PERIPH_CLK_SEL to PLL6
  
  CCM_CBCDR &= ~(1 << 25); // Select PERIPH_CLK_SEL to PRE_PERIPH_CLK_SEL
  while(CCM_CDHIPR & (1 << CCM_CDHIPR_PERIPH_CLK_SEL_BUSY)); // Wait until handshake is in progress
  while(CCM_CDHIPR & (1 << CCM_CDHIPR_PERIPH2_CLK_SEL_BUSY)); // Wait until handshake is in progress
}


void TimerInterruptHandler()
{
  PIT_TFLG0 |= (1 << 0);  // Clear interrupt flag
  InterruptRoutine();
}

void initTimer(void)
{
  CCM_CCGR1 = (3 << 12); // Enable PIT clock

  // PIT Timer 1
  PIT_TCTRL0 = (1 << 1); // Enable Timer 1 interrupts 
  PIT_LDVAL0 = 125000; // Setup timer 1 for 125000 cycles ((125MHz clock) / 125000 = 1.004ms)
  
  PIT_TFLG0 |= (1 << 0);  // Clear interrupt flag
  System_Control_Space_NVIC.INT_96_127_SET_EN |= (1 << 26); // Unmask PIT Timer IRQ
}

void targetEnableInterrupts(void)
{
  __asm("CPSIE I");
  
  PIT_TCTRL0 |= (1 << 0); // Start Timer 1  
}


void targetInit(void)
{
  #ifndef EMPTY_TARGET_INIT

  initClock();
  initTimer();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}
