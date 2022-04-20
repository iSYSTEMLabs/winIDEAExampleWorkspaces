#include "mpc5746m.h"     
#include "etpu_util.h"   
#include "etpu_example.h"
#include "m_0_auto.h"

uint32_t *fs_free_param;

void disableWatchdog(void){

}

void initClock(void){
  // Clear reset escalation
  MC_RGM.FRET.R = 0; 
  MC_RGM.DRET.R = 0;
  
  MC_ME.RUN_PC[0].R=0x000000FE;             // Peripheral ON in every mode
	MC_ME.RUN_PC[1].R=0x000000FE;             // Peripheral ON in every mode
	MC_ME.RUN_PC[2].R=0x000000FE;             // Peripheral ON in every mode
	MC_ME.RUN_PC[3].R=0x000000FE;             // Peripheral ON in every mode
	MC_ME.RUN_PC[4].R=0x000000FE;             // Peripheral ON in every mode
	MC_ME.RUN_PC[5].R=0x000000FE;             // Peripheral ON in every mode 
	MC_ME.RUN_PC[6].R=0x000000FE;             // Peripheral ON in every mode
	MC_ME.RUN_PC[7].R=0x000000FE;             // Peripheral ON in every mode

  MC_ME.MCTL.R = 0x30005AF0;                // Mode & Key
	MC_ME.MCTL.R = 0x3000A50F;                // Mode & Key inverted
	while(MC_ME.GS.B.S_MTRANS == 1);
  
  // Turn On XOSC - PLL's remain off
	MC_ME.DRUN_MC.R = 0x00130020; 		        // Enable the XOSC

	// Route XOSC to the PLL's - IRC is default
	MC_CGM.AC3_SC.B.SELCTL=1;                 // Connect XOSC to PLL0
	MC_CGM.AC4_SC.B.SELCTL=1;                 // Connect XOSC to PLL1

	// Configure PLL0 Dividers - 200MHz from 40Mhz XOSC
	PLLDIG.PLL0DV.B.RFDPHI1 = 4;  
	PLLDIG.PLL0DV.B.RFDPHI = 2;   
	PLLDIG.PLL0DV.B.PREDIV = 2;   
	PLLDIG.PLL0DV.B.MFD = 40;     

	// Put PLL0 into Normal mode
	PLLDIG.PLL0CR.B.CLKCFG = 3;

	// Configure PLL1 Dividers - 200MHz from 40Mhz XOSC
	PLLDIG.PLL1DV.B.RFDPHI = 2;  
	PLLDIG.PLL1DV.B.MFD = 20;      

	// Put PLL1 into Normal mode
	PLLDIG.PLL1CR.B.CLKCFG = 3;

	// Enable loss of lock interrupts
	PLLDIG.PLL0CR.B.LOLIE = 1;
	PLLDIG.PLL1CR.B.LOLIE = 1;

	// Set the System Clock 
	MC_ME.DRUN_MC.R = 0x001300F4;             // Enable XOSC and PLLs - PLL1 is sysclk   
	  
	// Configure System clock dividers 
	MC_CGM.SC_DC[0].B.DIV=0;                  // Fast crossbar Clock Divide by 0
	MC_CGM.SC_DC[0].B.DE=1;                   // Fast crossbar Clock Divide Enable

	MC_CGM.SC_DC[1].B.DIV=1;                  // Slow crossbar Clock Divide by 2
	MC_CGM.SC_DC[1].B.DE=1;                   // Slow crossbar Clock Divide Enable

	MC_CGM.SC_DC[2].B.DIV=3;                  // PBRIDGE Clock Divide by 4
	MC_CGM.SC_DC[2].B.DE=1;                   // PBRIDGE Clock Divide Enable

	// Enable and configure Aux clocks 
	MC_CGM.AC0_SC.B.SELCTL=2;                 // PLL0 PHI
	MC_CGM.AC0_DC[0].B.DE=1;                  // Enable Auxilliary Clock 0 divider 0 (general peripheral clock)
  MC_CGM.AC0_DC[0].B.DIV=4;                 // Divide by 5 -> 40MHz

  AC5_SC |= 0x02000000;                     // Run from PLL0
	MC_CGM.AC5_DC0.B.DE=1;                    // Enable Auxilliary Clock 5 divider 0 (eTPU clock)
  MC_CGM.AC5_DC0.B.DIV=1;                   // Divide by 2 -> 100MHz

  MC_CGM.AC5_DC1.B.DE=1;                    // Enable Auxilliary Clock 5 divider 1 (eMIOS clock)
  MC_CGM.AC5_DC1.B.DIV=1;                   // Divide by 2  -> 100MHz
   
	// Mode change Re-enter the drun mode, to start cores, clock tree & PLL1
	MC_ME.MCTL.R = 0x30005AF0;                // Mode & Key
	MC_ME.MCTL.R = 0x3000A50F;                // Mode & Key inverted
										
	while(MC_ME.GS.B.S_MTRANS == 1);          // Wait for mode entry complete
	while(MC_ME.GS.B.S_CURRENT_MODE != 0x3);  // Check DRUN mode entered 
}

