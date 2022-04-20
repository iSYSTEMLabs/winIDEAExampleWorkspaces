
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

#define RCC_CFGR (*(volatile unsigned int *)0x40021008)
#define SWS 2
#define SW 0

#define RCC_PLLCFGR (*(volatile unsigned int *)0x4002100C)
#define PLLR 29
#define PLLREN 28
#define PLLN 8
#define PLLM 4
#define PLLSRC 0

#define RCC_APBENR1 (*(volatile unsigned int *)0x4002103C)
#define TIM2EN 0

#define RCC_IOPENR (*(volatile unsigned int *)0x40021034)
#define IOPAEN 0

#define FLASH_ACR (*(volatile unsigned int *)0x40022000)
#define LATENCY 0

#define GPIOA_MODER (*(volatile unsigned int *)0x50000000)
#define MODER5 10

#define GPIOA_ODR (*(volatile unsigned int *)0x50000014)
#define ODR5 5

#define INT_0_31_SET_EN (*(volatile unsigned int *)0xE000E100)
#define TIM2_IRQ 15

#define INT_0_31_CLR_EN (*(volatile unsigned int *)0xE000E180)
