#include "S32R294_sfr.h"

#define SWTSR_0 (*(unsigned volatile long *)0xFC050010)
#define SWTCR_0 (*(unsigned volatile long *)0xFC050000)

#define CORE0BOOTADDR 0x01012001
#define CORE1BOOTADDR 0x01022001

//rt TimerInterrupt: profilerFunctionName=ProfilerC_Interrupt, timeoutMSec=1.00, maxDeltaPeriodPct=5
//rt DaqTimerInterrupt: daqItem=daqInterruptCounter, periodInMicroSeconds=50000, maxDeltaPeriodInPercents=4 

//rt FunctionMinGrossTime: toleranceInPercent = 2
//rt FunctionMaxGrossTime: toleranceInPercent = 2
//rt FunctionMaxNetTime: toleranceInPercent = 2
//rt FunctionMinNetTime: toleranceInPercent = 2

void GPIOPinToggle()
{
}

void profilerAddTestMessages()
{
  asm("e_li r10,2");
  asm("mtspr PID0,r10"); //rt ProfilerITMOTM: id=data1value1, symbol=OTM, value=0x02
  asm("e_li r10,3");
  asm("mtspr PID0,r10"); //rt ProfilerITMOTM: id=data1value2, symbol=OTM, value=0x03
  asm("e_li r10,4");
  asm("mtspr PID0,r10"); //rt ProfilerITMOTM: id=data1value3, symbol=OTM, value=0x04
  
  #define DEVENT 975
  #define DAMM 576  
  asm("e_lis r10, 0x0");    
  asm("mtspr 975,r10"); //Set DQTAG to 0
  asm("e_li r10,3");
  asm("mtspr 576,r10"); //rt ProfilerITMOTM: id=data1value4, symbol=DQM(0), value=0x03
  asm("e_li r10,4");
  asm("mtspr 576,r10"); //rt ProfilerITMOTM: id=data1value5, symbol=DQM(0), value=0x04
  asm("e_lis r6, 0x8765");
  asm("e_li r7, 0x4321");
  asm("se_or r6,r7");
  asm("mtspr 576,r6"); //rt ProfilerITMOTM: id=data1value6, symbol=DQM(0), value=0x87654321
  
  asm("e_lis r10, 0x1200");    
  asm("mtspr 975,r10"); //Set DQTAG to 18
  asm("e_li r10,1");
  asm("mtspr 576,r10"); //rt ProfilerITMOTM: id=data1value7, symbol=DQM(18), value=0x01
  asm("e_li r10,2");
  asm("mtspr 576,r10"); //rt ProfilerITMOTM: id=data1value8, symbol=DQM(18), value=0x02
  asm("e_lis r6, 0x1234");
  asm("e_li r7, 0x5678");
  asm("se_or r6,r7");
  asm("mtspr 576,r6"); //rt ProfilerITMOTM: id=data1value9, symbol=DQM(18), value=0x12345678
}

void targetEnableInterrupts(void)
{
}

void targetDisableInterrupts(void)
{
}

void setupInterrupts()
{
}

void setupTimer()
{
}

void setupGPIO()
{
}

void enableSecondaryCores()
{
  MC_RGM.DES.R = 0xFFFF;
  MC_RGM.FES.R = 0xFFFF;
  MC_ME.ME.R = 0x000005FF;
  
  /* Trigger DRUN mode Transision */
  MC_ME.MCTL.R = 0x30005AF0;                /* Mode & Key */
  MC_ME.MCTL.R = 0x3000A50F;                /* Mode & Key inverted */
  while(MC_ME.GS.B.S_MTRANS == 1);          /* Wait for mode entry to complete */
  while(MC_ME.GS.B.S_CURRENT_MODE != 0x3);  /* Check DRUN mode has been entered */
  
  MC_ME.CCTL1.R = 0x00FE; /* enable Z4 all modes  */
  MC_ME.CCTL2.R = 0x00FE; /* enable Z7A all modes */ 
  MC_ME.CCTL3.R = 0x00FE; /* enable Z7B all modes */
  
  MC_ME.CADDR2.R = CORE0BOOTADDR; /* Set Start address for Z7A */
  MC_ME.CADDR3.R = CORE1BOOTADDR; /* Set Start address for Z7B */
  
  /* RE enter the drun mode, to update the configuration */
  MC_ME.MCTL.R = 0x30005AF0;  /* Mode & Key */
  MC_ME.MCTL.R = 0x3000A50F;  /* Mode & Key inverted */
  
  while(MC_ME.GS.B.S_MTRANS == 1);               /* Wait for mode entry to complete */
  while(MC_ME.GS.B.S_CURRENT_MODE != 0x3);       /* Check DRUN mode has been entered */  
}

void targetInit(void)
{
  enableSecondaryCores();
}

void disableWatchdog()
{
  SWTSR_0 = 0xc520;
  SWTSR_0 = 0xd928;
  SWTCR_0 = 0xFF00010A;
}

void TimerInterruptHandler()
{
  InterruptRoutine();
}