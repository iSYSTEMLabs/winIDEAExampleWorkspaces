#include "Conf.h"

extern DWORD g_dwHAL_ADCSandboxSlicesSize;
extern BYTE * g_pbyHAL_ADCSandboxSlice;

static BOOL s_bDLMCotrolsLED = FALSE;

static const SCLKSettings sasCLKSettings[] =
{ 
  { SYSCLKSourceExtCRYWithPLL , SYSCLK_4M_EXTCRY_PLL_M     , SYSCLK_4M_EXTCRY_PLL_N     , SYSCLK_4M_EXTCRY_PLL_P    , SYSCLK_4M_EXTCRY_PLL_Q     ,AHB_DIV2   , APBx_DIV1   , APBx_DIV1   , FLASH_WAIT_STATE_0 }, 
  { SYSCLKSourceExtCRY        , SYSCLK_8M_EXTCRY           , SYSCLK_8M_EXTCRY           , SYSCLK_8M_EXTCRY          , SYSCLK_8M_EXTCRY           ,AHB_DIV1   , APBx_DIV1   , APBx_DIV1   , FLASH_WAIT_STATE_0 }, 
  { SYSCLKSourceIntCRY        , SYSCLK_16M_INTCRY          , SYSCLK_16M_INTCRY          , SYSCLK_16M_INTCRY         , SYSCLK_16M_INTCRY          ,AHB_DIV1   , APBx_DIV1   , APBx_DIV1   , FLASH_WAIT_STATE_0 }, 
  { SYSCLKSourceExtCRYWithPLL , SYSCLK_24M_EXTCRY_PLL_M    , SYSCLK_24M_EXTCRY_PLL_N    , SYSCLK_24M_EXTCRY_PLL_P   , SYSCLK_24M_EXTCRY_PLL_Q    ,AHB_DIV1   , APBx_DIV1   , APBx_DIV1   , FLASH_WAIT_STATE_0 },
  { SYSCLKSourceExtCRYWithPLL , SYSCLK_32M_EXTCRY_PLL_M    , SYSCLK_32M_EXTCRY_PLL_N    , SYSCLK_32M_EXTCRY_PLL_P   , SYSCLK_32M_EXTCRY_PLL_Q    ,AHB_DIV1   , APBx_DIV1   , APBx_DIV1   , FLASH_WAIT_STATE_1 },
  { SYSCLKSourceExtCRYWithPLL , SYSCLK_48M_EXTCRY_PLL_M    , SYSCLK_48M_EXTCRY_PLL_N    , SYSCLK_48M_EXTCRY_PLL_P   , SYSCLK_48M_EXTCRY_PLL_Q    ,AHB_DIV1   , APBx_DIV2   , APBx_DIV2   , FLASH_WAIT_STATE_1 },
  { SYSCLKSourceExtCRYWithPLL , SYSCLK_96M_EXTCRY_PLL_M   ,  SYSCLK_96M_EXTCRY_PLL_N    , SYSCLK_96M_EXTCRY_PLL_P   , SYSCLK_96M_EXTCRY_PLL_Q    ,AHB_DIV1   , APBx_DIV4   , APBx_DIV2   , FLASH_WAIT_STATE_3 },
  { SYSCLKSourceExtCRYWithPLL , SYSCLK_168M_EXTCRY_PLL_M   , SYSCLK_168M_EXTCRY_PLL_N   , SYSCLK_168M_EXTCRY_PLL_P  , SYSCLK_168M_EXTCRY_PLL_Q   ,AHB_DIV1   , APBx_DIV4   , APBx_DIV2   , FLASH_WAIT_STATE_5 },
};

