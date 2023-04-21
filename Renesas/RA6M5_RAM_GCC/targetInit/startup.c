
extern int main();

extern unsigned long _estack;
extern unsigned long _etext;
extern unsigned long _data;
extern unsigned long _edata;
extern unsigned long _bss;
extern unsigned long _ebss;
extern void InterruptRoutine();


#define VTOR (*(volatile unsigned int *)0xE000ED08)

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
  
  VTOR = 0x20000000;
  
  main();
}


void IntDefaultHandler(void)
{
  while(1);
}

void TimerInterruptHandler(void)
{
  InterruptRoutine();
}

__attribute__ ((section(".isr_vector")))
void (* const g_pfnVectors[])(void) =
{
   (void (*)(void))(&_estack),              // Initial stack pointer
    Reset,                                  // Reset handler
    IntDefaultHandler,                      // NMI handler
    IntDefaultHandler,                      // Hard fault handler
    IntDefaultHandler,                      // MPU fault handler    
    IntDefaultHandler,                      // Bus fault handler
    IntDefaultHandler,                      // Usage fault handler
    IntDefaultHandler,                      // Secure fault handler
    0,                                      // Reserved
    0,                                      // Reserved
    0,                                      // Reserved
    IntDefaultHandler,                      // SVCall handler
    IntDefaultHandler,                      // Debug monitor handler
    0,                                      // Reserved
    IntDefaultHandler,                      // PendSV handler
    TimerInterruptHandler                   // SysTick handler
};