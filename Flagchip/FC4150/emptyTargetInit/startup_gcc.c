extern int main(void);
extern void InterruptRoutine();

extern unsigned long _estack;

extern unsigned long _etext;
extern unsigned long _data;
extern unsigned long _edata;
extern unsigned long _bss;
extern unsigned long _ebss;


__attribute__ ((naked))
void Reset()
{
  
  (*(unsigned volatile int*)(0x40052000)) = 0x2920; //Disable WDGS else reset will be asserted
  (*(unsigned volatile int*)(0x40052008)) = 0xf000; // and attach won't work
  (*(unsigned volatile int*)(0x40053000)) = 0x2920;
  (*(unsigned volatile int*)(0x40053008)) = 0xf000;
  __asm__("ldr sp,=_estack"); //rt BreakPoint: id=testLatchAndStopReset
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
  while(1);
}


__attribute__ ((section(".isr_vector")))
void (* const g_pfnVectors[])(void) =
{
  (void (*)(void))(&_estack),               // The initial stack pointer
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
    0,                                      // Reserved
    IntDefaultHandler,                      // The PendSV handler
    IntDefaultHandler,                      // The SysTick handler
};

