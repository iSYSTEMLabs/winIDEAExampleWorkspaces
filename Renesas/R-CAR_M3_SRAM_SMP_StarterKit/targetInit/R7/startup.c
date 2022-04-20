#include "rcar_m3.h"

extern int main(void);
extern void InterruptRoutine(void); 

extern volatile unsigned long _etext;
extern volatile unsigned long _data;
extern volatile unsigned long _edata;
extern volatile unsigned long _bss;
extern volatile unsigned long _ebss;
//extern volatile unsigned long nHaltRequestTable;
extern volatile unsigned long _eCommonData;

void Reset()
{
  // initialize data
  volatile unsigned long *pulSrc = &_etext;
  volatile unsigned long *pulDest = &_data;

  while( pulDest < &_edata )
    *pulDest++ = *pulSrc++;

  pulDest = &_bss;
  while ( pulDest < &_ebss )
    *pulDest++ = 0;
  
  pulDest = (volatile unsigned long *)&nHaltRequestTable;
  while(pulDest != &_eCommonData)
    *pulDest++ = 0;
  
  main();
}

void IntDefaultHandler(void) __attribute__ ((interrupt ("IRQ")));
void IntDefaultHandler()
{
  while(1)
  {
  }
}

void TimerInterruptHandler(void) __attribute__ ((interrupt ("IRQ")));
void TimerInterruptHandler(void)
{
  R7_PTMR_IST |= 0x1;
  ICDICPR0 |= (0x1 << ICDICPR0_ID29);
	InterruptRoutine();
}