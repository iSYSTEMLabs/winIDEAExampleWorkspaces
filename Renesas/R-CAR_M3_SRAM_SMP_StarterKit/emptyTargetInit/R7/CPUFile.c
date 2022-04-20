#include "rcar_m3.h"
#include "stm.h"

/* return core ID in this specific sample */
int getCoreID(){
  return 0;
}

/* initializes common variables for all 3 apps */
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
  
  /* FIXME: testing purposes */
  //isCustomTest=1;
}

/* stay here until all cores are up and running */
int WaitForCoresSync()
{
  static int cnt=0;
  for(int i=0; i<MAX_CORES; i++)
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
  return (cnt & 0x7F) != 0x00;
}


struct STM *gSTM = { 0 };


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
  /* for sync purposes, cores from A53 clusters are indexed with offset 3 */
  g_anCoresRunTable[3+core] = 1;
}

void ca57_cluster_start(){
  /*
     Cluster powerup
  */
  
  /* Set cores start address */
  CA57CPU0BARL = BOOT_ADDR_CA57C0;
  CA57CPU1BARL = BOOT_ADDR_CA57C1;
  
  /* Cluster is not powered */
  if (CA57PWRSR & (0x1 << CA57PWRSR_PWRDOWN)){
    /* Cluster to normal mode */
    CA57CPUCMCR &= ~(0x3 << CA57CPUCMCR_CMPWR);
  }
      
  /* Enable interrupts */
  SYSCIMR |= (0x1 << SYSCIMR_CA57);
  SYSCIER |= (0x1 << SYSCIER_CA57);
  
  do { 
    /* Wait for SYSC to become ready to accept power resume requests */
    while (!(SYSCSR & (0x1 << SYSCSR_PONENB)));
    
    /* Start cluester power resume sequence */
    CA57PWRONCR |= (0x1 << CA57PWRONCR_PWRUP);
  
  /* Check if error occured */
  }while(CA57PWRER & (0x1 << CA57PWRER_ERR));
  
  /* Wait until SCU powerup - by waiting for interrupt */
  while (!(SYSCISR & (0x1 << SYSCISR_CA57)));
  /* Clear interrupt */
  SYSCISCR |= (0x1 << SYSCISCR_CA57);
  
  /* Wait until cluster powerup */
  while (!(CA57PWRSR & (0x1 << CA57PWRSR_PWRUP)));      
}
 
void ca57_core_start(int core){
  int unlock, val2;    
  /*
     CPU powerup
  */
  /* Wake up n_cores */
  unlock = (0xA5A5 << 0x10);
  CPGWPR = ~(0x1 << core);
  CA57WUPCR = (0x1 << core);
  
  /* Release n_cores from reset */
  val2 = CA57RESCNT | unlock;
  CA57RESCNT = val2 & (~(0x1 << (0x3 - core)));
  /* for sync purposes, cores from A57 clusters are indexed with offset 1 */
  g_anCoresRunTable[1+core] = 1;
}

/* start the cores and introduce delay between them */
void powerCA5xCores(){
  ca57_cluster_start();
  ca57_core_start(0);
  for(int i=0; i<100; i++);
  ca57_core_start(1);
  ca53_cluster_start(); 
  ca53_core_start(0);
  for(int i=0; i<100; i++);  
  ca53_core_start(1);
  for(int i=0; i<100; i++);
  ca53_core_start(2);
  for(int i=0; i<100; i++);
  ca53_core_start(3);
}


void targetEnableInterrupts(void)
{
}


void targetInit(void)
{
 
}


void disableWatchdog()
{
}
