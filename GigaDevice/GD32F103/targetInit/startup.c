extern int main();

extern unsigned long _estack, _sbss, _ebss, _etext, _sdata, _edata;

__attribute__ ((naked))
void Reset()
{
  volatile unsigned long *pulDest = &_sdata;
  volatile unsigned long *pulSrc = &_etext;
  
  while (pulDest < &_edata)
  {
    *pulDest++ = *pulSrc++;
  }
  
  pulDest = &_sbss;
  {
  while ( pulDest < &_ebss )
    *pulDest++ = 0;
  }
  
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

