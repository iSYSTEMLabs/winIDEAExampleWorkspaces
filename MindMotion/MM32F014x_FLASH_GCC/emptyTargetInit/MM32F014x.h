<<<<<<< .mine
#ifndef __MM32F014_H
#define __MM32F014_H

// Flash registers
#define FLASH_ACR      (*(unsigned int *)(0x40022000))

// NVIC registers
#define NVIC_ISER_0      (*(unsigned int *)(0xE000E100))
#define NVIC_ISER_1      (*(unsigned int *)(0xE000E104))

// RCC Clock and Reset registers
#define RCC_CR         (*(unsigned int *)(0x40021000))
#define RCC_CFGR       (*(unsigned int *)(0x40021004))
#define RCC_CIR        (*(unsigned int *)(0x40021008))
#define RCC_APB2RSTR   (*(unsigned int *)(0x4002100C))
#define RCC_APB1RSTR   (*(unsigned int *)(0x40021010))
#define RCC_AHBENR     (*(unsigned int *)(0x40021014))
#define RCC_APB2ENR    (*(unsigned int *)(0x40021018))
#define RCC_APB1ENR    (*(unsigned int *)(0x4002101C))
#define RCC_CSR        (*(unsigned int *)(0x40021024))
#define RCC_AHBRSTR    (*(unsigned int *)(0x40021028))
#define RCC_CFGR2      (*(unsigned int *)(0x4002102C))
#define RCC_SYSCFG     (*(unsigned int *)(0x40021040))
#define RCC_PLLCFGR    (*(unsigned int *)(0x40021050))


// TIM2 registers
#define TIM2_CR1       (*(unsigned int *)(0x40000000))
#define TIM2_CR2       (*(unsigned int *)(0x40000004))
#define TIM2_DIER      (*(unsigned int *)(0x4000000C))
#define TIM2_SR        (*(unsigned int *)(0x40000010))
#define TIM2_CNT       (*(unsigned int *)(0x40000024))
#define TIM2_PSC       (*(unsigned int *)(0x40000028))
#define TIM2_ARR       (*(unsigned int *)(0x4000002C))

// GPIOB registers
#define GPIO_CRL        (*(unsigned int *)(0x48000400))
#define GPIO_BSRR       (*(unsigned int *)(0x48000410))

void TimerInterruptHandler();
void InterruptRoutine();

#endif // __MM32F014_H
||||||| .r0
=======
#ifndef __MM32F014_H
#define __MM32F014_H

// Flash registers
#define FLASH_ACR      (*(unsigned int *)(0x40022000))

// NVIC registers
#define NVIC_ISER_0      (*(unsigned int *)(0xE000E100))
#define NVIC_ISER_1      (*(unsigned int *)(0xE000E104))

// RCC Clock and Reset registers
#define RCC_CR         (*(unsigned int *)(0x40021000))
#define RCC_CFGR       (*(unsigned int *)(0x40021004))
#define RCC_CIR        (*(unsigned int *)(0x40021008))
#define RCC_APB2RSTR   (*(unsigned int *)(0x4002100C))
#define RCC_APB1RSTR   (*(unsigned int *)(0x40021010))
#define RCC_AHBENR     (*(unsigned int *)(0x40021014))
#define RCC_APB2ENR    (*(unsigned int *)(0x40021018))
#define RCC_APB1ENR    (*(unsigned int *)(0x4002101C))
#define RCC_CSR        (*(unsigned int *)(0x40021024))
#define RCC_AHBRSTR    (*(unsigned int *)(0x40021028))
#define RCC_CFGR2      (*(unsigned int *)(0x4002102C))
#define RCC_SYSCFG     (*(unsigned int *)(0x40021040))
#define RCC_PLLCFGR    (*(unsigned int *)(0x40021050))


// TIM2 registers
#define TIM2_CR1       (*(unsigned int *)(0x40000000))
#define TIM2_CR2       (*(unsigned int *)(0x40000004))
#define TIM2_DIER      (*(unsigned int *)(0x4000000C))
#define TIM2_SR        (*(unsigned int *)(0x40000010))
#define TIM2_CNT       (*(unsigned int *)(0x40000024))
#define TIM2_PSC       (*(unsigned int *)(0x40000028))
#define TIM2_ARR       (*(unsigned int *)(0x4000002C))

// GPIOB registers
#define GPIO_CRL        (*(unsigned int *)(0x48000400))
#define GPIO_BSRR       (*(unsigned int *)(0x48000410))

void TimerInterruptHandler();

#endif // __MM32F014_H
>>>>>>> .r325
