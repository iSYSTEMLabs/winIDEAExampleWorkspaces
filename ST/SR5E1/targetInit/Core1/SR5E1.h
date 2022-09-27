#ifndef __SR5E1_h__
#define __SR5E1_h__

// Secondary core
#define C2_VTOR_INIT_REG   (*(unsigned long volatile*)0x44000308)
#define C2_BOOT_CTRL_REG   (*(unsigned long volatile*)0x44000314)

#define C2_BOOT_ADDRESS 0x080F0000

// ITM
#define ITM_BASE_ADDRESS             (*(unsigned long volatile*)0xE0000000)
#define ITM_LOCK_ACCESS_REGISTER     (*(unsigned long volatile*)0xE0000FB0)
#define ITM_TRACE_ENABLE_REGISTER    (*(unsigned long volatile*)0xE0000E00)
#define ITM_TRACE_PRIVILEGE_REGISTER (*(unsigned long volatile*)0xE0000E40)

// RCC
#define RCC_BASE 0x44000000UL
#define RCC_CR (*(unsigned long volatile*)(RCC_BASE+0x000))
#define RCC_CR_PLL1LOCK 29
#define RCC_CR_PLL1ON   28
#define RCC_CR_XOSCRDY  17
#define RCC_CR_XOSCON   16

#define RCC_CFGR (*(unsigned long volatile*)(RCC_BASE+0x008))
#define RCC_CFGR_SWS 3
#define RCC_CFGR_SW 0
#define RCC_CFGR_SW_PLL1 0b111

#define RCC_PLLCFGR (*(unsigned long volatile*)(RCC_BASE+0x00C))
#define RCC_PLLCFGR_PLL1SRC 8
#define RCC_PLLCFGR_PLL1SRC_XOSC 0b11

#define RCC_AHB2LENR (*(unsigned long volatile*)(RCC_BASE+0x078))
#define RCC_AHB2LENR_GPIOH 7

// PLL
#define PLLDIG_BASE 0x4001D800UL
#define PLLDIG_PLL1DV (*(unsigned long volatile*)(PLLDIG_BASE+0x028))
#define PLLDIG_PLL1DV_RFDPHI 16
#define PLLDIG_PLL1DV_MFD 0

// GPIO
#define GPIOH_BASE 0x48001C00UL
#define GPIOH_MODER (*(unsigned long volatile*)(GPIOH_BASE+0x000))
#define GPIOH_MODER_PIN2 (2*2) // 2 bits per pin * 2nd pin
#define GPIOH_MODER_OUTPUT_MODE 0b01

#define GPIOH_BSRR (*(unsigned long volatile*)(GPIOH_BASE+0x018))

// SysTick
#define SYSTICK_CSR (*(unsigned long volatile*)0xE000E010)
#define SYSTICK_CSR_ENABLE    0
#define SYSTICK_CSR_TICKINT   1
#define SYSTICK_CSR_CLKSOURCE 2

#define SYSTICK_RVR (*(unsigned long volatile*)0xE000E014)
#define SYSTICK_CVR (*(unsigned long volatile*)0xE000E018)

#endif
