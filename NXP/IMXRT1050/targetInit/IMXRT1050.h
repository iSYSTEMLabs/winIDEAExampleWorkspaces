#ifndef __IMXRT1050_h__
#define __IMXRT1050_h__

// ITM
#define ITM_BASE_ADDRESS             (*(unsigned long volatile*)0xE0000000)
#define ITM_LOCK_ACCESS_REGISTER     (*(unsigned long volatile*)0xE0000FB0)
#define ITM_TRACE_ENABLE_REGISTER    (*(unsigned long volatile*)0xE0000E00)
#define ITM_TRACE_PRIVILEGE_REGISTER (*(unsigned long volatile*)0xE0000E40)

// SysTick
#define SYSTICK_CSR (*(unsigned long volatile*)0xE000E010)
#define SYSTICK_CSR_ENABLE    0
#define SYSTICK_CSR_TICKINT   1
#define SYSTICK_CSR_CLKSOURCE 2

#define SYSTICK_RVR (*(unsigned long volatile*)0xE000E014)
#define SYSTICK_CVR (*(unsigned long volatile*)0xE000E018)

// GPIO
#define GPIO1_BASE (unsigned long)0x401B8000
#define GPIO1_DR   (*(unsigned volatile int*)(GPIO1_BASE))
#define GPIO1_GDIR (*(unsigned volatile int*)(GPIO1_BASE + 0x04))

// CCM
#define CCM_CCGR1 (*(unsigned long volatile*)0x400FC06C)
#define CCM_CBCMR (*(unsigned long volatile*)0x400FC018)
#define CCM_CBCMR_PERIPH_CLK_SEL  18
#define CCM_CBCMR_PERIPH_CLK2_SEL 12

#define CCM_CBCDR (*(unsigned long volatile*)0x400FC014)
#define CCM_CBCDR_PERIPH_CLK_SEL 25

#define CCM_ANALOG_PLL_ARM (*(unsigned long volatile*)0x400D8000)
#define CCM_ANALOG_PLL_ARM_LOCK      31
#define CCM_ANALOG_PLL_ARM_ENABLE    13

// DCDC
#define DCDC_REG3 (*(unsigned long volatile*)0x4008000C)
#define DCDC_REG3_TRG 0

// Watchdog
#define WDOG3_BASE (unsigned long)0x400BC000
#define WDOG3_CS   (*(unsigned long volatile*)(WDOG3_BASE))
#define WDOG3_CNT  (*(unsigned long volatile*)(WDOG3_BASE + 0x04))

#endif
