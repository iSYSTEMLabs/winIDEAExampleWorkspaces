
extern int main();

extern unsigned long _estack;

extern unsigned long _etext;
extern unsigned long _data;
extern unsigned long _edata;
extern unsigned long _bss;
extern unsigned long _ebss;
extern unsigned long _VTOR;

#define meml(addr) (*(unsigned long volatile *)(addr))

__attribute__ ((naked))
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

__attribute__ ((section(".isr_vector")))
void (* const g_pfnVectors[])(void) =
{
   (void (*)(void))(&_estack),  // The initial stack pointer
    Reset,                      // The reset handler
    IntDefaultHandler,          // The NMI handler
    IntDefaultHandler,          // The hard fault handler
    0,                          // Reserved
    0,                          // Reserved
    0,                          // Reserved
    0,                          // Reserved
    0,                          // Reserved
    0,                          // Reserved
    0,                          // Reserved
    IntDefaultHandler,          // SVCall handler
    0,                          // Reserved
    0,                          // Reserved
    IntDefaultHandler,          // PendSV handler
    IntDefaultHandler,          // SysTick handler
};

