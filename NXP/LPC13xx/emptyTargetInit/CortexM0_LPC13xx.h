#ifndef __CortexM3_LPC17xx_h__
#define __CortexM3_LPC17xx_h__

#define SYST_CSR    (*(unsigned long volatile*)0xE000E010) 
#define SYST_RVR    (*(unsigned long volatile*)0xE000E014)
#define SYST_CVR    (*(unsigned long volatile*)0xE000E018)
#define SYST_CALIB  (*(unsigned long volatile*)0xE000E01C)

#define SYSPLLCTRL    (*(unsigned long volatile*)0x40048008)
#define SYSPLLSTAT    (*(unsigned long volatile*)0x4004800C)
#define SYSPLLCLKSEL  (*(unsigned long volatile*)0x40048040)
#define MAINCLKSEL    (*(unsigned long volatile*)0x40048070)
#define SYSAHBCLKDIV  (*(unsigned long volatile*)0x40048078)
#define PDRUNCFG      (*(unsigned long volatile*)0x40048238)

// GPIO Toggle
#define GPIO_DIR0      (*(unsigned long volatile*)0x50002000)
#define GPIO_TOGGLE0  (*(unsigned long volatile*)0x50002300) 

// Trace
#define SYSAHBCLKCTRL (*(unsigned long volatile*)0x40048080)  
#define TRACECLKDIV   (*(unsigned long volatile*)0x400480AC) 
#define IOCON_PIO0_9  (*(unsigned long volatile*)0x40044024)

// ITM
#define ITM_BASE_ADDRESS             (*(unsigned long volatile*)0xE0000000) 
#define ITM_LOCK_ACCESS_REGISTER     (*(unsigned long volatile*)0xE0000FB0) 
#define ITM_TRACE_ENABLE_REGISTER    (*(unsigned long volatile*)0xE0000E00) 
#define ITM_TRACE_PRIVILEGE_REGISTER (*(unsigned long volatile*)0xE0000E40) 

#endif
