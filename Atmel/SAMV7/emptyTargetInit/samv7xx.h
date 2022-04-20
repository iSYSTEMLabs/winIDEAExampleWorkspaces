#define PMC_SCER *(volatile unsigned int *)      0x400E0600
#define PMC_PCK3 *(volatile unsigned int *)      0x400E064C

#define memW32(address) (*(unsigned long*)(address))
#define memW16(address) (*(unsigned short*)(address))
#define memW8(address) (*(unsigned char*)(address))

#define ITM_BASE_ADDRESS (0xE0000000UL)
#define ITM_LOCK_ACCESS_REGISTER (ITM_BASE_ADDRESS + 0x0FB0UL)
#define ITM_TRACE_ENABLE_REGISTER (ITM_BASE_ADDRESS + 0x0E00UL)
#define ITM_TRACE_PRIVILEGE_REGISTER (ITM_BASE_ADDRESS + 0x0E40UL)

/*
  Power managment controller and clock generator registers   
*/
#define PMC_SR (*(volatile unsigned int *)0x400E0668)     // Status register
#define PMC_SR_MOSCSELS 16                                // Oscilator sellection progress
#define PMC_SR_LOCKA 1                                    // PLL lock
#define PMC_SR_MCKRDY 3                                   // Master clock ready flag
#define PMC_SR_MOSCXTS 0                                  // Stabilitz of external oscilator
#define PMC_MCKR (*(volatile unsigned int *)0x400E0630)   // Master Clock Register
#define PMC_MCKR_CSS 0                                    // Master clock source selection
#define PMC_MCKR_MDIV 8                                   // Master clock divider 
#define PMC_PCER0 (*(volatile unsigned int *)0x400E0610)  // Peripheral clock enable register 
#define PMC_PCER0_TIM0 23                                 // Timer 0 identifier
#define PMC_PCR (*(volatile unsigned int *)0x400E070C)    // Peripheral Control Register
#define PMC_PCR_PID 0                                     // Peripheral ID
#define PMC_PCR_EN 28                                     // Peripheral clock enable
#define CKGR_PLLAR (*(volatile unsigned int *)0x400E0628) // Clock Generator PLLA Register
#define CKGR_PLLAR_ONE 29                                 // One (must be 1 if we want to write in PLLAR)
#define CKGR_PLLAR_DIVA 0                                 // Divider before PLL
#define CKGR_PLLAR_MULA 16                                // PLL multiplier
#define CKGR_PLLAR_PLLACOUNT 8                            // Counter for PLL Lock
#define CKGR_MOR (*(volatile unsigned int *)0x400E0620)   // Main Oscillator Register
#define CKGR_MOR_MOSCSEL 24                               // Main oscilator selection
#define CKGR_MOR_MOSCXTEN 0                               // Ext. oscilator enable
#define CKGR_MOR_MOSCXTST 8                               // Counter for ext oscilator enable
#define CKGR_MOR_KEY 16                                   // MOR unlock key

/*
  Flash registers   
*/
#define EEFC_FMR (*(volatile unsigned int *)0x400E0C00)   // Flash mode register
#define EEFC_FMR_FWS 8                                    // Number of wait states

/*
  Timer 0 registers   
*/
#define TC0_CMR0 (*(volatile unsigned int *)0x4000C004)   // Channel Mode Register
#define TC0_CMR0_TCCLKS 0                                 // Clock selection
#define TC0_CMR0_WAVSEL 13                                // Wave type selection
#define TC0_CMR0_WAVE 15                                  // Wave mode selection
#define TC0_CCR0 (*(volatile unsigned int *)0x4000C000)   // Channel Control Register
#define TC0_CCR0_CLKEN 0                                  // Counter Clock Enable
#define TC0_CCR0_SWTRG 2                                  // Software Trigger Command
#define TC0_RC0 (*(volatile unsigned int *)0x4000C01C)    // Register C
#define TC0_IER0 (*(volatile unsigned int *)0x4000C024)   // Interrupt enable register
#define TC0_IER0_CPCS 4                                   // RC Compare interrupt enable
#define TC0_SR0 (*(unsigned volatile int*)0x4000C020)     // Status Register 

/*
  Interrupt registers   
*/
#define INT_0_31_SET_EN (*(volatile unsigned int *)0xE000E100)  // Interrupts 0-31 set enable register  
#define INT_0_31_CLR_EN (*(volatile unsigned int *)0xE000E180)  // Interrupts 0-31 set disable register
#define INT_TIM0 23                                             // TIM0 interrupt ID

/*
  PIO port A registers
*/
#define PIOA_PER (*(volatile unsigned int *)0x400E0E00)   // PIO Enable Register
#define PIOA_OER (*(volatile unsigned int *)0x400E0E10)   // PIO Output Enable Register
#define PIOA_SODR (*(volatile unsigned int *)0x400E0E30)  // PIO Set Output Data Register
#define PIOA_CODR (*(volatile unsigned int *)0x400E0E34)  // PIO Clear Output Data Register
#define PIOA_ODSR (*(volatile unsigned int *)0x400E0E38)  // PIO Output Data Status Register
#define PIOA_PUDR (*(volatile unsigned int *)0x400E0E60)  // PIO Output Data Status Register

/*
  Waatchdog registers
*/
#define WDT_MR (*(volatile unsigned int *)0x400E1854)     // Watchdog mode register
#define WDT_MR_WDDIS 15                                   // Disable watchdog