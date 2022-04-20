extern void InterruptRoutine();

extern int main(void);

extern unsigned long _estack;

extern unsigned long _etext;
extern unsigned long _data;
extern unsigned long _edata;
extern unsigned long _bss;
extern unsigned long _ebss;
extern unsigned long _VTOR;

#define meml(addr) (*(unsigned long volatile *)(addr))
__attribute__ ((naked))
void Reset()
{
  unsigned long A=0x800000;
  while(A<0x808000)
  {
    meml(A)=0;
    A+=4;
  }

volatile unsigned long *pulSrc = &_etext;
volatile unsigned long *pulDest = &_data;
  
  
  
  while( pulDest < &_edata )
    *pulDest++ = *pulSrc++;
  
  pulDest = &_bss;
  while ( pulDest < &_ebss )
    *pulDest++ = 0;    

/*  while(1)
  {
    
  }
  */
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
//    (void (*)(void))((unsigned long)pulStack + sizeof(pulStack)),
   (void (*)(void))(&_estack),
                                            // The initial stack pointer
    Reset,                                  // The reset handler
    IntDefaultHandler,                      // 
    IntDefaultHandler,                      // 
    IntDefaultHandler,                      // 
    IntDefaultHandler,                      // 
    IntDefaultHandler,                      // 
    0,                                      // 
    0,                                      // 
    0,                                      // 
    0,                                      // 
    IntDefaultHandler,                      // 
    IntDefaultHandler,                      // 
    0,                                      // 
    IntDefaultHandler,                      // 
    IntDefaultHandler,                      // 
    IntDefaultHandler,                      // 
    IntDefaultHandler,                      // 
    IntDefaultHandler,                      // 
    IntDefaultHandler,                      // 
    IntDefaultHandler,                      // 
    IntDefaultHandler,                      // 
    IntDefaultHandler,                      // 
    IntDefaultHandler,                      // 
    IntDefaultHandler,                      // 
    IntDefaultHandler,                      // 
    IntDefaultHandler,                      // 
    IntDefaultHandler,                      // 
    IntDefaultHandler,                      // 
    IntDefaultHandler,                      // 
    IntDefaultHandler,                      // 
    IntDefaultHandler,                      // 
    IntDefaultHandler,                      // 
    IntDefaultHandler,                      //   
    IntDefaultHandler,                      // 
    IntDefaultHandler,                      // 
    IntDefaultHandler,                      // 
    IntDefaultHandler,                      // 
    IntDefaultHandler,                      // 
    IntDefaultHandler,                      // 
    IntDefaultHandler,                      // 
    IntDefaultHandler,                      // 
    IntDefaultHandler,                      // 
    IntDefaultHandler,                      // 
    IntDefaultHandler,                      // 
    IntDefaultHandler                       // 
};



// 
// struct SISRType
// {
//   union
//   {
//     pfnISR        m_pfnISR;
//     unsigned long m_dword;
//   };
// }g_ISRTable[] =
// {
//   (unsigned long)& _estack,     // Initial stack pointer                            
//   Reset,                        // Reset handler
//   IntDefaultHandler,            // NMI handler
//   IntDefaultHandler,            // Hard fault handler
//   IntDefaultHandler,            // MPU fault handler
//   IntDefaultHandler,            // Bus fault handler
//   IntDefaultHandler,            // Usage fault handler
//   0,                            // Reserved
//   0,                            // Reserved
//   0,                            // Reserved
//   0,                            // Reserved
//   IntDefaultHandler,            // SVCall handler
//   IntDefaultHandler,            // Debug monitor handler
//   0,                            // Reserved
//   IntDefaultHandler,            // PendSV handler
//   IntDefaultHandler,            // SysTick handler
// };