static const SGPIOPinConf sasGPIOPinConfInit[] =
{  
  { PORT_LED       ,{ PIN_LED                 , GPIO_Mode_OUT , GPIO_Speed_2MHz   , GPIO_OType_OD , GPIO_PuPd_NOPULL  }, GPIO_LED_CLK           , eilH  , FALSE }, 
  { PORT_USB       ,{ PIN_USB_VBUS            , GPIO_Mode_IN  , GPIO_Speed_2MHz   , GPIO_OType_OD , GPIO_PuPd_DOWN    }, GPIO_USB_CLK           , eilZ  , FALSE },
  { PORT_GP        ,{ PIN_GP_RST              , GPIO_Mode_OUT , GPIO_Speed_2MHz   , GPIO_OType_PP , GPIO_PuPd_NOPULL  }, GPIO_GP_IO_CLK         , eilL  , FALSE }, 
};

static const SGPIOPinConf sasGPIOPinConfOptions[] =
{  
  { PORT_PIN0      ,{ PIN_PIN0                , GPIO_Mode_OUT , GPIO_Speed_2MHz   , GPIO_OType_PP , GPIO_PuPd_NOPULL  }, GPIO_PIN0_CLK          , eilZ , FALSE }, 
  { PORT_PIN1      ,{ PIN_PIN1                , GPIO_Mode_OUT , GPIO_Speed_2MHz   , GPIO_OType_PP , GPIO_PuPd_NOPULL  }, GPIO_PIN1_CLK          , eilZ , FALSE }, 
};



static const SGPIOPinConf sasEXTMCURSTEnableGPIOPinConfOptions[] =
{  
  { PORT_EXT_MCU_RST_ENABLE ,{ PIN_EXT_MCU_RST_ENABLE , GPIO_Mode_OUT  , GPIO_Speed_2MHz   , GPIO_OType_PP , GPIO_PuPd_NOPULL  }, GPIO_EXT_MCU_RST_ENABLE_IO_CLK, eilH  , FALSE }
};        

static const STIMERWakeUpConf ssTIMERWakeUpConf =
{ TIMER10, TIMER10_CLK, TIMER10_IRQ_CHANNEL, TIMER10_IRQ_CHANNEL_PREEMPTION_PRIORITY, TIMER10_IRQ_CHANNEL_SUB_PRIORITY, TIMER10_IRQ_INTERRUPT_TYPE};

//***********************LOCAL FUNCTIONS**************************************** 
/*******************************************************************************
* Function Name  : hal_Init_GPIO
* Description    : Initialize the GPIO ports according to the specified 
*                  parameters in the psGPIOConf
* Input          : - psGPIOConf: pointer to an SGPIOPinConf structure that
*                    contains the configuration information for GPIOs. 
*                  - dwNum: number of GPIOs to set    
* Return         : None
*******************************************************************************/
void hal_Init_GPIO(const SGPIOPinConf * psGPIOConf, DWORD dwNum)
{
  DWORD i = 0;
  GPIO_InitTypeDef GPIO_InitStructure;
  
  for ( i = 0; i < dwNum; i++, psGPIOConf++ )
  {
    RCC_AHB1PeriphClockCmd(psGPIOConf->m_RCC, ENABLE);
    
    if ( eilL == psGPIOConf->m_eInitialGPIOLevel )
    {
      GPIO_ResetBits(psGPIOConf->m_pGPIO, psGPIOConf->m_Pin.GPIO_Pin);
    }
    else if ( eilH == psGPIOConf->m_eInitialGPIOLevel )
    {  
      GPIO_SetBits(psGPIOConf->m_pGPIO, psGPIOConf->m_Pin.GPIO_Pin);
    }
    
    GPIO_InitStructure = psGPIOConf->m_Pin;
    GPIO_Init(psGPIOConf->m_pGPIO, &GPIO_InitStructure); 
    
    if(psGPIOConf->m_bEnableAF)
    {
      GPIO_PinAFConfig(psGPIOConf->m_pGPIO, psGPIOConf->m_byPinSource, psGPIOConf->m_byAFMapping);  
    }    
  }
}

