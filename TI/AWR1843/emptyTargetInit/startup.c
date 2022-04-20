#define VIM_IRQINDEX  (*(unsigned volatile int *) 0xFFFFFE00)     // Pending IRQ index
#define RTIINTFLAG    (*(unsigned volatile int *) (0xFFFFFC88))   // RTI interrupt flag register

extern int main(void);
extern void InterruptRoutine();
extern void timerInterruptHandler();

extern unsigned long _estack_usr;

extern unsigned long _etext;
extern unsigned long _sdata;
extern unsigned long _edata;
extern unsigned long _sbss;
extern unsigned long _ebss;


__attribute__( ( naked ) )  
void Reset()
{ 
  volatile unsigned long *pulSrc = &_etext;
  volatile unsigned long *pulDest = &_sdata;
  

  
  while( pulDest < &_edata )
    *pulDest++ = *pulSrc++;
  
  pulDest = &_sbss;
  while ( pulDest < &_ebss )
    *pulDest++ = 0;       
  
  //asm("  NOP");
  //asm("  WFI");
  main();
}

void IntDefaultHandler()
{
  asm(" BKPT");
  while(1)
  {
  }
}

__attribute__ ((interrupt("IRQ")))
void IRQHandler()
{
  // Read pending interrupt channel
  int irq = VIM_IRQINDEX;
  
  if(irq == 0x3){
    // Clear the event flag
    RTIINTFLAG |= 1;
    InterruptRoutine();
  }
}
