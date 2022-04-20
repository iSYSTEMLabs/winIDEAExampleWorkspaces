#ifndef __ITAG_2_1_HAL_H__
#define __ITAG_2_1_HAL_H__

#include "Conf.h"  

/*******************************************************************************
* Purpose             : LOW POWER MODE
* Used peripherial    : I/O 
********************************************************************************/
#define PORT_A                   GPIOA                       
#define PORT_B                   GPIOB
#define PORT_C                   GPIOC
#define PORT_D                   GPIOD
#define PORT_E                   GPIOE
#define PORT_F                   GPIOF
#define PORT_G                   GPIOG
#define PORT_H                   GPIOH
#define PORT_I                   GPIOI
                                      
/*******************************************************************************
* Purpose             : BT IO
* Used peripherial    : I/O 
********************************************************************************/
#define PIN_BT_WAKE_UP           GPIO_Pin_15  
#define PORT_BT_WAKE_UP          GPIOB

/*******************************************************************************
* Purpose             : EXT MCU RST ENABLE IO
* Used peripherial    : I/O 
********************************************************************************/
#define PIN_EXT_MCU_RST_ENABLE   GPIO_Pin_12  
#define PORT_EXT_MCU_RST_ENABLE  GPIOC

/*******************************************************************************
* Purpose             : LED
* Used peripherial    : I/O 
********************************************************************************/
#define PIN_LED                  GPIO_Pin_6  
#define PORT_LED                 GPIOC

/*******************************************************************************
* Purpose             : USB
* Used peripherial    : I/O 
********************************************************************************/
#define PIN_USB_VBUS             GPIO_Pin_9  
#define PORT_USB                 GPIOA

/*******************************************************************************
* Purpose             : Initial IO level config
* Used peripherial    : I/O 
********************************************************************************/
// Reset out pin - BOOT_CONFIG_PIN_P0
#define PIN_PIN0                  GPIO_Pin_7  
#define PORT_PIN0                 GPIOA
#define GPIO_PIN0_CLK             RCC_AHB1Periph_GPIOA 
// vTAG debug out select - BOOT_CONFIG_PIN_P1
#define PIN_PIN1                  GPIO_Pin_13  
#define PORT_PIN1                 GPIOC
#define GPIO_PIN1_CLK             RCC_AHB1Periph_GPIOC

/*******************************************************************************
* Purpose             : GP RESET 
* Used peripherial    : I/O 
********************************************************************************/
#define PIN_GP_RST           GPIO_Pin_11  
#define PORT_GP              GPIOB  

/*******************************************************************************
* Purpose             : Aanlog 
* Used peripherial    : I/O, ADC, DMA2
********************************************************************************/
#define ADC_SAMPLES 16

#define ADC2_PIN_COUNT           3
#define ADC2_CHANNEL_COUNT       (ADC2_PIN_COUNT + 3)

#define PIN_ADC_iPOWER           GPIO_Pin_1  
#define PORT_ADC_iPOWER          GPIOA 

#define PIN_ADC_AN0              GPIO_Pin_2
#define PORT_ADC_AN0             GPIOA 

#define PIN_ADC_DEBUG_VREF       GPIO_Pin_6  
#define PORT_ADC_DEBUG_VREF      GPIOA 

#define ADC_NUMBER1              ADC1
#define ADC_NUMBER2              ADC2

#define ADC_iPOWER_CHANNEL       ADC_Channel_1
#define ADC_AN0_CHANNEL          ADC_Channel_2
#define ADC_DEBUG_VREF_CHANNEL   ADC_Channel_6
#define ADC_TEMP_CHANNEL         ADC_Channel_16
#define ADC_REF_CHANNEL          ADC_Channel_17
#define ADC_BAT_CHANNEL          ADC_Channel_18

#define DMA_ADC1                 DMA2
#define DMA_ADC1_DR_ADDRESS      ((uint32_t)ADC1 + 0x4C)
#define DMA_ADC1_CHANNEL         DMA_Channel_0
#define DMA_ADC1_STREAM          DMA2_Stream0

#define DMA_ADC2                 DMA2
#define DMA_ADC2_DR_ADDRESS      ((uint32_t)ADC2 + 0x4C)
#define DMA_ADC2_CHANNEL         DMA_Channel_1
#define DMA_ADC2_STREAM          DMA2_Stream2

