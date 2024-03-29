#include "S32M276.h"

extern unsigned long _estack, _etext, _sdata, _edata, _sbss, _ebss;
extern int main();
extern void InterruptRoutine();

void reset() {
  __asm__("  ldr R0, =_estack"); 
  __asm__("  mov sp, R0         ");

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


__attribute__ ((section(".vector")))
void (* const g_pfnVectors[])(void) =
{
  (void (*)(void))(&_estack),               // The initial stack pointer
  reset,                                    // The reset handler
  IntDefaultHandler,
  IntDefaultHandler,
  IntDefaultHandler,
  IntDefaultHandler,
  IntDefaultHandler,
  0,
  0,
  0,
  0,
  IntDefaultHandler,
  IntDefaultHandler,
  0,
  IntDefaultHandler,
  IntDefaultHandler
};