#include "LPC54114.h"
#include "chip.h"
#include "gpio_5411x.h"
#include "clock_5411x.h"
#include "rtc_5411x.h"


#define TIMER_INTERVAL 1  // [ms]


#define CPUCTRL_SETMASK     (0xc0c40000)
#define MC_CM0_CLK_ENABLE       (1 << 3)	/*!< Cortex-M0+ clock enable */
#define MC_CM0_RESET_ENABLE     (1 << 5)	/*!< Cortex-M0+ reset */

extern unsigned long _estackB;
extern unsigned long _cm0_boot;
extern unsigned long _cm0_stack;

void initTimer(){
  unsigned long timerBaseClock;
  
  Chip_TIMER_Init(LPC_TIMER0);  // init timer  
  Chip_TIMER_PrescaleSet(LPC_TIMER0, 0);  // Setup prescale value on Timer 0 to PCLK
  
  Chip_TIMER_Reset(LPC_TIMER0); // Reset timers
  
  Chip_TIMER_MatchEnableInt(LPC_TIMER0, 1); // Enable timer to generate interrupts when time matches
  timerBaseClock = Chip_Clock_GetAsyncSyscon_ClockRate(); //Get rate of timer base clock
  Chip_TIMER_SetMatch(LPC_TIMER0, 1, (timerBaseClock / (TIMER_INTERVAL * 1000) ));
  Chip_TIMER_ResetOnMatchEnable(LPC_TIMER0, 1); //Setup both timers to restart when match occurs
  
  Chip_TIMER_Enable(LPC_TIMER0); //Start both timers
  
  NVIC_ClearPendingIRQ(CT32B0_IRQn); // Clear timers of any pending interrupts
  // NVIC_EnableIRQ(CT32B0_IRQn); //Enable both timer interrupts
  
}

void resetAll(void){
  // reset all peripheral to avoid power-up fails
  Chip_Clock_DisablePeriphClock(SYSCON_CLOCK_INPUTMUX);
  Chip_Clock_DisablePeriphClock(SYSCON_CLOCK_IOCON);
  
  Chip_Clock_DisablePeriphClock(SYSCON_CLOCK_GPIO0);
  Chip_Clock_DisablePeriphClock(SYSCON_CLOCK_GPIO1);
  
  Chip_SYSCON_PowerDown(SYSCON_PDRUNCFG_PD_SYS_PLL);
  
  Chip_SYSCON_Enable_ASYNC_Syscon(false);
}

void enablePeriphClk(void){
  Chip_SYSCON_PowerUp(SYSCON_PDRUNCFG_PD_SRAM0 | SYSCON_PDRUNCFG_PD_SRAM1 | SYSCON_PDRUNCFG_PD_SRAM2);
  Chip_Clock_EnablePeriphClock(SYSCON_CLOCK_SRAM1);
  Chip_Clock_EnablePeriphClock(SYSCON_CLOCK_SRAM2);
  
  
  Chip_Clock_EnablePeriphClock(SYSCON_CLOCK_INPUTMUX);
  Chip_Clock_EnablePeriphClock(SYSCON_CLOCK_IOCON);
  
  Chip_Clock_EnablePeriphClock(SYSCON_CLOCK_GPIO0);
  Chip_Clock_EnablePeriphClock(SYSCON_CLOCK_GPIO1);
  
  // Turn on Async Syscon for Timers
	Chip_SYSCON_Enable_ASYNC_Syscon(true);
	Chip_Clock_SetAsyncSysconClockSource(SYSCON_ASYNC_MAINCLK);
}


// 100MHz from internal 12MHz oscillator (FRO)
  //  Note: PLL can be driven from external 32kHz (RTC) onboard oscillator, but CPU reaches HardFault() at high frequencies (85 - 100MHz)
