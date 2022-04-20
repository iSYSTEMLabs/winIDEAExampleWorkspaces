#include "S32G274A_sfr.h"

#define M7_1_START_ADDRESS      0x34010000
#define M7_2_START_ADDRESS      0x34020000
#define C0_A53_0_START_ADDRESS  0x34030000
#define C0_A53_1_START_ADDRESS  0x34040000
#define C1_A53_0_START_ADDRESS  0x34050000
#define C1_A53_1_START_ADDRESS  0x34060000

#define M0_LLCE_RAM_START_ADDRESS 0x43800000 
#define M0_DTE_START_ADDRESS      0x43000000
#define M0_RxPPE_START_ADDRESS    0x43100000
#define M0_TxPPE_START_ADDRESS    0x43200000
#define M0_FrPPE_START_ADDRESS    0x43300000

#define LLCE_ENABLE_CORE      (*(unsigned volatile int *)0x43FF8000)

#define memW32(address) (*(unsigned long*)(address))
#define memW16(address) (*(unsigned short*)(address))
#define memW8(address) (*(unsigned char*)(address))

#define ITM_BASE_ADDRESS (0xE0000000UL)
#define ITM_LOCK_ACCESS_REGISTER (ITM_BASE_ADDRESS + 0x0FB0UL)
#define ITM_TRACE_ENABLE_REGISTER (ITM_BASE_ADDRESS + 0x0E00UL)
#define ITM_TRACE_PRIVILEGE_REGISTER (ITM_BASE_ADDRESS + 0x0E40UL)

void ITMInit(void)
{
  memW32(ITM_LOCK_ACCESS_REGISTER) = 0xC5ACCE55; //unlock write access to ITM
  memW32(ITM_TRACE_ENABLE_REGISTER) = 0xFFFFFFFF; //enable stimulus port 0-31 
  memW32(ITM_TRACE_PRIVILEGE_REGISTER) = 0x1; //set privilege
}

void profilerAddTestMessages()
{
  while(memW32(ITM_BASE_ADDRESS)==0);
  memW32(ITM_BASE_ADDRESS) = 0x12345678; //rt ProfilerITMOTM: id=data1value1, symbol=0, value=0x12345678
  while(memW32(ITM_BASE_ADDRESS)==0);
  memW16(ITM_BASE_ADDRESS) = 0xABCD; //rt ProfilerITMOTM: id=data1value2, symbol=0, value=0xABCD
  while(memW32(ITM_BASE_ADDRESS)==0);
  memW8(ITM_BASE_ADDRESS) = 0xEF; //rt ProfilerITMOTM: id=data1value3, symbol=0, value=0xEF
  while(memW32(ITM_BASE_ADDRESS)==0);
}

void enable_partition1()
{
  /* Enabling MC_ME partition 1 clock */
  MC_ME.PRTN1_PCONF.R= (MC_ME.PRTN1_PCONF.R | 0x00000001);
  /* Triggering the process of clock enable */
  MC_ME.PRTN1_PUPD.R= (MC_ME.PRTN1_PUPD.R | 0x00000001);
  
  /* key */
	MC_ME.CTL_KEY.R = 0x00005AF0;
	/* inverted key */
	MC_ME.CTL_KEY.R = 0x0000A50F;
  
  /* Polling for Status to get set */
  while(MC_ME.PRTN1_STAT.R !=(MC_ME.PRTN1_STAT.R | 0x00000001));

  /* Unlocking the RDC register */
  RDC.RD1_CTRL_REG.R= (RDC.RD1_CTRL_REG.R | 0x80000000);
  /* Writing the 3rd bit with 0 to enable XBAR interface */
  RDC.RD1_CTRL_REG.R= (RDC.RD1_CTRL_REG.R & 0xFFFFFFF7);
  /* Polling for XBAR interface to get enabled */
  while(RDC.RD1_STAT_REG.R!=(RDC.RD1_STAT_REG.R & 0xFFFFFFEF));

  /* Releasing partition reset from MC_RGM for CA53 CORE0 */
  MC_RGM.PRST1_0.R = (MC_RGM.PRST1_0.R & 0xFFFFFFFE);

  /* Disabling Output safe stating via OSSE bit */
  MC_ME.PRTN1_PCONF.R= (MC_ME.PRTN1_PCONF.R & 0xFFFFFFFB);
  /* Triggering the process to disable output safe stating */
  MC_ME.PRTN1_PUPD.R= (MC_ME.PRTN1_PUPD.R | 0x00000004);
  /* Valid Key Combination */
  
  /* key */
	MC_ME.CTL_KEY.R = 0x00005AF0;
	/* inverted key */
	MC_ME.CTL_KEY.R = 0x0000A50F;
  
  /* Polling RGM RST_STAT for partition to get ungated */
  while(MC_RGM.PSTAT1_0.R != (MC_RGM.PSTAT1_0.R & 0xFFFFFFFE));
  /* Polling for MC_ME safe stating to get disabled */
  while(MC_ME.PRTN1_STAT.R != (MC_ME.PRTN1_STAT.R & 0xFFFFFFFB));
}