/*******************************************************************************
* Purpose             : iPOWER IO
* Used peripherial    : I/O
********************************************************************************/

#define PIN_I2CSW_SDA            GPIO_Pin_10  
#define PORT_I2CSW_SDA           GPIOA 
#define PIN_I2CSW_SCL            GPIO_Pin_5  
#define PORT_I2CSW_SCL           GPIOB 

#define PIN_iPOWER_1             GPIO_Pin_5  
#define PORT_iPOWER_1            GPIOA 
#define PIN_iPOWER_2             GPIO_Pin_12  
#define PORT_iPOWER_2            GPIOB 
                                                   
/*******************************************************************************
* Purpose             : COMMUNICATION
* Used peripherial    : I/O, USART2, USART3, DMA1
********************************************************************************/
#define UART_PIN_COUNT_NO_FLOW_CONTROL    2
#define UART_PIN_COUNT_FLOW_CONTROL       4

#define PIN_UART2_nCTS          GPIO_Pin_0  
#define PIN_UART2_nCTS_SOURCE   GPIO_PinSource0  
#define PIN_UART2_nRTS          GPIO_Pin_1 
#define PIN_UART2_nRTS_SOURCE   GPIO_PinSource1 
#define PIN_UART2_TX            GPIO_Pin_2 
#define PIN_UART2_TX_SOURCE     GPIO_PinSource2 
#define PIN_UART2_RX            GPIO_Pin_3 
#define PIN_UART2_RX_SOURCE     GPIO_PinSource3 
#define PIN_UART2_AF            GPIO_AF_USART2   
#define PORT_UART2_nCTS         GPIOA 
#define PORT_UART2_nRTS         GPIOA
#define PORT_UART2_TX           GPIOA 
#define PORT_UART2_RX           GPIOA
#define UART_NUMBER2            USART2

#define DMA_UART2               DMA1
#define DMA_UART2_TX_CHANNEL    DMA_Channel_4
#define DMA_UART2_TX_STREAM     DMA1_Stream6
#define DMA_UART2_RX_CHANNEL    DMA_Channel_4
#define DMA_UART2_RX_STREAM     DMA1_Stream5 
#define DMA_UART2_DR_ADDRESS    ((uint32_t)USART2 + 0x04)

#define DMA_UART2_TX_FIFO_ERROR_FLAG                DMA_FLAG_FEIF6
#define DMA_UART2_TX_DIRECT_MODE_ERROR_FLAG         DMA_FLAG_DMEIF6
#define DMA_UART2_TX_TRANSFER_ERRPR_FLAG            DMA_FLAG_TEIF6
#define DMA_UART2_TX_HALF_TRANSFER_COMPLETE_FLAG    DMA_FLAG_HTIF6
#define DMA_UART2_TX_TRANSFER_COMPLETE_FLAG         DMA_FLAG_TCIF6
#define DMA_UART2_RX_FIFO_ERROR_FLAG                DMA_FLAG_FEIF5
#define DMA_UART2_RX_DIRECT_MODE_ERROR_FLAG         DMA_FLAG_DMEIF5
#define DMA_UART2_RX_TRANSFER_ERRPR_FLAG            DMA_FLAG_TEIF5
#define DMA_UART2_RX_HALF_TRANSFER_COMPLETE_FLAG    DMA_FLAG_HTIF5
#define DMA_UART2_RX_TRANSFER_COMPLETE_FLAG         DMA_FLAG_TCIF5

#define PIN_UART3_nCTS          GPIO_Pin_13  
#define PIN_UART3_nCTS_SOURCE   GPIO_PinSource13  
#define PIN_UART3_nRTS          GPIO_Pin_14 
#define PIN_UART3_nRTS_SOURCE   GPIO_PinSource14 
#define PIN_UART3_TX            GPIO_Pin_10 
#define PIN_UART3_TX_SOURCE     GPIO_PinSource10 
#define PIN_UART3_RX            GPIO_Pin_11 
#define PIN_UART3_RX_SOURCE     GPIO_PinSource11 
#define PIN_UART3_AF            GPIO_AF_USART3   
#define PORT_UART3_nCTS         GPIOB 
#define PORT_UART3_nRTS         GPIOB
#define PORT_UART3_TX           GPIOC 
#define PORT_UART3_RX           GPIOC
#define UART_NUMBER3            USART3