/*******************************************************************************
* Function Name  : hal_Init_Periph_Low_Power
* Description    : Befor inicialization of peripheral set it into low power
*                  state. Only GPIOs are implemented.                  
* Input          : None    
* Return         : None
*******************************************************************************/
void hal_Init_Periph_Low_Power(void)
{   
   GPIO_InitTypeDef GPIO_InitStructure;

   RCC_AHB1PeriphClockCmd(GPIO_A_CLK | GPIO_B_CLK | GPIO_C_CLK |
                          GPIO_D_CLK | GPIO_E_CLK | GPIO_F_CLK |
                          GPIO_G_CLK | GPIO_H_CLK | GPIO_I_CLK, ENABLE);
 
   GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AN;
   GPIO_InitStructure.GPIO_Speed = GPIO_Speed_2MHz;
   GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_NOPULL;
   GPIO_InitStructure.GPIO_Pin = GPIO_Pin_All;
   
   GPIO_Init(PORT_A, &GPIO_InitStructure);
   GPIO_Init(PORT_B, &GPIO_InitStructure);
   GPIO_Init(PORT_C, &GPIO_InitStructure);
   GPIO_Init(PORT_D, &GPIO_InitStructure);
   GPIO_Init(PORT_E, &GPIO_InitStructure);
   GPIO_Init(PORT_F, &GPIO_InitStructure);
   GPIO_Init(PORT_G, &GPIO_InitStructure);
   GPIO_Init(PORT_H, &GPIO_InitStructure); 
   GPIO_Init(PORT_I, &GPIO_InitStructure);      

   RCC_AHB1PeriphClockCmd(GPIO_A_CLK | GPIO_B_CLK | GPIO_C_CLK |
                          GPIO_D_CLK | GPIO_E_CLK | GPIO_F_CLK |
                          GPIO_G_CLK | GPIO_H_CLK | GPIO_I_CLK, DISABLE);
          
}

/*******************************************************************************
* Function Name  : hal_Switch_To_Internal_OSC
* Description    : Switch to Internal OSC without PLL and and set peripheral buses 
*                  clocks based on input settings. Only MCUSpeedModeUltraLow is
*                  set with taht function. That function is also used when 
* Input          : - MCUSpeedMode: MCUSpeedModeUltraLow, MCUSpeedModeLow, 
*                    MCUSpeedModeMedium and MCUSpeedModeHigh     
* Return         : None
*******************************************************************************/
void hal_Switch_To_Internal_OSC(EMCUSpeedMode MCUSpeedMode)
{
  const SCLKSettings *psasCLKSettings = &sasCLKSettings[MCUSpeedMode]; 
   
  RCC_HSICmd(ENABLE);    

  while( RESET == RCC_GetFlagStatus(INTCRY_RDY_FLAG) )
  {
  }
  
  RCC_SYSCLKConfig(SYSCLK_SOURCE_INTCRY);
  
  if( SYSCLKSourceIntCRY !=  psasCLKSettings->m_eSYSCLKSource )
  { 
    RCC_HCLKConfig(AHB_DIV1);
    RCC_PCLK2Config(APBx_DIV4);
    RCC_PCLK1Config(APBx_DIV4);
  }
  else
  {
    RCC_HCLKConfig(psasCLKSettings->m_dwAHBDiv);
    RCC_PCLK2Config(psasCLKSettings->m_dwAPB1Div);
    RCC_PCLK1Config(psasCLKSettings->m_dwAPB2Div);     
  }     

  while( INTCRY_AS_SYSCLK_FLAG != RCC_GetSYSCLKSource() )
  {
  }        

  FLASH_SetLatency(FLASH_WAIT_STATE_0);
  FLASH_InstructionCacheCmd(ENABLE);
  FLASH_DataCacheCmd(ENABLE);
  FLASH_PrefetchBufferCmd(ENABLE);
  
  while( FLASH_WAIT_STATE_0 != (FLASH->ACR & FLASH_WAIT_STATE_MASK ))
  {
  }
}

