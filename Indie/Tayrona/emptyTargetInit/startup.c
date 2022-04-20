#include "Tayrona.h"

extern unsigned long _isrVectAddr;
extern unsigned long _estack;
extern unsigned long _etext;
extern unsigned long _sdata;
extern unsigned long _edata; 
extern unsigned long _sbss;
extern unsigned long _ebss; 
extern int main(void);
extern void InterruptRoutine();


void reset()
{
  unsigned long *pdwSource = &_etext; 
  unsigned long *pdwDest = &_sdata;
  unsigned long *pdwEnd = &_edata;
  unsigned long *pdwBssStart = &_sbss;
  unsigned long *pdwBssEnd = &_ebss;
  
  VTOR = (unsigned long volatile)&_isrVectAddr;
   
  while (pdwDest < pdwEnd)
  {
    *pdwDest = *pdwSource;
    pdwDest++;
    pdwSource++;
  }
   
  while (pdwBssStart < pdwBssEnd)
  {
    *pdwBssStart = 0;
    pdwBssStart++;
  }
  main();
  while(1);
}

static void NMIHandler()
{
  while(1);
}

static void HardFaultHandler()
{
  while(1);
}

static void SVCallHandler()
{
  while(1);
}

static void PendableSrvReqHandler()
{
  while(1);
}

static void SysTickHandler()
{
  while(1);
}

static void IntDefaultHandler()
{
  while(1);
}

static void TimerInterruptHandler()
{
  InterruptRoutine();
}

/*
  Interrupt vector table
*/
__attribute__ ((section(".isr_vector")))
void (* const g_pfnVectors[])(void) =
{
    (void (*)(void))(&_estack),
    reset,                  //Reset 0x0000_0004
    NMIHandler,             //NMI 0x0000_0008
    HardFaultHandler,       //HardFault 0x0000_000C
    IntDefaultHandler,      //MemManage 0x0000_0010
    IntDefaultHandler,      //BusFault 0x0000_0014
    IntDefaultHandler,      //UsageFault 0x0000_0018
    0,                      //Reserved 0x0000_001C                                             
    0,                      //Reserved 0x0000_0020
    0,                      //Reserved 0x0000_0024
    0,                      //Reserved 0x0000_0028
    IntDefaultHandler,      //SVCall 0x0000_002C
    IntDefaultHandler,      //Debug Monitor 0x0000_0030
    0,                      //Reserved 0x0000_0034
    IntDefaultHandler,      //PendSV 0x0000_0038
    IntDefaultHandler,      //SysTick 0x0000_003C
    IntDefaultHandler,      //WWDG 0x0000_0040
    IntDefaultHandler,      //PVD 0x0000_0044
    IntDefaultHandler,      //TAMPER 0x0000_0048
    IntDefaultHandler,      //RTC 0x0000_004C
    IntDefaultHandler,      //FLASH 0x0000_0050
    IntDefaultHandler,      //RCC 0x0000_0054
    IntDefaultHandler,      //EXTI0 0x0000_0058
    IntDefaultHandler,      //EXTI1 0x0000_005C
    IntDefaultHandler,      //EXTI2 0x0000_0060
    IntDefaultHandler,      //EXTI3 0x0000_0064
    IntDefaultHandler,      //EXTI4 0x0000_0068
    IntDefaultHandler,      //DMA_Channel1 0x0000_006C
    IntDefaultHandler,      //DMA_Channel2 0x0000_0070
    IntDefaultHandler,      //DMA_Channel3 0x0000_0074
    IntDefaultHandler,      //DMA_Channel4 0x0000_0078
    IntDefaultHandler,      //DMA_Channel5 0x0000_007C
    IntDefaultHandler,      //DMA_Channel6 0x0000_0080
    IntDefaultHandler,      //DMA_Channel7 0x0000_0084
    IntDefaultHandler,      //ADC1_2 0x0000_0088
    IntDefaultHandler,      //USB_HP_CAN_TC 0x0000_008C
    IntDefaultHandler,      //USB_LP_CAN_RX0 0x0000_0090
    IntDefaultHandler,      //CAN_RX1 0x0000_0094
    IntDefaultHandler,      //CAN_SCE 0x0000_0098
    IntDefaultHandler,      //EXTI9_5 0x0000_009C
    IntDefaultHandler,      //TIM1_BRK 0x0000_00A0
    IntDefaultHandler,      //TIM1_UP 0x0000_00A4
    IntDefaultHandler,      //TIM1_TRG_COM 0x0000_00A8
    IntDefaultHandler,      //TIM1_CC 0x0000_00AC
    IntDefaultHandler,      //TIM2 0x0000_00B0
    IntDefaultHandler,      //TIM3 0x0000_00B4
    IntDefaultHandler,      //TIM4 0x0000_00B8
    IntDefaultHandler,      //I2C1_EV 0x0000_00BC
    IntDefaultHandler,      //I2C1_ER 0x0000_00C0
    IntDefaultHandler,      //I2C2_EV 0x0000_00C4
    IntDefaultHandler,      //I2C2_ER 0x0000_00C8
    IntDefaultHandler,      //SPI1 0x0000_00CC
    IntDefaultHandler,      //SPI2 0x0000_00D0
    IntDefaultHandler,      //USART1 0x0000_00D4
    IntDefaultHandler,      //USART2 0x0000_00D8
    IntDefaultHandler,      //USART3 0x0000_00DC
    IntDefaultHandler,      //EXTI15_10 0x0000_00E0
    IntDefaultHandler,      //RTCAlarm 0x0000_00E4
    IntDefaultHandler,      //USBWakeup 0x0000_00E8
    IntDefaultHandler,      //TIM8_BRK 0x0000_00EC
    IntDefaultHandler,      //TIM8_UP 0x0000_00F0
    IntDefaultHandler,      //TIM8_TRG_COM 0x0000_00F4
    IntDefaultHandler,      //TIM8_CC 0x0000_00F8
    IntDefaultHandler,      //ADC3 0x0000_00FC
    IntDefaultHandler,      //FSMC 0x0000_0100
    IntDefaultHandler,      //SDIO 0x0000_0104
    IntDefaultHandler,      //TIM5 0x0000_0108
    IntDefaultHandler,      //SPI3 0x0000_010C
    IntDefaultHandler,      //UART4 0x0000_0110
    IntDefaultHandler,      //UART5 0x0000_0114
    IntDefaultHandler,      //TIM6 0x0000_0118
    IntDefaultHandler,      //TIM7 0x0000_011C
    IntDefaultHandler,      //DMA2_Channel1 0x0000_0120
    IntDefaultHandler,      //DMA2_Channel2 0x0000_0124
    IntDefaultHandler,      //DMA2_Channel3 0x0000_0128
    IntDefaultHandler,      //DMA2_Channel4_5 0x0000_012C
};