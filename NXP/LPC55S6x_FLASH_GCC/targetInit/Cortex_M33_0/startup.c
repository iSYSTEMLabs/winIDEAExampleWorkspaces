#include "LPC55S6x.h"

extern unsigned long _estack, _etext, _sdata, _edata, _sbss, _ebss;
extern int main();
extern void InterruptRoutine();

void reset() {
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

void IntDefaultHandler()
{
  while(1);
}

void TimerInterruptHandler()
{
  CTIMER0_IR |= 1 << CTIMER0_IR_MR0INT;
  InterruptRoutine();
}


__attribute__ ((section(".vector")))
void (* const g_pfnVectors[])(void) =
{
  (void (*)(void))(&_estack),               // The initial stack pointer
  reset,                                  // The reset handler
  IntDefaultHandler,
  IntDefaultHandler,
  IntDefaultHandler,
  IntDefaultHandler,
  IntDefaultHandler,
  IntDefaultHandler,
  0,
  0,
  0,
  IntDefaultHandler,
  IntDefaultHandler,
  0,
  IntDefaultHandler,
  IntDefaultHandler,
  IntDefaultHandler,                        // Interrupt 0  
  IntDefaultHandler,
  IntDefaultHandler,
  IntDefaultHandler,
  IntDefaultHandler,
  IntDefaultHandler,
  IntDefaultHandler,
  IntDefaultHandler,
  IntDefaultHandler,
  IntDefaultHandler,
  TimerInterruptHandler,
  IntDefaultHandler,
  IntDefaultHandler,
  IntDefaultHandler,
  IntDefaultHandler,
  IntDefaultHandler,
  IntDefaultHandler,
  IntDefaultHandler,
  IntDefaultHandler,
  IntDefaultHandler,
  IntDefaultHandler,
  IntDefaultHandler,
  IntDefaultHandler,
  0,
  IntDefaultHandler,
  0,
  0, 
  IntDefaultHandler,
  IntDefaultHandler,
  IntDefaultHandler,
  0,
  IntDefaultHandler,
  IntDefaultHandler,
  IntDefaultHandler,
  IntDefaultHandler,
  IntDefaultHandler,
  IntDefaultHandler,
  IntDefaultHandler,
  IntDefaultHandler,
  0,
  0,
  0,
  IntDefaultHandler,
  0,
  0,
  0,
  IntDefaultHandler,
  IntDefaultHandler,
  IntDefaultHandler,
  IntDefaultHandler,
  IntDefaultHandler,
  IntDefaultHandler,
  IntDefaultHandler,
  IntDefaultHandler,
  IntDefaultHandler,
  IntDefaultHandler,
  IntDefaultHandler,
  IntDefaultHandler
};