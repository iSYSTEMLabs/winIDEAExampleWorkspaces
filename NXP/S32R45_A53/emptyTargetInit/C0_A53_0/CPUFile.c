#include "S32R45.h"
#include "S32R45_sfr.h"

void disableWatchdog()
{
}


void startM7_0()
{
  /* Entry point of M7_0 core */
  MC_ME.PRTN0_CORE0_ADDR.R = (uint32_t)M7_0_START_ADDRESS;

  /* Set the reset of Core from MC_RGM */
  MC_RGM.PRST0_0.B.PERIPH_0_RST = 1;

  /* Release the reset of Core from MC_RGM */
  MC_RGM.PRST0_0.B.PERIPH_0_RST = 0;

	/*Enabling the clock to core from MC_ME */
  MC_ME.PRTN0_CORE0_PCONF.R |= 0x00000001;
  MC_ME.PRTN0_CORE0_PUPD.R  |= 0x00000001;
	
  /*Enter key */
	MC_ME.CTL_KEY.R = 0x00005AF0;
	MC_ME.CTL_KEY.R = 0x0000A50F;
  
	/*Poll for Core clock to get enabled from MC_ME */
	while(!MC_ME.PRTN0_CORE0_STAT.B.CCS);
	/*Poll for reset lift from MC_RGM */
  while(MC_RGM.PSTAT0_0.B.PERIPH_0_STAT);
}

void startM7_1()
{
  /* Entry point of M7_1 core */
  MC_ME.PRTN0_CORE1_ADDR.R = (uint32_t)M7_1_START_ADDRESS;

  /* Release the reset of Core from MC_RGM */
  MC_RGM.PRST0_0.B.PERIPH_1_RST = 0;

	/*Enabling the clock to core from MC_ME */
  MC_ME.PRTN0_CORE1_PCONF.R |= 0x00000001;
  MC_ME.PRTN0_CORE1_PUPD.R  |= 0x00000001;
	
  /*Enter key */
	MC_ME.CTL_KEY.R = 0x00005AF0;
	MC_ME.CTL_KEY.R = 0x0000A50F;
  
	/*Poll for Core clock to get enabled from MC_ME */
	while(!MC_ME.PRTN0_CORE1_STAT.B.CCS);
	/*Poll for reset lift from MC_RGM */
  while(MC_RGM.PSTAT0_0.B.PERIPH_1_STAT);
}

void startM7_2()
{
  /* Entry point of M7_2 core */
  MC_ME.PRTN0_CORE2_ADDR.R = (uint32_t)M7_2_START_ADDRESS;

  /* Releasing the reset of Core from MC_RGM */
  MC_RGM.PRST0_0.B.PERIPH_2_RST = 0;

	/*Enabling the clock to core from MC_ME */
  MC_ME.PRTN0_CORE2_PCONF.R |= 0x00000001;
  MC_ME.PRTN0_CORE2_PUPD.R  |= 0x00000001;
	
  /*Enter key */
	MC_ME.CTL_KEY.R = 0x00005AF0;
	MC_ME.CTL_KEY.R = 0x0000A50F;
  
	/*Poll for Core clock to get enabled from MC_ME */
	while(!MC_ME.PRTN0_CORE2_STAT.B.CCS) {};
	/*Poll for reset lift from MC_RGM */
  while(MC_RGM.PSTAT0_0.B.PERIPH_2_STAT) {};
}

void enableA53Partition()
{
  /*Request clock 0*/
  MC_ME.PRTN0_COFB0_CLKEN.B.REQ0 = 0x01;
  /*Trigger hardware process*/
  MC_ME.PRTN0_PUPD.B.PCUD = 0x01;
  /*Enter key */
  MC_ME.CTL_KEY.R = 0x00005AF0;
  MC_ME.CTL_KEY.R = 0x0000A50F;
  /*Poll until clock is running*/
  while(!MC_ME.PRTN0_COFB0_STAT.B.BLOCK0);
  
  /*Select clock source as osc. (72MHz?)*/
  MC_CGM_1.MUX_0_CSC.B.CLK_SW = 0x01;
  /*Enable partition 1 clock*/
  MC_ME.PRTN1_PCONF.R = 0x01;
  /*Trigger hardware process update*/
  MC_ME.PRTN1_PUPD.B.PCUD = 0x01;
  /*Enter key*/
  MC_ME.CTL_KEY.R = 0x00005AF0;
  MC_ME.CTL_KEY.R = 0x0000A50F;
  /*Wait until partition 1 clock is enabled*/
  while(!MC_ME.PRTN1_STAT.B.PCS);
  
  /*Wait until interconnect interface is enabled*/
  while(RDC.RD1_STAT_REG.B.RD1_INTERCONNECT_INTERFACE_DISABLE_STAT)
  {
    /*Enable interconnect interface*/
    RDC.RD1_CTRL_REG.R &= ~(1 << 0x03);
    RDC.RD1_CTRL_REG.B.RD1_CTRL_UNLOCK = 1;
  }
  
  /*Wait until peripheral and output isolation options are set*/
  while(MC_RGM.PSTAT1_0.B.PERIPH_64_STAT | MC_ME.PRTN1_STAT.B.OSSS)
  {
    /*Enable A53 core peripheral*/
    MC_RGM.PRST1_0.B.PERIPH_64_RST = 0x00;
    /*Disable partition output isolation*/
    MC_ME.PRTN1_PCONF.B.OSSE = 0x00;
    MC_ME.PRTN1_PUPD.B.OSSUD = 0x01;
    /*Enter key*/
    MC_ME.CTL_KEY.R = 0x00005AF0;
    MC_ME.CTL_KEY.R = 0x0000A50F;
  } 
}