#define DMA_UART3               DMA1
#define DMA_UART3_TX_CHANNEL    DMA_Channel_4
#define DMA_UART3_TX_STREAM     DMA1_Stream3
#define DMA_UART3_RX_CHANNEL    DMA_Channel_4
#define DMA_UART3_RX_STREAM     DMA1_Stream1 
#define DMA_UART3_DR_ADDRESS    ((uint32_t)USART3 + 0x04)

#define DMA_UART3_TX_FIFO_ERROR_FLAG                DMA_FLAG_FEIF3
#define DMA_UART3_TX_DIRECT_MODE_ERROR_FLAG         DMA_FLAG_DMEIF3
#define DMA_UART3_TX_TRANSFER_ERRPR_FLAG            DMA_FLAG_TEIF3
#define DMA_UART3_TX_HALF_TRANSFER_COMPLETE_FLAG    DMA_FLAG_HTIF3
#define DMA_UART3_TX_TRANSFER_COMPLETE_FLAG         DMA_FLAG_TCIF3
#define DMA_UART3_RX_FIFO_ERROR_FLAG                DMA_FLAG_FEIF1
#define DMA_UART3_RX_DIRECT_MODE_ERROR_FLAG         DMA_FLAG_DMEIF1
#define DMA_UART3_RX_TRANSFER_ERRPR_FLAG            DMA_FLAG_TEIF1
#define DMA_UART3_RX_HALF_TRANSFER_COMPLETE_FLAG    DMA_FLAG_HTIF1
#define DMA_UART3_RX_TRANSFER_COMPLETE_FLAG         DMA_FLAG_TCIF1

#define USART_RXNE_FLAG         USART_FLAG_RXNE 
/*******************************************************************************
* Purpose             : SLEEP MODE WAKE UP TIMER
* Used peripherial    : TIMER 10, IT
********************************************************************************/
#define TIMER10                                         TIM10
#define TIMER10_IRQ_CHANNEL                             TIM1_UP_TIM10_IRQn 
#define TIMER10_IRQ_CHANNEL_PREEMPTION_PRIORITY         0
#define TIMER10_IRQ_CHANNEL_SUB_PRIORITY                1
#define TIMER10_IRQ_INTERRUPT_TYPE                      TIM_IT_Update

//*******************************FLASH*******************************************
#define FLASH_WAIT_STATE_0      FLASH_Latency_0 
#define FLASH_WAIT_STATE_1      FLASH_Latency_1 
#define FLASH_WAIT_STATE_2      FLASH_Latency_2 
#define FLASH_WAIT_STATE_3      FLASH_Latency_3 
#define FLASH_WAIT_STATE_4      FLASH_Latency_4 
#define FLASH_WAIT_STATE_5      FLASH_Latency_5 
#define FLASH_WAIT_STATE_6      FLASH_Latency_6 
#define FLASH_WAIT_STATE_7      FLASH_Latency_7 

//*******************************PWR********************************************
#define PWR_HIGH_PERFORMANCE_SCALE            PWR_Regulator_Voltage_Scale1
#define PWR_LOW_POWER_SCALE                   PWR_Regulator_Voltage_Scale2
#define PWR_STANDBY_FLAG                      PWR_FLAG_SB
#define PWR_WAKEUP_FLAG                      PWR_FLAG_WU

//*******************************RTC********************************************
#define RTC_WAKEUP_INTERRUPT    RTC_IT_WUT
#define RTC_WAKEUP_FLAG         RTC_FLAG_WUTF

