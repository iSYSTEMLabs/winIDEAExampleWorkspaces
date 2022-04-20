#ifndef __CortexM3_LPC17xx_h__
#define __CortexM3_LPC17xx_h__

#define SYST_CSR  (*(unsigned long volatile*)0xE000E010) 
#define SYST_RVR  (*(unsigned long volatile*)0xE000E014)
#define SYST_CVR  (*(unsigned long volatile*)0xE000E018)
#define SYST_CAL  (*(unsigned long volatile*)0xE000E01C)

#define SYSPLLCTRL    (*(unsigned long volatile*)0x40048008)
#define SYSPLLSTAT    (*(unsigned long volatile*)0x4004800C)
#define SYSPLLCLKSEL  (*(unsigned long volatile*)0x40048040)
#define SYSPLLCLKUEN  (*(unsigned long volatile*)0x40048044)
#define MAINCLKSEL    (*(unsigned long volatile*)0x40048070)
#define MAINCLKUEN    (*(unsigned long volatile*)0x40048074)
#define SYSAHBCLKDIV  (*(unsigned long volatile*)0x40048078)
#define PDRUNCFG      (*(unsigned long volatile*)0x40048238)

#define IOCON_PIO2_0  (*(unsigned long volatile*)0x40044008)
#define GPIO2DIR      (*(unsigned long volatile*)0x50028000)
#define GPIO2DATA     (*(unsigned long volatile*)0x50023FFC)       
  
#endif