void enableClockCluster0()
{
  /*Enable cluster 0 clock if it isn't already enabled*/
  if(!MC_ME.PRTN1_CORE0_STAT.B.CCS)
  {
    /*Set cluster 0 enable clock*/
    MC_ME.PRTN1_CORE0_PCONF.B.CCE = 0x01;
    /*Set the cluster 0 hardware update process*/
    MC_ME.PRTN1_CORE0_PUPD.B.CCUPD = 0x01;
    /*Enter key */
    MC_ME.CTL_KEY.R = 0x00005AF0;
    MC_ME.CTL_KEY.R = 0x0000A50F;
    
    /*Poll for cluster 0 clock to get enabled from MC_ME*/
    while(!MC_ME.PRTN1_CORE0_STAT.B.CCS);
  }
}

void enableClockCluster1()
{
  /*Enable cluster 1 clock if it isn't already enabled*/
  if(!MC_ME.PRTN1_CORE2_STAT.B.CCS)
  {
    /*Set cluster 1 enable clock*/
    MC_ME.PRTN1_CORE2_PCONF.B.CCE = 0x01;
    /*Set the cluster 1 hardware update process*/
    MC_ME.PRTN1_CORE2_PUPD.B.CCUPD = 0x01;
    /*Enter key */
    MC_ME.CTL_KEY.R = 0x00005AF0;
    MC_ME.CTL_KEY.R = 0x0000A50F;
    
    /*Poll for cluster 1 clock to get enabled from MC_ME*/
    while(!MC_ME.PRTN1_CORE2_STAT.B.CCS);
  }
}

void startC0_A53_1()
{
  /*Set to Arch64*/
  A53_GPR.GPR00.B.CA53_0_CORE1_AA64nAA32 = 0x01; 
  A53_GPR.GPR00.B.CA53_0_CORE1_CFGTE     = 0x00;
  
  /*Entry point of CA53_1 core */
  MC_ME.PRTN1_CORE1_ADDR.R = (uint32_t)C0_A53_1_START_ADDRESS;

  enableClockCluster0();

  /*Release the reset of Core from MC_RGM*/
  MC_RGM.PRST1_0.B.PERIPH_66_RST = 0x00;
	/*Poll for reset lift from MC_RGM*/ 
  while(MC_RGM.PSTAT1_0.B.PERIPH_66_STAT);
}

void startC1_A53_0()
{
  /*Set to Arch64*/
  A53_GPR.GPR00.B.CA53_1_CORE0_AA64nAA32 = 0x01; 
  A53_GPR.GPR00.B.CA53_1_CORE0_CFGTE     = 0x00;
  
  /*Entry point of CA53_2 core */
  MC_ME.PRTN1_CORE2_ADDR.R = (uint32_t)C1_A53_0_START_ADDRESS;

  enableClockCluster1();

  /*Release the reset of Core from MC_RGM*/
  MC_RGM.PRST1_0.B.PERIPH_67_RST = 0x00;
	/*Poll for reset lift from MC_RGM*/ 
  while(MC_RGM.PSTAT1_0.B.PERIPH_67_STAT);
}

void startC1_A53_1()
{
  /*Set to Arch64*/
  A53_GPR.GPR00.B.CA53_1_CORE1_AA64nAA32 = 0x01; 
  A53_GPR.GPR00.B.CA53_1_CORE1_CFGTE     = 0x00;
  
  /*Entry point of CA53_3 core */
  MC_ME.PRTN1_CORE3_ADDR.R = (uint32_t)C1_A53_1_START_ADDRESS;

  enableClockCluster1();

  /*Release the reset of Core from MC_RGM*/
  MC_RGM.PRST1_0.B.PERIPH_68_RST = 0x00;
	/*Poll for reset lift from MC_RGM*/ 
  while(MC_RGM.PSTAT1_0.B.PERIPH_68_STAT);
}

void enableSecondaryCores()
{
  startM7_0();
  startM7_1();
  startM7_2();
  /*NOTE: enableA53Partition() function must always be called before starting any A53 cores*/
  enableA53Partition();
  startC0_A53_1();
  startC1_A53_0();
  startC1_A53_1();
}


void targetInit(void)
{
  #ifndef EMPTY_TARGET_INIT

  enableSecondaryCores();

  #endif /* EMPTY_TARGET_INIT */
}