//*******************************CLK********************************************
//******************************SYSCLK******************************************
#define INTCRY_RDY_FLAG         RCC_FLAG_HSIRDY
#define PLL_RDY_FLAG            RCC_FLAG_PLLRDY
#define INTCRY_AS_SYSCLK_FLAG   0x00
#define EXTCRY_AS_SYSCLK_FLAG   0x04
#define PLL_AS_SYSCLK_FLAG      0x08
#define EXTCRY_ON               RCC_HSE_ON
#define EXTCRY_OFF              RCC_HSE_OFF
#define SYSCLK_SOURCE_EXTCRY    RCC_SYSCLKSource_HSE
#define SYSCLK_SOURCE_INTCRY    RCC_SYSCLKSource_HSI
#define SYSCLK_SOURCE_PLL       RCC_SYSCLKSource_PLLCLK  
#define PLL_SOURCE_INTCRY       RCC_PLLSource_HSI
#define PLL_SOURCE_EXTCRY       RCC_PLLSource_HSE
  
#define APBx_DIV1               RCC_HCLK_Div1
#define APBx_DIV2               RCC_HCLK_Div2
#define APBx_DIV4               RCC_HCLK_Div4
#define APBx_DIV8               RCC_HCLK_Div8
#define APBx_DIV16              RCC_HCLK_Div16

#define AHB_DIV1                RCC_SYSCLK_Div1 
#define AHB_DIV2                RCC_SYSCLK_Div2 
#define AHB_DIV4                RCC_SYSCLK_Div4 
#define AHB_DIV8                RCC_SYSCLK_Div8 
#define AHB_DIV16               RCC_SYSCLK_Div16
#define AHB_DIV64               RCC_SYSCLK_Div64
#define AHB_DIV128              RCC_SYSCLK_Div128
#define AHB_DIV256              RCC_SYSCLK_Div256
#define AHB_DIV512              RCC_SYSCLK_Div512

#define SYSCLK_4M_EXTCRY_PLL_P         8
#define SYSCLK_4M_EXTCRY_PLL_N         192
#define SYSCLK_4M_EXTCRY_PLL_M         48
#define SYSCLK_4M_EXTCRY_PLL_Q         15

#define SYSCLK_8M_EXTCRY               0

#define SYSCLK_16M_INTCRY              0

#define SYSCLK_24M_EXTCRY_PLL_P        8
#define SYSCLK_24M_EXTCRY_PLL_N        192
#define SYSCLK_24M_EXTCRY_PLL_M        8
#define SYSCLK_24M_EXTCRY_PLL_Q        15

#define SYSCLK_32M_EXTCRY_PLL_P         6
#define SYSCLK_32M_EXTCRY_PLL_N         192
#define SYSCLK_32M_EXTCRY_PLL_M         8
#define SYSCLK_32M_EXTCRY_PLL_Q         15

#define SYSCLK_48M_EXTCRY_PLL_P         4
#define SYSCLK_48M_EXTCRY_PLL_N         192
#define SYSCLK_48M_EXTCRY_PLL_M         8
#define SYSCLK_48M_EXTCRY_PLL_Q         15

#define SYSCLK_96M_EXTCRY_PLL_P         4
#define SYSCLK_96M_EXTCRY_PLL_N         192
#define SYSCLK_96M_EXTCRY_PLL_M         4
#define SYSCLK_96M_EXTCRY_PLL_Q         8

#define SYSCLK_168M_EXTCRY_PLL_P       2
#define SYSCLK_168M_EXTCRY_PLL_N       336
#define SYSCLK_168M_EXTCRY_PLL_M       8
#define SYSCLK_168M_EXTCRY_PLL_Q       7

//*******************************RTC********************************************
#define RTC_INTRC_RDY_FLAG      RCC_FLAG_LSIRDY
#define RTC_SOURCE_INTRC        RCC_RTCCLKSource_LSI
#define RTCCLK_DIV2             RTC_WakeUpClock_RTCCLK_Div2
#define RTCCLK_DIV4             RTC_WakeUpClock_RTCCLK_Div4  
#define RTCCLK_DIV8             RTC_WakeUpClock_RTCCLK_Div8  
#define RTCCLK_DIV16            RTC_WakeUpClock_RTCCLK_Div16

 
//****************************I/O CLK*******************************************
#define GPIO_A_CLK                      RCC_AHB1Periph_GPIOC
#define GPIO_B_CLK                      RCC_AHB1Periph_GPIOC
#define GPIO_C_CLK                      RCC_AHB1Periph_GPIOC
#define GPIO_D_CLK                      RCC_AHB1Periph_GPIOC
#define GPIO_E_CLK                      RCC_AHB1Periph_GPIOC
#define GPIO_F_CLK                      RCC_AHB1Periph_GPIOC
#define GPIO_G_CLK                      RCC_AHB1Periph_GPIOC
#define GPIO_H_CLK                      RCC_AHB1Periph_GPIOC
#define GPIO_I_CLK                      RCC_AHB1Periph_GPIOC
                                        
