#include "S6J32GEKSA.h"

extern int main(void);
extern void InterruptRoutine();

extern unsigned long _estack;

extern unsigned long _etext;
extern unsigned long _data;
extern unsigned long _edata;
extern unsigned long _bss;
extern unsigned long _ebss;


void Reset()
{
  volatile unsigned long *pulSrc = &_etext;
  volatile unsigned long *pulDest = &_data;
  
  while( pulDest < &_edata )
    *pulDest++ = *pulSrc++;
  
  pulDest = &_bss;
  while ( pulDest < &_ebss )
    *pulDest++ = 0;
  
  main();
}

void IntDefaultHandler()
{
  while(1)
  {
  }
}


__attribute__ ((interrupt()))
void TimerInterruptHandler()
{
  HWDG_TRG0 = HWDG_TRG0CFG; 
  HWDG_TRG1 = HWDG_TRG1CFG; 

  FRT00_TCCS |= (1 << FRT00_TCCS_STOP);

  // Clear interrupt flag
  FRT00_TCCSC |= (1 << FRT00_TCCSC_ICLRC);
  
  FRT00_TCCS &= ~(1 << FRT00_TCCS_STOP);
  int dummy = IRC0_IRQST;
  InterruptRoutine();
  IRC0_UNLOCK = IRC0_KEY;
  IRC0_IRQHC |= 176;
}

