#include "S32K358.h"

void disableWatchdog()
{
}


void initClock()
{  
  PRTN1_COFB1_CLKEN = 0x9DFEAFFF;
  PRTN0_COFB1_CLKEN |= (1 << 13); 
  
  MC_ME_PRTN1_COFB0_CLKEN_REG_ADR = MC_ME_PRTN1_COFB0_CLKEN_ALL_ON;
  MC_ME_PRTN1_COFB1_CLKEN_REG_ADR = MC_ME_PRTN1_COFB1_CLKEN_ALL_ON;
  MC_ME_PRTN1_COFB2_CLKEN_REG_ADR = MC_ME_PRTN1_COFB2_CLKEN_ALL_ON;
  MC_ME_PRTN1_COFB3_CLKEN_REG_ADR = MC_ME_PRTN1_COFB3_CLKEN_ALL_ON;
  /*Trigger hardware process*/
  PRTN1_PUPD = 0x01;
  
  /*Commit transaction*/
  CTL_KEY = 0x00005AF0;
  CTL_KEY = 0x0000A50F;
  
  /*Disable osc. bypass.*/
  FXOSC_CTRL &= ~(0x01 << 31);
  /*Enable crystal mode.*/
  FXOSC_CTRL |= (0x01 << 24);
  /*Enable the osc.*/
  FXOSC_CTRL |= (0x01 << 0);
  /*Wait until clock stable.*/
  while(!FXOSC_STAT);
  
  PLLODIV_0 &= ~(1 << 31);
  PLLODIV_1 &= ~(1 << 31);
  PLLCR |= (1 << 31);
  
  PLLDV &= ~(1 << 27);
  PLLODIV_0 |= (1 << 17);
  PLLODIV_1 |= (1 << 17);
  
  /*Enable PLL divider*/
  PLLODIV_0 |= (1 << 31);
  PLLODIV_1 |= (1 << 31);
  /*Enable PLL back*/
  PLLCR = 0x00;
  /*Wait until PLL lock*/
  while((PLLSR & (1 << 2)) == 0);
  
  /*Set PLL as clock*/
  
  MUX_10_CSC &= ~(0x0f << 24);
  MUX_10_CSC |= ~(0b1001 << 24);
  
  MUX_11_CSC &= ~(0x0f << 24);
  MUX_11_CSC |= (0b1001 << 24);
  
  MUX_0_CSC &= ~(0x0f << 24);
  MUX_0_CSC |= (0b1000 << 24);
  
  MUX_6_CSC &= ~(0x0f << 24);
  MUX_6_CSC |= (0b1000 << 24);
  
  MUX_0_CSC &= ~(0x0 << 0);
  MUX_0_CSC |= (0x4);
  
  while((MUX_0_CSS & (1 << 2)) == 0);
  while((MUX_0_CSS & (1 << 16)) != 0);
  
}

void initTimer(void)
{
  PIT_2_MCR = 0x00;
  
  PIT_2_LDVAL1 = 0x1046A;
  
  PIT_2_TCTRL1 |= 1 << 0; 
  
}

void targetEnableInterrupts()
{
  PIT_2_TFLG1 = 0x01;
  PIT_2_TCTRL1 |= 1 << 1;
  PIT_2_TFLG1 = 0x01;
  NVIC_ISER3 |= (1 << 2);
}


void targetInit(void)
{
  #ifndef EMPTY_TARGET_INIT

  initClock();
  initTimer();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}