void initClock(void)
{
  unsigned int rate = 100000000; // MHz
  
  PLL_CONFIG_T pllConfig;
	PLL_SETUP_T pllSetup;
	PLL_ERROR_T pllError;

	Chip_Clock_SetMainClockSource(SYSCON_MAINCLKSRC_FRO12MHZ);  // Switch to FRO12 while adjusting the PLL.
	// Power down PLL to change the PLL divider ratio
	//Chip_SYSCON_PowerDown(SYSCON_PDRUNCFG_PD_SYS_PLL);  // pll is already disabled in resetAll() 

	// Select the PLL input
	Chip_Clock_SetSystemPLLSource(SYSCON_PLLCLKSRC_FRO12MHZ);
	pllConfig.desiredRate = rate; // Setup PLL configuration
	pllConfig.InputRate = 0; // Not used unless PLL_CONFIGFLAG_USEINRATE flag is used
	pllConfig.flags = PLL_CONFIGFLAG_FORCENOFRACT; // Force non-fractional mode

	pllError = Chip_Clock_SetupPLLData(&pllConfig, &pllSetup);
	if (pllError != PLL_ERROR_SUCCESS) {
		return;
	}
  // If using WAITLOCK, powerup is implied, but we set the flag here for consistency
  pllSetup.flags = PLL_SETUPFLAG_POWERUP | PLL_SETUPFLAG_WAITLOCK | PLL_SETUPFLAG_ADGVOLT;

	pllError = Chip_Clock_SetupSystemPLLPrec(&pllSetup);
	if (pllError != PLL_ERROR_SUCCESS) {
		return;
	}

	// Set main clock source to the system PLL
	Chip_Clock_SetMainClockSource(SYSCON_MAINCLKSRC_PLLOUT);
} 

// CLK OUT pin PIO0_21 - Connector J2, pin 2 on LPCXpresso5411x board
void initClkOutPin(void)
{
	Chip_IOCON_PinMuxSet(LPC_IOCON, 0, 21, (IOCON_FUNC1 | IOCON_MODE_INACT | IOCON_DIGITAL_EN));
  
  //Chip_RTC_PowerUp(LPC_RTC);
	//Chip_Clock_EnableRTCOsc();
  //Chip_Clock_SetCLKOUTSource(SYSCON_CLKOUTSRC_RTC, 10);  // no divider

  Chip_Clock_SetCLKOUTSource(SYSCON_CLKOUTSRC_MAINCLK, 10);  // no divider
  
}


void enableSecondaryCore(void){
  /*
  Chip_CPU_CM0Boot(bootAdd, stackAdd);
  */  
  unsigned int temp;
	/* Setup M0+ stack and M0+ boot location */
	LPC_SYSCON->CPSTACK = _cm0_stack;
	LPC_SYSCON->CPBOOT =  _cm0_boot;
	temp = LPC_SYSCON->CPUCTRL | CPUCTRL_SETMASK | MC_CM0_CLK_ENABLE;
	
	LPC_SYSCON->CPUCTRL = temp | MC_CM0_RESET_ENABLE; // Enable M0+ clocking with reset asserted
	LPC_SYSCON->CPUCTRL = temp; // De-assert reset on M0+
}


void targetEnableInterrupts()
{
  NVIC_EnableIRQ(CT32B0_IRQn); //Enable timer interrupt
  
}


void targetInit(void)
{

  unsigned long wait = 1000000;
  LPC_SYSCON->CPUCTRL = LPC_SYSCON->CPUCTRL | MC_CM0_RESET_ENABLE; // Held M0+ core in reset
  resetAll(); // disable PLL, reset GPIO, re-set clocking to default
  while(wait){  // wait until debug session is established upon reset
    wait--;
  }
  enablePeriphClk();
  fpuInit();           
  initClkOutPin();
  initClock();
  initTimer();

  enableSecondaryCore();
  targetEnableInterrupts();

}


/**
 * @brief	Handle interrupt from Timer 0
 * @return	Nothing
 */


void disableWatchdog()
{
}
