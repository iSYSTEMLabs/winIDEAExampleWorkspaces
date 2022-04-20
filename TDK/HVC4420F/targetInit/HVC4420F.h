#define FLASH_ULA  (*(volatile unsigned int*) (0x00280008))  // Flash memory unlock register A
#define FLASH_ULB  (*(volatile unsigned int*) (0x00280014))  // Flash memory unlock register B
#define FLASH1_ULA (*(volatile unsigned int*) (0x00280108))  // Flash 1 memory unlock register A
#define FLASH1_ULB (*(volatile unsigned int*) (0x00280114))  // Flash 1 memory unlock register B

#define ITM_BASE_ADDRESS_32 (*(volatile unsigned int*)   (0xE0000000))
#define ITM_BASE_ADDRESS_16 (*(volatile unsigned short*) (0xE0000000))
#define ITM_BASE_ADDRESS_8  (*(volatile unsigned char*)  (0xE0000000))

#define TIM0_CR    (*(volatile unsigned int*) (0x40002000))  // Timer 0 control register
#define TIM0_PS    (*(volatile unsigned int*) (0x40002008))  // Timer 0 prescaler register
#define TIM0_AR    (*(volatile unsigned int*) (0x4000200C))  // Timer 0 auto reload register
#define TIM0_IEN   (*(volatile unsigned int*) (0x40002014))  // Timer 0 interrupt enable register
#define TIM0_EIPND (*(volatile unsigned int*) (0x4000201C))  // Timer 0 enable interrupt pending register  

#define LGPIO_DD (*(volatile unsigned int*) (0x40001008))  // LGPIO data direction register
#define LGPIO_DO (*(volatile unsigned int*) (0x40001000))  // LGPIO data output register
#define LGPIO_C0 (*(volatile unsigned int*) (0x4000100C))  // LGPIO configuration register 0
#define LGPIO_C1 (*(volatile unsigned int*) (0x40001010))  // LGPIO configuration register 1

#define INT_0_31_SET_EN (*(volatile unsigned int*) (0xE000E100))  // NVIC interrupt set-enable register
#define INT_0_31_CLR_EN (*(volatile unsigned int*) (0xE000E180))  // NVIC interrupt clear-enable register

