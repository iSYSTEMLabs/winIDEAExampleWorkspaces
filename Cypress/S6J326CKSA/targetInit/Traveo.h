/*
  Clock control registers
*/
#define SYSC_MOSCCNTR (*(unsigned volatile int*)0xB0600604)       // Main oscillator control register
#define SYSC_MOSCCNTR_FCIMEN 0                                    // Fast Main Clock Input Enable Control bit
#define SYSC_PLL0CGCNTR (*(unsigned volatile int*)0xB0600610)     // PLL clock gear control register
#define SYSC_PLL0CGCNTR_PLLCGLP 16                                // Clock gear loop
#define SYSC_PLL0CGCNTR_PLLCGSTP 14                               // Clock gear step
#define SYSC_PLL0CGCNTR_PLLCGSSN 8                                // Clock gear start step
#define SYSC_PLL0CGCNTR_PLLCGSTS 6                                // Clock gear status
#define SYSC_PLL0CGCNTR_PLLCGSTR 1                                // Clock gear start bit
#define SYSC_PLL0CGCNTR_PLLCGEN 0                                 // Clock gear enable bit
#define SYSC0_RUNCKSRER (*(unsigned volatile int*)0xB0600084)     // RUN Clock Source Enable Register
#define SYSC0_RUNCKSRER_MOSCEN 2                                  // Main clock oscilation enable
#define SYSC0_RUNCKSRER_PLL0EN 8                                  // PLL0 clock oscillation enable
#define SYSC0_STSCKSRER (*(unsigned volatile int*)0xB0600204)     // STS Clock Source Enable Register 
#define SYSC0_STSCKSRER_MOSCRDY 6                                 // Main clock oscillation stabilization bit
#define SYSC0_STSCKSRER_PLL0RDY 12                                // PLL oscillation stabilization bit
#define SYSC0_RUNPLL0CNTR (*(unsigned volatile int*)0xB0600094)   // RUN PLL0 Control Register
#define SYSC0_RUNPLL0CNTR_PLL0ISEL 31                             // PLL0 input clock selection bit
#define SYSC0_RUNPLL0CNTR_PLL0DIVN 16                             // Multiplier
#define SYSC_PLLSSCGSTCNTR (*(unsigned volatile int*)0xB060060C)  // PLL/SSCG stabilization time control register
#define SYSC_PLLSSCGSTCNTR_PLLSTABS 0                             // PLL stabilization time
#define SYSC0_TRGRUNCNTR (*(unsigned volatile int*)0xB06000FC)    // RUN Profile Update Trigger Register
#define SYSC0_PROTKEYR (*(unsigned volatile int*)0xB0600000)      // Protection Key Setting Register
#define SYSC1_RUNCKSELR0 (*(unsigned volatile int*)0xB0300080)    // RUN Clock Selection Register 0
#define SYSC1_RUNCKSELR0_CD0CSL 0                                 // Clock domain 0 clock selection bits
#define SYSC1_PROTKEYR (*(unsigned volatile int*)0xB0300000)      // Protection Key Setting Register 
#define SYSC1_RUNCKER0 (*(unsigned volatile int*)0xB030008C)
#define SYSC1_RUNCKER0_ENCLKCPU0 0
#define KEY 0x5CACCE55                                            // Key for access to SYSC(x) registers

