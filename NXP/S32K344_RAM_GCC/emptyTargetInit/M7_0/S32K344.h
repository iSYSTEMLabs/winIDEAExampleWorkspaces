#ifndef __S32K344_H__
#define __S32K344_H__

#include "S32K344_sfr.h"

#define CM7_0_START_ADDRESS 0x00401000
#define CM7_1_START_ADDRESS 0x00600400

#define ITM_BASE_ADDRESS (0xE0000000UL)
#define memW32(address) (*(unsigned long*)(address))
#define memW16(address) (*(unsigned short*)(address))
#define memW8(address) (*(unsigned char*)(address))

/*Core boot registers*/
#define PRTN0_CORE1_PCONF (*(unsigned long volatile*)0x402DC160)
#define PRTN0_CORE1_ADDR  (*(unsigned long volatile*)0x402DC16C)
#define PRTN0_CORE1_PUPD  (*(unsigned long volatile*)0x402DC164)

/*Control registers*/
#define CTRL_KEY         (*(unsigned long volatile*)0x402DC000)

#endif    