#ifndef __SJA1110A_h__
#define __SJA1110A_h__

// ITM
#define ITM_BASE_ADDRESS             (*(unsigned long volatile*)0xE0000000)
#define ITM_LOCK_ACCESS_REGISTER     (*(unsigned long volatile*)0xE0000FB0)
#define ITM_TRACE_ENABLE_REGISTER    (*(unsigned long volatile*)0xE0000E00)
#define ITM_TRACE_PRIVILEGE_REGISTER (*(unsigned long volatile*)0xE0000E40)

// Watchdog
#define SWT_CR    (*(unsigned long volatile*)0x4001F000)

// SysTick
#define SYSTICK_CSR (*(unsigned long volatile*)0xE000E010)
#define SYSTICK_CSR_ENABLE    0
#define SYSTICK_CSR_TICKINT   1
#define SYSTICK_CSR_CLKSOURCE 2

#define SYSTICK_RVR (*(unsigned long volatile*)0xE000E014)
#define SYSTICK_CVR (*(unsigned long volatile*)0xE000E018)


// GPIO
#define GPIO_BASE 0xFF712000UL
#define GPIO_PCOE (*(unsigned long volatile*)(GPIO_BASE + 0x200))
#define GPIO_PDOTGL (*(unsigned long volatile*)(GPIO_BASE + 0x00C))

#endif
