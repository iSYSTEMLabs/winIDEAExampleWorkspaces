#include <stdint.h>
void enterAndExitStopMode(void);
#define memW32(address) (*(unsigned long*)(address))
#define memW16(address) (*(unsigned short*)(address))
#define memW8(address) (*(unsigned char*)(address))
#define ITM_BASE_ADDRESS (0xE0000000UL)
#define ITM_LOCK_ACCESS_REGISTER (ITM_BASE_ADDRESS + 0x0FB0UL)
#define ITM_TRACE_ENABLE_REGISTER (ITM_BASE_ADDRESS + 0x0E00UL)
#define ITM_TRACE_PRIVILEGE_REGISTER (ITM_BASE_ADDRESS + 0x0E40UL)

/*
  RCC registers
*/
#define RCC_CR (*(unsigned long volatile*)0x40023800)           // Clock control register
#define RCC_CR_HSEON 16                                         // Turn on HSE flag
#define RCC_CR_HSERDY 17                                        // HSE ready flag
#define RCC_CR_PLLON 24                                         // Turn on PLL flag
#define RCC_CR_HSION 0                                          // Turn on HSI flag
#define RCC_CR_PLLRDY 25                                        // PLL ready
#define RCC_PLLCFGR (*(unsigned long volatile*)0x40023804)      // PLL configuration register
#define RCC_PLLCFGR_PLLSRC 22                                   // PLL source
#define RCC_PLLCFGR_PLLQ 24                                     // PLL Q factor
#define RCC_PLLCFGR_PLLP 16                                     // PLL P factor
#define RCC_PLLCFGR_PLLN 6                                      // PLL N factor
#define RCC_PLLCFGR_PLLM 0                                      // PLL M factor
#define RCC_CFGR (*(unsigned long volatile*)0x40023808)         // Clock configuration register
#define RCC_CFGR_RTCPRE 16                                      // RTC clock prescaler
#define RCC_CFGR_SW 0                                           // Main clock select
#define RCC_CFGR_PPRE2 13                                       // AHB2 prescaler value                                       
#define RCC_CFGR_PPRE1 10                                       // AHB1 prescaler value
#define RCC_APB1ENR (*(unsigned long volatile*)0x40023840)      // APB1 peripheral clock enable register
#define RCC_APB1ENR_TIM2EN 0                                    // TIM2 peripheral clock enable

/*
  Flash registers
*/
#define FLASH_ACR (*(unsigned long volatile*)0x40023C00)        // Flash access control register
#define FLASH_ACR_LATENCY 0                                     // Access latency                                                          

/*
  Timer (TIM2) registers   
*/
#define TIM2_CR1 (*(unsigned long volatile*)0x40000000)         // Timer control register 1
#define TIM2_CR1_DIR 4                                          // Counting direction (0->up ; 1->down)
#define TIM2_CR1_URS 2                                          // Update request source
#define TIM2_CR1_CEN 0                                          // Counter enable
#define TIM2_ARR (*(unsigned long volatile*)0x4000002C)         // Reload value
#define TIM2_CCMR1 (*(unsigned long volatile*)0x40000018)       // Capture/compare mode register
#define TIM2_CCMR1_CC1S 0                                       // Channel mode (00 -> output)
#define TIM2_CCMR1_OC1M 4                                       // Output compare mode (011 -> high on CCR1 and CNT match)
#define TIM2_DIER (*(unsigned long volatile*)0x4000000C)        // DMA/Interrupt enable register
#define TIM2_DIER_UIE 0                                         // Channel 1 interrupt enable
#define TIM2_CCR1 (*(unsigned long volatile*)0x40000034)        // Channel 1 compare value 
#define TIM2_SR (*(unsigned long volatile*)0x40000010) //

#define ISER0 (*(unsigned long volatile*)0xE000E100)            // Interrupt set enable register

#define VTOR (*(unsigned long volatile*)0xE000ED08)             // NVIC table address register