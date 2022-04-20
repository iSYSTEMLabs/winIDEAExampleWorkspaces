extern unsigned long long _estack, _sbss, _ebss;
extern int main(void);

void resetHandler()
{
  // Needs full AARCH64 initialization. E.g.:
  // - stack pointers for all privilege levels
  // - MMU
  // - vector table offset
  unsigned long long *pulDest = &_sbss;
  while ( pulDest < &_ebss )
  {
    *pulDest++ = 0;
  }
  
  main();

  asm(" BRK #0");
  while( 1 );    
}

void IntDefaultHandler()
{
  while(1)
  {
  }
}

__attribute__ ((section(".isr_vector")))
void reset()
{
  asm(" B _rst");
  asm(" B IntDefaultHandler");
  asm(" B IntDefaultHandler");
  asm(" B IntDefaultHandler");
  asm(" B IntDefaultHandler");
  asm(" B IntDefaultHandler");
  asm(" B IntDefaultHandler");
  asm(" B IntDefaultHandler");
  asm("_rst:");
  asm(" LDR X0, =_estack");
  asm(" MOV SP, X0");
  asm(" B resetHandler");
}