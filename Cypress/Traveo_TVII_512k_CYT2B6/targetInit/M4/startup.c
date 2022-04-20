
extern int main(void);

extern unsigned long _estackB;

extern unsigned long _etext;
extern unsigned long _data;
extern unsigned long _edata;
extern unsigned long _bss;
extern unsigned long _ebss;

__attribute__ ((naked))
void ResetM4()
{
  __asm__("ldr R0, =_estackB");
  __asm__("mov sp, R0");

  volatile unsigned long *pulSrc = &_etext;
  volatile unsigned long *pulDest = &_data;
  

  
  while( pulDest < &_edata )
    *pulDest++ = *pulSrc++;
  
  pulDest = &_bss;
  while ( pulDest < &_ebss )
    *pulDest++ = 0;       
  
  main();
}

typedef struct  
{  
  unsigned long m_dwExR0;  
  unsigned long m_dwExR1;  
  unsigned long m_dwExR2;  
  unsigned long m_dwExR3;  
  unsigned long m_dwExR12;  
  unsigned long m_dwExLR;  
  unsigned long m_dwExPC;  
  unsigned long m_dwExPSR;  
}SCortexM3ExContext;  
  
__attribute__( ( naked ) )  
void IntDefaultHandler()  
{  
  register SCortexM3ExContext * psCortexM3ExContext __asm("r0");  
  register unsigned long dwLR __asm("lr");  
  
  if ( dwLR & 4 )  
    __asm__(" mrs r0, psp");  
  else  
    __asm__(" mrs r0, msp");  
  
  __asm__(" BKPT");  
  while ( 1 );  
}  

typedef void (*pfnISR)(void);

__attribute__ ((section(".isr_vector")))
struct SISRType
{
  union
  {
    pfnISR        m_pfnISR;
    unsigned long m_dword;
  };
}g_ISRTable[] =
{
  (void (*)(void))(unsigned long)& _estackB,               // Initial stack pointer
                             
  ResetM4,               // Reset handler
  IntDefaultHandler,      // NMI handler
  IntDefaultHandler,      // Hard fault handler
  IntDefaultHandler,      // MPU fault handler
  IntDefaultHandler,      // Bus fault handler
  IntDefaultHandler,      // Usage fault handler
  0,                      // Reserved
  0,                      // Reserved
  0,                      // Reserved
  0,                      // Reserved
  IntDefaultHandler,      // SVCall handler
  IntDefaultHandler,      // Debug monitor handler
  0,                      // Reserved
  IntDefaultHandler,      // PendSV handler
  IntDefaultHandler,      // SysTick handler
};

