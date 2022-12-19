#include "S32K396.h"

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

void triggerHardwareProcess()
{
  /*Executes the changes made to MC_ME registers*/
  CTRL_KEY = 0x0000A50F;
  CTRL_KEY = 0x00005AF0;
  
  
}

void enableSecondaryCore()
{
  /*Select the start address for core 1*/
  //PRTN0_CORE1_PCONF = 1;
  //PRTN0_CORE1_PUPD = 1;
  //triggerHardwareProcess();
  
  /*Select the start address for core 2*/
  
  //PRTN0_CORE4_PCONF = 1;
  //PRTN0_CORE4_PUPD = 1;
  //triggerHardwareProcess();
  //while(PRTN0_CORE4_PUPD != 0){}
  //while(PRTN0_CORE4_STAT != 1){}
}


void targetInit(void)
{
  #ifndef EMPTY_TARGET_INIT

  initClock();
  enableSecondaryCore();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}
