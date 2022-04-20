// ITM
#define ITM_BASE_ADDRESS             (*(unsigned long volatile*)0xE0000000) 
#define ITM_LOCK_ACCESS_REGISTER     (*(unsigned long volatile*)0xE0000FB0) 
#define ITM_TRACE_ENABLE_REGISTER    (*(unsigned long volatile*)0xE0000E00) 
#define ITM_TRACE_PRIVILEGE_REGISTER (*(unsigned long volatile*)0xE0000E40) 

/*
   GPIO registers
*/
#define SYSCON_AHBCLKCTRL0 (*(unsigned volatile int*)0x40000200)
#define SYSCON_AHBCLKCTRL0_GPIO2 16
#define GPIO_DIR2 (*(unsigned volatile int*)0x4008E008)
#define GPIO_NOT2 (*(unsigned volatile int*)0x4008E308)
#define GPIO_PIN 2

/*
   Timer registers
*/
#define SYSCON_AHBCLKCTRL1 (*(unsigned volatile int*)0x40000204)
#define SYSCON_AHBCLKCTRL1_CTIMER0 26    
#define CTIMER0_IR (*(unsigned volatile int*)0x40008000)
#define CTIMER0_IR_MR0INT 0              
#define CTIMER0_TCR (*(unsigned volatile int*)0x40008004)
#define CTIMER0_TCR_CEN 0
#define CTIMER0_MCR (*(unsigned volatile int*)0x40008014)
#define CTIMER0_MCR_MR0I 0
#define CTIMER0_MCR_MR0R 1  
#define CTIMER0_MR0 (*(unsigned volatile int*)0x40008018)
#define INT_0_31_SET_EN (*(unsigned volatile int*)0xE000E100)
#define INT_0_31_SET_EN_CTIMER0 10

/*
  Clock registers   
*/                                                      
#define SYSCON_SYSOSCCTRL (*(unsigned volatile int*)0x40000504)
#define SYSCON_SYSOSCCTRL_FREQRANGE 1
#define SYSCON_SYSPLLCLKSEL (*(unsigned volatile int*)0x40000290)
#define SYSCON_SYSPLLCLKSEL_SEL 0
#define SYSCON_SYSPLLCTRL (*(unsigned volatile int*)0x40000580)
#define SYSCON_SYSPLLCTRL_DIRECTI 19
#define SYSCON_SYSPLLCTRL_DIRECTO 20
#define SYSCON_SYSPLLCTRL_BYPASS 15
#define SYSCON_SYSPLLCTRL_SELP 10  
#define SYSCON_SYSPLLCTRL_SELI 4 
#define SYSCON_SYSPLLCTRL_SELR 0
#define SYSCON_SYSPLLNDEC (*(unsigned volatile int*)0x40000588)
#define SYSCON_SYSPLLNDEC_NREQ 10
#define SYSCON_SYSPLLMDEC (*(unsigned volatile int*)0x40000590)
#define SYSCON_SYSPLLMDEC_MREQ 17
#define SYSCON_MAINCLKSELB (*(unsigned volatile int*)0x40000284)
#define SYSCON_MAINCLKSELB_SEL 0
#define SYSCON_SYSPLLSTAT (*(unsigned volatile int*)0x40000584)
#define SYSCON_SYSPLLSTAT_LOCK 0
#define SYSCON_FLASHCFG (*(unsigned volatile int*)0x40000400)
#define SYSCON_FLASHCFG_FLASHTIM 12
#define SYSCON_SYSPLLPDEC (*(unsigned volatile int*)0x4000058C)
#define SYSCON_SYSPLLPDEC_PREQ 7                               
#define SYSCON_PDRUNCFGSET0 (*(unsigned volatile int*)0x40000620)
#define SYSCON_PDRUNCFGSET0_SYS_PLL 22                               
#define SYSCON_PDRUNCFGCLR1 (*(unsigned volatile int*)0x40000634)
#define SYSCON_PDRUNCFGCLR1_SYSOSC 3
#define SYSCON_PDRUNCFGCLR0 (*(unsigned volatile int*)0x40000630)
#define SYSCON_PDRUNCFGCLR0_SYS_PLL 22
#define SYSCON_PDRUNCFGCLR0_VD3 26
#define SYSCON_PDRUNCFGCLR0_VD2 9
#define SYSCON_ASYNCAPBCTRL (*(unsigned volatile int*)0x4000004C)  
#define ASYNC_SYSCON_ASYNCAPBCLKSELA (*(unsigned volatile int*)0x40040020)
#define SYSCON_AHBCLKCTRL0SET (*(unsigned volatile int*)0x40000220)