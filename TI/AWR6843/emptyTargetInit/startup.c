extern int main(void);
extern void InterruptRoutine(void); 

extern volatile unsigned long _estack;
extern volatile unsigned long _sbss;
extern volatile unsigned long _ebss;

void resetHandler()
{
  volatile unsigned long *pulDest = &_sbss;
  
  while ( pulDest < &_ebss )
  {
    *pulDest++ = 0;
  }

  main();
  
  while (1); // shouldn't happen
}

void UndefinedInstructionHandler()
{
  while(1);
}

void SupervisorCallHandler()
{
  while(1);
}

void PrefetchAbortHandler()
{
  while(1);
}

void DataAbortHandler()
{
  while(1);
}

void HypervisorTrapHandler()
{
  while(1);
}

void IRQHandler()
{
  while(1);
}

void FIQHandler()
{
  while(1);
}

void TimerInterruptHandler()
{
  InterruptRoutine();
}

__attribute__ ((section(".isr_vector")))
void reset()
{
  asm(" B _rst");
  asm(" B UndefinedInstructionHandler");
  asm(" B SupervisorCallHandler");
  asm(" B PrefetchAbortHandler");
  asm(" B DataAbortHandler");
  asm(" B HypervisorTrapHandler");
  asm(" B IRQHandler");
  asm(" B FIQHandler");
  
  asm("_rst:");
  asm(" LDR R0, =_estack");
  asm(" MOV SP, R0");
  asm(" B resetHandler");
}