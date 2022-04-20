#ifndef LPC1769_H
#define LPC1769_H

// ITM
#define ITM_BASE_ADDRESS             (*(unsigned long volatile*)0xE0000000)
#define ITM_LOCK_ACCESS_REGISTER     (*(unsigned long volatile*)0xE0000FB0)
#define ITM_TRACE_ENABLE_REGISTER    (*(unsigned long volatile*)0xE0000E00) 
#define ITM_TRACE_PRIVILEGE_REGISTER (*(unsigned long volatile*)0xE0000E40)
#define ITM_TRACE_CONTROL_REGISTER   (*(unsigned long volatile*)0xE0000E80)
  
// GPIO registers
#define FIO0DIR                      (*(unsigned long volatile*)0x2009C000)  // pin direction 
#define FIO0SET                      (*(unsigned long volatile*)0x2009C018)  // pin set
#define FIO0CLR                      (*(unsigned long volatile*)0x2009C01C)  // pin clear
#define FIO1DIR                      (*(unsigned long volatile*)0x2009C020)  // pin direction 
#define FIO1SET                      (*(unsigned long volatile*)0x2009C038)  // pin set
#define FIO1CLR                      (*(unsigned long volatile*)0x2009C03C)  // pin clear

#define PINSEL0                      (*(unsigned long volatile*)0x4002C000)
#define PINSEL1                      (*(unsigned long volatile*)0x4002C004)
#define PINSEL2                      (*(unsigned long volatile*)0x4002C008)
#define PINSEL3                      (*(unsigned long volatile*)0x4002C00C)
#define PINSEL4                      (*(unsigned long volatile*)0x4002C010)
#define PINSEL7                      (*(unsigned long volatile*)0x4002C01C)
#define PINSEL9                      (*(unsigned long volatile*)0x4002C024)
#define PINSEL10                     (*(unsigned long volatile*)0x4002C028)

// NVIC
#define ISER0                        (*(unsigned long volatile*)0xE000E100)  // Enable interrupt
#define ICER0                        (*(unsigned long volatile*)0xE000E180)  // Disable interrupt
#define IPR0                         (*(unsigned long volatile*)0xE000E400)  // NVIC priority 

// Timer registers
#define STCTRL                       (*(unsigned long volatile*)0xE000E010) 
#define STRELOAD                     (*(unsigned long volatile*)0xE000E014)
#define STCURR                       (*(unsigned long volatile*)0xE000E018)
#define STCALIB                      (*(unsigned long volatile*)0xE000E01C)

// Clock registers
#define SCS                          (*(unsigned long volatile*)0x400FC1A0)  // ext. osc. toggle

#define PLL0CON                      (*(unsigned long volatile*)0x400FC080)
#define PLL0CFG                      (*(unsigned long volatile*)0x400FC084)
#define PLL0STAT                     (*(unsigned long volatile*)0x400FC088)
#define PLL0FEED                     (*(unsigned long volatile*)0x400FC08C)

#define PLLE0_STAT                   (1 << 24)                               // PLL enable status
#define PLLC0_STAT                   (1 << 25)                               // PLL connect status
#define PLOCK0                       (1 << 26)                               // PLL lock status 

#define CLKSRCSEL                    (*(unsigned long volatile*)0x400FC10C)  // selects PLL0 clock source     
#define CCLKCFG                      (*(unsigned long volatile*)0x400FC104)  // divides PLL0 output
#define FLASHCFG                     (*(unsigned long volatile*)0x400FC000)  // flash wait
#define PCLKSEL0                     (*(unsigned long volatile*)0x400FC1A8)  // peripheral clock divider
#define PCLKSEL1                     (*(unsigned long volatile*)0x400FC1AC)
#define USBCLKCFG                    (*(unsigned long volatile*)0x400FC108)  // USB clock divider

#define WDCLKSEL                     (*(unsigned long volatile*)0x40000010)  // Watchdog clock source


#endif // LPC1769_H