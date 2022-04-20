#include "SAML11.h"


extern unsigned long _cm0Boot;
extern unsigned long _cm0Stack;

extern void InterruptRoutine();

void TimerInterruptHandler();
void initClock();
void initTimer();


void disableWatchdog(void)
{
} 

void targetEnableInterrupts()
{ 
  NVIC_ISER1 |= 0xFFFF;
}


void initTimer()
{
  //Set DPLL as clock source and divide frequency by 2
  GENCTRL1 = 0x00020107;
  while ((SYNCBUSY_GEN & (0x1 << SYNC_GENCTRL1)) == 1);
  
  //Enable Peripheral channel
  PCHCTRL15 |= (0x1 << PCHCTRL_GEN);
  PCHCTRL15 |= (0x1 << PCHCTRL_CHEN);
  
  TC2_INTENSET |= (0x1 << TC2_INTENSET_OVF);  //Enable interrupts
  TC2_CTRLA |= (0x5 << TC2_CTRLA_PRESCALER);  //Set prescaler to divide by 64
  TC2_CTRLA |= (0x1 << TC2_CTRLA_MODE);       //Set TC2 to 8-bit mode
  TC2_PER = 0xFA;                             //Timer set to 1 ms
  TC2_CTRLA |= (0x1 << TC2_CTRLA_ENABLE);     //Enable Timer
  while ((TC2_SYNCBUSY & (0x1 << TC2_SYNC_ENABLE)) == 1);
}

void initClock()
{
  //Set to Performance Level 2 to enable max frequencies
  PM_PLCFG |= 0x2;
  
  //Configure XOSC32
  OSCCTRL32_XOSCCTRL32 |= (0x4 << OSCCTRL32_XOSCCTRL32_STARTUP);
  OSCCTRL32_XOSCCTRL32 &= ~(0x1 << OSCCTRL32_XOSCCTRL32_ONDEMAND);
  OSCCTRL32_XOSCCTRL32 |= (0x1 << OSCCTRL32_XOSCCTRL32_EN32K);
  OSCCTRL32_XOSCCTRL32 |= (0x1 << OSCCTRL32_XOSCCTRL32_XTALEN);
  OSCCTRL32_XOSCCTRL32 |= (0x1 << OSCCTRL32_XOSCCTRL32_ENABLE);
  
  while (0 == ((OSCCTRL32_XOSCCTRL32_STATUS >> STATUS_XOSC32KRDY) & 0x1));
  
  //XOSC32 is clock reference
  OSCCTRL_DPLLRATIO |= 0x3CF;                                   //Set clock to 32MHz
  while ((OSCCTRL_DPLLSYNCBUSY & (0x1 << SYNC_DPLLRATIO)) == 1);  
  
  OSCCTRL_DPLLCTRLA &= ~(0x1 << OSCCTRL_DPLLCTRLA_ONDEMAND);  //DPLL always on
  OSCCTRL_DPLLCTRLA |= (0x1 << OSCCTRL_DPLLCTRLA_ENABLE);     //Enables DPLL
  
  while ((OSCCTRL_DPLLSYNCBUSY & (0x1 << SYNC_DPLLENABLE)) == 1);
  while ((0 == ((OSCCTRL_DPLLSTATUS >> DPLLSTATUS_LOCK) & 0x1)) || 
        (0 == ((OSCCTRL_DPLLSTATUS >> DPLLSTATUS_CKRDY) & 0x1)));
  
  GENCTRL0 = 0x00000107;                                      //Set DPLL as source   
  while ((SYNCBUSY_GEN & (0x1 << SYNC_GENCTRL0)) == 1);
}


void targetInit(void)
{
  #ifndef EMPTY_TARGET_INIT

  initClock();
  initTimer();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}

// Enable interrupt and call InterruptRoutine()
void TimerInterruptHandler()
{
  InterruptRoutine();
  TC2_INTFLAG |= 0x31;
}
