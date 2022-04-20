#ifndef __LPC54114_h__
#define __LPC54114_h__

#define BIT_SET(reg, bit)    ((reg) |= (1UL << (bit)))
#define BIT_CLEAR(reg, bit)  ((reg) &= ~(1UL << (bit)))
#define BIT_CHECK(reg, bit)  ((reg) & (1UL << (bit)))

unsigned volatile char releaseCore; // release slave core

// ITM
#define ITM_BASE_ADDRESS  (*(unsigned long volatile*)0xE0000000) 

void enablePeriphClk(void);
void initClock(void);
void initSystick(unsigned int ms);

void initClkOutPin(void);


void interruptHandler(void);




#endif



