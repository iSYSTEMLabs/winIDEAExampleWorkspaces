
#define memW32(address) (*(unsigned long *)(address))
#define memW16(address) (*(unsigned short *)(address))
#define memW8(address) (*(unsigned char *)(address))
#define ITM_BASE_ADDRESS (0xE0000000UL)
#define ITM_LOCK_ACCESS_REGISTER (ITM_BASE_ADDRESS + 0x0FB0UL)
#define ITM_TRACE_ENABLE_REGISTER (ITM_BASE_ADDRESS + 0x0E00UL)
#define ITM_TRACE_PRIVILEGE_REGISTER (ITM_BASE_ADDRESS + 0x0E40UL)

#define INT_0_31_SET_EN (*(volatile unsigned int *)0xE000E100)
#define TIM2_IRQ 28

#define INT_0_31_CLR_EN (*(volatile unsigned int *)0xE000E180)

#define SYST_CSR (*(volatile unsigned long *)0xE000E010)
#define SYST_RVR (*(volatile unsigned long *)0xE000E014)

#define TIM2_CR1 (*(volatile unsigned long *)0x40000000)
#define CEN 0

#define TIM2_DIER (*(volatile unsigned long *)0x4000000C)
#define CC1IE 1

#define TIM2_SR (*(volatile unsigned long *)0x40000010)
#define CC1IF 1

#define TIM2_ARR (*(volatile unsigned long *)0x4000002C)

#define FLASH_ACR (*(volatile unsigned long *)0x52002000)
#define LATENCY 0

#define GPIOF_MODER (*(volatile unsigned long *)0x58021400)
#define MODE10 20

#define GPIOF_ODR (*(volatile unsigned long *)0x58021414)
#define ODR10 10

#define RCC_CR (*(volatile unsigned long *)0x58024400)
#define HSEON 16
#define HSERDY 17
#define PLL1ON 24
#define PLL1RDY 25

#define RCC_CFGR (*(volatile unsigned long *)0x58024410)
#define SW 0
#define SWS 3

#define RCC_D1CFGR (*(volatile unsigned long *)0x58024418)
#define HPRE 0
#define D1PPRE 4

#define RCC_D2CFGR (*(volatile unsigned long *)0x5802441C)
#define D2PPRE1 4
#define D2PPRE2 8

#define RCC_D3CFGR (*(volatile unsigned long *)0x58024420)
#define D3PPRE 4

#define RCC_PLLCKSELR (*(volatile unsigned long *)0x58024428)
#define PLLSRC 0
#define DIVM1 4
#define DIVM2 12
#define DIVM3 20

#define RCC_PLLCFGR (*(volatile unsigned long *)0x5802442C)
#define PLL1VCOSEL 1
#define PLL1RGE 2
#define DIVP1EN 16
#define DIVQ1EN 17
#define DIVR1EN 18

#define RCC_PLL1DIVR (*(volatile unsigned long *)0x58024430)
#define DIVN1 0
#define DIVP1 9
#define DIVQ1 16
#define DIVR1 24

#define RCC_APB4ENR (*(volatile unsigned long *)0x580244E0)
#define GPIOFEN 5

#define RCC_APB1LENR (*(volatile unsigned long *)0x580244E8)
#define TIM2EN 0

#define PWR_PWRCR3 (*(volatile unsigned long *)0x5802480C)
#define SDEN 2

#define PWR_PWRD3CR (*(volatile unsigned long *)0x58024818)
#define VOS 14
