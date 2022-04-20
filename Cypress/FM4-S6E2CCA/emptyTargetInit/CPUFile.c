#include "fm4.h"


//rt FunctionMinGrossTime: toleranceInPercent = 1
//rt FunctionMaxGrossTime: toleranceInPercent = 1
//rt FunctionMinNetTime: toleranceInPercent = 1 
//rt FunctionMaxNetTime: toleranceInPercent = 1

char GpioOffOn = 0;

  //rt TimerInterrupt: profilerFunctionName=ProfilerC_Interrupt, timeoutMSec=1.07, maxDeltaPeriodPct=5
  //rt DaqTimerInterrupt: daqItem=daqInterruptCounter, periodInMicroSeconds=54000, maxDeltaPeriodInPercents=6

void clockInit()
{
  APBC0_PSR = 0x0;
  APBC1_PSR = 0x80;
  APBC2_PSR = 0x80;
  MCR_FTRM = 0x1EF; 
  SWC_PSR = 0x03;
  CSW_TMR = 0x5C;
  PSW_TMR = 0x10;
  PLL_CTL2 = 0x13;
  RST_STR = 0x0002;
  SCM_CTL = 0x50;
  while (!(SCM_STR & 0x50));  
}

void CPU_Init()
{
  #define FM3_REG_WDGLDR    (*((volatile int *)  0x40011000))
  #define FM3_REG_WDGCTL    (*((volatile char *) 0x40011008))
  #define FM3_REG_WDGLCK    (*((volatile int *)  0x40011C00))
    
  FM3_REG_WDGLCK = 0x1ACCE551;
  FM3_REG_WDGLCK = 0xE5331AAE;
  FM3_REG_WDGCTL = 0; // Disable hardware WD timer
}

void ITMInit(void)
{
  memW32(ITM_LOCK_ACCESS_REGISTER) = 0xC5ACCE55; //unlock write access to ITM
  memW32(ITM_TRACE_ENABLE_REGISTER) = 0xFFFFFFFF; //enable stimulus port 0-31 
  memW32(ITM_TRACE_PRIVILEGE_REGISTER) = 0x1; //set privilege
}

void profilerAddTestMessages(void)
{
  memW32(ITM_BASE_ADDRESS) = 0xDD; //rt ProfilerITMOTM: id=data1value1, symbol=0, value=0xDD
  memW32(ITM_BASE_ADDRESS) = 0x12; //rt ProfilerITMOTM: id=data1value2, symbol=0, value=0x12
  memW32(ITM_BASE_ADDRESS) = 0xFF; //rt ProfilerITMOTM: id=data1value3, symbol=0, value=0xFF
}

void gpioInit()
{
  //configure port 6 pin 0 as gpio output
  PFR6 = 0x00; //set to use as gpio
  PCR6 = 0x01; //disconnect pullup
  DDR6 = 0x01; //set as output
}

void sysTickInit()
{
  SYST_CSR = 0x03;
  SYST_RVR = 0x2700; // set timer to 1.00ms  
}

void targetInit()
{
  CPU_Init();
  clockInit();    
  ITMInit();
  gpioInit();
}

void targetEnableInterrupts()
{ 
  sysTickInit();
  __asm volatile ("cpsie i");
}

void targetDisableInterrupts()
{
  __asm volatile ("cpsid i");
}


void GPIOPinToggle()
{
  GpioOffOn = !GpioOffOn;
  if (GpioOffOn)
  { 
    PDOR6 = 0x01; //toggle pin P60
  }
  else
  {
    PDOR6 = 0x00; //toggle pin P60
  }
}

void disableWatchdog()
{
}
