/*
  ITM registers and setup
*/
#define ITM_BASE_ADDRESS_32 (*(volatile unsigned int*)0xE0000000)
#define ITM_BASE_ADDRESS_16 (*(volatile unsigned short*)0xE0000000)
#define ITM_BASE_ADDRESS_8 (*(volatile unsigned char*)0xE0000000)
#define ITM_LAR (*(volatile unsigned int*)0xE0000FB0)
#define ITM_TER (*(volatile unsigned int*)0xE0000E00)
#define ITM_TPR (*(volatile unsigned int*)0xE0000E40)

/*
  Interrupt registers   
*/
#define INT_32_63_SET_EN (*(volatile unsigned int*)0xE000E104)
#define INT_32_63_SET_EN_LPIT0 16 

/*
  GPIO registers   
*/
#define GPIOC_PDDR (*(volatile unsigned int*)0x400FF094)  // Port Data Direction Register
#define GPIOC_PTOR (*(volatile unsigned int*)0x400FF08C)  // Port Toggle Output Register
#define GPIO_PIN 12                                       // GPIO pin
#define PCC_PORTC (*(volatile unsigned int*)0x4006512C)   // PCC PORTC
#define PCC_PORTC_CGC 30                                  // Clock Control
#define PORTC_PCR12 (*(volatile unsigned int*)0x4004B030) // Pin Control Register n
#define PORTC_PCR12_MUX 8                                 // Pin function select

/*
  Timer registers   
*/
#define PCC_LPIT0 (*(volatile unsigned int*)0x400650DC)   // PCC LPIT0
#define PCC_LPIT0_CGC 30                                  // Clock Control
#define PCC_LPIT0_PCS 24                                  // Peripheral Clock Source Select
#define SCG_SPLLDIV (*(volatile unsigned int*)0x40064604) // Fast IRC Divide Register
#define SCG_SPLLDIV_SPLLDIV2 8                            // System PLL Clock Divide 2
#define LPIT0_MCR (*(volatile unsigned int*)0x40037008)   // Module Control Register
#define LPIT0_MCR_MCEN 0                                  // Module Clock Enable
#define LPIT0_TVAL0 (*(volatile unsigned int*)0x40037020) // Timer Value Register
#define LPIT0_TCTRL0 (*(volatile unsigned int*)0x40037028)// Timer Control Register
#define LPIT0_TCTRL0_TEN 0                                // Timer Enable
#define LPIT0_MIER (*(volatile unsigned int*)0x40037010)  // Module Interrupt Enable Register
#define LPIT0_MIER_TIE0 0                                 // Channel 0 Timer Interrupt Enable
#define LPIT0_MSR (*(volatile unsigned int*)0x4003700C)   // Module Status Register
#define LPIT0_MSR_TIF0 0                                  // Channel 0 Timer Interrupt Flag

/*
  Clock registers
*/  
#define SMC_PMCTRL (*(volatile unsigned int*)0x4007E00C)  // Power Mode Control register
#define SMC_PMCTRL_RUNM 5                                 // Run Mode Control
#define SMC_PMPROT (*(volatile unsigned int*)0x4007E008)  // Power Mode Protection register
#define SMC_PMPROT_AHSRUN 7                               // Allow High Speed Run mode
#define SMC_PMSTAT (*(volatile unsigned int*)0x4007E014)  // Power Mode Status register
#define SMC_PMSTAT_HSRUN 0x80                             // Current power mode is HSRUN                                       
#define SCG_SOSCCSR (*(volatile unsigned int*)0x40064100) // System OSC Control Status Register
#define SCG_SOSCCSR_SOSCEN 0                              // System OSC Enable
#define SCG_SOSCCSR_SOSCVLD 24                            // System OSC Valid
#define SCG_SOSCCFG (*(volatile unsigned int*)0x40064108) // System Oscillator Configuration Register
#define SCG_SOSCCFG_EREFS 2                               // External Reference Select
#define SCG_SOSCCFG_HGO 3                                 // High Gain Oscillator Select
#define SCG_SOSCCFG_RANGE 4                               // System OSC Range Select
#define SCG_SPLLCFG (*(volatile unsigned int*)0x40064608) // System PLL Configuration Register
#define SCG_SPLLCFG_SOURCE 0                              // Clock Source
#define SCG_SPLLCFG_PREDIV 8                              // PLL Reference Clock Divider
#define SCG_SPLLCFG_MULT 16                               // System PLL Multiplier  
#define SCG_SPLLCSR (*(volatile unsigned int*)0x40064600) // System PLL Control Status Register
#define SCG_SPLLCSR_SPLLEN 0                              // System PLL Enable
#define SCG_SPLLCSR_SPLLVLD 24                            // System PLL Valid
#define SCG_RCCR (*(volatile unsigned int*)0x40064014)    // RUN Clock Control Register
#define SCG_RCCR_SCS 24                                   // System Clock Source
#define SCG_RCCR_DIVCORE 16                               // Core Clock Divide Ratio
#define SCG_RCCR_DIVBUS 4                                 // Bus Clock Divide Ratio
#define SCG_RCCR_DIVSLOW 0                                // Slow Clock Divide Ratio
#define SCG_CSR (*(volatile unsigned int*)0x40064010)     // Clock Status Register

/*
  Watchdog registers   
*/
#define WDOG_CS (*(volatile unsigned int*)0x40052000)     // Watchdog Control and Status Register
#define WDOG_CS_EN 7  // Watchdog Enable
#define WDOG_CNT (*(volatile unsigned int*)0x40052004) // Watchdog Counter Register
#define WDOG_TOVAL (*(volatile unsigned int*)0x40052008) // Watchdog Counter Register