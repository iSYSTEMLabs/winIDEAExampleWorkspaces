#include "AWR6843_sfr.h"

extern int main(void);
extern void InterruptRoutine(void); 

extern volatile unsigned long _estack_sys;
extern volatile unsigned long _estack_usr;
extern volatile unsigned long _etext;
extern volatile unsigned long _sdata;
extern volatile unsigned long _edata;
extern volatile unsigned long _sbss;
extern volatile unsigned long _ebss;

void resetHandler()
{
  volatile unsigned long *pulSrc = &_etext;
  volatile unsigned long *pulDest = &_sdata;
  
  while( pulDest < &_edata )
  {
    *pulDest++ = *pulSrc++;
  }
  
  pulDest = &_sbss;
  while ( pulDest < &_ebss )
  {
    *pulDest++ = 0;
  }

  main();
  
  while (1); // shouldn't happen
}

void UndefinedInstructionHandler()
{
  while(1);
}

void SupervisorCallHandler()
{
  while(1);
}

void PrefetchAbortHandler()
{
  while(1);
}

void DataAbortHandler()
{
  while(1);
}

void HypervisorTrapHandler()
{
  while(1);
}

void IRQHandler()
{
  while(1);
}

void FIQHandler()
{
  while(1);
}

void IntDefaultHandler()
{
  while(1);
}

__attribute__ ((interrupt("IRQ")))
void TimerInterruptHandler()
{
  // Read IRQIVEC to clear interrupt
  int irqIndex = VIM.IRQIVEC.B.IRQIVEC;
  
  // Clear interrupt flag in timer
  RTIA.RTIINTFLAG.B.INT0 = 1;
  
  // Run our interrupt routine
  InterruptRoutine();
}

