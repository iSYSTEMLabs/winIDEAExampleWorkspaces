#include "lowPowerMode.h"
#include "SP49.h"

extern int main(void);

extern unsigned long _estack;

extern unsigned long _etext;
extern unsigned long _data;
extern unsigned long _edata;
extern unsigned long _bss;
extern unsigned long _ebss;

extern unsigned char _bootNumSectors;
extern unsigned char _ucsNumSectors;

typedef unsigned int uint32_t;

#define CHECK_BIT(var,pos) ((var & (1 << pos)) == (1 << pos))

void MyBoot(void);


__attribute__ ((naked))
__attribute__ ((section(".bootEntry")))
void Reset()
{
  __asm__("ldr R0, =_estack");
  __asm__("mov sp, R0");
  
  
  volatile unsigned long *pulSrc = &_etext;
  volatile unsigned long *pulDest = &_data;
  
  while( pulDest < &_edata )
    *pulDest++ = *pulSrc++;
  
  pulDest = &_bss;
  while ( pulDest < &_ebss )
    *pulDest++ = 0; 
  
  if(CHECK_BIT(Wakeup_Controller_DEVSTATUS,23))
  {                                
    onExitLowPowerModeTestBreakpoint(FROM_RESET);
  }
  
  MyBoot();
}


__attribute__ ((section(".boot")))
void MyBoot()
{
  __asm__(" nop");
  __asm__(" nop");

  Corelogic_TIMERCFG01 |= (0x1 << Corelogic_TIMERCFG01_WDRES);  // Feed WDOG

  main();
}


void IntDefaultHandler()
{
  while(1)
  {
    Corelogic_TIMERCFG01 |= (0x1 << Corelogic_TIMERCFG01_WDRES); // Watchdog feed
  }
}

typedef void (*pfnISR)(void);

__attribute__ ((section(".flashConfig")))
#define FLASHCONFIG_BYTE_SIZE 0x20
unsigned char g_FlashConfig[FLASHCONFIG_BYTE_SIZE] =
{
  0x22,  // 0x00 - Boot_Conf                            
  0x43,  // 0x01 - UCS_Conf
  0x00,  // 0x02 - GPIO_Conf
  0x00,  // 0x03 - Not used
  0xAF,  // 0x04 - CRC16       // calculated from bytes 0..3
  0x52,  // 0x05 - CRC16       // calculated from bytes 0..3  https://crccalc.com/?crc=22430000&method=crc8&datatype=hex&outtype=hex
  0x00,  // 0x06 - Not used
  0x00,  // 0x07 - Not used
  0x00,  // 0x08 - Not used
  0x00,  // 0x09 - Not used
  0x00,  // 0x0A - Not used
  0x00,  // 0x0B - Not used
  0x00,  // 0x0C - Not used
  0x00,  // 0x0D - Not used
  0x00,  // 0x0E - Not used
  0x00,  // 0x0F - Not used
  0x00,  // 0x10 - Not used
  0x00,  // 0x11 - Not used
  0x00,  // 0x12 - Not used
  0x00,  // 0x13 - Not used
  0x00,  // 0x14 - Not used
  0x00,  // 0x15 - Not used
  0x00,  // 0x16 - Not used
  0x00,  // 0x17 - Not used
  0x00,  // 0x18 - Not used
  0x00,  // 0x19 - Not used
  0x00,  // 0x1A - Not used
  0x00,  // 0x1B - Not used
  0x00,  // 0x1C - Not used
  0x00,  // 0x1D - Not used
  0x00,  // 0x1E - Protection    0x0000: Protection not active, 0x6969: Protection active (DAP never enabled), Other value: Do not use
  0x00,  // 0x1F - Protection 
};