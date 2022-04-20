#define mem(addr) (*(unsigned char volatile *)(addr))
#define memw(addr) (*(unsigned short volatile *)(addr))
#define meml(addr) (*(unsigned long volatile *)(addr))
#define PC1 0xF883FE08
#define PC2 0xF885FE08
#define DBGSR1 0xF883FD00
#define DBGSR2 0xF885FD00
#define DBGSR_MASK_HALT 0xFFFFFFF9
#define DBGSR_SET_RUN   0x00000004
#define DBGSR_SUSPEND   0x00000010

#define P00_IOCR0  	(*(unsigned long volatile *)(0xF003A010))
#define P00_OUT 	  (*(unsigned char volatile *)(0xF003A000))
#define SRC_STM2SR0	(*(unsigned long volatile *)(0xF00384A0))
#define SRC_STM2SR1 (*(unsigned long volatile *)(0xE00384A4))

#define SCU_PLLCON1 (*(unsigned int volatile *)(0xF003601C))
#define SCU_PLLSTAT (*(unsigned int volatile *)(0xF0036014))
#define SCU_PLLCON0 (*(unsigned int volatile *)(0xF0036018))
#define SCU_PLLERAYSTAT (*(unsigned int volatile *)(0xF0036024))
#define SCU_CCUCON0 (*(unsigned int volatile *)(0xF0036030))
#define SCU_WDTSCON0 (*(unsigned int volatile *)(0xF00360F0))
#define SCU_WDTSCON1 (*(unsigned int volatile *)(0xF00360F4))
#define SCU_CCUCON1 (*(unsigned int volatile *)(0xF0036034))

#define HSCT_CONFIGPHY (*(unsigned int volatile *)(0xF0090030))
#define SCU_OSCCON (*(unsigned int volatile *)(0xF0036010))
#define SCU_OSCCON_OSCVAL_BIT 16
#define HSCT_CONFIGPHY_OSCCLKEN_BIT 28
#define HSCT_CONFIGPHY_PLLPON_BIT 28
#define SCU_CCUCON1_INSEL_BIT 28  
#define SCU_CCUCON0_CLKSEL_BIT 28 
#define SCU_PLLERAYSTAT_PWDSTAT_BIT 1
#define SCU_WDTSCON0_ENDINIT_BIT 0
#define SCU_WDTSCON0_LCK_BIT 1
#define SCU_WDTSCON1_DR_BIT 3
#define SCU_WDTSCON1_IR0_BIT 2
#define SCU_WDTSCON1_IR1_BIT 5
#define SCU_PLLSTAT_VCOBYST_BIT 0
#define SCU_PLLCON0_VCOBYP_BIT 0
#define SCU_PLLSTAT_VCOLOCK_BIT 2
#define SCU_PLLCON0_SETFINDIS_BIT 4
#define SCU_PLLCON0_CLRFINDIS_BIT 5

#define SCU_WDTCPU1CON0 (*(unsigned int volatile *)(0xf003610c))
#define SCU_WDTCPU1CON1 (*(unsigned int volatile *)(0xf0036110))
#define SCU_WDTCPU2CON0 (*(unsigned int volatile *)(0xf0036118))
#define SCU_WDTCPU2CON1 (*(unsigned int volatile *)(0xf003611c))

#define SCU_WDTCPU1CON0_ENDINIT_BIT 0
#define SCU_WDTCPU1CON0_LCK_BIT 1
#define SCU_WDTCPU2CON0_ENDINIT_BIT 0
#define SCU_WDTCPU2CON0_LCK_BIT 1

