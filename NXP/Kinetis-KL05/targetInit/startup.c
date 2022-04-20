#include "MKL05Z32.h"

extern unsigned long _isrVectAddr;
extern unsigned long _estack;
extern unsigned long _etext;
extern unsigned long _sdata;
extern unsigned long _edata; 
extern unsigned long _sbss;
extern unsigned long _ebss; 
extern int main(void);
extern void InterruptRoutine();


void reset()
{
  unsigned long *pdwSource = &_etext; 
  unsigned long *pdwDest = &_sdata;
  unsigned long *pdwEnd = &_edata;
  unsigned long *pdwBssStart = &_sbss;
  unsigned long *pdwBssEnd = &_ebss;
  
  VTOR = (unsigned long volatile)&_isrVectAddr;
   
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

static void SVCallHandler()
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

static void TimerInterruptHandler()
{
  PIT_TFLG0 = 1; // Clear interrupt flag
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
  (unsigned long)0,
  (unsigned long)0,
  (unsigned long)0,
  (unsigned long)0,
  (unsigned long)0,
  (unsigned long)0,
  (unsigned long)0,
  (unsigned long)SVCallHandler,
  (unsigned long)0,
  (unsigned long)0,
  (unsigned long)PendableSrvReqHandler,
  (unsigned long)SysTickHandler,
  (unsigned long)IntDefaultHandler,
  (unsigned long)IntDefaultHandler,
  (unsigned long)IntDefaultHandler,
  (unsigned long)IntDefaultHandler,
  (unsigned long)0,
  (unsigned long)IntDefaultHandler,
  (unsigned long)IntDefaultHandler,
  (unsigned long)IntDefaultHandler,
  (unsigned long)IntDefaultHandler,
  (unsigned long)0,
  (unsigned long)IntDefaultHandler,
  (unsigned long)0,
  (unsigned long)IntDefaultHandler,
  (unsigned long)0,
  (unsigned long)0,
  (unsigned long)IntDefaultHandler,
  (unsigned long)IntDefaultHandler,
  (unsigned long)IntDefaultHandler,
  (unsigned long)IntDefaultHandler,
  (unsigned long)0,
  (unsigned long)IntDefaultHandler,
  (unsigned long)IntDefaultHandler,
  (unsigned long)TimerInterruptHandler,
  (unsigned long)0,
  (unsigned long)0,
  (unsigned long)IntDefaultHandler,
  (unsigned long)IntDefaultHandler,
  (unsigned long)IntDefaultHandler,
  (unsigned long)IntDefaultHandler,
  (unsigned long)0,
  (unsigned long)IntDefaultHandler,
  (unsigned long)IntDefaultHandler
};

