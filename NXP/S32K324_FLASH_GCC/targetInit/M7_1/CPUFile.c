#include "S32K324.h"

void disableWatchdog()
{
}

void profilerAddTestMessages(void)
{
  while(memW32(ITM_BASE_ADDRESS)==0);
  memW32(ITM_BASE_ADDRESS) = 0x12345678; //rt ProfilerITMOTM: id=data1value1, symbol=0, value=0x12345678
  while(memW32(ITM_BASE_ADDRESS)==0);
  memW16(ITM_BASE_ADDRESS) = 0xABCD; //rt ProfilerITMOTM: id=data1value2, symbol=0, value=0xABCD
  while(memW32(ITM_BASE_ADDRESS)==0);
  memW8(ITM_BASE_ADDRESS) = 0xEF; //rt ProfilerITMOTM: id=data1value3, symbol=0, value=0xEF
  while(memW32(ITM_BASE_ADDRESS)==0);
}

void initGPIO()
{
}

/*
   Toggle GPIO port
*/
void GPIOPinToggle()
{
}

void initClock()
{

}

void triggerHardwareProcess()
{
  /*Executes the changes made to MC_ME registers*/
  MC_ME.CTL_KEY.R = 0x00005AF0;
  MC_ME.CTL_KEY.R = 0x0000A50F;
}

void enableSecondaryCore()
{
  /*Select the start address for core 1*/
  MC_ME.PRTN0_CORE1_ADDR.B.ADDR = CM7_1_START_ADDRESS;
  
  /*Enable Core1*/
  PRTN0_CORE1_PCONF2 = 1;
  PRTN0_CORE1_PUPD2 = 1;
//   MC_ME.PRTN0_CORE1_PCONF.B.CCE = 0x01;
//   MC_ME.PRTN0_CORE1_PUPD.B.CCUPD = 0x01;
  
  triggerHardwareProcess();
  
}

void targetInit(void)
{
  enableSecondaryCore();
}

void targetEnableInterrupts()
{ 
}

void targetDisableInterrupts()
{
}