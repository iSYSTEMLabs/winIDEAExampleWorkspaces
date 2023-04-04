#include "TriCore.h"
#include "main.h"


/* returns core ID from the CPU register */
unsigned short getCoreID()
{
  unsigned short core;
  core = __mfcr(COREID_REG);
  /* hack, because core5 has an ID = 6 */
  return core==6?5:core;
//  __asm("mfcr d15,0xfe1c");
//  __asm("and d15,0x7");

}

/* initializes halt request table */
void initializeHaltTable()
{
  int i;
  for (i = 0; i < MAX_CORES; i++)
  {
    nHaltRequestTable[i][0] = i;
    nHaltRequestTable[i][1] = 0;
  }
  g_anCoresSyncTable[0] = 1;
  g_anCoresRunTable[0] = 1;
//  isCustomTest=1;
}

/* wait for the other cores to ACK their boot */
void WaitForCoresSync()
{
  static int cnt=0;
  int i;
  do{
    for(i=0; i<MAX_CORES; i++)
    {
      if (g_anCoresRunTable[i])
      {
        while(1)
        {
         if (g_anCoresSyncTable[i])
         {
          cnt |= 0x1 << i;
          break;
         }
        }
      }
    }
//  return (cnt & 0x7F) != 0x00;
  } while(cnt != 0x3F);
}

/* This function disables watchdog timers that are enabled by default */
void disableWatchdog()
{
  int cid = -1;
  cid = getCoreID();
  if (cid == 0)
  {
    int key;
    
    // disable ENDINIT
    CBS_OCNTRL = 0x000000C0;
    
    /* Disable system watchdog */
    key = SCU_WDTSCON0;
    key ^= (0x3F << SCU_WDTSCON0_PW);         /* Decrypt key (bottom 6 bits are inverted) */
    key &= ~(0x1 << SCU_WDTSCON0_LCK);        /* Clear lock bit */
    key |= (0x1 << SCU_WDTSCON0_ENDINIT);     /* Set ENDINIT bit, update SCU_WDTSCON0 */
    SCU_WDTSCON0 = key;
    SCU_WDTSCON1 |= (0x1 << SCU_WDTSCON1_DR); /* Update password protected disable WDT field */
    key |= (0x1 << SCU_WDTSCON0_LCK);
    SCU_WDTSCON0 = key;
    
    /* Disable primary core watchdog, other cores watchdogs are disabled by default */
    key = SCU_WDTCPU0CON0;
    key ^= (0x3F << SCU_WDTCPU0CON0_PW);            /* Decrypt key (bottom 6 bits are inverted) */
    key &= ~(0x1 << SCU_WDTCPU0CON0_LCK);           /* Clear lock bit */
    key |= (0x1 << SCU_WDTCPU0CON0_ENDINIT);        /* Set ENDINIT bit, update SCU_WDTSCON0 */
    SCU_WDTCPU0CON0 = key;
    SCU_WDTCPU0CON1 |= (0x1 << SCU_WDTCPU0CON1_DR); /* Update password protected disable WDT field */
    key |= (0x1 << SCU_WDTCPU0CON0_LCK);
    SCU_WDTCPU0CON0 = key;
  }
  else
    syncCoreToCPU0();
}


void clock_Switch()
{
  //Step 1: set oscillator as system clock
  // Change flag on OSCCON to "Not entered into Power saving mode" to enable frequency modification.
  SCU_OSCCON &= SCU_OSSCON_TOGGLE_SET_PS_MODE_NOT_ENTERED;
  // Generate reference clock for external oscilator: 16 + (-1 + 5).  
  SCU_OSCCON |= (5 << SCU_OSCCON_OSCVAL_BITS); 
   
  // Wait until PLLLV and PLLHV flags are set.
  while (!(((SCU_OSCCON >> SCU_SYSPLLCON0_PLLLV_BITS) & 1) && 
           ((SCU_OSCCON >> SCU_SYSPLLCON0_PLLHV_BITS) & 1)));
  
  //Step 2: 
    
  // Clear the previous N and P divider values and set the new ones.
  int iSysPllCon0 = 0;    
  iSysPllCon0 |= (1<<SCU_SYSPLLCON0_INSEL_BIT);          // Set fOSC0 as clock source.
  iSysPllCon0 |= (0 << SCU_SYSPLLCON0_PDIV_BITS);        // Set P clock divider.
  iSysPllCon0 |= (29 << SCU_SYSPLLCON0_NDIV_BITS);        // Set N clock divider.   
  
  // Switch from power saving mode to normal mode for external osc.
  iSysPllCon0 |= (1 << SCU_SYSPLLCON0_PLLPWD_BITS);
  SCU_SYSPLLCON0 = iSysPllCon0;
  
  SCU_SYSPLLCON1 = 5;    // Set K2 clock divider.
  
  // Set default peripheral dividers.
  SCU_PERPLLCON0 = 0x00013E00;
  SCU_PERPLLCON1 = 0x00000101;
  
  //Step 3: wait for PLL loc to be set
  while(!(SCU_SYSPLLSTAT & (1 << SCU_SYSPLLSTAT_LOCK_BITS)));
  
  //Step 4: configure CCUCON0 and CCUCON1 to first target setting
  SCU_CCUCON0 = 0x47230113;
  SCU_CCUCON1 = 0x21210312;
  SCU_CCUCON2 = 0x07001201;
  // Wait for all registers to be ready for next values
  while ((SCU_CCUCON0 & (1 << 31)) && (SCU_CCUCON1 & (1 << 31)) && (SCU_CCUCON2 & (1 << 31)));
  
  //Step 5: switch CCU input clock to PLL
  SCU_CCUCON0 = 0x57230113;
  
  //Step 6: after setting CCU f_source to PLL, frequency has to be increased step by step
  SCU_SYSPLLCON1 = 3;  
  // Wait for K2DIV to operate on new value
  while(!(SCU_SYSPLLSTAT & (1 << SCU_SYSPLLSTAT_K2RDY_BITS)));
  
  SCU_SYSPLLCON1 = 2;
  while(!(SCU_SYSPLLSTAT & (1 << SCU_SYSPLLSTAT_K2RDY_BITS)));
  
  SCU_SYSPLLCON1 = 1;
  while(!(SCU_SYSPLLSTAT & (1 << SCU_SYSPLLSTAT_K2RDY_BITS)));
}

