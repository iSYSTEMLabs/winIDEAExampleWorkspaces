//#include <stdint.h>

#ifndef __KW45__H__
#define __KW45__H__

/*****************************************************************************
 *
 * Functions
 *
 *****************************************************************************/
 


/*****************************************************************************
 *
 * Defines
 *
 *****************************************************************************/

#define PIN5         5


/*****************************************************************************
 *
 * Registers and bits
 *
 *****************************************************************************/

// Module reset and clock control
#define MRCC_BASE_ADDRESS     0x4001C000
#define MRCC_TMP0             (*(unsigned volatile long*) (MRCC_BASE_ADDRESS + 0xC4))   // Timer0 clock control

// Bits in MRCC_TMP0
#define RSTB        30        // Reset Negation
#define TM_MUX       4        // Functional Clock Mux Select
#define CC           0        // Clock Configuration



// Clocking registers
#define SCG0_BASE_ADDRESS     0x4001E000                  // System Clock Generator
#define CSR                   (*(unsigned volatile long*) (SCG0_BASE_ADDRESS + 0x10))   // Clock Status Register
#define RCCR                  (*(unsigned volatile long*) (SCG0_BASE_ADDRESS + 0x14))   // Run Clock Control Register
#define FIRCCSR               (*(unsigned volatile long*) (SCG0_BASE_ADDRESS + 0x300))  // Fast IRC Control Status Register
#define FIRCCFG               (*(unsigned volatile long*) (SCG0_BASE_ADDRESS + 0x308))  // Fast IRC Configuration Register
#define FIRCSTAT              (*(unsigned volatile long*) (SCG0_BASE_ADDRESS + 0x318))  // Fast IRC Status Register

// Bits in CSR
#define SCS         24        // System Clock Source
#define DIVCORE     16        // Core Clock Divide Ratio
#define DIVBUS       4        // Bus Clock Divide Ratio

// Bits in RCCR
#define SCS         24        // System Clock Source
#define DIVCORE     16        // Core Clock Divide Ratio
#define DIVBUS       4        // Bus Clock Divide Ratio
#define DIVSLOW      0        // Slow Clock Divide Ratio

// Bits in FIRCSR
#define FIRCSEL     25        // Fast IRC Selected status
#define FIRCVLD     24        // Fast IRC Valid status
#define FIRCEN       0        // Fast IRC Enable

// Bits in FIRCCFR
#define RANGE        0        // Frequency Range



// Timer / PWM registers
#define TMP0_BASE_ADDRESS     0x40031000
#define TMP0_SC               (*(unsigned long volatile*) (TMP0_BASE_ADDRESS + 0x10))
#define TMP0_CNT              (*(unsigned long volatile*) (TMP0_BASE_ADDRESS + 0x14))
#define TMP0_MOD              (*(unsigned long volatile*) (TMP0_BASE_ADDRESS + 0x18))

// Bits in TMP0_SC
#define TOF          7        // Timer Overflow Flag
#define TOIE         6        // Timer Overflow Interrupt Enable
#define CMOD         3        // Clock Mode Selection
#define PS           0        // Prescale Factor Selection



// PORT registers
#define PORTA_BASE_ADDRESS    0x40042000
#define PORTB_BASE_ADDRESS    0x40043000
#define PORTC_BASE_ADDRESS    0x40044000
#define PORTD_BASE_ADDRESS    0x40045000
#define PCR5                  (*(unsigned long volatile*) (PORTB_BASE_ADDRESS + 0x94))


// Bits in PCR18
#define MUX          8        // Pin Multiplex Control
#define ODE          5        // Open Drain Enable



// GPIO registers
#define GPIOA_BASE_ADDRESS    0x48010000
#define GPIOB_BASE_ADDRESS    0x48020000
#define GPIOC_BASE_ADDRESS    0x48030000
#define GPIOD_BASE_ADDRESS    0x40046000
#define PDOR                  (*(unsigned long volatile*) (GPIOB_BASE_ADDRESS + 0x40))
#define PTOR                  (*(unsigned long volatile*) (GPIOB_BASE_ADDRESS + 0x4C))
#define PDDR                  (*(unsigned long volatile*) (GPIOB_BASE_ADDRESS + 0x54))



// ITM registers
#define ITM_BASE_ADDRESS      0xE0000000
#define ITM_TER               (*(unsigned long volatile*) 0xE0000E00) // Trace enable
#define ITM_TPR               (*(unsigned long volatile*) 0xE0000E40) // Privilege



// System control block
#define SHPR3                 (*(unsigned volatile long*) 0xE000ED20)

// Bits in SHPR3
#define ST_PRI      24        // SysTick Priority



// SysTick (Non-secure) registers
#define SYST_CSR              (*(unsigned volatile long*) 0xE000E010)  // Control and status
#define SYST_RVR              (*(unsigned volatile long*) 0xE000E014)  // Reload value
#define SYST_CVR              (*(unsigned volatile long*) 0xE000E018)  // Current value
#define SYST_CALIB            (*(unsigned volatile long*) 0xE000E01C)  // Calibration value



// NVIC registers
#define ISER                  (*(unsigned volatile int*) 0xE000E104)
#define ICER                  (*(unsigned volatile int*) 0xE000E184)
#define IPR_BASE_ADDRESS      (*(unsigned volatile int*) 0xE000E400)



// Interrupt Control and State Registers
#define ICSR                  (*(unsigned volatile int*) 0xE000ED04)



// Vector table offset register
#define VTOR                  (*(unsigned volatile long*) 0xE000ED08)



#endif /* __KW45__H__ */