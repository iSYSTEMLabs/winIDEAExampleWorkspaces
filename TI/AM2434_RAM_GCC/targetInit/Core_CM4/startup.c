extern int main(void);
void ResetHandler(void);
static void IntDefaultHandler(void);
static void NmiSR(void);
static void FaultISR(void);

extern unsigned long _estack;
extern unsigned long _etext;
extern unsigned long _data;
extern unsigned long _edata;
extern unsigned long _bss;
extern unsigned long _ebss;


__attribute__((section(".isr_vector"))) void (*const g_ISRTable[])(void) =
{             
  (void (*)(void))(&_estack),     // Initial stack pointer
  ResetHandler,                  // Reset
  NmiSR,                          // NMI
  FaultISR,                       // HardFault
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

void ResetHandler(void)
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

static void IntDefaultHandler(void)
{
  asm(" BKPT");
  while(1); // Enter an infinite loop
}

static void NmiSR(void)
{
  asm(" BKPT"); 
  while (1);  // Enter an infinite loop
}

static void FaultISR(void)
{
  asm(" BKPT"); 
  while (1);  // Enter an infinite loop
}