#define GPIO_LED_CLK                    RCC_AHB1Periph_GPIOC
#define GPIO_USB_CLK                    RCC_AHB1Periph_GPIOA 
#define GPIO_GP_IO_CLK                  RCC_AHB1Periph_GPIOB  
#define GPIO_UART2_nCTS_IO_CLK          RCC_AHB1Periph_GPIOA 
#define GPIO_UART2_nRTS_IO_CLK          RCC_AHB1Periph_GPIOA
#define GPIO_UART2_TX_IO_CLK            RCC_AHB1Periph_GPIOA 
#define GPIO_UART2_RX_IO_CLK            RCC_AHB1Periph_GPIOA
#define GPIO_UART3_nCTS_IO_CLK          RCC_AHB1Periph_GPIOB 
#define GPIO_UART3_nRTS_IO_CLK          RCC_AHB1Periph_GPIOB
#define GPIO_UART3_TX_IO_CLK            RCC_AHB1Periph_GPIOC 
#define GPIO_UART3_RX_IO_CLK            RCC_AHB1Periph_GPIOC
#define GPIO_ADC_iPOWER_IO_CLK          RCC_AHB1Periph_GPIOA
#define GPIO_ADC_DEBUG_VREF_IO_CLK      RCC_AHB1Periph_GPIOA
#define GPIO_ADC_AN0_IO_CLK             RCC_AHB1Periph_GPIOA
#define GPIO_I2CSW_SDA_IO_CLK           RCC_AHB1Periph_GPIOA
#define GPIO_I2CSW_SCL_IO_CLK           RCC_AHB1Periph_GPIOB
#define GPIO_iPOWER_1_IO_CLK            RCC_AHB1Periph_GPIOA
#define GPIO_iPOWER_2_IO_CLK            RCC_AHB1Periph_GPIOB
#define GPIO_BT_WAKE_UP_IO_CLK          RCC_AHB1Periph_GPIOB
#define GPIO_EXT_MCU_RST_ENABLE_IO_CLK  RCC_AHB1Periph_GPIOC

//*************************PERIPHERIAL CLK************************************** 
#define UART2_CLK                       RCC_APB1Periph_USART2  
#define UART3_CLK                       RCC_APB1Periph_USART3
#define DMA_UART2_CLK                   RCC_AHB1Periph_DMA1
#define DMA_UART3_CLK                   RCC_AHB1Periph_DMA1
#define PWR_CLK                         RCC_APB1Periph_PWR
#define ADC1_CLK                        RCC_APB2Periph_ADC1
#define ADC2_CLK                        RCC_APB2Periph_ADC2
#define DMA_ADC1_CLK                    RCC_AHB1Periph_DMA2
#define DMA_ADC2_CLK                    RCC_AHB1Periph_DMA2
#define TIMER10_CLK                     RCC_APB2Periph_TIM10

//****************DEFS, ENUMS AND STRUCTS FOR FUNCTIONS************************* 
typedef enum _ECmdState
{
  CmdStateDISABLE = 0, 
  CmdStateENABLE = !CmdStateDISABLE
}ECmdState;

//***************************hal_Init_GPIO************************************** 
typedef enum _EInitialGPIOLevel
{
  eilZ,
  eilH,
  eilL
}EInitialGPIOLevel;

typedef struct _SGPIOPinConf
{
  GPIO_TypeDef *    m_pGPIO;
  GPIO_InitTypeDef  m_Pin;
  DWORD             m_RCC;
  EInitialGPIOLevel m_eInitialGPIOLevel;
  BOOL              m_bEnableAF;
  BYTE              m_byPinSource; 
  BYTE              m_byAFMapping;
}SGPIOPinConf;  


