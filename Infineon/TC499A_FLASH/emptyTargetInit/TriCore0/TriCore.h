#ifndef __TriCore_h__
#define __TriCore_h__

#define FBCK_FREQ 100/*MHZ*/
#define STMDIV_MASK 0xF
               
#define memll(addr) (*(unsigned long long volatile *)(addr))
               
#define CBS_OCNTRL *(unsigned volatile int*) 0XF000047C

#define PPUC_CLC       *(unsigned volatile int*) 0xE9800000
#define PPUC_RST_CTRLA *(unsigned volatile int*) 0xE980000C
#define PPUC_RST_CTRLB *(unsigned volatile int*) 0xE9800010
#define PPUC_CTRL      *(unsigned volatile int*) 0xE9800050
#define PPUC_SMCTRL      *(unsigned volatile int*) 0xE9800058

#define CPU1_HRHV_PC *(unsigned volatile int*) 0xF887FE08
#define CPU2_HRHV_PC *(unsigned volatile int*) 0xF88BFE08
#define CPU3_HRHV_PC *(unsigned volatile int*) 0xF88FFE08 
#define CPU4_HRHV_PC *(unsigned volatile int*) 0xF893FE08 
#define CPU5_HRHV_PC *(unsigned volatile int*) 0xF897FE08 
#define CPUCS_HRHV_PC *(unsigned volatile int*) 0xF89BFE08 
#define CPUCS_HRA_PC *(unsigned volatile int*) 0xF899FE08 
#define CPUCS_HRB_PC *(unsigned volatile int*) 0xF89AFE08 

#define DBGSR1 *(unsigned volatile int*) 0xF883FD00
#define DBGSR2 *(unsigned volatile int*) 0xF885FD00
#define DBGSR3 *(unsigned volatile int*) 0xF887FD00
#define DBGSR4 *(unsigned volatile int*) 0xF889FD00
#define DBGSR5 *(unsigned volatile int*) 0xF88DFD00

#define CPU1_HRA_CORECON *(unsigned volatile int*) 0xF885FE14
#define CPU2_HRA_CORECON *(unsigned volatile int*) 0xF889FE14
#define CPU3_HRA_CORECON *(unsigned volatile int*) 0xF88DFE14
#define CPU4_HRA_CORECON *(unsigned volatile int*) 0xF891FE14
#define CPU5_HRA_CORECON *(unsigned volatile int*) 0xF895FE14
#define CPUCS_HRA_CORECON *(unsigned volatile int*) 0xF899FE14

#define CPU1_HRA_BOOTCON *(unsigned volatile int*) 0xF885FE60
#define CPU2_HRA_BOOTCON *(unsigned volatile int*) 0xF889FE60
#define CPU3_HRA_BOOTCON *(unsigned volatile int*) 0xF88DFE60
#define CPU4_HRA_BOOTCON *(unsigned volatile int*) 0xF891FE60
#define CPU5_HRA_BOOTCON *(unsigned volatile int*) 0xF895FE60
#define CPUCS_HRA_BOOTCON *(unsigned volatile int*) 0xF899FE60

#define ADC_CLC        *(unsigned volatile int*) 0xF5000000
#define ADC_CLKEN_CDSP *(unsigned volatile int*) 0xF500089C
#define ADC_CDSP_GLOBRCD   *(unsigned volatile int*) 0xF50BF8D8

#define PMS_SCR_CON0 *(unsigned volatile int*) 0xF02492B0

#define P33_OUT  	  (*(unsigned long volatile *)(0xF003C100))
#define P33_IOCR4   (*(unsigned long volatile *)(0xF003C114))
#define SCU_CCUCON0 (*(unsigned long volatile *)(0xF0036030))
#define SCU_CCUCON1 (*(unsigned long volatile *)(0xF0036034))
#define SCU_CCUCON2 (*(unsigned long volatile *)(0xF0036040))
#define SCU_CCUCON5 (*(unsigned long volatile *)(0xF003604C))

