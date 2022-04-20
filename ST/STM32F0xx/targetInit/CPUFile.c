#include "STM32F051.h"


void initTimer()
{
	RCC_APB1ENR |= (1 << TIM2EN); // enable timer TIM2, clock is 48 MHz
	TIM2_CR1 |= (1 << OPM);		  // Counter stops counting at the next update event (clearing the bit CEN)
	TIM2_DIER |= (1 << CC1IE);	// Capture/Compare 1 interrupt enable
	TIM2_ARR = 48000;			  // set counter when interrupt triggers
}

void initNVIC(void)
{
	INT_0_31_SET_EN |= (1 << TIM2_IRQ); //enable interrupt TIM2
}


void CPU_Init()
{
	//RCC_APB1ENR |= (1 << PWREN); //Enable power interface - PWR
	//PWR_CR = 0x00000800;		 //set power range to 1 - necessary for 32 MHz operation

	RCC_CR &= ~(1 << PLLON); // Disable the PLL by setting PLLON to 0
	while (RCC_CR & (1 << PLLRDY))
		; //Wait until PLLRDY is cleared. The PLL is now fully stopped

	RCC_CR |= (1 << HSION); // Enable the HSE by setting HSION to 1
	while (!(RCC_CR & (1 << HSIRDY)))
		; //Wait until HSIRDY is set. The HSI16 is now fully functional

	// We use internal 8 MHz oscillator but is divided by 1 before entering PLL
	int value = 0;
	value |= (0 << PLLSRC); // PLL source is HSI/2
	value |= (10 << PLLMUL); // Multiply 4 MHz by 12
	value |= (0 << PPRE1);  // Set APB1 divider to 1
	value |= (0 << HPRE);   // Set APB1 divider to 1
	RCC_CFGR = value;

	RCC_CR |= (1 << PLLON); // Enable the PLL by setting PLLON to 1
	while (!(RCC_CR & (1 << PLLRDY)))
		; //Wait until PLLRDY is set. The PLL is now fully functional

	// Set flash latency for 48 MHz CPU clock
	FLASH_ACR = (1 << LATENCY);

	RCC_CFGR |= (2 << SW); // Set PLL as system clock
}

void ITMInit(void)
{
	memW32(ITM_LOCK_ACCESS_REGISTER) = 0xC5ACCE55;  //unlock write access to ITM
	memW32(ITM_TRACE_ENABLE_REGISTER) = 0xFFFFFFFF; //enable stimulus port 0-31
	memW32(ITM_TRACE_PRIVILEGE_REGISTER) = 0x1;		//set privilege
}


void targetEnableInterrupts()
{
	TIM2_CR1 |= (1 << TIM2EN); //enable counter
}


void targetInit()
{
  #ifndef EMPTY_TARGET_INIT

	CPU_Init();
	initTimer();
	initNVIC();
	ITMInit();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}


void disableWatchdog()
{
}
