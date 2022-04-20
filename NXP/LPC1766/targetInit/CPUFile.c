#include "CortexM.h"


#define CCLKCFG           0x400FC104

#define PLL0CON           0x400FC080
#define PLL0CFG           0x400FC084
#define PLL0STAT          0x400FC088
#define PLL0FEED          0x400FC08C

#define PINSEL10          0x4002C028

#define SYSTICK_CTRL       0xE000E010
#define SYSTICK_LOAD       0xE000E014
#define SYSTICK_VAL        0xE000E018
#define SYSTICK_CALIB      0xE000E01C

#define PLLE0_ENABLE      (1<<0)
#define PLLC0_CONNECT     (1<<1)

#define PLLE0_STAT        (1<<24)
#define PLLC0_STAT        (1<<25)
#define PLOCK0            (1<<26) 

#define MEMWR32(adr,val)  *((unsigned long*)adr) = val;
#define MEMRD32(adr)      *((unsigned long*)adr)

void LPC1766_EnableTPIU()
{
  MEMWR32(PINSEL10,0x00000008); //enable trace port
}

int LPC1766_InitClock()
{
  int iRet = -1;
  int iCnt;
  unsigned long dw;

  // After reset, the 4MHz internal clock oscillator is used by default as clock source
  // which is used as input to PLL. 

  MEMWR32(PLL0CON, 0);            // Disable PLL
  do
  {
    dw = MEMRD32(PLL0STAT); 
  } while ((dw & PLOCK0) != 0);   // Wait for PLL to unlock

  MEMWR32(PLL0CFG,0x23);          // 60MHz clock 
  MEMWR32(PLL0CON,PLLE0_ENABLE);  // Enable PLL     
  MEMWR32(PLL0FEED, 0xAA);        // Write correct FEED sequence
  MEMWR32(PLL0FEED, 0x55);        // to commit PLL configuration

  for (iCnt = 0; iCnt < 0x40000; iCnt++)   // Wait for enable bit to turn on
  {
    dw = MEMRD32(PLL0STAT);       
    iRet = ((dw & PLLE0_STAT) == PLLE0_STAT) ? 0 : -1;
    if (0 == iRet) break; 
  }
  if (iRet != 0)
    return iRet;

  MEMWR32(CCLKCFG, 0x4);          // CPU Clock divider is 5 (~60MHz)
  //MEMWR32(CCLKCFG, 0x3);          // CPU Clock divider is 4 (~80MHz)
  //MEMWR32(CCLKCFG, 0x2);          // CPU Clock divider is 3 (~100MHz)

  for (iCnt = 0; iCnt < 0x40000; iCnt++)   // Wait for PLL to lock
  {
    dw = MEMRD32(PLL0STAT);       
    iRet = ((dw & PLOCK0) == PLOCK0) ? 0 : -1;
    if (0 == iRet) break; 
  }
  if (iRet != 0)
    return iRet;

  MEMWR32(PLL0CON, PLLE0_ENABLE | PLLC0_CONNECT);    
  MEMWR32(PLL0FEED, 0xAA);        // Write correct FEED sequence
  MEMWR32(PLL0FEED, 0x55);

  for (iCnt = 0; iCnt < 0x4000; iCnt++)   // Wait for PLL to connect
  {
    dw = MEMRD32(PLL0STAT);       
    iRet = ((dw & PLLC0_STAT) == PLLC0_STAT) ? 0 : -1;
    if (0 == iRet) break; 
  }
  
  return iRet;
}


void CPU_Init()
{
  LPC1766_InitClock();
  //LPC1766_EnableTPIU();
}

void ITMInit(void)
{
  memW32(ITM_LOCK_ACCESS_REGISTER) = 0xC5ACCE55; //unlock write access to ITM
  memW32(ITM_TRACE_ENABLE_REGISTER) = 0xFFFFFFFF; //enable stimulus port 0-31 
  memW32(ITM_TRACE_PRIVILEGE_REGISTER) = 0x1; //set privilege
}


/* Public interface functions. */

void targetEnableInterrupts()
{ 
  sysTickInit();
  MEMWR32(SYSTICK_CTRL,0x07);  //enable counter, use CPU clock + enable interrupt
  __asm volatile ("cpsie i");
}


void targetInit()
{
  #ifndef EMPTY_TARGET_INIT

  CPU_Init();
  ITMInit();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}


void sysTickInit (void)
{
	//Use P0.0 to test System Tick interrupt
	GPIO_SetDir(1, (1<<31), 1); //Set P0.0 as output

	//Initialize System Tick with 10ms time interval
	SYSTICK_InternalInit(1);
	//Enable System Tick interrupt
	SYSTICK_IntCmd(ENABLE);
	//Enable System Tick Counter
	SYSTICK_Cmd(ENABLE);
}


int TIM_GetITStatus(int a,int b)
{
}

int TIM_ClearITPendingBit(int a,int b)
{
}


void disableWatchdog()
{
}
