
void enterAndExitStopMode(void);
#define memW32(address) (*(unsigned long*)(address))
#define memW16(address) (*(unsigned short*)(address))
#define memW8(address) (*(unsigned char*)(address))
#define ITM_BASE_ADDRESS (0xE0000000UL)
#define ITM_LOCK_ACCESS_REGISTER (ITM_BASE_ADDRESS + 0x0FB0UL)
#define ITM_TRACE_ENABLE_REGISTER (ITM_BASE_ADDRESS + 0x0E00UL)
#define ITM_TRACE_PRIVILEGE_REGISTER (ITM_BASE_ADDRESS + 0x0E40UL)

// RCU
#define RCU_BASE_ADDRESS 0x40023800UL

#define RCU_CTL (*(volatile unsigned long*)(RCU_BASE_ADDRESS))
#define RCU_CTL_PLLSTB  25
#define RCU_CTL_PLLEN   24
#define RCU_CTL_CKMEN   19
#define RCU_CTL_XTALSTB 17
#define RCU_CTL_HXTALEN 16

#define RCU_PLL (*(volatile unsigned long*)(RCU_BASE_ADDRESS + 0x04))
#define RCU_PLLQ   24
#define RCU_PLLSEL 22
#define RCU_PLLP   16
#define RCU_PLLN   6
#define RCU_PLLPSC 0

#define RCU_CFG0 (*(volatile unsigned long*)(RCU_BASE_ADDRESS + 0x08))
#define RCU_CFG0_SCSS 2
#define RCU_CFG0_SCS  0

#define RCU_AHB1EN (*(volatile unsigned long*)(RCU_BASE_ADDRESS + 0x30))
#define RCU_AHB1EN_PDEN 3

// GPIO
#define GPIOD_BASE_ADDRESS  0x40020C00UL

#define GPIOD_CTL (*(volatile unsigned long*)(GPIOD_BASE_ADDRESS))
#define GPIOD_CTL_OUTPUT 0b01

#define GPIOD_BOP (*(volatile unsigned long*)(GPIOD_BASE_ADDRESS + 0x18))

// SysTick
#define SYSTICK_CSR (*(volatile unsigned long*)0xE000E010)
#define SYSTICK_CSR_ENABLE    0
#define SYSTICK_CSR_TICKINT   1
#define SYSTICK_CSR_CLKSOURCE 2

#define SYSTICK_RVR (*(volatile unsigned long*)0xE000E014)
#define SYSTICK_CVR (*(volatile unsigned long*)0xE000E018)
