void targetInit();            
void targetShutdown();

#define PERIPH_CLK_MUX_SEL_CR *(volatile unsigned int*) 0x40038068
#define TRACECLK_DIV2_SEL 1<<2
#define ITM_BASE_ADDRESS *(volatile unsigned int*) 0xE0000000