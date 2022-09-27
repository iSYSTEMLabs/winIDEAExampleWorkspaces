#ifndef __SYSTEM_XMC4500_H
#define __SYSTEM_XMC4500_H

#include <stdint.h>
				
#define	CLOCK_CRYSTAL_FREQUENCY	12000000	
				
/* OSC_HP setup parameters */				
#define	OSC_HP_MODE	0		
#define OSCHPWDGDIV 2
				
/* MAIN PLL setup parameters */				
//#define 	PLL_NDIV	79  //240 MHz
#define 	PLL_NDIV	39  //120 MHz
#define 	PLL_K2DIV	1
#define 	PLL_PDIV	1

#endif


/*****************/
/* SCU Registers */
/*****************/

// PLL Registers
#define SCU_PLL_PLLSTAT				*((unsigned long*)0x50004710)
#define SCU_PLL_PLLCON0				*((unsigned long*)0x50004714)
#define SCU_PLL_PLLCON1				*((unsigned long*)0x50004718)
#define SCU_PLL_PLLCON2				*((unsigned long*)0x5000471C)

// PLL Bit fields
#define   SCU_PLL_PLLSTAT_PLLLV_Msk  		(0x00000001U  << 7U)
#define   SCU_PLL_PLLSTAT_PLLHV_Msk  		(0x00000001U  << 8U)
#define   SCU_PLL_PLLSTAT_PLLSP_Msk  		(0x00000001U  << 9U)
#define   SCU_PLL_PLLCON0_VCOPWD_Msk  		(0x00000001U  << 1U)
#define   SCU_PLL_PLLCON0_PLLPWD_Msk  		(0x00000001U  << 16U)
#define   SCU_PLL_PLLCON0_OSCRES_Msk  		(0x00000001U  << 17U)
#define   SCU_PLL_PLLCON2_PINSEL_Msk  		(0x00000001U  << 0U)
#define   SCU_PLL_PLLCON0_VCOBYP_Msk  		(0x00000001U  << 0U)
#define   SCU_PLL_PLLCON0_FINDIS_Msk  		(0x00000001U  << 4U)
#define   SCU_PLL_PLLCON0_OSCDISCDIS_Msk  	(0x00000001U  << 6U)
#define   SCU_PLL_PLLCON0_FINDIS_Msk  		(0x00000001U  << 4U)
#define   SCU_PLL_PLLCON0_RESLD_Msk  		(0x00000001U  << 18U)
#define   SCU_PLL_PLLSTAT_VCOLOCK_Msk  		(0x00000001U  << 2U)
#define   SCU_PLL_PLLCON0_VCOBYP_Msk  		(0x00000001U  << 0U)

// OSC Registers
#define SCU_OSC_OSCHPCTRL			*((unsigned long*)0x50004704)		

// CLK Registers
#define SCU_CLK_SYSCLKCR			*((unsigned long*)0x5000460C)		
#define SCU_CLK_CPUCLKCR			*((unsigned long*)0x50004610)		
#define SCU_CLK_PBCLKCR				*((unsigned long*)0x50004614)		
#define SCU_CLK_CCUCLKCR			*((unsigned long*)0x50004620)

/*****************/
/* PPB Registers */
/*****************/
#define PPB_SYST_CSR				*((unsigned long*)0xE000E010)
#define PPB_SYST_RVR				*((unsigned long*)0xE000E014)		
#define PPB_SYST_CVR				*((unsigned long*)0xE000E018)		
#define PPB_NVIC_ISER0			*((unsigned long*)0xE000E100)		
#define PPB_NVIC_ISCER0			*((unsigned long*)0xE000E180)		
#define PPB_NVIC_ICPR0			*((unsigned long*)0xE000E280)	
#define PPB_NVIC_ICSR				*((unsigned long*)0xE000ED04)	
#define PPB_NVIC_SHPR3			*((unsigned long*)0xE000ED20)	

/*****************/
/* VTOR Register */
/*****************/	
#define VTOR						*((unsigned long*)0xE000ED08)

/******************/
/* GPIO Registers */
/******************/
#define PORT0_OUT					*((unsigned long*)0x48028000)
#define PORT0_OMR					*((unsigned long*)0x48028004)
#define PORT0_IOCR4					*((unsigned long*)0x48028010)

#define PORT3_OUT				 	*((unsigned long*)0x48028300)
#define PORT3_OMR				 	*((unsigned long*)0x48028304)
#define PORT3_IOCR8				 	*((unsigned long*)0x48028314)


#ifndef __CPUTest_h__
#define __CPUTest_h__

void CPU_Init(void);
void CPU_Pointers(void);
void CPU_Recursion(void);

#endif
		