//**************************HAL_Init_W_MODUL************************************
typedef struct _SDMAUARTConf
{
  DMA_TypeDef *     m_pDMAUART;
  DWORD             m_dwUARTDRAddress;
  DWORD             m_dwDMAUARTCLK;
  DWORD             m_dwDMAUARTRXChannel;
  DMA_Stream_TypeDef *  m_pDMAUARTRXStream;
  DWORD             m_dwDMAUARTTXChannel;
  DMA_Stream_TypeDef *  m_pDMAUARTTXStream;
}SDMAUARTConf;   

typedef struct _SDMAUARTFlags
{
  DWORD             m_dwDMAUARTRXFlagTC;
  DWORD             m_dwDMAUARTTXFlagTC;
  DWORD             m_dwDMAUARTRXFlagHT;
  DWORD             m_dwDMAUARTTXFlagHT;
  DWORD             m_dwDMAUARTRXFlagTE;
  DWORD             m_dwDMAUARTTXFlagTE;
  DWORD             m_dwDMAUARTRXFlagFE;
  DWORD             m_dwDMAUARTTXFlagFE;
  DWORD             m_dwDMAUARTRXFlagDME;
  DWORD             m_dwDMAUARTTXFlagDME;  
}SDMAUARTFlags;

typedef struct _SUARTConf
{
  USART_TypeDef *   m_pUART;
  DWORD             m_dwUARTCLK;
  const SGPIOPinConf  *   m_pUARTPinNoFlowControl;
  const SGPIOPinConf  *   m_pUARTPinFlowControl;
  const SDMAUARTConf  *   m_pUARTDMA;
  const SDMAUARTFlags *   m_pUARTDMAFlags;  
}SUARTConf;

typedef enum _EUARTChannel
{
  UARTChannel2 = 0,
  UARTChannel3 = 1,
  UARTChannelCount,
}EUARTChannel;  

typedef enum _EUARTOversampling
{
  UARTOversampling8b,
  UARTOversampling16b   
}EUARTOversampling;

typedef enum _EUARTWordLength
{
  UARTWordLength8b,
  UARTWordLength9b   
}EUARTWordLength;

typedef enum _EUARTStopBit
{
  UARTStopBit0b5,
  UARTStopBit1b,
  UARTStopBit1b5,
  UARTStopBit2b   
}EUARTStopBit;

typedef enum _EUARTParity
{
  UARTParityEven, 
  UARTParityOdd,  
  UARTParityNon   
}EUARTParity;      

typedef struct _SUARTInit
{
  EUARTOversampling m_eUARTOversampling;
  DWORD m_dwUARTBaudRate;
  EUARTWordLength m_eUARTWordLength;
  EUARTStopBit m_eUARTStopBit;
  EUARTParity m_eUARTParity;
  BOOL m_bUARTFlowControl;
}SUARTInit;  

//**************************HAL_Init_W_MODUL************************************
typedef struct _SDMAADCConf
{
  DMA_TypeDef *     m_pDMAADC;
  DWORD             m_dwADCDRAddress;
  DWORD             m_dwDMAADCCLK;
  DWORD             m_dwDMAADCChannel;
  DMA_Stream_TypeDef *  m_pDMAADCStream;
}SDMAADCConf; 

typedef enum _EAnalogVoltage
{
  AnalogVoltageiPOWER = 1,
  AnalogVoltageTarget = 2,
  AnalogVoltageAN0    = 3,
  AnalogVoltageREF    = 4,
  AnalogVoltageTEMP   = 5,
  AnalogVoltageBAT    = 6,   
}EAnalogVoltage;

typedef enum _EADCChannel
{
  ADCChannel1 = 0,
  ADCChannel2 = 1,
  ADCChannel3 = 2,
}EADCChannel;
 
typedef enum _EADCAlignment
{
  ADCAlignmentLeft,
  ADCAlignmentRight  
}EADCAlignment; 

typedef enum _EADCResolution
{
  ADCResolution12b,
  ADCResolution10b, 
  ADCResolution8b, 
  ADCResolution6b, 
}EADCResolution; 

typedef enum _EADCSampleTime
{
  ADCSampleTime3Cycles,
  ADCSampleTime15Cycles, 
  ADCSampleTime28ycles, 
  ADCSampleTime56Cycles,
  ADCSampleTime84Cycles, 
  ADCSampleTime112Cycles, 
  ADCSampleTime144Cycles, 
  ADCSampleTime480Cycles
}EADCSampleTime; 