/*******************************************************************************
* Function Name  : hal_Set_SYSCLK
* Description    : Set SYS CLK and set peripheral buses clocks based on 
*                  input settings.   
* Input          : - MCUSpeedMode: MCUSpeedModeUltraLow, MCUSpeedModeLow, 
*                    MCUSpeedModeMedium and MCUSpeedModeHigh    
* Return         : None
*******************************************************************************/ 
void hal_Set_SYSCLK(EMCUSpeedMode MCUSpeedMode)
{
  const SCLKSettings *psasCLKSettings = &sasCLKSettings[MCUSpeedMode]; 
  
  hal_Switch_To_Internal_OSC(MCUSpeedMode);  
  
  if( SYSCLKSourceIntCRY ==  psasCLKSettings->m_eSYSCLKSource )
  {           
    RCC_PLLI2SCmd(DISABLE);
    return; 
  }
  
  if( SYSCLK_ExternalCRY_MASK & psasCLKSettings->m_eSYSCLKSource )
  {
    RCC_HSEConfig(EXTCRY_ON);
  
    if( ERROR == RCC_WaitForHSEStartUp() )
    {
      asm(" BKPT #0");
    }
  }   
  
  RCC_APB1PeriphClockCmd(RCC_APB1Periph_PWR, ENABLE);
  
  FLASH_SetLatency(psasCLKSettings->m_byFLASHWaitStates);
  FLASH_PrefetchBufferCmd(DISABLE);
  FLASH_InstructionCacheCmd(ENABLE);
  FLASH_DataCacheCmd(ENABLE); 
  
  while( psasCLKSettings->m_byFLASHWaitStates != (FLASH->ACR & FLASH_WAIT_STATE_MASK) )
  {
  }  
  
  if( MCUSpeedMode168MHzExtCryPLL ==  MCUSpeedMode )
  {
    PWR_MainRegulatorModeConfig(PWR_HIGH_PERFORMANCE_SCALE); 
  }
  else
  {
    PWR_MainRegulatorModeConfig(PWR_LOW_POWER_SCALE); 
  }  
   
  RCC_HCLKConfig(psasCLKSettings->m_dwAHBDiv);
  RCC_PCLK2Config(psasCLKSettings->m_dwAPB2Div);
  RCC_PCLK1Config(psasCLKSettings->m_dwAPB1Div);
  RCC_PLLCmd(DISABLE); 
  
      
  if( SYSCLKSourceExtCRY == psasCLKSettings->m_eSYSCLKSource )
  {
    RCC_SYSCLKConfig(SYSCLK_SOURCE_EXTCRY);
    while( EXTCRY_AS_SYSCLK_FLAG != RCC_GetSYSCLKSource() )
    {
    }
  }
  
  if( SYSCLK_PLL_MASK &  psasCLKSettings->m_eSYSCLKSource )
  {
    if( SYSCLKSourceExtCRYWithPLL == psasCLKSettings->m_eSYSCLKSource )
    {
      RCC_PLLConfig(PLL_SOURCE_EXTCRY, 
                    psasCLKSettings->m_dwPLLM, 
                    psasCLKSettings->m_dwPLLN, 
                    psasCLKSettings->m_dwPLLP, 
                    psasCLKSettings->m_dwPLLQ);
    }
    else
    {
      RCC_PLLConfig(PLL_SOURCE_INTCRY, 
                    psasCLKSettings->m_dwPLLM, 
                    psasCLKSettings->m_dwPLLN, 
                    psasCLKSettings->m_dwPLLP, 
                    psasCLKSettings->m_dwPLLQ);
    }
  
    RCC_PLLCmd(ENABLE);

    while( RESET == RCC_GetFlagStatus(PLL_RDY_FLAG) )
    {
    }
  
    RCC_SYSCLKConfig(SYSCLK_SOURCE_PLL); 
    while( PLL_AS_SYSCLK_FLAG != RCC_GetSYSCLKSource() )
    {
    }    
  }                      
  
  RCC_PLLI2SCmd(DISABLE);
}

