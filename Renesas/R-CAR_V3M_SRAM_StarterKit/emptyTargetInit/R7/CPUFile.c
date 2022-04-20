#include "rcar_v3m.h"
#include "stm.h"

//rt FunctionMinGrossTime: toleranceInPercent = 2
//rt FunctionMaxGrossTime: toleranceInPercent = 2
//rt FunctionMaxNetTime: toleranceInPercent = 2
//rt FunctionMinNetTime: toleranceInPercent = 2

struct STM *gSTM = { 0 };

/* 
   Initialize Port 5 pin 3 GPIO pin (on iSYSTEM debug board for R-CAR
   starter kit it is P6 pin 4).
*/
void initGPIO(){
  /* Set Pin fuction to GPIO */
  PFC_GSPR5 &= ~(0x1 << PFC_GSPR5_P03);
  /* Set regular GPIO input/output */
  GPIO_IOINTSEL5 &= ~(0x1 << GPIO_IOINTSEL5_P03);
  /* Select general output mode */
  GPIO_INOUTSEL5 |= (0x1 << GPIO_INOUTSEL5_P03);
}

void GPIOPinToggle(){
  GPIO_OUTDT5 ^= (0x1 << GPIO_OUTDT5_P03);
}

/*
   Default CPU clock for CR7 is 800 MHz (max), private timer clock is divided by 4, so it is 200 MHz
*/
void initTimer(){
  /* Set reload value */
  R7_PTMR_LOAD = 0x30D40;
  /* Select auto reload operation */
  R7_PTMR_CTR |= (0x1 << R7_PTMR_CTR_AR);
  /* Enable interrupt */
  R7_PTMR_CTR |= (0x1 << R7_PTMR_CTR_IE);
}

void initINTC(){                               
  /* Enable private interrupt ID29 (private timer) */
  ICDISER0 |= (0x1 << ICDISER0_ID29);
  /* Set priority of interrupt ID29 to 0 (highest) */
  ICDIPR7 &= ~(0xFF << ICDIPR7_ID29);
  /* Select priority mask register */
  ICCPMR |= (0x10 << ICCPMR_PRIO);
  /* Enable GIC Distributor */
  ICDDCR |= (0x1 << ICDDCR_EN);
  /* Enable GIC CPU0 interface */
  ICCICR |= (0x1 << ICCICR_EN);
}

void initSTM()
{
  // (27.02.2018 - MB) Do not start STM trace before stmInit() is executed!!                                   
  stmInit(gSTM, (struct stmAPB *) PLATFORM_STM_APB_ADDRESS, (struct stmAXI *) PLATFORM_STM_AXI_ADDRESS);
}
void ca53_cluster_start(){
  /*
     Cluster powerup
  */
  
  /* Set cores start address */
  CA53CPU0BARL = BOOT_ADDR_CA53C0;
  CA53CPU1BARL = BOOT_ADDR_CA53C1;
  CA53CPU2BARL = BOOT_ADDR_CA53C2;
  CA53CPU3BARL = BOOT_ADDR_CA53C3;
  
  /* Cluster is not powered */
  if (CA53PWRSR & (0x1 << CA53PWRSR_PWRDOWN)){
    /* Cluster to normal mode */
    CA53CPUCMCR &= ~(0x3 << CA53CPUCMCR_CMPWR);
  }
      
  /* Enable interrupts */
  SYSCIMR |= (0x1 << SYSCIMR_CA53);
  SYSCIER |= (0x1 << SYSCIER_CA53);
  
  do { 
    /* Wait for SYSC to become ready to accept power resume requests */
    while (!(SYSCSR & (0x1 << SYSCSR_PONENB)));
    
    /* Start cluester power resume sequence */
    CA53PWRONCR |= (0x1 << CA53PWRONCR_PWRUP);
  
  /* Check if error occured */
  }while(CA53PWRER & (0x1 << CA53PWRER_ERR));
  
  /* Wait until SCU powerup - by waiting for interrupt */
  while (!(SYSCISR & (0x1 << SYSCISR_CA53)));
  /* Clear interrupt */
  SYSCISCR |= (0x1 << SYSCISCR_CA53);
  
  /* Wait until cluster powerup */
  while (!(CA53PWRSR & (0x1 << CA53PWRSR_PWRUP)));
}

void ca53_core_start(int core){
  int unlock, val2;    
  /*
     CPU powerup
  */
  /* Wake up n_cores */
  unlock = (0x5A5A << 0x10);
  CPGWPR = ~(0x1 << core);
  CA53WUPCR = (0x1 << core);
  
  /* Release n_cores from reset */
  val2 = CA53RESCNT | unlock;
  CA53RESCNT = val2 & (~(0x1 << (0x3 - core)));
}

void powerCA5xCores(){
  ca53_cluster_start(); 
  ca53_core_start(0);
  ca53_core_start(1);
}

void profilerAddTestMessages(void)
{                                                                                                               
  stmSend8D(gSTM,     0, 0x01);               //rt ProfilerITMOTM: id=data1value1, symbol=0, value=0x01      
  stmSend8DTS(gSTM,   0, 0x11);               //rt ProfilerITMOTM: id=data1value2, symbol=0, value=0x11  
  stmSend8DM(gSTM,    0, 0x21);               //rt ProfilerITMOTM: id=data1value3, symbol=0, value=0x21    
  stmSend8DMTS(gSTM,  0, 0x31);               //rt ProfilerITMOTM: id=data1value4, symbol=0, value=0x31
  stmSend16DMTS(gSTM, 0, 0x0203);             //rt ProfilerITMOTM: id=data1value5, symbol=0, value=0x0203
  stmSend32DMTS(gSTM, 0, 0x04050607);         //rt ProfilerITMOTM: id=data1value6, symbol=0, value=0x04050607
  stmSend64DMTS(gSTM, 0, 0x0102030405060708); //rt ProfilerITMOTM: id=data1value7, symbol=0, value=0x0102030405060708              
}


void targetInit(void)
{           
  initGPIO();
  initINTC();
  initTimer();
  initSTM();
  /* Currently disabled powerup of secondary core due to powerup issues */
  powerCA5xCores();  
}

void initVector(void)
{
}

static void unlockIntCtrl(void)
{
}

static void lockIntCtrl(void)
{
}


void targetEnableInterrupts(void)
{ 
  /* Write current timer value */
  R7_PTMR_COUNTER = 0x0;   
  /* Enable timer */
  R7_PTMR_CTR |= (0x1 << R7_PTMR_CTR_TE);
  asm("CPSIE i");
}

void targetDisableInterrupts(void)
{              
  /* Disable timer */
  R7_PTMR_CTR &= ~(0x1 << R7_PTMR_CTR_TE);
  asm("CPSID i");
}


  //rt TimerInterrupt: profilerFunctionName=ProfilerC_Interrupt, timeoutMSec=1.00, maxDeltaPeriodPct=5
  //rt DaqTimerInterrupt: daqItem=daqInterruptCounter, periodInMicroSeconds=50000, maxDeltaPeriodInPercents=4

void disableWatchdog()
{
}
