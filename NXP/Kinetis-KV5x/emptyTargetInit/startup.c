#include "Kinetis-KV5x.h"

extern int main(void);
extern void InterruptRoutine();

extern unsigned long _estack;

extern unsigned long _etext;
extern unsigned long _data;
extern unsigned long _edata;
extern unsigned long _bss;
extern unsigned long _ebss;

void DisableWDOG();

__attribute__( ( naked ) )
void Reset()
{
  __asm__("ldr R0, =_estack");
  __asm__("mov sp, R0");
  
  volatile unsigned long *pulSrc = &_etext;
  volatile unsigned long *pulDest = &_data;
  
  DisableWDOG();
  
  while( pulDest < &_edata )
    *pulDest++ = *pulSrc++;
                           
  pulDest = &_bss;               
  while ( pulDest < &_ebss )
    *pulDest++ = 0;       
  
  main();
}

void IntDefaultHandler()
{
  while(1);
}

#define WDOG ((volatile unsigned short *) 0x40052000)
enum WDOG_REGS
{
  STCTRLH, 
  STCTRLL,
  TOVALH,
  TOVALL,
  WINH,
  WINL,
  REFRESH,
  UNLOCK,
  TMROUTH,
  TMROUTL,
  RSTCNT,
  PRESC
};

#define STCTRLH_WDOGEN        (1 << 0)
#define STCTRLH_WINEN         (1 << 3)
#define STCTRLH_ALLOWUPDATE   (1 << 4)
#define STCTRLH_DBGEN         (1 << 5)

unsigned int g_WDOGConfig;

void DisableWDOG(void)
{
  __asm__("cpsid i"); //disable interrupts
  g_WDOGConfig = WDOG[STCTRLH];
  g_WDOGConfig &= ~STCTRLH_DBGEN;   // fix DBGEN (must be enabled)
  unsigned short wWDOG = (unsigned short) (g_WDOGConfig & ~STCTRLH_WDOGEN);   // disable WDOG
  WDOG[UNLOCK] = 0xC520;
  WDOG[UNLOCK] = 0xD928; 
  WDOG[STCTRLH] = wWDOG;  
  __asm__(" dsb");
  __asm__(" isb");
  __asm__("cpsie i"); //enable interrupts 
}

void TimerInterruptHandler()
{
  PIT_TFLG0 |= (0x1 << PIT_TFLG0_TIF);
  InterruptRoutine();
}

typedef void (*pfnISR)(void);

