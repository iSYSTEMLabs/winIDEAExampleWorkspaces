#ifndef __TriCore_h__
#define __TriCore_h__
void enableSecondCore(void);
//#define STM_INT0 0x00000005 // Service Request Number for STM

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
        
   
#endif