typedef struct _SADCInit
{
  BOOL m_bADCContinuousMode;
  BOOL m_bADCInternalSensors;
  EADCAlignment m_eADCAlignment;
  EADCResolution m_eADCResolution;
}SADCInit;

typedef struct _SADCChannelConf
{
  BYTE              m_byADCChannel;
  BYTE              m_byADCRank;
  EADCSampleTime    m_eADCChannelSampleTime;
}SADCChannelConf;

typedef struct _SADCConf
{
  ADC_TypeDef*      m_pADC;
  DWORD             m_dwADCCLK;
  const SGPIOPinConf    *   m_pADCPin;
  const SADCChannelConf *   m_pADCChannelConf;
  const SDMAADCConf     *   m_pADCDMA;
}SADCConf;

//****************************HAL_Init_I2CSW************************************
 typedef enum _EI2CSWIOInit
{
  I2CSWIOInputPullUp,
  I2CSWIOInputPullDown, 
  I2CSWIOStandard, 
}EI2CSWIOInit; 

//**************************HAL_Set_MCU_Speed***********************************
//**********************hal_Switch_To_Internal_OSC******************************

#define FLASH_WAIT_STATE_MASK           7
#define SYSCLK_PLL_MASK                 0x10
#define SYSCLK_InternalCRY_MASK         0x01
#define SYSCLK_ExternalCRY_MASK         0x02

typedef enum _ESYSCLKSource
{
  SYSCLKSourceIntCRY              = 0x01,
  SYSCLKSourceExtCRY              = 0x02, 
  SYSCLKSourceIntCRYWithPLL       = 0x11,
  SYSCLKSourceExtCRYWithPLL       = 0x12 
}ESYSCLKSource;

typedef struct _SCLKSettings
{
  ESYSCLKSource     m_eSYSCLKSource;
  DWORD             m_dwPLLM;
  DWORD             m_dwPLLN;
  DWORD             m_dwPLLP;
  DWORD             m_dwPLLQ;
  DWORD             m_dwAHBDiv; 
  DWORD             m_dwAPB1Div;  
  DWORD             m_dwAPB2Div;
  BYTE              m_byFLASHWaitStates;
}SCLKSettings; 

typedef enum _EMCUSpeedMode
{
  MCUSpeedMode4MHzExtCryPLL,
  MCUSpeedMode8MHzExtCry,
  MCUSpeedMode16MHzIntCry,  
  MCUSpeedMode24MHzExtCryPLL,
  MCUSpeedMode32MHzExtCryPLL,
  MCUSpeedMode48MHzExtCryPLL,
  MCUSpeedMode96MHzExtCryPLL,
  MCUSpeedMode168MHzExtCryPLL
}EMCUSpeedMode;

//**************************HAL_Set_MCU_Speed***********************************
//*************************hal_Set_WakeUp_Mode**********************************

typedef struct _SWakeUpInit
{
  BOOL              m_bWakeUpPin;
  BOOL              m_bWakeUpRTC;
  DWORD             m_bWakeUpRTCTimeMiliSeconds;  
}SWakeUpInit;   

//**************HAL_Init_Timer_SLEEP_Mode_WakeUp_After_Micro_Seconds************
typedef struct _STIMERWakeUpConf
{
  TIM_TypeDef *      m_TIMER;
  DWORD              m_dwTIMERCLK;
  DWORD              m_dwTIMERIRQChannel;
  DWORD              m_dwTIMERIRQChannelPreemptionPriority;
  DWORD              m_dwTIMERIRQChannelSubPriority;
  WORD               m_wTIMERIRQInterruptType;
}STIMERWakeUpConf;

//****************************FUNCTIONS*****************************************
//#define HAL_LED_ON()  GPIO_ResetBits(PORT_LED, PIN_LED)
//#define HAL_LED_OFF() GPIO_SetBits(PORT_LED, PIN_LED)


void HAL_Init(void);

void HAL_DLMControlsLED(BOOL bControls);
void HAL_LED(BOOL bON);
void HAL_LEDToggle(void);