__attribute__ ((section(".isr_vector")))
struct SISRType
{
  union
  {
    pfnISR        m_pfnISR;
    unsigned long m_dword;
  };
}g_ISRTable[] =
{
  (void*)& _estack,     // Initial stack pointer                            
  Reset,                        // Reset handler
  IntDefaultHandler,            // NMI handler
  IntDefaultHandler,            // Hard fault handler
  IntDefaultHandler,            // MPU fault handler
  IntDefaultHandler,            // Bus fault handler
  IntDefaultHandler,            // Usage fault handler
  0,                            // Reserved
  0,                            // Reserved
  0,                            // Reserved
  0,                            // Reserved
  IntDefaultHandler,            // SVCall handler
  IntDefaultHandler,            // Debug monitor handler
  0,                            // Reserved
  IntDefaultHandler,            // PendSV handler
  IntDefaultHandler,            // SysTick handler
  IntDefaultHandler,            // DMA Channel 0 / 16 Transfer Complete
  IntDefaultHandler,            // DMA Channel 1 / 17 Transfer Complete
  IntDefaultHandler,            // DMA Channel 2 / 18 Transfer Complete
  IntDefaultHandler,            // DMA Channel 3 / 19 Transfer Complete
  IntDefaultHandler,            // DMA Channel 4 / 20 Transfer Complete
  IntDefaultHandler,            // DMA Channel 5 / 21 Transfer Complete
  IntDefaultHandler,            // DMA Channel 6 / 22 Transfer Complete
  IntDefaultHandler,            // DMA Channel 7 / 23 Transfer Complete
  IntDefaultHandler,            // DMA Channel 8 / 24 Transfer Complete
  IntDefaultHandler,            // DMA Channel 9 / 25 Transfer Complete
  IntDefaultHandler,            // DMA Channel 10 / 26 Transfer Complete
  IntDefaultHandler,            // DMA Channel 11 / 27 Transfer Complete
  IntDefaultHandler,            // DMA Channel 12 / 28 Transfer Complete
  IntDefaultHandler,            // DMA Channel 13 / 29 Transfer Complete
  IntDefaultHandler,            // DMA Channel 14 / 30 Transfer Complete
  IntDefaultHandler,            // DMA Channel 15 / 31 Transfer Complete
  IntDefaultHandler,            // DMA Error Interrupt, Channels 0-15 / 16-31
  IntDefaultHandler,            // MCM All Interrupts
  IntDefaultHandler,            // Flash Command Complete
  IntDefaultHandler,            // Flash Read Collision
  IntDefaultHandler,            // PMC Low-Voltage Detect / Low-Voltage Warning
  IntDefaultHandler,            // LLWU
  IntDefaultHandler,            // WDOG
  IntDefaultHandler,            // TRNG
  IntDefaultHandler,            // I2C0
  IntDefaultHandler,            // I2C1
  IntDefaultHandler,            // SPI0
  IntDefaultHandler,            // SPI1
  IntDefaultHandler,            // UART5 Status Sources
  IntDefaultHandler,            // UART5 Error Sources
  IntDefaultHandler,            // UART0 LON
  IntDefaultHandler,            // UART0 Status Sources
  IntDefaultHandler,            // UART0 Error Sources
  IntDefaultHandler,            // UART1 Status Sources
  IntDefaultHandler,            // UART1 Error Sources
  IntDefaultHandler,            // UART2 Status Sources
  IntDefaultHandler,            // UART2 Error Sources
  IntDefaultHandler,            // ADC0
  IntDefaultHandler,            // HSADC0 and HSADC1 Error
  IntDefaultHandler,            // HSADC0A Scan Complete
  IntDefaultHandler,            // CMP0
  IntDefaultHandler,            // CMP1
  IntDefaultHandler,            // FTM0
  IntDefaultHandler,            // FTM1
  IntDefaultHandler,            // UART3 Status Sources
  IntDefaultHandler,            // UART3 Error Sources
  IntDefaultHandler,            // UART4 Status Sources
  IntDefaultHandler,            // UART4 Error Sources
  TimerInterruptHandler,        // PIT Channel 0
  IntDefaultHandler,            // PIT Channel 1
  IntDefaultHandler,            // PIT Channel 2
  IntDefaultHandler,            // PIT Channel 3
  IntDefaultHandler,            // PDB0
  IntDefaultHandler,            // FlexTimer2
  IntDefaultHandler,            // XBARA
  IntDefaultHandler,            // PDB1
  IntDefaultHandler,            // DAC0
  IntDefaultHandler,            // MCG
  IntDefaultHandler,            // LPTMR
  IntDefaultHandler,            // Port A Pin Detect
  IntDefaultHandler,            // Port B Pin Detect
  IntDefaultHandler,            // Port C Pin Detect
  IntDefaultHandler,            // Port D Pin Detect
  IntDefaultHandler,            // Port E Pin Detect
  IntDefaultHandler,            // Software
  IntDefaultHandler,            // SPI2
  IntDefaultHandler,            // ENC Compare 
  IntDefaultHandler,            // ENC Home
  IntDefaultHandler,            // ENC Watchdog / Simultaneous A and B Change
  IntDefaultHandler,            // ENC Index / Roll Over / Roll Under
  IntDefaultHandler,            // CMP2
  IntDefaultHandler,            // FTM3
  IntDefaultHandler,            // HSADC0B Scan Complete
  IntDefaultHandler,            // HSADC1A Scan Complete
  IntDefaultHandler,            // FlexCAN0 OR'ed Message Buffer (0-15)
  IntDefaultHandler,            // FlexCAN0 Bus Off
  IntDefaultHandler,            // FlexCAN0 Error
  IntDefaultHandler,            // FlexCAN0 Transmit Warning
  IntDefaultHandler,            // FlexCAN0 Receive Warning
  IntDefaultHandler,            // FlexCAN0 Wake-Up
  IntDefaultHandler,            // PWM0 Submodule 0 Compare
  IntDefaultHandler,            // PWM0 Submodule 0 Reload
  IntDefaultHandler,            // PWM0 Submodule 1 Compare
  IntDefaultHandler,            // PWM0 Submodule 1 Reload
  IntDefaultHandler,            // PWM0 Submodule 2 Compare
  IntDefaultHandler,            // PWM0 Submodule 2 Reload
  IntDefaultHandler,            // PWM0 Submodule 3 Compare
  IntDefaultHandler,            // PWM0 Submodule 3 Reload
  IntDefaultHandler,            // PWM0 Input Captures
  IntDefaultHandler,            // PWM0 Reload Error
  IntDefaultHandler,            // PWM0 Fault
  IntDefaultHandler,            // CMP3 All Interrupt Sources
  IntDefaultHandler,            // HSADC1B Scan Complete
  IntDefaultHandler,            // FlexCAN1 OR'ed Message Buffer (0-15)
  IntDefaultHandler,            // FlexCAN1 Bus Off
  IntDefaultHandler,            // FlexCAN1 Error Sources
  IntDefaultHandler,            // FlexCAN1 Transmit Warning
  IntDefaultHandler,            // FlexCAN1 Receive Warning
  IntDefaultHandler,            // FlexCAN1 Wake-Up
  IntDefaultHandler,            // ENET 1588 Timer Sources
  IntDefaultHandler,            // ENET Transmit Sources
  IntDefaultHandler,            // ENET Receive Sources
  IntDefaultHandler,            // ENET Error and Miscellaneous Sources
  IntDefaultHandler,            // PWM1 Submodule 0 Compare
  IntDefaultHandler,            // PWM1 Submodule 0 Reload
  IntDefaultHandler,            // PWM1 Submodule 1 Compare
  IntDefaultHandler,            // PWM1 Submodule 1 Reload
  IntDefaultHandler,            // PWM1 Submodule 2 Compare
  IntDefaultHandler,            // PWM1 Submodule 2 Reload
  IntDefaultHandler,            // PWM1 Submodule 3 Compare
  IntDefaultHandler,            // PWM1 Submodule 3 Reload 
  IntDefaultHandler,            // PWM1 Input Captures
  IntDefaultHandler,            // PWM1 Reload Error
  IntDefaultHandler,            // PWM1 Fault
  IntDefaultHandler,            // FlexCAN2 OR'ed Message Buffer (0-15)
  IntDefaultHandler,            // FlexCAN2 Bus Off
  IntDefaultHandler,            // FlexCAN2 Error Sources
  IntDefaultHandler,            // FlexCAN2 Transmit Warning
  IntDefaultHandler,            // FlexCAN2 Receive Warning
  IntDefaultHandler             // FlexCAN2 Wake-Up
};