void enableSecondaryCores()
{
  /* write boot addresses to PC */
  PC1 = BOOT_ADDR;
  PC2 = BOOT_ADDR;
  PC3 = BOOT_ADDR;
  PC4 = BOOT_ADDR;
  PC5 = BOOT_ADDR;
  
  /* start individual cores */
  int i;
  CPU1_SYSCON = 0;
  g_anCoresRunTable[ID_CORE_1]=1;
  for(i=0; i<1000; i++);
  
  CPU2_SYSCON = 0;
  g_anCoresRunTable[ID_CORE_2]=1;
  for(i=0; i<1000; i++);
  
  CPU3_SYSCON = 0;
  g_anCoresRunTable[ID_CORE_3]=1;
  for(i=0; i<1000; i++);
  
  CPU4_SYSCON = 0;
  g_anCoresRunTable[ID_CORE_4]=1;
  for(i=0; i<1000; i++);
  
  CPU5_SYSCON = 0;
  g_anCoresRunTable[ID_CORE_5]=1;
  for(i=0; i<1000; i++);
}


/* initialize system timer peripheral */
void initTimer()
{
  STM0_CMP0 |= 0xFFFF;  // load compare register 0, timer delay ~ 1ms.
  STM0_CMCON |= 0x10;    // load compare match control register.
  
  STM0_ISCR |= 0x1;     // Clear CMPIR0 register.
  STM0_ICR |= 0x1;      // Compare Register CMP0 Interrupt Request Flag.
  
  SRC_STM0SR0 |= 0x00000405;  // Set priority.
//  tmp = _install_int_handler(STM0_INT_PRI,(void*)TimerInterruptHandler,0);
}

void targetEnableInterrupts(void)
{
  __enable();
  //__asm("ENABLE");
}


void targetDisableInterrupts(void)
{
  __disable();
  //__asm("DISABLE");
}    


void targetInit(void)
{
  unsigned short cid;
  cid = getCoreID();
  if(cid == ID_CORE_0)
  {
    initializeHaltTable();
    enableSecondaryCores();
  #ifndef EMPTY_TARGET_INIT
    clock_Switch();
    initTimer();     // Configure system timer peripheral with interrupts
  #endif /* EMPTY_TARGET_INIT */
    WaitForCoresSync();
  }
}


void __interrupt(STM0_INT_PRI) TimerInterruptHandler(void)
{
  targetDisableInterrupts();
  InterruptRoutine();  
  targetEnableInterrupts();
}


void GeneralTrap();
void GeneralInt();

void __trap(0,1,2,3,4,5,6) GeneralTrap(void)
{
  __asm("debug");
}

void __interrupt(0,1,2,3,4,6,7,8,9,10) GeneralInt(void)
{
  __asm("debug");
}


int core = -1;
/* writes an ACK flag to the sync table read by the primary core */
void syncCoreToCPU0()
{
  core = getCoreID();
  if(core == ID_CORE_1)
  {
    g_anCoresSyncTable[ID_CORE_1] = 1;
  }
  else if(core == ID_CORE_2)
  {
    g_anCoresSyncTable[ID_CORE_2] = 1;
  }
  else if(core == ID_CORE_3)
  {
    g_anCoresSyncTable[ID_CORE_3] = 1;
  }
  else if(core == ID_CORE_4)
  {
    g_anCoresSyncTable[ID_CORE_4] = 1;
  }
  else if(core == ID_CORE_5)
  {
    g_anCoresSyncTable[ID_CORE_5] = 1;
  }
}