#define STM0_CLC    (*(unsigned long volatile *)(0xF0001000))
#define STM0_CMCON  (*(unsigned long volatile *)(0xF0001038))
#define STM0_CMP0   (*(unsigned long volatile *)(0xF0001030))
#define STM0_ICR    (*(unsigned long volatile *)(0xF000103C))
#define STM0_ISCR   (*(unsigned long volatile *)(0xF0001040))
#define SRC_STM0SR0 (*(unsigned long volatile *)(0xF0038300))
#define SCU_SYSPLLSTAT  (*(unsigned long volatile *)(0xF0036014))
#define SCU_SYSPLLCON0  (*(unsigned long volatile *)(0xF0036018))
#define SCU_SYSPLLCON1  (*(unsigned long volatile *)(0xF003601C))
#define SCU_SYSPLLCON   (*(unsigned long volatile *)(0xF0036014))
#define SCU_PERPLLCON0  (*(unsigned long volatile *)(0xF0036028))
#define SCU_PERPLLCON1  (*(unsigned long volatile *)(0xF003602C))

#define SCU_OSCCON      (*(unsigned long volatile *)(0xF0036010))
#define SCU_PERPLLSTAT  (*(unsigned long volatile *)(0xF0036024))

#define SCU_SYSPLLCON0_INSEL_BIT    30
#define SCU_SYSPLLCON0_MODEN_BIT    2
#define SCU_SYSPLLCON0_RESLD_BIT    18

#define SCU_SYSPLLCON0_PDIV_BITS    24
#define SCU_SYSPLLCON0_NDIV_BITS    9
#define SCU_SYSPLLCON0_PLLLV_BITS   1
#define SCU_SYSPLLCON0_PLLHV_BITS   8
#define SCU_SYSPLLCON0_PLLPWD_BITS  16
              
#define SCU_PERPLLSTAT_LOCK_BITS    2

#define SCU_OSCCON_OSCVAL_BITS      16
#define SSCU_OSCCON_MODE_BIT        5    

//#define SCU_SYSPLLCON1_K2DIV_BITS   0

#define SCU_SYSPLLCON_LOCK_BITS     2
#define SCU_SYSPLLCON_LOCK_BIT      1
#define SCU_SYSPLLSTAT_LOCK_BITS    2

#define SCU_CCUCON0_CLKSEL_BITS     28

#define SCU_CCUCON0_CLKSEL_SOURCE0  1

#define SCU_SYSPLLCON0_NDIV_MASK    0xFFFF01FF
#define SCU_SYSPLLCON0_PDIV_MASK    0xF8FFFFFF

#define SCU_SYSPLLCON0_PDIV_VALUE   0
#define SCU_SYSPLLCON0_NDIV_VALUE   29
#define SCU_SYSPLLCON1_K2DIV_VALUE  1

#define SCU_CCUCON0_STMDIV_VALUE    5

#define SCU_OSCCON_OSCVAL_VALUE     5

// External Crystal / Ceramic Resonator Mode and External Input
// Clock Mode. The oscillator Power-Saving Mode is not entered.
#define SCU_OSSCON_TOGGLE_SET_PS_MODE_NOT_ENTERED 0xFF9F

/* Watchdog registers */
#define SCU_WDTSCON0              (*(unsigned long volatile *)0xF00362A8)
#define SCU_WDTSCON0_PW           2
#define SCU_WDTSCON0_LCK          1
#define SCU_WDTSCON0_ENDINIT      0
#define SCU_WDTSCON1              (*(unsigned long volatile *)0xF00362AC)
#define SCU_WDTSCON1_DR           3
#define SCU_WDTCPU0CON1           (*(unsigned long volatile *)0xF0036250)
#define SCU_WDTCPU0CON1_DR        3
#define SCU_WDTCPU0CON0           (*(unsigned long volatile *)0xF003624C)
#define SCU_WDTCPU0CON0_PW        2
#define SCU_WDTCPU0CON0_LCK       1
#define SCU_WDTCPU0CON0_ENDINIT   0


void initInterrupts();
void delayFunction(int);
void InterruptRoutine(void);


#endif



