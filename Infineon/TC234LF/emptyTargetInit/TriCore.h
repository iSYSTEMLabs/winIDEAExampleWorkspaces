#ifndef __TriCore_h__
#define __TriCore_h__
void enableSecondCore(void);
#define STM_INT0 0x00000005 // Service Request Number for STM

enum ESRCcontrolBits
{
  SRC_SETR    = 0x00008000, // Set Service Request
  SRC_SRE     = 0x00001000, // Service Request Enable
  SRC_TOS_PCP = 0x00000400, // Type of Service: PCP
  
  PCP_SPRN    = 1,
};
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
#define SRC_STM0SR0	(*(unsigned long volatile *)(0xF0038490))

#define SCU_PLLCON1 (*(unsigned int volatile *)(0xF003601C))
#define SCU_PLLSTAT (*(unsigned int volatile *)(0xF0036014))
#define SCU_PLLCON0 (*(unsigned int volatile *)(0xF0036018))
#define SCU_PLLERAYSTAT (*(unsigned int volatile *)(0xF0036024))
#define SCU_CCUCON0 (*(unsigned int volatile *)(0xF0036030))
#define SCU_CCUCON1 (*(unsigned int volatile *)(0xF0036034))

#define HSCT_CONFIGPHY (*(unsigned int volatile *)(0xF0090030))
#define SCU_OSCCON (*(unsigned int volatile *)(0xF0036010))
#define SCU_OSCCON_OSCVAL_BIT 16
#define HSCT_CONFIGPHY_OSCCLKEN_BIT 28
#define HSCT_CONFIGPHY_PLLPON_BIT 28
#define SCU_CCUCON1_INSEL_BIT 28  
#define SCU_CCUCON0_CLKSEL_BIT 28 
#define SCU_PLLERAYSTAT_PWDSTAT_BIT 1
#define SCU_PLLSTAT_VCOBYST_BIT 0
#define SCU_PLLCON0_VCOBYP_BIT 0
#define SCU_PLLSTAT_VCOLOCK_BIT 2
#define SCU_PLLCON0_SETFINDIS_BIT 4
#define SCU_PLLCON0_CLRFINDIS_BIT 5

#define SCU_WDTSCON0              (*(unsigned long volatile *)0xF00360F0)
#define SCU_WDTSCON0_PW           2
#define SCU_WDTSCON0_LCK          1
#define SCU_WDTSCON0_ENDINIT      0
#define SCU_WDTSCON1              (*(unsigned long volatile *)0xF00360F4)
#define SCU_WDTSCON1_DR           3
#define SCU_WDTCPU0CON1           (*(unsigned long volatile *)0xF0036104)
#define SCU_WDTCPU0CON1_DR        3
#define SCU_WDTCPU0CON0           (*(unsigned long volatile *)0xF0036100)
#define SCU_WDTCPU0CON0_PW        2
#define SCU_WDTCPU0CON0_LCK       1
#define SCU_WDTCPU0CON0_ENDINIT   0

#define CMP0IR    1
#define CMP0IRR   0

#define STM_CMP0      (*(unsigned int volatile *)(0xF0000030))
#define STM_CMCON     (*(unsigned int volatile *)(0xF0000038))
#define STM_ICR       (*(unsigned int volatile *)(0xF000003C))
#define STM_ISCR      (*(unsigned int volatile *)(0xF0000040))

#endif