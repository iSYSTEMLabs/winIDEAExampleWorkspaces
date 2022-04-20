#ifndef __LPC54100__H__
#define __LPC54100__H__

/*****************************************************************************
 * Include files 
 *****************************************************************************/

#include "Types.h"



/*****************************************************************************
 * Defines
 *****************************************************************************/
#define ITM_BASE_ADDRESS             (*(unsigned long volatile*)0xE0000000)
#define ITM_LOCK_ACCESS_REGISTER     (*(unsigned int volatile*)(ITM_BASE_ADDRESS + 0x0FB0UL))
#define ITM_TRACE_ENABLE_REGISTER    (*(unsigned int volatile*)(ITM_BASE_ADDRESS + 0x0E00UL))
#define ITM_TRACE_PRIVILEGE_REGISTER (*(unsigned int volatile*)(ITM_BASE_ADDRESS + 0x0E40UL))

/*****************************************************************************
 * Registers
 *****************************************************************************/
#define SYSCON_BASE_ADDRESS             0x40000000
#define SYSCON_SYSMEMMAP_ADDR           (SYSCON_BASE_ADDRESS + 0x000)
#define SYSCON_FLASHCFG_ADDR            (SYSCON_BASE_ADDRESS + 0x124)

#define SYSCON_AHBCLKCTRLSET0_ADDR      (SYSCON_BASE_ADDRESS + 0x0C8)
#define AHBCLKCTRL0_FLASH_ENABLE_MASK   1<<7
#define AHBCLKCTRL0_FMC_ENABLE_MASK     1<<8


#define SYSCON_PDRUNCFGCLR_ADDR         (SYSCON_BASE_ADDRESS + 0x218)
#define PDRUNCFG_PDEN_FLASH_MASK        1<<5
#define PDRUNCFG_PDEN_SRAM0A_MASK       1<<13
#define PDRUNCFG_PDEN_SRAM0B_MASK       1<<14

#define SYSCON_MEMMAP_REG               *((volatile unsigned long *) SYSCON_SYSMEMMAP_ADDR)
#define SYSCON_FLASHCFG_REG             *((volatile unsigned long *) SYSCON_FLASHCFG_ADDR)  
#define SYSCON_AHBCLKCTRLSET0_REG       *((volatile unsigned long *) SYSCON_AHBCLKCTRLSET0_ADDR)
#define SYSCON_PDRUNCFGCLR_REG          *((volatile unsigned long *) SYSCON_PDRUNCFGCLR_ADDR)


#define SYSCON_CPUCTRL_ADDR             (SYSCON_BASE_ADDRESS + 0x300)
#define SYSCON_CPBOOT_ADDR              (SYSCON_BASE_ADDRESS + 0x304)
#define SYSCON_CPSTACK_ADDR             (SYSCON_BASE_ADDRESS + 0x308)
#define SYSCON_CPSTAT_ADDR              (SYSCON_BASE_ADDRESS + 0x30C)

#define SYSCON_CPUCTRL_REG              *((volatile unsigned long *) SYSCON_CPUCTRL_ADDR)
#define SYSCON_CPBOOT_REG               *((volatile unsigned long *) SYSCON_CPBOOT_ADDR )
#define SYSCON_CPSTACK_REG              *((volatile unsigned long *) SYSCON_CPSTACK_ADDR)
#define SYSCON_CPSTAT_REG               *((volatile unsigned long *) SYSCON_CPSTAT_ADDR )

#define CPUCTRL_KEY_MASK                0xFFFF0000
#define CPUCTRL_KEY                     0xC0C40000
#define CPUCTRL_CM0CLKEN                1<<3
#define CPUCTRL_CM0RSTEN                1<<5
#define CPUCTRL_RESERVED                1<<15


#define WDOG_BASE_ADDRESS               0x40038000
#define WDOG_MOD_ADDR                   (WDOG_BASE_ADDRESS + 0x000)
#define WDOG_TC_ADDR                    (WDOG_BASE_ADDRESS + 0x004)
#define WDOG_FEED_ADDR                  (WDOG_BASE_ADDRESS + 0x008)
#define WDOG_TV_ADDR                    (WDOG_BASE_ADDRESS + 0x00C)
#define WDOG_WARNINT_ADDR               (WDOG_BASE_ADDRESS + 0x014)
#define WDOG_WINDOW_ADDR                (WDOG_BASE_ADDRESS + 0x018)