/*******************************************************************************
* Function Name  : hal_Set_WakeUp_Mode
* Description    : Set Wake up modes from sleep.   
* Input          : - psWakeUpInit: pointer to an psWakeUpInit 
*                    structure  
* Return         : None
*******************************************************************************/
void hal_Set_WakeUp_Mode(const SWakeUpInit *psWakeUpInit)
{
  PWR_WakeUpPinCmd(DISABLE);
 
  RCC_APB1PeriphClockCmd(PWR_CLK, ENABLE);  
  
  if( psWakeUpInit->m_bWakeUpRTC )
  {   
    RTC_DeInit();
  
    PWR_BackupAccessCmd(ENABLE);    

    RCC_BackupResetCmd(ENABLE);
    RCC_BackupResetCmd(DISABLE);
          
    PWR_ClearFlag(PWR_STANDBY_FLAG);  
  
    PWR_BackupAccessCmd(ENABLE); 
  
    RCC_LSICmd(ENABLE);
 
    while( RCC_GetFlagStatus(RCC_FLAG_LSIRDY) == RESET )
    {
    }

    RCC_RTCCLKConfig(RTC_SOURCE_INTRC);    
    
    RCC_RTCCLKCmd(ENABLE);  
    
    RTC_WaitForSynchro();  
    
    RTC_WakeUpClockConfig(RTCCLK_DIV16);
    
    RTC_SetWakeUpCounter(psWakeUpInit->m_bWakeUpRTCTimeMiliSeconds * 2);                                      
  
    RTC_ITConfig(RTC_WAKEUP_INTERRUPT, ENABLE);
  
    RTC_WakeUpCmd(ENABLE);
  
    RTC_ClearFlag(RTC_WAKEUP_FLAG);
  }
    
  if( psWakeUpInit->m_bWakeUpPin )
  {
    PWR_WakeUpPinCmd(ENABLE);
  }
}

//***********************GLOBAL FUNCTIONS***************************************   
/*******************************************************************************
* Function Name  : HAL_Init
* Description    : Initialize the BOOT peripherial except communication
* Input          : None 
* Return         : None
*******************************************************************************/
void HAL_Init(void)
{
  SGPIOPinConf sGPIOPinConfOptions;
  DWORD dwOptionPin = 0;
  DWORD dwOptionPinMask = 0;
  DWORD dwOptionPinValue = 0;

  hal_Init_Periph_Low_Power();
  hal_Init_GPIO(sasGPIOPinConfInit, _countof(sasGPIOPinConfInit));
}  

/*******************************************************************************
* Function Name  : HAL_Set_MCU_Speed
* Description    : Change CPU and peripheral buses clocks   
* Input          : - MCUSpeedMode: MCUSpeedModeUltraLow, MCUSpeedModeLow, 
*                    MCUSpeedModeMedium and MCUSpeedModeHigh     
* Return         : None
*******************************************************************************/
void HAL_Set_MCU_Speed(EMCUSpeedMode MCUSpeedMode)
{
  hal_Set_SYSCLK(MCUSpeedMode);
  SystemCoreClockUpdate();
}
 
/*******************************************************************************
* Function Name  : HAL_Init_EXT_MCU_Reset_Enable
* Description    : Initialize IOs for EXT MCU reset.
* Input          : None
* Return         : None
*******************************************************************************/
void HAL_Init_EXT_MCU_Reset_Enable(void) 
{
  hal_Init_GPIO(sasEXTMCURSTEnableGPIOPinConfOptions,  _countof(sasEXTMCURSTEnableGPIOPinConfOptions));
}