/*
  Clock dividers in CLK0 domain   
*/
#define SYSC1_RUNCKDIVR0 (*(unsigned volatile int*)0xB0300098)    
#define SYSC1_RUNCKDIVR0_ATBDIV 8
#define SYSC1_RUNCKDIVR1 (*(unsigned volatile int*)0xB030009C)
#define SYSC1_RUNCKDIVR1_EXTBUSDIV 0
#define SYSC1_RUNCKDIVR1_SYSC1DIV 4
#define SYSC1_RUNCKDIVR1_HAPP0A0DIV 16
#define SYSC1_RUNCKDIVR1_HAPP0A1DIV 20
#define SYSC1_RUNCKDIVR1_HAPP1B0DIV 24
#define SYSC1_RUNCKDIVR1_HAPP1B1DIV 28
#define SYSC1_RUNCKDIVR2 (*(unsigned volatile int*)0xB03000A0)
#define SYSC1_RUNCKDIVR2_LCPDIV 0
#define SYSC1_RUNCKDIVR2_LCP0DIV 4
#define SYSC1_RUNCKDIVR2_LCP1DIV 8  
#define SYSC1_RUNCKDIVR2_LAPP0DIV 16
#define SYSC1_RUNCKDIVR2_LAPP1DIV 24
#define SYSC1_RUNCKDIVR3 (*(unsigned volatile int*)0xB03000A4)
#define SYSC1_RUNCKDIVR3_LCP0ADIV 0
#define SYSC1_RUNCKDIVR3_LCP1ADIV 8
#define SYSC1_RUNCKDIVR3_LAPP0ADIV 16
#define SYSC1_RUNCKDIVR3_LAPP1ADIV 24

/*
  Timer registers   
*/
#define FRT00_CPCLRB (*(unsigned volatile int*)0xB4820000)
#define FRT00_TCCS (*(unsigned volatile int*)0xB4820008)
#define FRT00_TCCS_ICRE 8
#define FRT00_TCCS_BFE 7
#define FRT00_TCCS_STOP 6
#define FRT00_TCCSC (*(unsigned volatile int*)0xB4820010)
#define FRT00_TCCSC_ICLRC 9

/*
  Interrupt registers   
*/
#define IRC0_CSR (*(unsigned volatile int*)0xB0400C98)  
#define IRC0_CSR_IRQEN 0
#define IRC0_UNLOCK (*(unsigned volatile int*)0xB0400D30)
#define IRC0_KEY 0x17ACC911
#define IRC0_IRQCE5 (*(unsigned volatile int*)0xB0400C14)
#define IRC0_IRQCE5_IRQCE176 16
#define IRC0_IRQVA176 (*(unsigned volatile int*)0xB0400350)
#define IRC0_IRQST (*(unsigned volatile int*)0xB040000C)
#define IRC0_IRQST_nIRQ 24
#define IRC0_IRQHC (*(unsigned volatile int*)0xB0400C48)

/*
  GPIO registers   
*/
#define PPC_PCFGR312 (*(unsigned volatile int*)0xB47400D8)        // Port Setting Register
#define PPC_PCFGR312_POE 15                                       // Port output data bit
#define GPIO_DDR3 (*(unsigned volatile int*)0xB473821C)           // Data Direction Register
#define GPIO_PIN 12                                               // Pin on port 0
#define GPIO_POSR3 (*(unsigned volatile int*)0xB4738030)          // Port Output Set Register
#define GPIO_POCR3 (*(unsigned volatile int*)0xB4738034)          // Port Output Clear Register
#define PPC_KEYCDR (*(unsigned volatile int*)0xB4740400)          // PPC Key Code Register
#define PPC_KEYCDR_KEY 30                                         // Key Code Bits
#define PPC_KEYCDR_SIZE 28                                        // Access size
#define PPC_KEYCDR_RADR 0                                         // Low 15 bits of address of corresponding register
#define GPIO_KEYCDR (*(unsigned volatile int*)0xB4738404)         // GPIO Key Code Register
#define GPIO_KEYCDR_KEY 30                                        // Key Code Bits
#define GPIO_KEYCDR_SIZE 28                                       // Access size
#define GPIO_KEYCDR_RADR 0                                        // Low 15 bits of address of corresponding register

/*
  Flash registers   
*/
#define TCFCFG_FCFGR (*(unsigned volatile int*)0xB0411008)        // Configuration register
#define TCFCFG_FCFGR_FAWC 0                                       // Number of wait cycles
#define TCFCFG_FCPROTKEY (*(unsigned volatile int*)0xB0411000)    // Protection key register
#define TCFCFG_KEY 0xCF61F1A5                                     // key

//rt SRamPerformances: readInBps=134707, writeInBps=128871
