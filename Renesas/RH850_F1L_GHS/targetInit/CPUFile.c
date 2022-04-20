#include "dr7f7010352afp_0.h"
#include "dr7f7010352afp_irq.h"
#include "RH850.h"
#include "lowPowerMode.h"


unsigned char gotoHaltLowPowerMode     = 0;
unsigned char gotoStopLowPowerMode     = 0;
unsigned char gotoDeepStopLowPowerMode = 0;

void InterruptRoutine();
void targetEnterAndExitLowPowerMode();


void CPU_Init(void)
{
  MOSCC=0x05;           // Set MainOSC gain (8MHz < MOSC frequency =< 16MHz)
  MOSCST=0xFFFF;        // Set MainOSC stabilization time to max (8,19 ms)
  PROTCMD0=0xA5;        // Trigger Enable (protected write)
  MOSCE=0x01;                                                                    
  MOSCE=(~0x01);
  MOSCE=0x01;                                                                    
  while (MOSCS != 0x7); // Wait for stable MainOSC
  
  // Prepare PLL                                                               
  PLLC=0x00000a27;      // 16 MHz MainOSC -> 80MHz PLL
  PROTCMD1=0xA5;        // Enable PLL (protected write)
  PLLE=0x01;
  PLLE=(~0x01);
  PLLE=0x01;
  while(PLLS!=0x07);    // Wait for stable PLL
                                                                                   
  // CPU Clock divider = 1                                                     
  PROTCMD1=0xA5;
  CKSC_CPUCLKD_CTL=0x01;
  CKSC_CPUCLKD_CTL=(~0x01);
  CKSC_CPUCLKD_CTL=0x01;
  while(CKSC_CPUCLKD_ACT!=0x01);
  
  // PLL -> CPU Clock                                                         
  PROTCMD1=0xA5; 
  CKSC_CPUCLKS_CTL=0x03;
  CKSC_CPUCLKS_CTL=(~0x03);
  CKSC_CPUCLKS_CTL=0x03;
  while(CKSC_CPUCLKS_ACT!=0x03);
  
  //IO Setup
  PM0 = 0x0;
  P0 = 0xFFFF;
}

void InitOSTM()
{             
  /* Start OS Timer */
  OSTM0CMP=0x00009C00;  // load compare value
  OSTM0CTL=0x1;           // select interrupt mode
  ICOSTM0=0x01;     // disable interrupt masking
}

__interrupt void TimerInterruptHandler(void)
{
  #pragma ghs interrupt
  __DI();
  InterruptRoutine();
  __EI();
}

__interrupt void RtcTimerInterruptHandler(void)
{
  #pragma ghs interrupt
  __DI();
  /*Disable RTCA timer*/
  RTCA0CTL0 &= ~(0x01 << RTCA0CE);
  /*Disable RTCA 1s interrupt*/
  ICRTCA01S = 0x87;
  onExitLowPowerModeTestBreakpoint(FROM_INTERRUPT);
  __EI();
}

void targetEnableInterrupts(void)
{
  OSTM0TS=0x1;            // start trigger
  __EI();
}


void enableOscInStopMode()
{
  /*Set main osc to continue to run in stop mode*/
  MOSCSTPM |= 0x01;
  /*Enable internal HS oscillator in stop mode (needed for standby module)*/
  ROSCSTPM |= 0x01;
}

void setClockToIntOsc()
{
  enableOscInStopMode();
  /*Set main osc as clock source. This is needed since RTCA register run off
  the CPU clock and PLLs are disabled during stop mode*/   
  while(CKSC_CPUCLKS_ACT != 0x02)
  {
    PROTCMD1=0xA5; 
    CKSC_CPUCLKS_CTL=0x02;
    CKSC_CPUCLKS_CTL=(~0x02);
    CKSC_CPUCLKS_CTL=0x02;
  }
}

void enableRtcOscillator()
{
  /*Wait for the oscillator to settle. For some reason
    this takes multiple write to the protected register*/
  while(!SOSCS)
  {
    /*Disable write protection*/
    PROTCMD0=0xA5; 
    /*Enable oscillator (write protection way, check manual)*/
    SOSCE = (0x01 << SOSCENTRG);
    SOSCE = ~(0x01 << SOSCENTRG);
    SOSCE = (0x01 << SOSCENTRG);
  }
}