void init_ecpu_config(void){
  // MCR register
  my_etpu_config.mcr = FS_ETPU_MISC_ENABLE;	

  // MISC value from eTPU compiler link file
	my_etpu_config.misc = FS_ETPU_MISC;		
  
  // TCR1 prescaler of 50 (49+1)
  my_etpu_config.ecr_a = FS_ETPU_FILTER_CLOCK_DIV8 + FS_ETPU_CHAN_FILTER_3SAMPLE + FS_ETPU_ENTRY_TABLE;
  my_etpu_config.tbcr_a = FS_ETPU_TCR2CTL_DIV8 + ( 7 << 16) + FS_ETPU_TCR1CTL_DIV2 + 49; 
  my_etpu_config.stacr_a = 0;

  my_etpu_config.ecr_b = FS_ETPU_FILTER_CLOCK_DIV8 + FS_ETPU_CHAN_FILTER_3SAMPLE + FS_ETPU_ENTRY_TABLE;
  my_etpu_config.tbcr_b = FS_ETPU_TCR2CTL_DIV8 + ( 7 << 16) + FS_ETPU_TCR1CTL_DIV2 + 49;
  my_etpu_config.stacr_b = 0;
}


void targetInit()
{
  #ifndef EMPTY_TARGET_INIT

  initClock();            // Clock setup

  initETPU();             // Initialize eTPU        
  productionTestETPU();   // Start execution on eTPU

  #endif /* EMPTY_TARGET_INIT */
}

void initETPU(void){
  int32_t error_code;

  // initialize eTPU configuration
  init_ecpu_config();

  // initialize eTPU hardware
  fs_etpu_init( my_etpu_config, (uint32_t *)etpu_code, sizeof(etpu_code), \
                  (uint32_t *)etpu_globals, sizeof(etpu_globals));
    
  // initialize eTPU channels                    
  error_code = m0_init(PRODUCTION_TEST_CH0,FS_ETPU_PRIORITY_MIDDLE);                 
    
  // enable all timebases
  fs_timer_start();   
}

void productionTestETPU(void){
  // Trigger ETPU1, channel 0, to start production test functions on eTPU
  m0_set(PRODUCTION_TEST_CH0,1);
}

int m0_init(unsigned char channel,unsigned char priority)
{
  // parameter base address for channel
  uint32_t *pba;	
  // Disable channel to assign function safely
  fs_etpu_disable( channel );
  if (ETPU.CHAN[channel].CR.B.CPBA == 0 )
  {
    // get parameter RAM number of parameters passed from eTPU C code
    pba = fs_etpu_malloc(FS_M_0_NUM_PARMS);
    if (pba == 0)
    {
      return (FS_ETPU_ERROR_MALLOC);
    }
  }
  else 
  {
     //set pba to what is in the CR register
     pba=fs_etpu_data_ram(channel);
  }
  // write channel configuration register
  ETPU.CHAN[channel].CR.R = (priority << 28) + (FS_M_0_TABLE_SELECT << 24) +\
                             (FS_M_0_FUNCTION_NUMBER << 16) + \
                            ((pba - &ETPU_DATA_RAM)>>1);

  // write FM (function mode) bits
  ETPU.CHAN[channel].SCR.R = 1;
  // Do not start channel just yet
  ETPU.CHAN[channel].HSRR.R = 0; 
  return(0);
}

void m0_set(unsigned char channel,unsigned char level)
{
  ETPU.CHAN[channel].HSRR.R = level ? 5 : 1;
}
