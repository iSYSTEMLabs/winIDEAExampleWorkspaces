extern int main(void);
extern void InterruptRoutine();

#define SCB_VTOR (*(volatile unsigned long*)0xE000ED08)

extern unsigned long _estack;

extern unsigned long _etext;
extern unsigned long _data;
extern unsigned long _edata;
extern unsigned long _bss;
extern unsigned long _ebss;


void IntDefaultHandler()
{
  while(1) {}
}

void TimerInterruptHandler()
{
  InterruptRoutine();
}

void Reset();

__attribute__ ((section(".isr_vector")))
void (* const g_pfnVectors[])(void) =
{
  (void (*)(void))(&_estack),
  Reset,
  IntDefaultHandler,
  IntDefaultHandler,
  IntDefaultHandler,
  IntDefaultHandler,
  IntDefaultHandler,
  0, 0, 0, 0,
  IntDefaultHandler,
  IntDefaultHandler,
  0,
  IntDefaultHandler,
  TimerInterruptHandler
};

__attribute__ ((naked))
void Reset()
{
  __asm__("ldr sp,=_estack"); //rt BreakPoint: id=testLatchAndStopReset
  __asm volatile ("cpsid i");
  SCB_VTOR = (unsigned long)g_pfnVectors;
  volatile unsigned long *pulSrc = &_etext;
  volatile unsigned long *pulDest = &_data;
              
  while( pulDest < &_edata )
    *pulDest++ = *pulSrc++;
  
  pulDest = &_bss;
  while ( pulDest < &_ebss )
    *pulDest++ = 0;       
  main();
}
