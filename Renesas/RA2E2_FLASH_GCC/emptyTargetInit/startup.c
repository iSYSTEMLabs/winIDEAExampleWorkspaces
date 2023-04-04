
extern int main();

extern unsigned long _estack;
extern unsigned long _etext;
extern unsigned long _data;
extern unsigned long _edata;
extern unsigned long _bss;
extern unsigned long _ebss;


void Reset(void) __attribute__((naked));
void Reset()
{
  {
    __asm__("  ldr R0, =_estack "); 
    __asm__("  mov sp, R0       ");

    
    volatile unsigned long *pulSrc = &_etext;
    volatile unsigned long *pulDest = &_data;
  
    while( pulDest < &_edata )
      *pulDest++ = *pulSrc++;
  
    pulDest = &_bss;
    while ( pulDest < &_ebss )
      *pulDest++ = 0;       
  }
  main();
}


void IntDefaultHandler(void)
{
  while(1);
}


__attribute__ ((section(".isr_vector")))
void (* const g_pfnVectors[])(void) =
{
   (void (*)(void))(&_estack),  // Initial stack pointer
    Reset,                      // Reset handler
    IntDefaultHandler,          // NMI handler
    IntDefaultHandler,          // Hard fault handler
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    IntDefaultHandler,          // SVCall handler
    0,
    0,
    IntDefaultHandler,          // PendableSrvReq handler
    IntDefaultHandler           // SysTick handler
};