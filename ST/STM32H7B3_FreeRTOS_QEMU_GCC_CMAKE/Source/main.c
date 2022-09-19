/**
  ******************************************************************************
  * @file    FreeRTOS\FreeRTOS_Timers\Src\main.c
  * @author  MCD Application Team
  * @brief   Main program body
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2019 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
  *
  ******************************************************************************
  */

#include "stm32.h"
#include "cmsis_os.h"
#include "queue.h"

volatile uint32_t isystem_trace = 0;

#define mutexSHORT_DELAY     ((uint32_t) 20)
#define mutexNO_DELAY        ((uint32_t) 0)
#define mutexTWO_TICK_DELAY  ((uint32_t) 2)

osThreadId_t LEDThreadHandle;
/*Queue*/
osThreadId_t MessageQueueProHandle;
osThreadId_t MessageQueueConHandle;
/*semaphores*/
osThreadId_t SEM_Thread1Handle;
osThreadId_t SEM_Thread2Handle;
/*mutex*/
osThreadId_t MutHighHandle;
osThreadId_t MutMediumHandle;
osThreadId_t MutLowHandle;

static osThreadAttr_t attr = {
                        .priority = osPriorityNormal,	/*osPriorityNormal*/
                        .stack_size = configMINIMAL_STACK_SIZE,
                      };

static osThreadAttr_t idleattr = {
                        .priority = osPriorityIdle,	/*osPriorityIdle*/
                        .stack_size = configMINIMAL_STACK_SIZE,
                      };
static osThreadAttr_t lowattr = {
                        .priority = osPriorityIdle,	/*osPriorityIdle*/
                        .stack_size = configMINIMAL_STACK_SIZE,
                      };

static osTimerAttr_t tAttr = { 0 };

osTimerId_t LEDTimerHandle;
osTimerId_t Timer_1;
osTimerId_t Timer_2;
osMessageQueueId_t osQueueHandle;
osSemaphoreId_t osSemaphoreHandle;
osMutexId_t osMutexHandle;

uint32_t   osQueueMsg;

uint32_t ProducerValue = 0, ConsumerValue = 0;	/*queue */
volatile uint32_t ProducerErrors = 0, ConsumerErrors = 0;	/*queue */
volatile uint32_t HighPriorityThreadCycles = 0, MediumPriorityThreadCycles = 0, LowPriorityThreadCycles = 0; /*mutex*/
volatile uint32_t TimeCounter = 0;
uint32_t OsStatus = 0;		/*semaphore*/

/* Private function prototypes -----------------------------------------------*/
static void ToggleLEDsThread(void *argument);
static void osTimerCallback(void *argument);

/*queue*/
static void MessageQueueProducer(void *argument);
static void MessageQueueConsumer(void *argument);
/*semaphore*/
static void SemaphoreThread1(void *argument);
static void SemaphoreThread2(void *argument);
/*mutex*/
//static void MutexHighPriorityThread(void *argument);
//static void MutexMediumPriorityThread(void *argument);
//static void MutexLowPriorityThread(void *argument);
//runnables
extern void getSW_Req_Spec(void);
extern void createSW_Test_Spec(void);
extern void runSW_Test_Case(void);
extern void runSW_RegTest_Case(void);
extern void createSW_Delivery_Doc(void);

extern void vQueueAddToRegistry( QueueHandle_t xQueue, const char *pcQueueName );

int main(void)
{
  osKernelInitialize();
  
  /* Create the mutex(es) */
  osMutexHandle = osMutexNew(NULL);
  vQueueAddToRegistry(osMutexHandle, (portCHAR*)"osMutexHandle");


  /* add mutexes, ... */

  
  /* Create the semaphores(s) */
  /* definition and creation of osSemaphore */
  osSemaphoreHandle = osSemaphoreNew(1U, 1U, NULL);
  vQueueAddToRegistry(osSemaphoreHandle, (portCHAR*)"osSemaphoreHandle");
  
  
  /* add semaphores, ... */


  /* Create the timer(s) */
  tAttr.name = "LED_Timer";
  LEDTimerHandle = osTimerNew(osTimerCallback, osTimerPeriodic, NULL, (const osTimerAttr_t *)&tAttr);
  tAttr.name = "Timer1";
  Timer_1 = osTimerNew(osTimerCallback, osTimerPeriodic, NULL, (const osTimerAttr_t *)&tAttr);
  tAttr.name = "Timer2";
  Timer_2 = osTimerNew(osTimerCallback, osTimerPeriodic, NULL, (const osTimerAttr_t *)&tAttr);
  
  /* Start timers */
  osTimerStart(LEDTimerHandle, 200);
  osTimerStart(Timer_1, 100);
  osTimerStart(Timer_2, 300);
  
  /* definition and creation of LEDThread */
  attr.name = "LEDThread";
  LEDThreadHandle = osThreadNew(ToggleLEDsThread, NULL, (const osThreadAttr_t *)&attr);

  /* definition and creation of MessageQueuePro */
  attr.name = "MessageQueuePro";
  MessageQueueProHandle = osThreadNew(MessageQueueProducer, NULL, (const osThreadAttr_t *)&attr);

  /* definition and creation of MessageQueueCon */
  attr.name = "MessageQueueCon";
  MessageQueueConHandle = osThreadNew(MessageQueueConsumer, NULL, (const osThreadAttr_t *)&attr);

  /*create the queue*/
  osQueueHandle = osMessageQueueNew (1U, sizeof(uint16_t), NULL);
  vQueueAddToRegistry(osQueueHandle, (portCHAR*)"osQueueHandle");
  
  /* Start scheduler */
  osKernelStart();

  /* We should never get here as control is now taken by the scheduler */
  while (1)
  {

  }
}

