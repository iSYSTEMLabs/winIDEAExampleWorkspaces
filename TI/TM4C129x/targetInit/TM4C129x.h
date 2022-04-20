#define ITM_BASE_ADDRESS *(unsigned volatile int*) 0xE0000000 

void targetInit();
void targetEnableInterrupts();
void targetShutdown();
void disableWatchdog();

#define SYST_CSR *(volatile unsigned int*) 0xE000E010
#define SYST_RVR *(volatile unsigned int*) 0xE000E014
#define RCGCGPIO *(volatile unsigned int*) 0x400fe608
#define GPIO_DIR *(volatile unsigned int*) 0x40062400
#define GPIO_AFSEL *(volatile unsigned int*) 0x40062420
#define GPIO_DEN *(volatile unsigned int*) 0x4006251C
#define GPIO_DATA *(volatile unsigned int*) 0x40062040
/*
  Just a quick word about selecting the GPIO_DATA address. It has 256 different locations available. Bits [9:2] of the selected address act as a mask 
  for the value that can be written into the register itself, which means you have to select the correct address in order to be write the desired 
  values to specific bits. An example would be the case at hand, 0x40062040. 
  
  GPIO_DATA = |0100|0000|0000|0110|0010|0000|0100|0000|
                                         |00|0100|00|

  We see from the example that because of the address bits acting as a mask we can only write a value to bit 6. If we try to write into other bits, the write 
  operation fails. 0x3FC is the largest offset we can use and thus enable all bits for write operations.                                         
*/                                         

#define RCGCGPIO_ENABLE_PL_PORT_BIT 10
#define GPIO_DIR_SET_PL4_PIN_OUTPUT_BIT 4
#define GPIO_AFSEL_CLEAR_PL4_PIN 4
#define GPIO_DEN_ENABLE_PL4_PIN 4
#define GPIO_DATA_TOGGLE_PL4_PIN 4