#include "mpc563m.h"


#define meml(addr) (*(unsigned long volatile *)(addr))
#define SWT_SR 0xfff38010
#define SWT_CR 0xfff38000     
#define SSCM_DPM_BOOT 0xC3FD8018
#define SSCM_DPM_KEY  0xC3FD801C

extern const uint32_t ISRVectorTable[];
extern int iCounter;
extern int isInterruptsEnabled;
extern int isDebugTest;
extern int isITest;
extern int isProfilerTest;
extern int isCoverageTest;
extern int g_ProfilerLoopCount;

unsigned int pit1Cnt = 0;

char neverTrueFlag = 0;
void enableSecondCore();

///////////////////////////////////////////////////////////////////////////////
void InitializeModesAndClock(void)
{
  // add clock configuration      
}


///////////////////////////////////////////////////////////////////////////////
void InitializeSWIRQ4(void) 
{
  //Software interrupt 4 IRQ priority = 2
  INTC.PSR[4].R = 2;		
}

///////////////////////////////////////////////////////////////////////////////
void EnableIRQ()
{
  //ensure INTC's current priority is 0
  INTC.CPR.B.PRI = 0;                            
  //enable external interrupts
  asm(" wrteei 1");                              
}

///////////////////////////////////////////////////////////////////////////////
void DisableIRQ()
{
  //ensure INTC's current priority is 0
  INTC.CPR.B.PRI = 0;                            
  //disable external interrupts
  asm(" wrteei 0");                              
}


///////////////////////////////////////////////////////////////////////////////
void targetInit(void)
{
  #ifndef EMPTY_TARGET_INIT

  /*InitializeModesAndClock();
  InitializeSWIRQ4();

  //initialize GPIO as output
  SIU.PCR[3].R= 0x0303;
  SIU.PCR[53].R= 0x0303; */  

  #endif /* EMPTY_TARGET_INIT */
}


///////////////////////////////////////////////////////////////////////////////
void targetEnableInterrupts()
{
  //ProfilerC_Interrupt();  // dummy call because interrupts are not implemented
  EnableIRQ();
}


///////////////////////////////////////////////////////////////////////////////


void disableWatchdog()
{
  meml(SWT_SR)=0xc520;
  meml(SWT_SR)=0xd928;
  meml(SWT_CR)=0x8000010A;
}
