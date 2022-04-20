#include "HVC4420F.h"

extern unsigned long _estack;
extern unsigned long _etext;
extern unsigned long _sdata;
extern unsigned long _edata; 
extern unsigned long _sbss;
extern unsigned long _ebss; 
extern int main(void);


void reset()
{

  unsigned long *pdwSource = &_etext; 
  unsigned long *pdwDest = &_sdata;
  unsigned long *pdwEnd = &_edata;
  unsigned long *pdwBssStart = &_sbss;
  unsigned long *pdwBssEnd = &_ebss;
   
  while (pdwDest < pdwEnd)
  {
    *pdwDest = *pdwSource;
    pdwDest++;
    pdwSource++;
  }
   
  while (pdwBssStart < pdwBssEnd)
  {
    *pdwBssStart = 0;
    pdwBssStart++;
  }
  main();
  while(1);
}

static void NMIHandler()
{
  while(1);
}

static void HardFaultHandler()
{
  while(1);
}

static void MemManageFaultHandler()
{
  while(1);
}

static void BusFaultHandler()
{
  while(1);
}

static void UsageFaultHandler()
{
  while(1);
}

static void SVCallHandler()
{
  while(1);
}

static void DebugMonitorHandler()
{
  while(1);
}

static void PendableSrvReqHandler()
{
  while(1);
}

static void SysTickHandler()
{
  while(1);
}

static void IntDefaultHandler()
{
  while(1);
}

extern void InterruptRoutine();

static void TimerInterruptHandler()
{
  TIM0_EIPND = 1;
  InterruptRoutine();
}

/*
  Interrupt vector table
*/
__attribute__ ((section(".isr_vector")))
const unsigned long g_adwVectors[] =
{
  (unsigned long)&_estack,
  (unsigned long)reset,
  (unsigned long)NMIHandler,
  (unsigned long)HardFaultHandler,
  (unsigned long)MemManageFaultHandler,
  (unsigned long)BusFaultHandler,
  (unsigned long)UsageFaultHandler,
  (unsigned long)0,
  (unsigned long)0,
  (unsigned long)0,
  (unsigned long)0,
  (unsigned long)SVCallHandler,
  (unsigned long)DebugMonitorHandler,
  (unsigned long)0,
  (unsigned long)PendableSrvReqHandler,
  (unsigned long)SysTickHandler,
  (unsigned long)IntDefaultHandler,
  (unsigned long)TimerInterruptHandler,
  (unsigned long)IntDefaultHandler,
  (unsigned long)IntDefaultHandler,
  (unsigned long)IntDefaultHandler,
  (unsigned long)IntDefaultHandler,
  (unsigned long)IntDefaultHandler,
  (unsigned long)IntDefaultHandler,
  (unsigned long)IntDefaultHandler,
  (unsigned long)IntDefaultHandler,
  (unsigned long)IntDefaultHandler,
  (unsigned long)IntDefaultHandler,
  (unsigned long)IntDefaultHandler,
  (unsigned long)IntDefaultHandler,
  (unsigned long)IntDefaultHandler,
  (unsigned long)IntDefaultHandler,
  (unsigned long)IntDefaultHandler,
  (unsigned long)IntDefaultHandler,
  (unsigned long)IntDefaultHandler,
  (unsigned long)IntDefaultHandler,
  (unsigned long)IntDefaultHandler,
  (unsigned long)IntDefaultHandler,
  (unsigned long)IntDefaultHandler,
};

