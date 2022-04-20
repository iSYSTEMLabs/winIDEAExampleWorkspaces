#include "tms570mira.h"


volatile unsigned char gpioState = 0;
volatile unsigned int iInterruprCounter = 0;

#define VIM_CHANNELS 64U
#define vimRAM ((vimRAM_t *)0xFFF82000U)
typedef void (*t_isrFuncPTR)();
typedef volatile struct vimRam
{
    t_isrFuncPTR ISR[VIM_CHANNELS + 1];
} vimRAM_t;


void targetEnableInterrupts(void)
{ 
  RTIFRC0 = 0x00;
  RTIINTFLAG = 0xff;
  _Enable_Irq(); 
}


void targetInit(void)
{
  #ifndef EMPTY_TARGET_INIT

  initClocks();
  initTimer();
  initVIM();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}

void initClocks(void)
{
   //setup flash wrapper
  FRDCNTL=0x00000311;
  FBFALLBACK=0x000000FF;
  
  // setup flexray PLL
  FLW = 0x00400900; 
   
  /* setup pll at about 176 Mhz, this works */
  PLLCTL1 = 0x2007AF00;
  PLLCTL2 = 0x3FC0023D;  
  
  /* start clock source lock */
  CSDISCLR = 0x00000042;
  
  /* wait for until clocks are locked */
  while((0x00000042&CSVSTAT) != 0x00000042);
  
  
  /* select clock source */
  GHVSRC =  0x01010001;
  
  /* power-up peripharals */
  PSPWRDWNCLR0 = 0xFFFFFFFF; 
  PSPWRDWNCLR1 = 0xFFFFFFFF;
  PSPWRDWNCLR2 = 0xFFFFFFFF;
  PSPWRDWNCLR3 = 0xFFFFFFFF;
  
  /* set peripheral clock ratio */
  CLKCNTL = 0x01010000;
  
  /* set RTI clock source */
  RCLKSRC = 0x00090009;
  
  /* set asynchronous peripheral clock source */  
  VCLKASRC = 0x00000609;
  
  /* enable peripherals */
  CLKCNTL = 0x01010100;  
}

void initTimer(void)
{
  RTIGCTRL = 0x01;
  RTIFRC0 = 0x00;
  RTIUC0 = 0x00;
  RTICPUC0 = 0x200; //RTI compare up counter 0
  RTICOMP0 = 0xAC; //RTI compare 0
  RTIINTFLAG = 0xff;
  RTISETINTENA = 0x01;
  REQENASET0 = 0x04;
}


void TimerInterruptHandler(void)__attribute__ ((interrupt ("IRQ")));  //this is important for returning correctly from interrupt rutine.
void TimerInterruptHandler()
{
  RTIINTFLAG = 0xff;
  RTIFRC0 = 0x00;
  InterruptRoutine();
} 


void phantomInterrupt()
{
  for(;;);
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

void disableWatchdog()
{
}
