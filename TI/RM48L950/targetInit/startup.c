#include "RM48L950.h"

extern int main(void);
extern unsigned long _estack;

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

void TimerInterruptHandler(void)__attribute__ ((interrupt ("IRQ"))); 
void TimerInterruptHandler()
{
  InterruptRoutine();
  RTIINTFLAG = 0xF;
}
   
#define VIM_CHANNELS 64U  //95U is correct
#define vimRAM ((vimRAM_t *)0xFFF82000U)
typedef void (*t_isrFuncPTR)();

typedef volatile struct vimRam
{
    t_isrFuncPTR ISR[VIM_CHANNELS + 1];
} vimRAM_t;

void phantomInterrupt()
{
  while(1);
}
static const t_isrFuncPTR s_vim_init[] =
{
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &TimerInterruptHandler,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
};

void initVIM(void)
{
  int i;
  for (i = 0; i < (VIM_CHANNELS + 1); i++)
  {
    vimRAM->ISR[i] = s_vim_init[i];
  }
}

   
