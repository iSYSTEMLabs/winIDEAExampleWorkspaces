#include "RM46.h"

char GpioOffOn = 0;
int delay = 1000;

void profilerAddTestMessages(void)
{
}

void initClocks(void)
{  
/* setup flash wrapper */
FRDCNTL = 0x00000311;
FBFALLBACK = 0x000000FF;
FSM_WR_ENA = 0x00000005;
EEPROM_CONFIG = 0x00030002;

/* setup pll at about 200 Mhz */
PLLCTL1 = 0x2007C700;
PLLCTL2 = 0x3FC0723D; 

/* start clock source lock */
CSDISCLR = 0x00000042;

/* wait for until clocks are locked */
#define OSCILLATOR_CLOCK_SOURCE 0  
#define PLL1_CLOCK_SOURCE       1
#define PLL2_CLOCK_SOURCE       6

while(CSVSTAT && (1<<PLL1_CLOCK_SOURCE) == 0);

/* select clock source */
GHVSRC = 0x01010001;

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

CLKTEST = 0x00050008; // GCLK to ECLK pin

// SYSPC1
ECPCLKFUN = 0x00000001; // ECLK pin enable clock out

FSM_WR_ENA = 0x00000002; // Lock FSM Registers write
}

void initTimer(void)
{
  RTICOMPCTRL = 0x0; // all comparators are compared to RTIFRC0
  RTITBCTRL = 0x0; // RTICLK is used for RTIFRC0
  RTIGCTRL = 0x1; // enable Counter block 0
  RTICPUC0 = 0x17E; // prescaler value
  RTICOMP0 = 0xFF; // compare value for interrupt flag
  RTIUDCP0 = 0xFF; // increment compare value for periodic interrupts
  RTIINTCLEARENABLE = 0x0; // enable auto clear of compare event
  RTIINTFLAG = 0xFF; //clear flags
  RTISETINTENA = 0x1; //enable compare 0 interrupt
  REQENASET0 = 0x4; //enable interrupt chanell
}

void initGPIO()
{
  while((CLKCNTL & (1<<8))==0)
  {
    CLKCNTL |= (1<<8); //enable PENA bit
  }
  GIOGCR0 = 0x1; //GIO brought from reset 
  GIOGCR0 = 0x1; //repeat to make it work

  GIODIRA = 0xFF; //set whole port as output
  GIOPDRA = 0x0; //set as not open drain
} 

void targetInit(void)
{
  initClocks();
  initGPIO();
  initVIM();
  initTimer();
  targetEnableInterrupts();
}

void targetEnableInterrupts(void)
{ 
  RTIINTFLAG = 0xff;
  _Enable_Irq();
}

void targetDisableInterrupts(void)
{ 
  RTICLEARINTENA = 0x1;
  _Disable_Irq();
}

void GPIOPinToggle(void)
{ 
  GpioOffOn = !GpioOffOn;
  if (GpioOffOn)
  { 
    GIODSET = 0xFF;
  }
  else
  {
    GIODCLR = 0xFF; 
  } 
}

void disableWatchdog()
{
}
