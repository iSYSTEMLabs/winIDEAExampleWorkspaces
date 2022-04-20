#include "AM2732R.h"

extern int main(void);
extern void InterruptRoutine(void); 

extern volatile unsigned long _etext;
extern volatile unsigned long _data;
extern volatile unsigned long _edata;
extern volatile unsigned long _bss;
extern volatile unsigned long _ebss;

__attribute__ ((naked))
void Reset(void)
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