void enable_partition2()
{
	/* Enabling MC_ME partition 2 clock */
	MC_ME.PRTN2_PCONF.R= (MC_ME.PRTN2_PCONF.R | 0x00000001);
	/* Triggering the process of clock enable */
	MC_ME.PRTN2_PUPD.R= (MC_ME.PRTN2_PUPD.R | 0x00000001);
  
  /* key */
	MC_ME.CTL_KEY.R = 0x00005AF0;
	/* inverted key */
	MC_ME.CTL_KEY.R = 0x0000A50F;
  
	/* Polling for Status to get set */
	while(MC_ME.PRTN2_STAT.R !=(MC_ME.PRTN2_STAT.R | 0x00000001));

	/* Unlocking the RDC register */
	RDC.RD2_CTRL_REG.R= (RDC.RD2_CTRL_REG.R | 0x80000000);
	/* Writing the 3rd bit with 0 to enable XBAR interface */
	RDC.RD2_CTRL_REG.R= (RDC.RD2_CTRL_REG.R & 0xFFFFFFF7);
	/* Polling for XBAR interface to get enabled */
	while(RDC.RD2_STAT_REG.R!=(RDC.RD2_STAT_REG.R & 0xFFFFFFEF));

	/* Releasing partition reset from MC_RGM for CA53 CORE0 */
	MC_RGM.PRST2_0.R = (MC_RGM.PRST2_0.R & 0xFFFFFFFE);

	/* Disabling Output safe stating via OSSE bit */
	MC_ME.PRTN2_PCONF.R= (MC_ME.PRTN2_PCONF.R & 0xFFFFFFFB);
	/* Triggering the process to disable output safe stating */
	MC_ME.PRTN2_PUPD.R= (MC_ME.PRTN2_PUPD.R | 0x00000004);
  
  /* key */
	MC_ME.CTL_KEY.R = 0x00005AF0;
	/* inverted key */
	MC_ME.CTL_KEY.R = 0x0000A50F;

	/* Polling RGM RST_STAT for partition to get ungated */
	while(MC_RGM.PSTAT2_0.R != (MC_RGM.PSTAT2_0.R & 0xFFFFFFFE));
	/* Polling for MC_ME safe stating to get disabled */
	while(MC_ME.PRTN2_STAT.R != (MC_ME.PRTN2_STAT.R & 0xFFFFFFFB));
}

void enable_partition3()
{
  /* Do init only if partition 3 not yet powered up */
  if (MC_RGM.PSTAT3_0.R & 0x1)
  {
    /* Enabling MC_ME partition 3 clock */
    MC_ME.PRTN3_PCONF.R= (MC_ME.PRTN3_PCONF.R | 0x00000001);
    /* Triggering the process of clock enable */
    MC_ME.PRTN3_PUPD.R= (MC_ME.PRTN3_PUPD.R | 0x00000001);
    /* Valid Key Combination */
    
    /* key */
    MC_ME.CTL_KEY.R = 0x00005AF0;
    /* inverted key */
    MC_ME.CTL_KEY.R = 0x0000A50F;
    
    /* Polling for Status to get set */
    while(MC_ME.PRTN3_STAT.R !=(MC_ME.PRTN3_STAT.R | 0x00000001));
    /* Unlocking the RDC register */
    RDC.RD3_CTRL_REG.R= (RDC.RD3_CTRL_REG.R | 0x80000000);
    /* Writing the 3rd bit with 0 to enable XBAR interface */
    RDC.RD3_CTRL_REG.R= (RDC.RD3_CTRL_REG.R & 0xFFFFFFF7);
    /* Polling for XBAR interface to get enabled */
    while(RDC.RD3_STAT_REG.R!=(RDC.RD3_STAT_REG.R & 0xFFFFFFEF));

    /* Releasing LLCE reset from MC_RGM  */
    MC_RGM.PRST3_0.R = (MC_RGM.PRST3_0.R & 0xFFFFFFFE);

    /* Disabling Output safe stating via OSSE bit */
    MC_ME.PRTN3_PCONF.R= (MC_ME.PRTN3_PCONF.R & 0xFFFFFFFB);
    /* Triggering the process to disable output safe stating */
    MC_ME.PRTN3_PUPD.R= (MC_ME.PRTN3_PUPD.R | 0x00000004);
    /* Valid Key Combination */
    
    /* key */
    MC_ME.CTL_KEY.R = 0x00005AF0;
    /* inverted key */
    MC_ME.CTL_KEY.R = 0x0000A50F;

    /* Polling RGM RST_STAT for partition to get ungated */
    while(MC_RGM.PSTAT3_0.R != (MC_RGM.PSTAT3_0.R & 0xFFFFFFFE));
    /* Polling for MC_ME safe stating to get disabled */
    while(MC_ME.PRTN3_STAT.R != (MC_ME.PRTN3_STAT.R & 0xFFFFFFFB));
  }
}

