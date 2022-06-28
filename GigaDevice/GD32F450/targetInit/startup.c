extern int main();

extern unsigned long _estack, _sbss, _ebss, _etext, _sdata, _edata;

#define SCB_VTOR (*(volatile unsigned long*)0xE000ED08)

extern void InterruptRoutine();
void TimerInterruptHandler()
{
  InterruptRoutine();
}

void IntDefaultHandler()   {}
void NMIFaultHandler()     { while(1); }
void hardFaultHandler()    { while(1); }
void MPUFaultHandler()     { while(1); }
void busFaultHandler()     { while(1); }
void usageFaultHandler()   { while(1); }
void SVCallHandler()       { while(1); }
void debugMonitorHandler() { while(1); }

void Reset();

__attribute__ ((section(".isr_vector")))
void (* const g_pfnVectors[])(void) =
{
   (void (*)(void))(&_estack),              // The initial stack pointer
    Reset,                                  // The reset handler
    NMIFaultHandler,                        // The NMI handler
    hardFaultHandler,                       // The hard fault handler
    MPUFaultHandler,                        // The MPU fault handler
    busFaultHandler,                        // The bus fault handler
    usageFaultHandler,                      // The usage fault handler
    0,                                      // Reserved
    0,                                      // Reserved
    0,                                      // Reserved
    0,                                      // Reserved
    SVCallHandler,                          // SVCall handler
    debugMonitorHandler,                    // Debug monitor handler
    IntDefaultHandler,
    IntDefaultHandler,
    TimerInterruptHandler
};

__attribute__ ((naked))
void Reset()
{
  volatile unsigned long *pulDest = &_sdata;
  volatile unsigned long *pulSrc = &_etext;
  
  __asm__("ldr R0, =_estack");
  __asm__("mov sp, R0");
  
  while (pulDest < &_edata)
  {
    *pulDest++ = *pulSrc++;
  }
  
  pulDest = &_sbss;
  {
  while ( pulDest < &_ebss )
    *pulDest++ = 0;
  }
  
  SCB_VTOR = (unsigned long)g_pfnVectors;
  
  main();
}
