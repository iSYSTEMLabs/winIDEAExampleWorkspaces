#include "tms570LC4357.h"


volatile unsigned char gpioState = 0;

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
  #define CLKCNTL_PENA_BIT 8
  
  // GCLK divided by 2; HCLK max = 150 MHz
  HCLK1CTRL = 0x00000001;
  
  //setup flash wait states for max CPU clock (will not access EEPROM)
  FRDCNTL = 0x00000411;
  //enable writing to EEPROM_CONFIG
  FSM_WR_ENA = 0x5;
  //set EEPROM wait states
  EEPROM_CONFIG = 0x40000;
  
  /* setup pll at about 300 Mhz */
  PLLCTL1 = 0x20034A00;
  PLLCTL2 = 0x00000000;
  
  /* start clock source lock */
  CSDISCLR = 0xFF;
  
  /* wait for until clocks are locked */
  while ( ( 0x000000FB & CSVSTAT ) != 0x000000FB );

  /* select PLL1 as clock source */
  GHVSRC = 0x01010001;
  
  /* set peripheral clock ratio */
  CLKCNTL = 0x01010000;
  
  /* set VCLK as RTI clock source */
  RCLKSRC = 0x8;
  
  /* enable peripherals */
  CLKCNTL |= (1<<CLKCNTL_PENA_BIT);
}

void initTimer(void)
{
  RTIGCTRL = 0x01;
  RTIFRC0 = 0x00;
  RTIUC0 = 0x00;
  RTICPUC0 = 0x200; //RTI compare up counter 0
  //RTICOMP0 = 0xF; //RTI compare 0 for 16MHz clock
  RTICOMP0 = 0xB4; //RTI compare 0 for 180MHz clock
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
