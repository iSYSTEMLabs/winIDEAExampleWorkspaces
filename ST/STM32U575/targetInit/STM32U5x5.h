void initClock(void);
void initTimer(void);
void initSysTick(void);
void targetEnableInterrupts(void);
void TimerInterruptHandler(void);

#define ITM_BASE_ADDRESS (0xE0000000UL)
#define memW32(address) (*(unsigned long*)(address))
#define memW16(address) (*(unsigned short*)(address))
#define memW8(address) (*(unsigned char*)(address))


// ITM
#define ITM_LOCK_ACCESS_REGISTER (ITM_BASE_ADDRESS + 0x0FB0UL)
#define ITM_TRACE_ENABLE_REGISTER (ITM_BASE_ADDRESS + 0x0E00UL)
#define ITM_TRACE_PRIVILEGE_REGISTER (ITM_BASE_ADDRESS + 0x0E40UL)

// RCC 
#define RCC_BASE         0x46020C00
#define RCC_CR           (*(unsigned long volatile*)(RCC_BASE + 0x00))
#define RCC_CFGR1        (*(unsigned long volatile*)(RCC_BASE + 0x1C))
#define RCC_CFGR2        (*(unsigned long volatile*)(RCC_BASE + 0x20))
#define RCC_PLL1CFGR     (*(unsigned long volatile*)(RCC_BASE + 0x28))
#define RCC_PLL1DIVR     (*(unsigned long volatile*)(RCC_BASE + 0x34))
#define RCC_APB1ENR1     (*(unsigned long volatile*)(RCC_BASE + 0x9C))
#define RCC_AHB2ENR1     (*(unsigned long volatile*)(RCC_BASE + 0x8C))
#define RCC_AHB3ENR      (*(unsigned long volatile*)(RCC_BASE + 0x94))


// FLASH
#define FLASH_ACR        (*(unsigned long volatile*)0x40022000)


// TIM2
#define TIM2_BASE        0x40000000
#define TIM2_CR1         (*(unsigned long volatile*)(TIM2_BASE + 0x00))
#define TIM2_CR2         (*(unsigned long volatile*)(TIM2_BASE + 0x04))
#define TIM2_SMCR        (*(unsigned long volatile*)(TIM2_BASE + 0x08))
#define TIM2_DIER        (*(unsigned long volatile*)(TIM2_BASE + 0x0C))
#define TIM2_SR          (*(unsigned long volatile*)(TIM2_BASE + 0x10))
#define TIM2_EGR         (*(unsigned long volatile*)(TIM2_BASE + 0x14))
#define TIM2_PSC         (*(unsigned long volatile*)(TIM2_BASE + 0x28))
#define TIM2_ARR         (*(unsigned long volatile*)(TIM2_BASE + 0x2C))
#define TIM2_CCR1        (*(unsigned long volatile*)(TIM2_BASE + 0x34))
#define TIM2_CCER        (*(unsigned long volatile*)(TIM2_BASE + 0x20))

// GPIO 
#define GPIOB_BASE       0x42020400
#define GPIOB_MODER      (*(unsigned long volatile*)(GPIOB_BASE + 0x00))
#define GPIOB_ODR        (*(unsigned long volatile*)(GPIOB_BASE + 0x14))

// NVIC
#define ISER1             (*(unsigned long volatile*)0xE000E104) 
#define ICER1             (*(unsigned long volatile*)0xE000E184) 

// PWR
#define PWR_BASE          0x46020800
#define PWR_VOSR          (*(unsigned long volatile*)(PWR_BASE + 0x0C))
