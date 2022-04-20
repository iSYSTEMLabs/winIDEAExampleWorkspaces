
void enterAndExitStopMode(void);
#define memW32(address) (*(unsigned long *)(address))
#define memW16(address) (*(unsigned short *)(address))
#define memW8(address) (*(unsigned char *)(address))
#define ITM_BASE_ADDRESS (0xE0000000UL)
#define ITM_LOCK_ACCESS_REGISTER (ITM_BASE_ADDRESS + 0x0FB0UL)
#define ITM_TRACE_ENABLE_REGISTER (ITM_BASE_ADDRESS + 0x0E00UL)
#define ITM_TRACE_PRIVILEGE_REGISTER (ITM_BASE_ADDRESS + 0x0E40UL)

#define TIM2_CR1 (*(volatile unsigned int *)0x40000000)
#define TIM21_CR1 (*(volatile unsigned int *)0x40010800)
#define OPM 3
#define UDIS 1
#define URS 2
#define CEN 0

#define TIM2_DIER (*(volatile unsigned int *)0x4000000C)
#define TIM21_DIER (*(volatile unsigned int *)0x4001080C)
#define CC1IE 1

#define TIM21_CCR1 (*(volatile unsigned int *)0x40010834)
#define TIM21_CCR2 (*(volatile unsigned int *)0x40010838)

#define TIM21_CNT (*(volatile unsigned int *)0x40010824)

#define TIM2_SR (*(volatile unsigned int *)0x40000010)
#define TIM21_SR (*(volatile unsigned int *)0x40010810)
#define CC1IF 1
#define CC2IF 2
#define UIF 0

#define TIM21_EGR (*(volatile unsigned int *)0x40010814)
#define TIM21_EGR_UG 0

#define TIM2_ARR (*(volatile unsigned int *)0x4000002C)
#define TIM21_ARR (*(volatile unsigned int *)0x4001082C)

#define TIM21_PSC (*(volatile unsigned int *)0x40010828)

#define PWR_CR (*(volatile unsigned int *)0x40007000)
#define PWR_CR_CSBF 3
#define PWR_CR_CWUF 2
#define PWR_CR_PDDS 1
#define PWR_CR_FWU 10
#define PWR_CR_DBP 8

#define PWR_CSR (*(volatile unsigned int *)0x40007004)
#define PWR_CSR_EWUP 8
#define PWR_CSR_SBF 1

#define RCC_CR (*(volatile unsigned int *)0x40021000)
#define PLLRDY 25
#define PLLON 24
#define HSI16RDY 2
#define HSI16ON 0

#define RCC_CFGR (*(volatile unsigned int *)0x4002100C)
#define PLLDIV 22
#define PLLMUL 18
#define PLLSRC 16
#define PPRE1 8
#define PPRE2 11
#define HPRE 4
#define SWS 2
#define SW 0
#define RCC_CFGR_STOPWUCK 15

#define RCC_IOPENR (*(volatile unsigned int *)0x4002102C)
#define IOPAEN 0
#define IOPCEN 2

#define RCC_APB1ENR (*(volatile unsigned int *)0x40021038)
#define PWREN 28
#define TIM2EN 0

#define RCC_APB2ENR (*(volatile unsigned int *)0x40021034)
#define TIM21EN 2

#define FLASH_ACR (*(volatile unsigned int *)0x40022000)
#define LATENCY 0

#define GPIOA_MODER (*(volatile unsigned int *)0x50000000)
#define MODER5 10

#define GPIOC_MODER (*(volatile unsigned int *)0x50000800)
#define MODER13 26

#define GPIOA_ODR (*(volatile unsigned int *)0x50000014)
#define ODR5 5

#define INT_0_31_SET_EN (*(volatile unsigned int *)0xE000E100)
#define TIM2_IRQ 15
#define TIM21_IRQ 20
#define RTC_IRQ 2

#define INT_0_31_CLR_EN (*(volatile unsigned int *)0xE000E180)

#define RTC_WPR (*(volatile unsigned int *)0x40002824)
#define RTC_WUTR (*(volatile unsigned int *)0x40002814)
#define RTC_ISR (*(volatile unsigned int *)0x4000280C)
#define RTC_ISR_INIT 7
#define RTC_ISR_INITF 6
#define RTC_ISR_RSF 5
#define RTC_ISR_WUTF 10
#define RTC_ISR_WUTWF 2
#define RTC_CR (*(volatile unsigned int *)0x40002808)
#define RTC_CR_WUCKSEL 0
#define RTC_CR_WUTIE 14
#define RTC_CR_WUTE 10
#define RTC_CR_BYPSHAD 5
#define RTC_CR_OSEL 21
#define RTC_PRER (*(volatile unsigned int *)0x40002810)
#define RTC_PRER_PREDIVS 0
#define RTC_PRER_PREDIVA 16


#define RCC_CSR (*(volatile unsigned int *)0x40021050)
#define RCC_CSR_LSION 0
#define RCC_CSR_LSIRDY 1
#define RCC_CSR_LSEON 8
#define RCC_CSR_LSERDY 9
#define RCC_CSR_RTCSEL 16
#define RCC_CSR_RTCEN 18
#define RCC_CSR_RTCRST 19

#define EXTI_IMR (*(volatile unsigned int *)0x40010400)
#define EXTI_IMR_MR20 20
#define EXTI_RTSR (*(volatile unsigned int *)0x40010408)
#define EXTI_RTSR_TR20 20
#define EXTI_PR (*(volatile unsigned int *)0x40010414)
#define EXTI_PR_PR20 20

#define SCR (*(volatile unsigned int *)0xE000ED10)
#define SCR_SLEEPDEEP 2
#define SCR_SEVONPEND 4