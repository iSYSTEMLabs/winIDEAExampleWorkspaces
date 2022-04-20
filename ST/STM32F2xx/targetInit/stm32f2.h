
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

#define RCC_CR (*(volatile unsigned int *)0x40023800)
#define PLLRDY 25
#define PLLON 24
#define HSERDY 17
#define HSEON 16

#define RCC_PLLCFGR (*(volatile unsigned int *)0x40023804)
#define PLLSRC 22
#define PLLP 16
#define PLLN 6
#define PLLM 0

#define RCC_CFGR (*(volatile unsigned int *)0x40023808)
#define SWS 2
#define SW 0

#define RCC_AHB1ENR (*(volatile unsigned int *)0x40023830)
#define GPIOGEN 6

#define RCC_APB1ENR (*(volatile unsigned int *)0x40023840)
#define TIM2EN 0

#define FLASH_ACR (*(volatile unsigned int *)0x40023C00)
#define LATENCY 0

#define GPIOG_MODER (*(volatile unsigned int *)0x40021800)
#define MODER8 16

#define GPIOG_ODR (*(volatile unsigned int *)0x40021814)
#define ODR8 8

#define INT_0_31_SET_EN (*(volatile unsigned int *)0xE000E100)
#define TIM2_IRQ 28

#define INT_0_31_CLR_EN (*(volatile unsigned int *)0xE000E180)