void start_M7_1()
{
  // Entry point of M7_1 core 
  MC_ME.PRTN0_CORE1_ADDR.R = (uint32_t)M7_1_START_ADDRESS;

  // Releasing the reset of Core from MC_RGM 
  MC_RGM.PRST0_0.B.PERIPH_1_RST = 0;

	// Enabling the clock to core from MC_ME 
  MC_ME.PRTN0_CORE1_PCONF.R |= 0x00000001;
  MC_ME.PRTN0_CORE1_PUPD.R  |= 0x00000001;
	
  /* key */
	MC_ME.CTL_KEY.R = 0x00005AF0;
	/* inverted key */
	MC_ME.CTL_KEY.R = 0x0000A50F;
  
	// Polling for Core clock to get enabled from MC_ME 
	while(!MC_ME.PRTN0_CORE1_STAT.B.CCS) {};
	// Polling for reset lift from MC_RGM. 
  while(MC_RGM.PSTAT0_0.B.PERIPH_1_STAT) {};
}

void start_M7_2()
{
  // Entry point of M7_1 core 
  MC_ME.PRTN0_CORE2_ADDR.R = (uint32_t)M7_2_START_ADDRESS;

  // Releasing the reset of Core from MC_RGM 
  MC_RGM.PRST0_0.B.PERIPH_2_RST = 0;

	// Enabling the clock to core from MC_ME 
  MC_ME.PRTN0_CORE2_PCONF.R |= 0x00000001;
  MC_ME.PRTN0_CORE2_PUPD.R  |= 0x00000001;
	
  /* key */
	MC_ME.CTL_KEY.R = 0x00005AF0;
	/* inverted key */
	MC_ME.CTL_KEY.R = 0x0000A50F;
  
	// Polling for Core clock to get enabled from MC_ME 
	while(!MC_ME.PRTN0_CORE2_STAT.B.CCS) {};
	// Polling for reset lift from MC_RGM. 
  while(MC_RGM.PSTAT0_0.B.PERIPH_2_STAT) {};
}

void initMem(unsigned long start, unsigned long size)
{
  unsigned long last = start + size - 1;
  unsigned long *pAddr;
  
  for(unsigned long addr=start; addr<last; addr+=4)
  {
    pAddr = (unsigned long *)addr;
    *pAddr = 0;
  }
}

void start_LLCE_Cores()
{
  LLCE_ENABLE_CORE = 0xF;    //start all cores 
  // Wait that the LLCE firmware cores to start running and boot.
  unsigned long TimeOut = 65000;
  while (TimeOut--);
}

void start_c0_a53_0()
{
  A53_GPR.GPR00.B.CA53_0_CORE0_AA64nAA32 = 1; // Arch64
  A53_GPR.GPR00.B.CA53_0_CORE0_CFGTE     = 0; // T32
  
  // Entry point of CA53_0 core 
  MC_ME.PRTN1_CORE0_ADDR.R = (uint32_t)C0_A53_0_START_ADDRESS;
	// Releasing the reset of Core from MC_RGM 
  
  MC_RGM.PRST1_0.B.PERIPH_65_RST=0;

	if(MC_ME.PRTN1_CORE0_STAT.B.CCS==0)
	{
		// Enabling the clock to core from MC_ME 
		MC_ME.PRTN1_CORE0_PCONF.R |= 0x00000001;
		MC_ME.PRTN1_CORE0_PUPD.R  |= 0x00000001;
    
    /* key */
    MC_ME.CTL_KEY.R = 0x00005AF0;
    /* inverted key */
    MC_ME.CTL_KEY.R = 0x0000A50F;
    
		// Polling for Core clock to get enabled from MC_ME 
		while(!MC_ME.PRTN1_CORE0_STAT.B.CCS) {};
	}
	// Polling for reset lift from MC_RGM. 
  while(MC_RGM.PSTAT1_0.B.PERIPH_65_STAT) {};
}

