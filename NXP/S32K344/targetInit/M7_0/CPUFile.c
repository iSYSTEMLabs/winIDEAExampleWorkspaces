#include "S32K344.h"
#include "DMA.h"


void disableWatchdog()
{
}


void initPIT()
{
  /*PIT2 Timer 0*/
  PIT_2_MCR = 0x00;
  /*Setup timer for 1 ms interrupt*/
  PIT_2_LDVAL0 = 0x8235;
  /*Enable the timer*/
  PIT_2_TCTRL0 |= (1 << 0);
}


void initClock()
{ 
  /*Enable clock for PLL*/
  PRTN1_COFB1_CLKEN = 0x9DFEAFFF;
  PRTN0_COFB1_CLKEN |= (1 << 13); 
  
  MC_ME_PRTN1_COFB0_CLKEN_REG_ADR = MC_ME_PRTN1_COFB0_CLKEN_ALL_ON;
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
  
  // Max freq allowed 160 MHz 
  /* Disable PLL divider*/
  PLLODIV_0 &= ~(1 << 31);
  PLLODIV_1 &= ~(1 << 31);
  /*Disabling PLL before configuration*/
  PLLCR |= (1 << 31);
  /*Output frequency divider for raw PLL clock*/
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
  
  /*Set divider for system clock to 1*/
  MUX_0_DC_0 &= ~(0b000 << 16);
  /*Set divider for medium-speed peripheral clock to 2*/
  MUX_0_DC_1 |= (1 << 16);
  /*Set divider for slow-speed peripheral clock to 4*/
  MUX_0_DC_2 &= ~(0b000 << 16);
  MUX_0_DC_2 |= (0b011 << 16);
  /*Set divider for trace*/
  MUX_11_DC_0 |= (1 << 17) | (1 << 16); 
  /*Set divider for HSE clock*/
  MUX_0_DC_3 |= (1 << 16);
  /*Set divider for DCM clock*/
  MUX_0_DC_4 |= (0b011 << 16);
  /*Set divider for LBIST clock*/
  MUX_0_DC_5 |= (0b011 << 16);
  /*Set divider for QSPI clock*/
  MUX_0_DC_6 &= ~(0b000 << 16);
  
  
  /*Immediate divider update*/
  MUX_0_DIV_TRIG_CTRL = 0x80000001;
  
  /*Writing any value to this register provides triger to the dividers*/
  MUX_0_DIV_TRIG = 0xFFFFFFFF;

  /*Select PLL as clock source for qspi*/
  MUX_10_CSC &= ~(0x0f << 24);
  MUX_10_CSC |= (0b1001 << 24);
  /*Select PLL as clock source trace*/
  MUX_11_CSC &= ~(0x0f << 24);
  MUX_11_CSC |= (0b1001 << 24);
  /*Select PLL as clock source for system clock*/
  MUX_0_CSC &= ~(0x0f << 24);
  MUX_0_CSC |= (0b1000 << 24);
 
  /*Create system clock switch request*/
  MUX_0_CSC &= ~(0x0 << 0);
  MUX_0_CSC |= (0x4);
  
  /*Check if clock switch was requested*/
  while((MUX_0_CSS & (1 << 2)) == 0);
  /*Check if clock switching is in progress*/
  while((MUX_0_CSS & (1 << 16)) != 0);
  
}

void targetEnableInterrupts()
{ 
  /*Clear interrupt flag*/
  PIT_2_TFLG0 = 0x01;
  /*Enable interrupts*/
  PIT_2_TCTRL0 |= (1 << 1);
  /*Clear interrupt flag*/
  PIT_2_TFLG0 = 0x01;
  NVIC_ISER3 |= (1 << 2); 
  
}


void targetInit(void)
{
  #ifndef EMPTY_TARGET_INIT

  initClock();
  initPIT();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}


void TimerInterruptHandler(void)
{
  /*Clear interrupt flag*/
  PIT_2_TFLG0 = 0x01;
  InterruptRoutine();
}
