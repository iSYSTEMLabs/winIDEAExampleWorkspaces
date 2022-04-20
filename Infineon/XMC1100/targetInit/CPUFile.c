#include "XMC1200.h" 
#include "System_XMC1200.h"


void CPU_Init()
{
  SCU_GENERAL->PASSWD = 0x000000C0UL;
	SCU_CLK->CLKCR = 0x3FF00400UL; // 8 MHz MCLK, 8 MHz PCLK
	while((SCU_CLK->CLKCR)&0x40000000UL);	// wait for VDDC to stabilize
	SCU_GENERAL->PASSWD = 0x000000C3UL;
}

void RTC_Init()
{                                
  
  SCU_GENERAL->PASSWD = 0x000000C0UL;
	SCU_CLK->CGATCLR0 = SCU_CLK_CGATCLR0_RTC_Msk;
	SCU_GENERAL->PASSWD = 0x000000C3UL;
  RTC->TIM0 |= RTC_TIM0_SE_Msk;  
  RTC->MSKSR |= RTC_MSKSR_MPSE_Msk; // interrupt pending in ICSR, we're on the right track   
  RTC->CTR |= RTC_CTR_ENB_Msk;
  

}

void Enable_RTC_INTERRUPT()
{
  //NVIC_SetPriority(SVCall_IRQn, 0x02);
  NVIC_SetPriority(SCU_1_IRQn, 0x00);	//This CMSIS function configures node 1 to priority level 0 (highes Priority)      	
  NVIC_ClearPendingIRQ(SCU_1_IRQn);	//This function clears node 1 pending status
  NVIC_EnableIRQ(SCU_1_IRQn);	//This function enables node 1 for interrupt request generation
  
}


void SysTickHandler()
{
}

void SysTick_Init()
{
  NVIC_ClearPendingIRQ(SysTick_IRQn);	//This function clears node 1 pending status
  NVIC_SetPriority(SysTick_IRQn, 0x00);
  NVIC_EnableIRQ(SysTick_IRQn);
  PPB->SYST_CSR |= PPB_SYST_CSR_TICKINT_Msk;
  PPB->SYST_RVR = 0x0000FFFF; 
  PPB->SYST_CVR |= PPB_SYST_CVR_CURRENT_Msk;
  PPB->SYST_CSR |= PPB_SYST_CSR_ENABLE_Msk;
}


void targetInit()
{   

  CPU_Init();
  //SysTick_Init();
  //__enable_irq();
  //Enable_RTC_INTERRUPT();
  //RTC_Init();  
  //__asm("WFI");

}


void disableWatchdog()
{
}
