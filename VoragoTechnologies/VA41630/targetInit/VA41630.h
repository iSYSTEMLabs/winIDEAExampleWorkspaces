#ifndef __VA41630_h__
#define __VA41630_h__

// NVIC
#define NVIC_INT_0_31_CLR_EN (*(unsigned long volatile*)0xE000E180)
#define NVIC_INT_32_63_CLR_EN (*(unsigned long volatile*)0xE000E184)
#define NVIC_INT_64_95_CLR_EN (*(unsigned long volatile*)0xE000E188)

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

// System Configuration Peripheral
#define SYSCONFIG_BASE 0x40010000UL
#define SYSCONFIG_PERIPHERAL_CLK_ENABLE (*(unsigned long volatile*)(SYSCONFIG_BASE+0x5C))
#define SYSCONFIG_PERIPHERAL_CLK_ENABLE_PORTC 26

// GPIO
#define PORTC_BASE 0x40012800UL
#define PORTC_TOGOUT (*(unsigned long volatile*)(PORTC_BASE+0x18))
#define PORTC_DIR (*(unsigned long volatile*)(PORTC_BASE+0x20))
#define PIN0 0

#endif