void setRtcOscForRTCA()
{
  /*Set RTCA clock source*/
  while(!CKSC_ARTCAS_CTL)
  {
    /*Disable write protection*/
    PROTCMD0=0xA5; 
    /*Select RTC OSC as source for RTCA(write protection way, check manual)*/
    CKSC_ARTCAS_CTL = (0x01 << ARTCASCSID);
    CKSC_ARTCAS_CTL = ~(0x01 << ARTCASCSID);
    CKSC_ARTCAS_CTL = (0x01 << ARTCASCSID);
  }
  
  /*Set RTCA clock divider*/
  while(!CKSC_ARTCAD_CTL)
  {
    /*Disable write protection*/
    PROTCMD0=0xA5; 
    /*Set RTCA clock divider to 1(write protection way, check manual)*/
    CKSC_ARTCAD_CTL = (0x01 << ARTCADCSID);
    CKSC_ARTCAD_CTL = ~(0x01 << ARTCADCSID);
    CKSC_ARTCAD_CTL = (0x01 << ARTCADCSID);
  }
  /*Wait until RTC OSC is set as RTCA source. RTC osc takes same time to settle*/
  while(CKSC_ARTCAS_ACT != 0x01);
  /*Set RTCA to keep running in standby mode*/
  CKSC_ARTCAD_STPM |= 0x01;
}

void initRTCA_Wakeup()
{
  /* Enables real time clock counter for wakeup interrupt */
  enableRtcOscillator();
  setRtcOscForRTCA();
  
  /* Enable 1s interrupt*/
  RTCA0CTL1 |= (0x01 << RTCA0EN1S);
  /* Set interrupt request for every second*/
  RTCA0CTL1 |= (0x03 << RTCA0CT);
}

void startRTC_Timer()
{
  /*Enable interrupt mask with priority 0*/
  ICRTCA01S = 0x00;
  /*Set the timer start bit*/
  RTCA0CTL0 |= (0x01 << RTCA0CE);
  /*Wait for timer to start*/
  while(!(RTCA0CTL0 & (1 << 6)));
}

void enableInterruptWakeup()
{
  /*Enable RTCA 1s wakeup interrupt*/
  WUFMSK0  &= ~(0x01 << WUF0_28);
  WUFMSK20 &= ~(0x01 << WUF20_10);
}

void cleanWakeupInterrupts()
{
  /*Disable RTCA timer*/
  RTCA0CTL0 &= ~(0x01 << RTCA0CE);
  /*Disable RTCA 1s interrupt*/
  ICRTCA01S = 0x87;
  
  /*Clean all wakeup interrupts*/
  WUFC0  |= (0x01 << WUF0_28);
  WUFC20 |= (0x01 << WUF20_10);
}

void enterAndExitHaltMode()
{
  __asm("halt");
}

void enterAndExitStopMode()
{
  while(!STBC0STPT)
  {
    /*Disable write protection*/
    PROTCMD0=0xA5; 
    /*Enable deep sleep mode (write protection way, check manual)*/
    STBC0STPT = (1 << STBC0STPTRG);
    STBC0STPT = ~(1 << STBC0STPTRG);
    STBC0STPT = (1 << STBC0STPTRG);
  }
}

/*Note as per the datasheet CPU will return from deep sleep mode
  at the reset vector*/
void startAndExitDeepStopMode()
{
  while(!STBC0PSC)
  {
    /*Disable write protection*/
    PROTCMD0=0xA5; 
    /*Enable deep sleep mode (write protection way, check manual)*/
    STBC0PSC = (1 << STBC0DISTRG);
    STBC0PSC = ~(1 << STBC0DISTRG);
    STBC0PSC = (1 << STBC0DISTRG);
  }
}

void targetEnterAndExitLowPowerMode()
{
  /*If interrupt happend go to low power mode handler.
  This should happen only after deep stop reset.*/
  if(WUF0)
  {
    cleanWakeupInterrupts();
    onExitLowPowerModeTestBreakpoint(FROM_RESET);
  }
  
  /*Setup low power mode only if any of the modes is setup.
    This is because to enable low power mode the CPU clock has to be
    modified and PLL disabled.*/
  if(gotoHaltLowPowerMode | gotoStopLowPowerMode | gotoDeepStopLowPowerMode)
  {
    setClockToIntOsc();
    initRTCA_Wakeup(); 
    enableInterruptWakeup();
    /*Enable interrupts*/
    __EI();
    
    if(gotoHaltLowPowerMode)
    {
      startRTC_Timer();
      enterAndExitHaltMode();
      cleanWakeupInterrupts();
    }
    
    if(gotoStopLowPowerMode)
    {
      startRTC_Timer();
      enterAndExitStopMode();
      cleanWakeupInterrupts();
    }
    
    if(gotoDeepStopLowPowerMode)
    {
      startRTC_Timer();
      startAndExitDeepStopMode();
      cleanWakeupInterrupts();
    }
  }
  /*Device also has option for cyclic run and cyclic stop
    where only the CPU runs with RLIN3 with all other modules disabled.
    This is currently not implemented since it would be hard to test.*/
}

void targetInit(void)
{
  #ifndef EMPTY_TARGET_INIT

  CPU_Init();
  InitOSTM();
  targetEnterAndExitLowPowerMode();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}

void disableWatchdog()
{
}