static void ToggleLEDsThread(void *argument)
{
  vTaskSetApplicationTaskTag( NULL, ( void * ) 2 );
  (void) argument;
  /* Infinite loop */
  for(;;)
  {
	  eTaskGetState(LEDThreadHandle);
    /* Toggle LED3 each 400ms */
    toggleLED3();
    osDelay(400);
  }
}

/* osTimerCallback function */
static void osTimerCallback(void *argument)
{
	vTaskSetApplicationTaskTag( NULL, ( void * ) 1 );
  (void) argument;

  /* Toggle LED1*/
  toggleLED1();
  if (TimeCounter == 25)
  {
      TimeCounter = 0;
  }
}

static void MessageQueueProducer(void *argument)
{
  vTaskSetApplicationTaskTag( NULL, ( void * ) 3 );
  /* Infinite loop */
  for (;;)
  {
    if (osMessageQueuePut(osQueueHandle, &ProducerValue, 100, (int)NULL) != osOK) // added int conversion
    {
      ++ProducerErrors;

      /* Toggle LED3 to indicate error  */
      toggleLED3();
    }
    else
    {
      /* Increment the variable we are going to post next time round.  The
      consumer will expect the numbers to follow in numerical order */
      ++ProducerValue;
      if( (ProducerErrors == 0) && (ConsumerErrors == 0) )
      {
      /* Toggle LED1 to indicate a correct number received  */
        toggleLED1();
        osDelay(1000);
      }
    }
  }
}

static void MessageQueueConsumer(void *argument)
{
  vTaskSetApplicationTaskTag( NULL, ( void * ) 4 );
  osStatus_t status;

  for (;;)
  {
    /* Get the message from the queue */
    status = osMessageQueueGet(osQueueHandle, &osQueueMsg, NULL, 100);

    if (status == osOK)
    {
      if (osQueueMsg != ConsumerValue)
      {
        /* Catch-up */
        ConsumerValue = osQueueMsg;
        ++ConsumerErrors;

	    /* Toggle LED3 to indicate error */
        toggleLED3();
      }
      else
      {
        /* Increment the value we expect to remove from the queue next time
        round */
        ++ConsumerValue;
      }
    }
  }
}

static void SemaphoreThread1(void *argument)
{
  uint32_t count = 0;
  osSemaphoreId_t semaphore = (osSemaphoreId_t) argument;
  /* Infinite loop */
  for (;;)
  {

    if (semaphore != NULL)
    {
    OsStatus = osSemaphoreAcquire(semaphore, osWaitForever);
      /* Try to obtain the semaphore */
      if (OsStatus == osOK)
      {
        count = osKernelGetTickCount() + 5000;

        /* Toggle LED1 every 200 ms for 5 seconds */
        while (count > osKernelGetTickCount())
        {
          /* Toggle LED1 */
          toggleLED1();

          /* Delay 200 ms */
          osDelay(200);
        }

        /* Turn off LED1*/
        turnOffLED1();
        /* Release the semaphore */
        OsStatus = osSemaphoreRelease(semaphore);

        /* Suspend ourseleves to execute thread 2 (lower priority)  */
        OsStatus = osThreadSuspend(SEM_Thread1Handle);
      }
    }
  }
}

static void SemaphoreThread2(void *argument)
{
  uint32_t count = 0;
  osSemaphoreId_t semaphore = (osSemaphoreId_t) argument;
  /* Infinite loop */
  for (;;)
  {
    if (semaphore != NULL)
    {
    OsStatus = osSemaphoreAcquire(semaphore, osWaitForever);
      {
        /* Resume Thread 1 (higher priority)*/
        OsStatus = osThreadResume(SEM_Thread1Handle);

        count = osKernelGetTickCount() + 1000;

        /* Toggle LED2 every 200 ms for 5 seconds*/
        while (count > osKernelGetTickCount())
        {
          toggleLED2();

          osDelay(200);
        }

        /* Turn off LED2 */
        turnOffLED2();

        /* Release the semaphore to unblock Thread 1 (higher priority)  */
        OsStatus = osSemaphoreRelease(semaphore);
      }
    }
  }
}

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
