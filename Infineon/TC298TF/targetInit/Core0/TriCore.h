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
#define SRC_STM2SR0	(*(unsigned long volatile *)(0xF00384A0))

/*
  Clock registers   
*/
#define SCU_CCUCON1 (*(unsigned volatile int*)(0xF0036034))
#define SCU_CCUCON1_INSEL 28 
#define SCU_CCUCON1_STMDIV 8
#define SCU_CCUCON1_CANDIV 0
#define SCU_CCUCON1_UP 30
#define SCU_CCUCON0 (*(unsigned volatile int*)(0xF0036030))
#define SCU_CCUCON0_BAUD1DIV 0 // 3
#define SCU_CCUCON0_BAUD2DIV 4 // 1
#define SCU_CCUCON0_SRIDIV 8   // 1
#define SCU_CCUCON0_SPBDIV 12  // 3
#define SCU_CCUCON0_FSI2DIV 20 // 1
#define SCU_CCUCON0_FSIDIV 24  // 3
#define SCU_CCUCON0_CLKSEL 28  // 1
#define SCU_CCUCON0_ADCCLKSEL 26 // 1
#define SCU_CCUCON0_UP 30 // 1 at the end 
#define SCU_CCUCON7 (*(unsigned volatile int*)(0xF0036084))
#define SCU_CCUCON8 (*(unsigned volatile int*)(0xF0036088))
#define SCU_PLLCON0 (*(unsigned volatile int*)(0xF0036018))
#define SCU_PLLCON0_VCOBYP 0
#define SCU_PLLCON0_SETFINDIS 4
#define SCU_PLLCON0_CLRFINDIS 5
#define SCU_PLLCON0_NDIV 9 
#define SCU_PLLCON0_PDIV 24
#define SCU_PLLCON1 (*(unsigned volatile int*)(0xF003601C))
#define SCU_PLLCON1_K1DIV 0   
#define SCU_PLLCON1_K3DIV 8    
#define SCU_PLLCON1_K2DIV 16
#define SCU_PLLSTAT (*(unsigned volatile int*)(0xF0036014))
#define SCU_PLLSTAT_VCOLOCK 2

/*
  Flash registers   
*/
#define FCON (*(unsigned volatile int*)(0xF8002014))
#define FCON_WSPFLASH 0
#define FCON_WSECPF 4
#define FCON_WSDFLASH 6
#define FCON_WSECDF 12

/*
  Timer registers   
*/
#define STM0_CMP0 (*(unsigned volatile int*)(0xF0000030))
#define STM0_CMCON (*(unsigned volatile int*)(0xF0000038))
#define STM0_CMCON_MSIZE0 0
#define STM0_CMCON_MSTART0 8
#define STM0_ICR (*(unsigned volatile int*)(0xF000003C))
#define STM0_ICR_CMP0EN 0
#define STM0_ICR_CMP0IR 1
#define STM0_ICR_CMP1IR 5
#define STM0_ISCR (*(unsigned volatile int*)(0xF0000040))
#define STM0_ISCR_CMP0IRR 0
#define STM0_ISCR_CMP1IRR 2

/*
  Interrupt registers
*/
#define SCU_EICR0 (*(unsigned volatile int*)(0xF0036210)) 
#define SCU_EICR0_EXIS1 20
#define SCU_EICR0_REN1 25
#define SCU_EICR0_EIEN1 27
#define SCU_IGCR0 (*(unsigned volatile int*)(0xF003622C))
#define SCU_IGCR0_IGP0 14
#define SCU_IGCR0_IPEN01 1
#define SCU_IGCR0_GEEN0 13
#define SCU_FMR (*(unsigned volatile int*)(0xF0036224))
#define SCU_FMR_FC1 17
#define SRC_SCUERU0 (*(unsigned volatile int*)(0xF0038CD4))
#define SRC_SCUERU0_SRPN 0
#define SRC_SCUERU0_SRE 10
#define SRC_SCUERU0_CLRR 25

/*
  Watchdog registers 
*/

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

/*
  GPIO registers   
*/
// interrupt pin
#define P33_IOCR4 (*(unsigned volatile int*)(0xF003D314))
#define P33_OUT   (*(unsigned volatile int*)(0xF003D300))
// reset pin
#define P00_IOCR0 (*(unsigned long volatile *)(0xF003A010))
#define P00_OUT   (*(unsigned volatile int*)(0xF003A000))

//rt SRamPerformances: readInBps=385938, writeInBps=250761


#endif



