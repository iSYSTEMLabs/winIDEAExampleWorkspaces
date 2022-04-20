
extern int main();
extern void InterruptRoutine();

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
  __asm__("ldr sp,=_estack");
    
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

void TimerInterruptHandler()
{
  InterruptRoutine();
}

__attribute__ ((section(".isr_vector")))
void (* const g_pfnVectors[])(void) =
{
   (void (*)(void))(&_estack),              // The initial stack pointer
    Reset,                                  // The reset handler
    IntDefaultHandler,                      // The NMI handler
    IntDefaultHandler,                      // The hard fault handler
    IntDefaultHandler,                      // The MPU fault handler
    IntDefaultHandler,                      // The bus fault handler
    IntDefaultHandler,                      // The usage fault handler
    0,                                      // Reserved
    0,                                      // Reserved
    0,                                      // Reserved
    0,                                      // Reserved
    IntDefaultHandler,                      // SVCall handler
    IntDefaultHandler,                      // Debug monitor handler
};

