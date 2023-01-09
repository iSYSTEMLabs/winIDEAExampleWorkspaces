
#define VTOR (*(unsigned volatile int *)0xE000ED08)
#define CPACR (*(unsigned volatile int *)0xE000ED88)

extern unsigned long _estack;
extern unsigned long _etext;
extern unsigned long _sdata;
extern unsigned long _edata;
extern unsigned long _sbss;
extern unsigned long _ebss;

extern int main(void);
extern void InterruptRoutine(void);


__attribute__((naked)) void Reset()
{
  volatile unsigned long *pulSrc = &_etext;
  volatile unsigned long *pulDest = &_sdata;
  
  register unsigned long stackreg __asm("sp");
  stackreg = (unsigned long)&_estack;
  
  // Set VTOR to ISR vector base address
  VTOR = 0x00000000;
  
  // Enable coprocessors 10 and 11 for FPU
  CPACR |= (1 << 20) | (1 << 22);
  
  while(pulDest < &_edata)
  {
	*pulDest++ = *pulSrc++;  
  }  
  
  pulDest = &_sbss;
  while (pulDest < &_ebss)
  {
    *pulDest++ = 0; 
  }
  
  main();
  while(1);
}


void IntDefaultHandler()
{
  while(1);
}

void NMIHandler()
{
  while(1);
}

void HardFaultHandler()
{
  while(1);
}

void TimerInterruptHandler()
{
  InterruptRoutine();
}


__attribute__ ((section(".isr_vector")))
void (* const g_pfnVectors[])(void) =
{
  (void (*)(void))(&_estack),  // Initial stack pointer
  Reset,                       // Reset handler
  NMIHandler,                  // NMI handler
  HardFaultHandler,            // Hard fault handler
  IntDefaultHandler,           // MPU fault handler
  IntDefaultHandler,           // Bus fault handler
  IntDefaultHandler,           // Usage fault handler
  0,                           // Reserved
  0,                           // Reserved
  0,                           // Reserved
  0,                           // Reserved
  IntDefaultHandler,           // SVCall handler
  IntDefaultHandler,           // Debug monitor handler
  0,                           // Reserved
  IntDefaultHandler,           // PendSV handler
  IntDefaultHandler,           // SysTick handler
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
  IntDefaultHandler,
  IntDefaultHandler,
  0,
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
  0,
  0,
  0,
  0,
  IntDefaultHandler,
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
  IntDefaultHandler,
  IntDefaultHandler,
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
  0,
  0,
  0,
  0,
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
  IntDefaultHandler,
  IntDefaultHandler,
  IntDefaultHandler,
  IntDefaultHandler,
  IntDefaultHandler,
  IntDefaultHandler,
  IntDefaultHandler
};