/*******************************************************************************
* Function Name  : HAL_EXT_MCU_Reset_Cmd
* Description    : Control pin to enable external MCU reset. 
* Input          : - NewState: CmdStateENABLE/CmdStateDISABLE    
* Return         : None
*******************************************************************************/
void HAL_EXT_MCU_Reset_Cmd(ECmdState NewState)
{
  if( CmdStateENABLE == NewState )
  {
    GPIO_ResetBits(PORT_EXT_MCU_RST_ENABLE, PIN_EXT_MCU_RST_ENABLE);
  }
  else
  {
    GPIO_SetBits(PORT_EXT_MCU_RST_ENABLE, PIN_EXT_MCU_RST_ENABLE);
  }   
} 

/******************************************************************************
* Function Name  : HAL_Enter_SLEEP_Mode
* Description    : We are enetring into sleep mode. That is usefull when we
*                  are powerd with external bateries and ther is no activity for
*                  a long time.
* Input          : None  
* Return         : None
*******************************************************************************/
void HAL_Enter_SLEEP_Mode(void)
{
  __WFI();
}

/******************************************************************************
* Function Name  : HAL_Init_Timer_And_IT_SLEEP_Mode_WakeUp_After_10Micro_Seconds
* Description    : Initialize timer and interrupt to wake up from sleep mode.
* Input          : - wSleepTime10MicroSeconds: Wake Up after x 10us 
* Return         : None
*******************************************************************************/
void HAL_Init_Timer_And_IT_SLEEP_Mode_WakeUp_After_10Micro_Seconds(WORD wSleepTime10MicroSeconds)
{ 
  WORD wPrescaler = 0;
  
  TIM_TimeBaseInitTypeDef TIM_TimeBaseInitTypeDefStructure;
  NVIC_InitTypeDef NVIC_InitTypeDefStructure;
  
  NVIC_InitTypeDefStructure.NVIC_IRQChannel = ssTIMERWakeUpConf.m_dwTIMERIRQChannel;
  NVIC_InitTypeDefStructure.NVIC_IRQChannelPreemptionPriority = ssTIMERWakeUpConf.m_dwTIMERIRQChannelPreemptionPriority;
  NVIC_InitTypeDefStructure.NVIC_IRQChannelSubPriority = ssTIMERWakeUpConf.m_dwTIMERIRQChannelSubPriority;
  NVIC_InitTypeDefStructure.NVIC_IRQChannelCmd = ENABLE;
  NVIC_Init(&NVIC_InitTypeDefStructure);
  
  RCC_ClocksTypeDef RCC_ClocksValues;
  
  RCC_GetClocksFreq(&RCC_ClocksValues);
  
  RCC_APB2PeriphClockCmd(ssTIMERWakeUpConf.m_dwTIMERCLK, ENABLE);
  
  wPrescaler = RCC_ClocksValues.PCLK1_Frequency/100000;
  
  if(RCC_ClocksValues.PCLK1_Frequency != RCC_ClocksValues.HCLK_Frequency)
  {
    wPrescaler <<= 1;  
  }
                              
  TIM_TimeBaseInitTypeDefStructure.TIM_Prescaler = wPrescaler;
  TIM_TimeBaseInitTypeDefStructure.TIM_CounterMode = TIM_CounterMode_Up;
  TIM_TimeBaseInitTypeDefStructure.TIM_Period = wSleepTime10MicroSeconds;
  TIM_TimeBaseInitTypeDefStructure.TIM_ClockDivision = TIM_CKD_DIV1;
  TIM_TimeBaseInitTypeDefStructure.TIM_RepetitionCounter = 0;
  
  TIM_TimeBaseInit(ssTIMERWakeUpConf.m_TIMER, &TIM_TimeBaseInitTypeDefStructure);
  
  TIM_ClearITPendingBit(ssTIMERWakeUpConf.m_TIMER, ssTIMERWakeUpConf.m_wTIMERIRQInterruptType);   
  TIM_ITConfig(ssTIMERWakeUpConf.m_TIMER, ssTIMERWakeUpConf.m_wTIMERIRQInterruptType, ENABLE);
  TIM_Cmd(ssTIMERWakeUpConf.m_TIMER, ENABLE);   
}

