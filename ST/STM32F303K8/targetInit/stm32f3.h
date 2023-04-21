
void enterAndExitStopMode(void);
#define memW32(address) (*(unsigned long *)(address))
#define memW16(address) (*(unsigned short *)(address))
#define memW8(address) (*(unsigned char *)(address))
#define ITM_BASE_ADDRESS (0xE0000000UL)
#define ITM_LOCK_ACCESS_REGISTER (ITM_BASE_ADDRESS + 0x0FB0UL)
#define ITM_TRACE_ENABLE_REGISTER (ITM_BASE_ADDRESS + 0x0E00UL)
#define ITM_TRACE_PRIVILEGE_REGISTER (ITM_BASE_ADDRESS + 0x0E40UL)

#define TIM2_CR1 (*(volatile unsigned int *)0x40000000)
#define OPM 3
#define CEN 0

#define TIM2_DIER (*(volatile unsigned int *)0x4000000C)
#define CC1IE 1

#define TIM2_SR (*(volatile unsigned int *)0x40000010)
#define CC1IF 1

#define TIM2_ARR (*(volatile unsigned int *)0x4000002C)

#define RCC_CR (*(volatile unsigned int *)0x40021000)
#define PLLRDY 25
#define PLLON 24

#define RCC_CFGR (*(volatile unsigned int *)0x40021004)
#define PLLMUL 18
#define PLLSRC 15
#define PPRE1 8
#define HPRE 4
#define SWS 1
#define SW 0

#define RCC_AHBENR (*(volatile unsigned int *)0x40021014)
#define IOPEEN 21

#define RCC_APB1ENR (*(volatile unsigned int *)0x4002101C)
#define TIM2EN 0

#define FLASH_ACR (*(volatile unsigned int *)0x40022000)
#define LATENCY 0

#define GPIOE_MODER (*(volatile unsigned int *)0x48001000)
#define MODER8 16

#define GPIOE_ODR (*(volatile unsigned int *)0x48001014)
#define ODR8 8

#define INT_0_31_SET_EN (*(volatile unsigned int *)0xE000E100)
#define TIM2_IRQ 28

#define INT_0_31_CLR_EN (*(volatile unsigned int *)0xE000E180)
