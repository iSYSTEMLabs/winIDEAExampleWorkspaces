 
#ifndef __STM32L552_h__
#define __STM32L552_h__

#define START_ADDRESS 0x08000400

#define ITM_BASE_ADDRESS (0xE0000000UL)
#define memW32(address) (*(unsigned long*)(address))
#define memW16(address) (*(unsigned short*)(address))
#define memW8(address) (*(unsigned char*)(address))

#define ITM_LOCK_ACCESS_REGISTER (ITM_BASE_ADDRESS + 0x0FB0UL)
#define ITM_TRACE_ENABLE_REGISTER (ITM_BASE_ADDRESS + 0x0E00UL)
#define ITM_TRACE_PRIVILEGE_REGISTER (ITM_BASE_ADDRESS + 0x0E40UL)

// RCC registers
#define RCC_BASE         0x40021000
#define RCC_CR           (*(unsigned long volatile*)(RCC_BASE + 0x00))
#define RCC_CFGR         (*(unsigned long volatile*)(RCC_BASE + 0x08))
#define RCC_PLLCFGR      (*(unsigned long volatile*)(RCC_BASE + 0x0C))
#define RCC_APB1ENR1     (*(unsigned long volatile*)(RCC_BASE + 0x58))
#define RCC_AHB2ENR      (*(unsigned long volatile*)(RCC_BASE + 0x4C))

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

// GPIO 
#define GPIOB_BASE       0x42020400
#define GPIOB_MODER      (*(unsigned long volatile*)(GPIOB_BASE + 0x00))
#define GPIOB_ODR        (*(unsigned long volatile*)(GPIOB_BASE + 0x14))

#define GPIOD_BASE       0x42020C00
#define GPIOD_MODER      (*(unsigned long volatile*)(GPIOD_BASE + 0x00))
#define GPIOD_ODR        (*(unsigned long volatile*)(GPIOD_BASE + 0x14))

// NVIC
#define ISER0             (*(unsigned long volatile*)0xE000E100) 
#define ICER0             (*(unsigned long volatile*)0xE000E180) 
#define ISER1             (*(unsigned long volatile*)0xE000E104) 
#define ICER1             (*(unsigned long volatile*)0xE000E184) 

void initClock(void);
void initTimer(void);
void targetEnableInterrupts(void);
void TimerInterruptHandler(void);

#endif    