void HAL_Init_UART(EUARTChannel UARTChannel, const SUARTInit *psSUARTInit);
void HAL_UART_Cmd (EUARTChannel UARTChannel, ECmdState NewState);
void HAL_UART_RXNE_FLAG_Clear(EUARTChannel UARTChannel);
BOOL HAL_UART_RXNE_FLAG_Status(EUARTChannel UARTChannel);

void HAL_UART_Send_Byte (EUARTChannel UARTChannel, BYTE byData);
BYTE HAL_UART_Read_Byte (EUARTChannel UARTChannel);
void HAL_UART_Send_String (EUARTChannel UARTChannel,BYTE abyString[256]);
void HAL_UART_Read_String (EUARTChannel UARTChannel,BYTE abyString[256]);

void HAL_Init_UART_DMA_TX(EUARTChannel UARTChannel, WORD wTXSize, BYTE * pbyTXData);
void HAL_UART_DMA_TX_Cmd(EUARTChannel UARTChannel, ECmdState NewState);
void HAL_UART_DMA_Conn_TX_Cmd(EUARTChannel UARTChannel, ECmdState NewState);

void HAL_Init_UART_DMA_RX(EUARTChannel UARTChannel, WORD wRXSize, BYTE * pbyRXData);
void HAL_UART_DMA_RX_Cmd(EUARTChannel UARTChannel, ECmdState NewState);
void HAL_UART_DMA_Conn_RX_Cmd(EUARTChannel UARTChannel, ECmdState NewState); 

BOOL HAL_UART_DMA_TX_Busy(EUARTChannel UARTChannel);
BOOL HAL_UART_DMA_RX_Busy(EUARTChannel UARTChannel);
void HAL_UART_DMA_TX_FLAGS_Clear(EUARTChannel UARTChannel);
void HAL_UART_DMA_RX_FLAGS_Clear(EUARTChannel UARTChannel);

WORD HAL_UART_DMA_TX_Cnt(EUARTChannel UARTChannel);
WORD HAL_UART_DMA_RX_Cnt(EUARTChannel UARTChannel);

BOOL HAL_USB_VBUS_Status(void);

void HAL_GP_Reset_Cmd(ECmdState NewState);

void HAL_Set_MCU_Speed(EMCUSpeedMode MCUSpeedMode);

BOOL HAL_IsDeviceLowPowerType(void);

void HAL_Init_ADC(EADCChannel ADCChannel, SADCInit *psSADCInit);
void HAL_ADC_Cmd(EADCChannel ADCChannel, ECmdState NewState);
void HAL_ADC_Start(EADCChannel ADCChannel);
void HAL_Init_ADC_DMA(EADCChannel ADCChannel, WORD wNumberOfSamples, BYTE * pbyADCData);
void HAL_ADC_DMA_Conn_Cmd(EADCChannel ADCChannel, ECmdState NewState);
void HAL_ADC_DMA_Cmd(EADCChannel ADCChannel, ECmdState NewState);  
WORD HAL_AveragedAnalogData(EAnalogVoltage AnalogVoltage);

void HAL_Init_ADC1(void);

void HAL_Init_I2CSW(EI2CSWIOInit I2CSWIOInitState); 
BOOL HAL_I2CSW_Read_SDA_State(void);
BOOL HAL_I2CSW_Read_SCL_State(void); 

void HAL_Init_iPOWER_IO(void);
void HAL_Set_iPOWER_IO(BYTE byState);

void HAL_Init_BT_WakeUp(void);
void HAL_BT_Keep_Awake_Cmd(ECmdState NewState);
void HAL_Init_EXT_MCU_Reset_Enable(void);     
void HAL_EXT_MCU_Reset_Cmd(ECmdState NewState);

void HAL_Enter_SLEEP_Mode(void);   
void HAL_Init_Timer_And_IT_SLEEP_Mode_WakeUp_After_10Micro_Seconds(WORD wSleepTimeMicroSeconds);
void HAL_Timer_And_IT_SLEEP_Mode_WakeUp_After_10Micro_Seconds_Disable(void);
BOOL HAL_IT_SLEEP_Mode_WakeUp_After_10Micro_Seconds_Status(void);

//***********************************TODO****************************************
void HAL_Enter_STANDBY_Mode(void);
void HAL_Clear_STANDBY_Flag(void);

#endif  //  __ITAG_2_1_HAL_H__
