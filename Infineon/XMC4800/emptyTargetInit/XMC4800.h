#ifndef __CPUTest_h__
#define __CPUTest_h__

// ITM
#define ITM_BASE_ADDRESS             (*(unsigned long volatile*)0xE0000000)
#define ITM_LOCK_ACCESS_REGISTER     (*(unsigned long volatile*)0xE0000FB0)
#define ITM_TRACE_ENABLE_REGISTER    (*(unsigned long volatile*)0xE0000E00)
#define ITM_TRACE_PRIVILEGE_REGISTER (*(unsigned long volatile*)0xE0000E40)

// SysTick
#define SYSTICK_CSR (*(unsigned long volatile*)0xE000E010)
#define SYSTICK_CSR_ENABLE    0
#define SYSTICK_CSR_TICKINT   1
#define SYSTICK_CSR_CLKSOURCE 2

#define SYSTICK_RVR (*(unsigned long volatile*)0xE000E014)
#define SYSTICK_CVR (*(unsigned long volatile*)0xE000E018)

// SCU
#define SCU_BASE 0x50004000UL
#define SCU_OSCHPCTRL (*(unsigned long volatile*)(SCU_BASE + 0x0704))
#define SCU_OSCHPCTRL_GAINSEL 2
#define SCU_OSCHPCTRL_MODE    4
#define SCU_OSCHPCTRL_OSCVAL  16

#define SCU_PLLSTAT (*(unsigned long volatile*)(SCU_BASE + 0x0710))
#define SCU_PLLSTAT_VCOLOCK  2
#define SCU_PLLSTAT_PLLLV    7
#define SCU_PLLSTAT_PLLHV    8
#define SCU_PLLSTAT_PLLSP    9

#define SCU_PLLCON0 (*(unsigned long volatile*)(SCU_BASE + 0x0714))
#define SCU_PLLCON0_VCOBYP     0
#define SCU_PLLCON0_VCOPWD     1
#define SCU_PLLCON0_FINDIS     4
#define SCU_PLLCON0_OSCDISCDIS 6
#define SCU_PLLCON0_PLLPWD     16
#define SCU_PLLCON0_OSCRES     17
#define SCU_PLLCON0_RESLD      18

#define SCU_PLLCON1 (*(unsigned long volatile*)(SCU_BASE + 0x0718))
#define SCU_PLLCON1_NDIV  8
#define SCU_PLLCON1_K2DIV 16
#define SCU_PLLCON1_PDIV  24

#define SCU_PLLCON2 (*(unsigned long volatile*)(SCU_BASE + 0x071C))
#define SCU_PLLCON2_PINSEL 0

#define SCU_SYSCLKCR (*(unsigned long volatile*)(SCU_BASE + 0x060C))
#define SCU_SYSCLKCR_SYSSEL 16

// GPIO
#define P5_BASE 0x48028500UL
#define P5_OMR   (*(unsigned long volatile*)(P5_BASE + 0x0004))
#define P5_IOCR8 (*(unsigned long volatile*)(P5_BASE + 0x0018))
#define Pn_IOCR8_PC9                 11
#define Pn_IOCRx_PC_PUSH_PULL_OUTPUT 0b10000

#endif

