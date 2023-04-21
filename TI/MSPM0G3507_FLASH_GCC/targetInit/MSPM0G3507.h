#include <stdint.h>

/* Vector registers */
// VTO - Vector Table Offset Register
#define VTOR  *(volatile uint32_t *) 0xE000ED08


/* Clock module registers */
// High Speed Clock Enable
#define HSCLKEN   *(volatile uint32_t *) 0x400B0108
#define HSCLKEN_BIT_SYSPLLEN             8
#define HSCLKEN_BIT_HFXTEN               0

/* SysTick registers */
// SysTick Control and Status Register
#define SYST_CSR  *(volatile uint32_t *) 0xE000E010
// SysTick Reload Value Register
#define SYST_RVR  *(volatile uint32_t *) 0xE000E014

/* Status registers */
// Clock status
#define CLKSTATUS *(volatile uint32_t *) 0x400B0204
#define CLKSTATUS_BIT_SYSPLLGOOD         9        

// PLL
#define SYSPLLCFG0                    *(volatile uint32_t *)  0x400B0120
#define SYSPLLCFG0_SHIFT_RDIVCLK1                             12
#define SYSPLLCFG0_SHIFT_RDIVCLK2X                            16
#define SYSPLLCFG0_SHIFT_ENABLECLK1                           5
#define SYSPLLCFG0_SHIFT_ENABLECLK2X                          6
#define SYSPLLCFG0_SHIFT_MCLK2XVCO                            1

#define SYSPLLCFG1                    *(volatile uint32_t *)  0x400B0124
#define SYSPLLCFG1_SHIFT_QDIV                                 8
#define SYSPLLCFG1_SHIFT_PDIV                                 0

#define SYSPLLPARAM0                  *(volatile uint32_t *)  0x400B0128
#define SYSPLLPARAM1                  *(volatile uint32_t *)  0x400B012C

// Main clock
#define MCLKCFG                       *(volatile uint32_t *)  0x400B0104
#define MCLKCFG_SHIFT_USEHSCLK                                16


/* GPIO */
// Port B Data Output Enable bits 31 - 0
#define GPIOB_DOESET31_0              *(volatile uint32_t *)  0x400A32D0

// Port B Data output toggle
#define GPIOB_DOUTTGL31_0             *(volatile uint32_t *)  0x400A32B0

// GPIOB Data Output 31 - 0
#define GPIOB_DOE31_0                 *(volatile uint32_t *)  0x400A3280

// Define PINCM12 (PB0 pin)
#define PINCM_PB0                     *(volatile uint32_t *)  0x40428034
#define PINCM_PB0_SHIFT_PC                                    7

// Power register for GPIOB
#define GPIOB_PWREN                   *(volatile uint32_t *)  0x400A2800

// Power control for GPIO
#define GPIOB_PWRCTL                  *(volatile uint32_t *)  0x400A301C

// Reset control
#define GPIOB_RSTCTL                  *(volatile uint32_t *)  0x400A2804
  
// IO pad control 32 (PB16) 
#define IO_PINCM32                    *(volatile uint32_t *)  0x40428084
  
/* Watchdog */  
// WD0Power
#define WWDT0_PWREN                   *(volatile uint32_t *)  0x40080800

// WD1Power
#define WWDT1_PWREN                   *(volatile uint32_t *)  0x40082800

/*****************************************************************/
/* Configuration */
#define CONFIG_VECTOR_VTOR_OFFSET    0x20200000

/* System configuration */
// System constants
#define CONFIG_CPU_FREQ              80000000U

// SysTick configuration
#define CONFIG_SYSINT_MS  1
#define SYSTICK_REQUIRED_TICKS      (CONFIG_CPU_FREQ / 1000 * CONFIG_SYSINT_MS - 1)

// GPIO
#define GPIOB_OUTPUT_PIN             16