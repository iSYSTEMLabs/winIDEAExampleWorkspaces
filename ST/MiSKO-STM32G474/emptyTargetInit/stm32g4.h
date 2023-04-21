
void enterAndExitStopMode(void);
#define memW32(address) (*(unsigned long *)(address))
#define memW16(address) (*(unsigned short *)(address))
#define memW8(address) (*(unsigned char *)(address))
#define ITM_BASE_ADDRESS (0xE0000000UL)
#define ITM_LOCK_ACCESS_REGISTER (ITM_BASE_ADDRESS + 0x0FB0UL)
#define ITM_TRACE_ENABLE_REGISTER (ITM_BASE_ADDRESS + 0x0E00UL)
#define ITM_TRACE_PRIVILEGE_REGISTER (ITM_BASE_ADDRESS + 0x0E40UL)

#define TIMER2_CR1 (*(volatile unsigned int *)0x40000000)
#define OPM 3
#define CEN 0

#define TIMER2_DIER (*(volatile unsigned int *)0x4000000C)
#define CC1IE 1

#define TIMER2_SR (*(volatile unsigned int *)0x40000010)
#define CC1IF 1

#define TIMER2_ARR (*(volatile unsigned int *)0x4000002C)

#define RCC_CR (*(volatile unsigned int *)0x40021000)
#define PLLRDY 25
#define PLLON 24
#define HSERDY 17
#define HSEON 16

#define RCC_CFGR (*(volatile unsigned int *)0x40021008)
#define PPRE2 11
#define PPRE1 8
#define HPRE 4
#define SWS 2
#define SW 0

#define RCC_PLLCFGR (*(volatile unsigned int *)0x4002100C)
#define PLLR 25
#define PLLREN 24
#define PLLN 8
#define PLLM 4
#define PLLSRC 0

#define RCC_APB1ENR (*(volatile unsigned int *)0x40021058)
#define TIM2EN 0

#define RCC_AHB2ENR (*(volatile unsigned int *)0x4002104C)
#define GPIOFEN 5

#define RCC_APB1LENR (*(volatile unsigned int *)0x40021058)
#define TIM2EN 0

#define FLASH_ACR (*(volatile unsigned int *)0x40022000)
#define LATENCY 0

#define GPIOF_MODER (*(volatile unsigned int *)0x48001400)
#define MODER11 22

#define GPIOF_ODR (*(volatile unsigned int *)0x48001414)
#define ODR11 11

#define INT_0_31_SET_EN (*(volatile unsigned int *)0xE000E100)
#define TIM2_IRQ 28

#define INT_0_31_CLR_EN (*(volatile unsigned int *)0xE000E180)

#define SCB_VTOR (*(volatile unsigned int *)0xE000ED08)
#define SCB_CPACR (*(volatile unsigned int *)0xE000ED88)

