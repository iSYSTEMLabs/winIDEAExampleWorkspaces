 
#ifndef __STM32L552_h__
#define __STM32L552_h__

#define START_ADDRESS 0x08000400

#define ITM_BASE_ADDRESS (0xE0000000UL)
#define memW32(address) (*(unsigned long*)(address))
#define memW16(address) (*(unsigned short*)(address))
#define memW8(address) (*(unsigned char*)(address))

void initClock(void);
void TimerInterruptHandler(void);

#endif    