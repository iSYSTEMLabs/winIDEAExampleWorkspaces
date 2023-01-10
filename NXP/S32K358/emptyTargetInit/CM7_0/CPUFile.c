#include "S32K358.h"

void disableWatchdog()
{
}


void initClock()
{  
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
}


void targetInit(void)
{
  #ifndef EMPTY_TARGET_INIT

  initClock();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}