/******************************************************************************
* Function Name  : HAL_Timer_And_IT_SLEEP_Mode_WakeUp_After_10Micro_Seconds_Disable
* Description    : Disable timer and interrupt to wake up from sleep mode.
* Input          : None 
* Return         : None
*******************************************************************************/
void HAL_Timer_And_IT_SLEEP_Mode_WakeUp_After_10Micro_Seconds_Disable(void)
{
  TIM_ITConfig(ssTIMERWakeUpConf.m_TIMER, ssTIMERWakeUpConf.m_wTIMERIRQInterruptType, DISABLE);
  TIM_Cmd(ssTIMERWakeUpConf.m_TIMER, DISABLE);  
  TIM_ClearITPendingBit(ssTIMERWakeUpConf.m_TIMER, ssTIMERWakeUpConf.m_wTIMERIRQInterruptType);   
}

/******************************************************************************
* Function Name  : HAL_IT_SLEEP_Mode_WakeUp_After_10Micro_Seconds_Status
* Description    : Get interrupt status.
* Input          : None 
* Return         : - BOOL: Interrupt pending
*******************************************************************************/
BOOL HAL_IT_SLEEP_Mode_WakeUp_After_10Micro_Seconds_Status(void)
{
  if( TIM_GetITStatus(ssTIMERWakeUpConf.m_TIMER, ssTIMERWakeUpConf.m_wTIMERIRQInterruptType) != RESET )
  {
    return TRUE; 
  }
  else
  {
    return FALSE;
  }    
}

//***********************************TODO***************************************
/*******************************************************************************
* Function Name  : HAL_Enter_STANDBY_Mode                                                    
* Description    : We are enetring into standbye mode. That is usefull when we
*                  are powerd with external bateries and ther is no activity 
*                  for a long time. When wake up pin is togled we are woken up.  
* Input          : None  
* Return         : None
*******************************************************************************/
void HAL_Enter_STANDBY_Mode(void)
{ 
  SWakeUpInit SWakeUpInitStructure; 
                                                 
  RCC_APB1PeriphClockCmd(PWR_CLK, ENABLE);  
  
  SWakeUpInitStructure.m_bWakeUpPin = TRUE;
  SWakeUpInitStructure.m_bWakeUpRTC = TRUE;
  SWakeUpInitStructure.m_bWakeUpRTCTimeMiliSeconds = 2000;     
  
  hal_Set_WakeUp_Mode(&SWakeUpInitStructure);
  PWR_EnterSTANDBYMode();    
}

/*******************************************************************************
* Function Name  : HAL_Clear_STANDBY_Flag                                                    
* Description    :   
* Input          : None  
* Return         : None
*******************************************************************************/
void HAL_Clear_STANDBY_Flag(void)
{ 
  PWR_ClearFlag(PWR_STANDBY_FLAG);
}

//***********************************TODO***************************************
/*******************************************************************************
* Function Name  : HAL_Enter_STOP_Mode                                                    
* Description    : We are enetring into stop mode. That is usefull when we
*                  are powerd with external bateries and ther is no activity 
*                  for a long time. When wake up pin is togled we are woken up.  
* Input          : None  
* Return         : None
*******************************************************************************/
void HAL_Enter_STOP_Mode(void)
{ 
  SWakeUpInit SWakeUpInitStructure; 
                                                 
  RCC_APB1PeriphClockCmd(PWR_CLK, ENABLE);  
  
  SWakeUpInitStructure.m_bWakeUpPin = TRUE;
  SWakeUpInitStructure.m_bWakeUpRTC = TRUE;
  SWakeUpInitStructure.m_bWakeUpRTCTimeMiliSeconds = 2000;     
  
  hal_Set_WakeUp_Mode(&SWakeUpInitStructure);
  PWR_EnterSTOPMode(PWR_Regulator_ON,PWR_STOPEntry_WFI);    
}

void HAL_Clear_STOP_Flag(void)
{ 
  PWR_ClearFlag(PWR_FLAG_WU);
}