#define WDOG_MOD_REG                    *((volatile unsigned long *) WDOG_MOD_ADDR)
#define WDOG_TC_REG                     *((volatile unsigned long *) WDOG_TC_ADDR)
#define WDOG_FEED_REG                   *((volatile unsigned long *) WDOG_FEED_ADDR)
#define WDOG_TV_REG                     *((volatile unsigned long *) WDOG_TV_ADDR)
#define WDOG_WARNINT_REG                *((volatile unsigned long *) WDOG_WARNINT_ADDR)
#define WDOG_WINDOW_REG                 *((volatile unsigned long *) WDOG_WINDOW_ADDR)

#define WDOG_MOD_WDEN                   1<<0
#define WDOG_MOD_WDPROTECT              1<<4      // WINDOW MODE

#define WDOG_COUNT_MASK                 0x00FFFFFF

// Other defines
#define SYSCON_AHBCLKCTRL0 (*(unsigned int volatile*)0x400000C0)
#define SYSCON_AHBCLKCTRL1 (*(unsigned int volatile*)0x400000C4)

// GPIO defines
#define SYSCON_AHBCLKCTRL0_GPIO0 14
#define GPIO_DIR0 (*(unsigned int volatile*)0x1C002000)
#define GPIO_NOT0 (*(unsigned int volatile*)0x1C002300)
#define GPIO_PIN 29 // GPIO0 PIN 29 -> RGB LED Red

// CLOCK defines
#define MAINCLKSELA (*(unsigned int volatile*)0x40000080)
#define MAINCLKSELB (*(unsigned int volatile*)0x40000084)
#define MAINCLKSELB_SEL 0

#define SYSPLLCLKSEL (*(unsigned int volatile*)0x400000A0)
#define SYSPLLCLKSEL_SEL 0
#define SYSPLLCTRL (*(unsigned int volatile*)0x400001B0)
#define SYSPLLSTAT (*(unsigned int volatile*)0x400001B4)
#define SYSPLLSTAT_LOCK 0
#define SYSPLLNDEC (*(unsigned int volatile*)0x400001B8)
#define SYSPLLNDEC_NREQ 10
#define SYSPLLPDEC (*(unsigned int volatile*)0x400001BC)
#define SYSPLLPDEC_PREQ 7
#define SYSPLLSSCTRL0 (*(unsigned int volatile*)0x400001C0) // for M divider
#define SYSPLLSSCTRL0_MREQ 17
#define SYSPLLSSCTRL0_SEL_EXT 18
#define SYSPLLCTRL_SELP 10
#define SYSPLLCTRL_SELI 4
#define SYSPLLCTRL_SELR 0
#define SYSPLLCTRL_BYPASS 15
#define SYSPLLCTRL_BYPASS_CCODIV2 16
#define SYSPLLCTRL_UPLIMOFF 17
#define SYSPLLCTRL_BANDSEL 18
#define SYSPLLCTRL_DIRECTI 19
#define SYSPLLCTRL_DIRECTO 20

#define ASYNCAPBCTRL (*(unsigned int volatile*)0x40000020)
#define ASYNCAPBCTRL_ENABLE 0
#define ASYNCAPBCLKSELA (*(unsigned int volatile*)0x40080020)
#define ASYNCAPBCLKSELA_SEL 0
#define ASYNCAPBCLKSELB (*(unsigned int volatile*)0x40080024)
#define ASYNCAPBCLKSELB_SEL 0
#define FLASHCFG (*(unsigned int volatile*)0x40000124)
#define FLASHCFG_FLASHTIM 12

#define PDRUNCFG (*(unsigned int volatile*)0x40000210)
#define PDRUNCFGSET (*(unsigned int volatile*)0x40000214)
#define PDRUNCFGCLR (*(unsigned int volatile*)0x40000218)
#define PDRUNCFG_PLL 22

// Timer 0 defines
#define ASYNCAPBCLKCTRL (*(unsigned int volatile*)0x40080010)
#define ASYNCAPBCLKCTRL_CT32B0 13
#define CT32B0_BASE (*(unsigned int volatile*)0x400B4000)
#define CT32B0_IR_MR0INT 0
#define CT32B0_TCR (*(unsigned int volatile*)0x400B4004)
#define CT32B0_TCR_CEN 0
#define CT32B0_MCR (*(unsigned int volatile*)0x400B4014)
#define CT32B0_MR0 (*(unsigned int volatile*)0x400B4018)
#define CT32B0_MCR_MROI 0
#define CT32B0_MCR_MROR 1

#define NVIC_ISER0 (*(unsigned int volatile*)0xE000E100)
#define NVIC_ISER0_CT32B0 11

/*****************************************************************************
 * Sectors
 *****************************************************************************/
  
 
/*****************************************************************************
 * Functions
 *****************************************************************************/
void initGPIO();
void initClock();
void initTimer();

/*****************************************************************************
 * Globals
 *****************************************************************************/


#endif /* __LPC54100__H__ */