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
  while(1)
  {
  }
}

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
    0,                                      
    0,                                      
    0,                                      
    0,                                      
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
    0,                                      
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
    0,                                      
    0,                                      
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
    IntDefaultHandler                       
};

