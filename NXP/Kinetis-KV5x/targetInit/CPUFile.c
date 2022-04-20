#include "Kinetis-KV5x.h"


void ITMInit(void)
{
  ITM_LAR = 0xC5ACCE55; //unlock write access to ITM
  ITM_TER = 0xFFFFFFFF; //enable stimulus port 0-31
  ITM_TPR = 0x1; //set privilege    
}    

void targetEnableInterrupts(void)
{
  INT_32_63_SET_EN |= (0x1 << INT_32_63_SET_EN_PIT0);
  asm("CPSIE i");
  PIT_TCTRL0 |= (0x1 << PIT_TCTRL0_TIE);
  PIT_TCTRL0 |= (0x1 << PIT_TCTRL0_TEN);
}


/*
  Init clock to 220 MHz using 50 MHz ext. oscillator and PLL
*/
void initClock()
{
  OSC_CR |= (1 << OSC_CR_ERCLKEN);
  MCG_C2 |= (0x2 << MCG_C2_RANGE);
  MCG_C2 |= (0x1 << MCG_C2_HGO);
  MCG_C2 |= (0x1 << MCG_C2_EREFS);
  while (!(MCG_S & (1 << MCG_S_OSCINIT0)));
  
  //set up dividers         
  SIM_CLKDIV1 = 0x01730000;
                                  
  MCG_C1 |= (0x1 << MCG_C1_IREFS);
  MCG_C6 |= (0x6 << MCG_C6_VDIV);
  MCG_C5 |= (0x4 << MCG_C5_PRDIV);
  MCG_C5 |= (0x1 << MCG_C5_PLLCLKEN0);
  
  while (!(MCG_S & (1 << MCG_S_LOCK0)));
  
  MCG_C6 |= (0x1 << MCG_C6_PLLS); 
}  


/*
  Init PIT timer, it is running on 27.5 MHz Bus clock   
*/
void initTimer()
{
  SIM_SCGC6 |= (0x1 << SIM_SCGC6_PIT);
  PIT_MCR &= ~(0x1 << PIT_MCR_MDIS);
  PIT_LDVAL0 = 0x6B6C;                
}

void targetInit(void)
{
  #ifndef EMPTY_TARGET_INIT

  initClock();
  initTimer();
  //ITMInit();                
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}

void disableWatchdog()
{
}
