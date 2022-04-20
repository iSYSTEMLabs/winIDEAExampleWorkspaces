#ifndef __S32K146__
#define __S32K146__
/*
  This file defines interface for target specific code.
*/

//rt SRamPerformances: readInBps=171771, writeInBps=178428

/*
	ITM registers and setup
*/
#define ITM_BASE_ADDRESS_32 (*(volatile unsigned int*)0xE0000000)
#define ITM_BASE_ADDRESS_16 (*(volatile unsigned short*)0xE0000000)
#define ITM_BASE_ADDRESS_8 (*(volatile unsigned char*)0xE0000000)
#define ITM_LAR (*(volatile unsigned int*)0xE0000FB0)
#define ITM_TER (*(volatile unsigned int*)0xE0000E00)
#define ITM_TPR (*(volatile unsigned int*)0xE0000E40) 

/*
   Watchdog registers
*/
#define WDOG_CNT (*(unsigned volatile int*)0x40052004)
#define WDOG_CS (*(unsigned volatile int*)0x40052000)
#define WDOG_CS_UPDATE 5
#define WDOG_CS_EN 7
#define WDOG_CS_RCS 10
#define WDOG_CS_ULK 11
#define WDOG_TOVAL (*(unsigned volatile int*)0x40052008)

/*
   GPIO registers
*/
#define PCC_PORTA (*(unsigned volatile int*)0x40065124)
#define PCC_PORTA_CGC 30
#define PORTA_PCR13 (*(unsigned volatile int*)0x40049034)
#define PORTA_PCR14 (*(unsigned volatile int*)0x40049038)
                                                         
#define GPIOA_PDDR (*(unsigned volatile int*)0x400FF014)
#define GPIOA_PTOR (*(unsigned volatile int*)0x400FF00C)  // toggle
#define GPIOA_PSOR (*(unsigned volatile int*)0x400FF004)  // set            
#define GPIOA_PCOR (*(unsigned volatile int*)0x400FF008)  // clear

#define GPIO_INTERRUPT_PIN 14
#define GPIO_RESET_PIN 13

/*
   Timer registers
*/
#define PCC_LPIT (*(unsigned volatile int*)0x400650DC)
#define PCC_LPIT_PCS 24
#define PCC_LPIT_CGC 30
#define LPIT0_MCR (*(unsigned volatile int*)0x40037008)
#define LPIT0_MCR_M_CEN 0
#define LPIT0_MSR (*(unsigned volatile int*)0x4003700C)
#define LPIT0_MSR_TIF0 0
#define LPIT0_TCTRL0 (*(unsigned volatile int*)0x40037028)
#define LPIT0_TCTRL0_T_EN 0
#define LPIT0_TVAL (*(unsigned volatile int*)0x40037020)
#define LPIT0_MIER (*(unsigned volatile int*)0x40037010)
#define LPIT0_MIER_TIE0 0

/*
	Clock registers
*/
#define SCG_SOSCCSR (*(unsigned volatile int*)0x40064100)
#define SCG_SOSCCSR_SOSCEN 0
#define SCG_SOSCCSR_SOSCVLD 24
#define SCG_SOSCCFG (*(unsigned volatile int*)0x40064108)
#define SCG_SOSCCFG_RANGE 4
#define SCG_SOSCCFG_EREFS 2
#define SCG_SOSCCFG_HGO 3
#define SCG_SPLLCFG (*(unsigned volatile int*)0x40064608)
#define SCG_SPLLCFG_MULT 16
#define SCG_SPLLCFG_PREDIV 8
#define SCG_SPLLDIV (*(unsigned volatile int*)0x40064604)
#define SCG_SPLLDIV_SPLLDIV1 0 
#define SCG_SPLLDIV_SPLLDIV2 8
#define SCG_SPLLCSR (*(unsigned volatile int*)0x40064600)
#define SCG_SPLLCSR_SPLLEN 0
#define SCG_SPLLCSR_SPLLVLD 24
#define SCG_RCCR (*(unsigned volatile int*)0x40064014)
#define SCG_RCCR_DIVCORE 16
#define SCG_RCCR_DIVBUS 4
#define SCG_RCCR_DIVSLOW 0
#define SCG_RCCR_SCS 24
#define SCG_CSR (*(unsigned volatile int*)0x40064010)
#define SIM_CLKDIV4 (*(unsigned volatile int*)0x40048068)
#define SIM_CLKDIV4_TRACEDIVEN 28
#define SIM_CLKDIV4_TRACEDIV 1
#define SIM_CLKDIV4_TRACEFRAC 0

/*
	Interrupt registers
*/
#define INT_32_63_SET_EN (*(unsigned volatile int*)0xE000E104)
#define INT_32_63_SET_EN_LPIT0 16

#endif //__S32K146__