void start_c0_a53_1()
{
  A53_GPR.GPR00.B.CA53_0_CORE1_AA64nAA32 = 1; // Arch64
  A53_GPR.GPR00.B.CA53_0_CORE1_CFGTE     = 0; // T32
  
  // Entry point of CA53_0 core 
  MC_ME.PRTN1_CORE1_ADDR.R = (uint32_t)C0_A53_1_START_ADDRESS;
	// Releasing the reset of Core from MC_RGM 
  MC_RGM.PRST1_0.B.PERIPH_66_RST=0;

	// Polling for reset lift from MC_RGM. 
  while(MC_RGM.PSTAT1_0.B.PERIPH_66_STAT) {};
}

void start_c1_a53_0()
{
  A53_GPR.GPR00.B.CA53_1_CORE0_AA64nAA32 = 1; // Arch64
  A53_GPR.GPR00.B.CA53_1_CORE0_CFGTE     = 0; // T32
  
  // Entry point of CA53_0 core 
  MC_ME.PRTN1_CORE2_ADDR.R = (uint32_t)C1_A53_0_START_ADDRESS;
	// Releasing the reset of Core from MC_RGM 
  
  MC_RGM.PRST1_0.B.PERIPH_67_RST=0;

	if(MC_ME.PRTN1_CORE2_STAT.B.CCS==0)
	{
		// Enabling the clock to core from MC_ME 
		MC_ME.PRTN1_CORE2_PCONF.R |= 0x00000001;
		MC_ME.PRTN1_CORE2_PUPD.R  |= 0x00000001;
    
    /* key */
    MC_ME.CTL_KEY.R = 0x00005AF0;
    /* inverted key */
    MC_ME.CTL_KEY.R = 0x0000A50F;
    
		// Polling for Core clock to get enabled from MC_ME 
		while(!MC_ME.PRTN1_CORE2_STAT.B.CCS) {};
	}
	// Polling for reset lift from MC_RGM. 
  while(MC_RGM.PSTAT1_0.B.PERIPH_67_STAT) {};
}

void start_c1_a53_1()
{
  A53_GPR.GPR00.B.CA53_1_CORE1_AA64nAA32 = 1; // Arch64
  A53_GPR.GPR00.B.CA53_1_CORE1_CFGTE     = 0; // T32
  
  // Entry point of CA53_0 core 
  MC_ME.PRTN1_CORE3_ADDR.R = (uint32_t)C1_A53_1_START_ADDRESS;
	// Releasing the reset of Core from MC_RGM 
  
  MC_RGM.PRST1_0.B.PERIPH_68_RST=0;
	// Polling for reset lift from MC_RGM. 
  while(MC_RGM.PSTAT1_0.B.PERIPH_68_STAT) {};
}

extern unsigned long _llce0_ram_start;
extern unsigned long _llce0_ram_end;
extern unsigned long _sram_llce0_code;

extern unsigned long _llce1_ram_start;
extern unsigned long _llce1_ram_end;
extern unsigned long _sram_llce1_code;

extern unsigned long _llce2_ram_start;
extern unsigned long _llce2_ram_end;
extern unsigned long _sram_llce2_code;

extern unsigned long _llce3_ram_start;
extern unsigned long _llce3_ram_end;
extern unsigned long _sram_llce3_code;

void copy_mem(unsigned long *pdwSrc,
              unsigned long *pdwEnd,
              unsigned long *pdwDest)
{
  for (pdwSrc; pdwSrc < pdwEnd; pdwSrc++)
  {
    *pdwDest++ = *pdwSrc;
  }
}

void copy_LLCE_Apps()
{
  copy_mem(&_sram_llce0_code, &_llce0_ram_end, &_llce0_ram_start);
  copy_mem(&_sram_llce1_code, &_llce1_ram_end, &_llce1_ram_start);
  copy_mem(&_sram_llce2_code, &_llce2_ram_end, &_llce2_ram_start);
  copy_mem(&_sram_llce3_code, &_llce3_ram_end, &_llce3_ram_start);
}

void stop_LLCE_Cores()
{
  LLCE_ENABLE_CORE = 0x0;    //stop all cores 
  // Wait that the LLCE firmware cores to stop.
  unsigned long TimeOut = 65000;
  while (TimeOut--);
}

void startCores()
{
  enable_partition1();
  enable_partition2();
  enable_partition3();

  start_M7_1();
  start_M7_2();
  
  start_c0_a53_0();
  start_c0_a53_1();
  start_c1_a53_0();
  start_c1_a53_1();
  
  stop_LLCE_Cores();
  copy_LLCE_Apps();
  start_LLCE_Cores();
}

void GPIOPinToggle()
{
  
}

void targetInit()
{
  ITMInit();
  startCores();
}

void targetEnableInterrupts()
{ 
}

void targetDisableInterrupts()
{  
}

void disableWatchdog()
{
}
