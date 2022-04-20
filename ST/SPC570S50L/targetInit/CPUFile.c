#include "SPC570S50L.h"
#include "spc57_init.h"

//rt FunctionMinGrossTime: toleranceInPercent = 1 
//rt FunctionMaxGrossTime: toleranceInPercent = 1
//rt FunctionMinNetTime: toleranceInPercent = 1 
//rt FunctionMaxNetTime: toleranceInPercent = 1

//rt TimerInterrupt: profilerFunctionName=ProfilerC_Interrupt, timeoutMSec=1.00, maxDeltaPeriodPct=5
//rt DaqTimerInterrupt: daqItem=daqInterruptCounter, periodInMicroSeconds=51000, maxDeltaPeriodInPercents=5

tenPllFreq		pll0_clk;
tenDivFactor	bridge_divider;
tenDivFactor	lin_divider;

#define SWT_SR 0xFC058010
#define SWT_CR 0xFC058000         

#define _SYSCLK_ 		SYSCLK_64MHz

#define mem(addr) (*(unsigned char volatile *)(addr))
#define memw(addr) (*(unsigned short volatile *)(addr))
#define meml(addr) (*(unsigned long volatile *)(addr))

void targetInit();
void targetEnableInterrupts();
void profilerAddTestMessages();

char GpioOffOn = 0;
unsigned char gotoStopLowPowerMode;  
unsigned char gotoHaltLowPowerMode;  
unsigned char mustInitLPM;
int dummyRead;

void initGPIO();
void InterruptRoutine();
void targetDisableInterrupts();
void initWatchdog();
void initPIT();
void initINTC();
void enableSecondCore();
void targetEnableWakeupInterrupts();
void targetDisableWakeupInterrupts();

extern const uint32_t IntcIsrVectorTable[];
extern void e200zX_Interrupt_Setup(void);

void PLL0_Init(tenPllFreq ePllFreq){
	switch (ePllFreq) {	/* switch ePllFreq */
		case f200M:
			PLLDIG.PLL0DV.B.PREDIV = 6;		
			PLLDIG.PLL0DV.B.RFDPHI = 2;
			PLLDIG.PLL0DV.B.RFDPHI1 = 10; 			
			PLLDIG.PLL0DV.B.MFD = 60; 
			break;
		case f180M:
			PLLDIG.PLL0DV.B.PREDIV = 5;		
			PLLDIG.PLL0DV.B.RFDPHI = 2;
			PLLDIG.PLL0DV.B.RFDPHI1 = 9; 			
			PLLDIG.PLL0DV.B.MFD = 45; 
			break;
		case f160M:
			PLLDIG.PLL0DV.B.PREDIV = 5;		
			PLLDIG.PLL0DV.B.RFDPHI = 3;
			PLLDIG.PLL0DV.B.RFDPHI1 = 12; 			
			PLLDIG.PLL0DV.B.MFD = 60; 
			break;		
		case f150M:
			PLLDIG.PLL0DV.B.PREDIV = 6;		
			PLLDIG.PLL0DV.B.RFDPHI = 4;
			PLLDIG.PLL0DV.B.RFDPHI1 = 15; 			
			PLLDIG.PLL0DV.B.MFD = 90; 
			break;
		case f120M:
			PLLDIG.PLL0DV.B.PREDIV = 5;		
			PLLDIG.PLL0DV.B.RFDPHI = 4;
			PLLDIG.PLL0DV.B.RFDPHI1 = 12; 			
			PLLDIG.PLL0DV.B.MFD = 60; 
			break;
		case f100M:
			PLLDIG.PLL0DV.B.PREDIV = 6;		
			PLLDIG.PLL0DV.B.RFDPHI = 4;
			PLLDIG.PLL0DV.B.RFDPHI1 = 10; 			
			PLLDIG.PLL0DV.B.MFD = 60; 
			break;	
		case f80M:
			PLLDIG.PLL0DV.B.PREDIV = 5;		
			PLLDIG.PLL0DV.B.RFDPHI = 6;
			PLLDIG.PLL0DV.B.RFDPHI1 = 12; 			
			PLLDIG.PLL0DV.B.MFD = 60; 
			break;
		case f64M:
			PLLDIG.PLL0DV.B.PREDIV = 4;		
			PLLDIG.PLL0DV.B.RFDPHI = 5;
			PLLDIG.PLL0DV.B.RFDPHI1 = 8; 			
			PLLDIG.PLL0DV.B.MFD = 32; 
			break;	
		case f60M:
			PLLDIG.PLL0DV.B.PREDIV = 5;		
			PLLDIG.PLL0DV.B.RFDPHI = 8;
			PLLDIG.PLL0DV.B.RFDPHI1 = 12; 			
			PLLDIG.PLL0DV.B.MFD = 60; 
			break;				
		case f16M:
			PLLDIG.PLL0DV.B.PREDIV = 5;		
			PLLDIG.PLL0DV.B.RFDPHI = 30;
			PLLDIG.PLL0DV.B.RFDPHI1 = 12; 			
			PLLDIG.PLL0DV.B.MFD = 60; 
			break;				
		default:
			while(1);
	}	/* end switch ePllFreq */			
}

void PLL1_Init(tenPllFreq ePllFreq){

	switch (ePllFreq) {	/* switch ePllFreq */
		case f200M:
				PLLDIG.PLL1DV.B.RFDPHI = 2;
				PLLDIG.PLL1DV.B.MFD = 20; 
				break;
		case f180M:
				PLLDIG.PLL1DV.B.RFDPHI = 2;
				PLLDIG.PLL1DV.B.MFD = 18; 
				break;
		case f160M:
				PLLDIG.PLL1DV.B.RFDPHI = 2;
				PLLDIG.PLL1DV.B.MFD = 16; 
				break;
		case f150M:
				PLLDIG.PLL1DV.B.RFDPHI = 4;
				PLLDIG.PLL1DV.B.MFD = 30; 
				break;
		case f120M:
				PLLDIG.PLL1DV.B.RFDPHI = 5;
				PLLDIG.PLL1DV.B.MFD = 30; 
				break;
		case f100M:
				PLLDIG.PLL1DV.B.RFDPHI = 6;
				PLLDIG.PLL1DV.B.MFD = 30; 
				break;
		case f80M:
				PLLDIG.PLL1DV.B.RFDPHI = 4;
				PLLDIG.PLL1DV.B.MFD = 16; 
				break;
		case f64M:
				PLLDIG.PLL1DV.B.RFDPHI = 5;
				PLLDIG.PLL1DV.B.MFD = 16; 
				break;	
		case f60M:
				PLLDIG.PLL1DV.B.RFDPHI = 10;
				PLLDIG.PLL1DV.B.MFD = 30; 
				break;
		case f16M:
				PLLDIG.PLL1DV.B.RFDPHI = 20;
				PLLDIG.PLL1DV.B.MFD = 16; 
				break;					
		default:
			while(1);
	}

	PLLDIG.PLL1FM.B.MODEN = 1;		/* Modulation enabled */
	PLLDIG.PLL1FM.B.MODSEL = 0;		/* Modulation centered around nominal frequency */
	PLLDIG.PLL1FM.B.MODPRD = 0x823;
	PLLDIG.PLL1FM.B.INCSTP = 0x2;
		
}

void MC_MODE_Init(void){

	volatile int x;

	MC_RGM.DES.R = 0xFFFF;
	MC_RGM.FES.R = 0xFFFF;
	MC_ME.ME.R = 0x000005E2;					/* Enable all modes */

	/* MC_ME.DRUN_MC.R not yet configured...IRC Osc by default */
	
	/* Setting RUN Configuration Register ME_RUN_PC[0] */
	MC_ME.RUN_PC[0].R = 0x000000FE;				/* Peripheral ON in every mode */
	MC_ME.RUN_PC[1].R = 0x000000FE;				/* Peripheral ON in every mode */
	MC_ME.RUN_PC[2].R = 0x000000FE;				/* Peripheral ON in every mode */
	MC_ME.RUN_PC[3].R = 0x000000FE;				/* Peripheral ON in every mode */
	MC_ME.RUN_PC[4].R = 0x000000FE;				/* Peripheral ON in every mode */
	MC_ME.RUN_PC[5].R = 0x000000FE;				/* Peripheral ON in every mode */
	MC_ME.RUN_PC[6].R = 0x000000FE;				/* Peripheral ON in every mode */
	MC_ME.RUN_PC[7].R = 0x000000FE;				/* Peripheral ON in every mode */

	/* Turn On XOSC - PLL's remain off */
	MC_ME.DRUN_MC.R = 0x00130020; 			  	/* Enable the XOSC */

	/* Trigger DRUN mode Transision */
	MC_ME.MCTL.R = (DRUN_MODE << 28 | 0x00005AF0);		/* Mode & Key */
	MC_ME.MCTL.R = (DRUN_MODE << 28 | 0x0000A50F);      /* Mode & Key inverted */
	while(MC_ME.GS.B.S_MTRANS == 1);            		/* Wait for mode entry to complete */
	while(MC_ME.GS.B.S_CURRENT_MODE != DRUN_MODE);    	/* Check DRUN mode has been entered */

//	OUTCLK_Init();										/* Configure Output Clocks */
	/* Route XOSC to the PLL's - IRC is default */
	MC_CGM.AC2_SC.B.SELCTL = SELCTL_CRYSTAL_OSC;		/* Connect XOSC to PLL0 */
	MC_CGM.AC3_SC.B.SELCTL = SELCTL_CRYSTAL_OSC;		/* Connect XOSC to PLL1 */
	/* Trigger DRUN mode Transision */
	MC_ME.MCTL.R = (DRUN_MODE << 28 | 0x00005AF0);		/* Mode & Key */
	MC_ME.MCTL.R = (DRUN_MODE << 28 | 0x0000A50F);      /* Mode & Key inverted */
	while(MC_ME.GS.B.S_MTRANS == 1);            		/* Wait for mode entry to complete */
	while(MC_ME.GS.B.S_CURRENT_MODE != DRUN_MODE);    	/* Check DRUN mode has been entered */



//	LIN_Dividers_Init();			/* function that handles LINFlex constraints */
	PLL0_Init(pll0_clk);
	PLL1_Init(_SYSCLK_);

	/* Set the System Clock */
	MC_ME.DRUN_MC.R = 0x001300F4;       /* ME_DRUN_MC - enable XOSC and PLLs - PLL1 is sysclk */

	/* Trigger DRUN mode Transision */
	MC_ME.MCTL.R = (DRUN_MODE << 28 | 0x00005AF0);		/* Mode & Key */
	MC_ME.MCTL.R = (DRUN_MODE << 28 | 0x0000A50F);      /* Mode & Key inverted */
	while(MC_ME.GS.B.S_MTRANS == 1);            		/* Wait for mode entry to complete */
	while(MC_ME.GS.B.S_CURRENT_MODE != DRUN_MODE);    	/* Check DRUN mode has been entered */
	
	/* wait for PLL to lock - will not lock before DRUN re-entry */
	//while(PLLDIG.PLL0SR.B.LOCK == 0) { asm("nop");  };
	//while(PLLDIG.PLL1SR.B.LOCK == 0) { asm("nop");  };
	
	MC_CGM.SC_DC1.B.DIV = bridge_divider;		/* Peripheral Clock Divide by 2 */
	
	/* Configure System clock dividers */
	//MC_CGM.SC_DC[0].B.DE = 1;					/* System Clock Divide Enable */
	MC_CGM.SC_DC0.B.DIV = DIVIDEBY1;			/* System Clock Divide by 1 */
	/* Enable and configure Aux clocks */
	
	/* AUX Clock Selector 0 */
	MC_CGM.AC0_SC.B.SELCTL = SELCTL_PLL0;		/* PLL0 PHI */

	MC_CGM.AC0_DC0.B.DE = ENABLED;            	/* Enable Auxilliary Clock 0 divider 0 (PIT) */
	MC_CGM.AC0_DC0.B.DIV = DIVIDEBY1;			/* Divide by 1 */

	MC_CGM.AC0_DC1.B.DE = ENABLED;				/* Enable Auxilliary Clock 0 divider 1 (SARADC clock) */
	MC_CGM.AC0_DC1.B.DIV = DIVIDEBY6;			/* Divide by 6 */

	MC_CGM.AC0_DC2.B.DE = ENABLED;				/* Enable Auxilliary Clock 0 divider 2 (CTU clock) */
	MC_CGM.AC0_DC2.B.DIV = DIVIDEBY1; 			/* Divide by 4 */

	MC_CGM.AC0_DC3.B.DE = ENABLED;				/* Enable Auxilliary Clock 0 divider 3 (DSPI_CLK0) */
	MC_CGM.AC0_DC3.B.DIV = DIVIDEBY4;			/* Divide by 4 */

	MC_CGM.AC0_DC4.B.DE = ENABLED;				/* Enable Auxilliary Clock 0 divider 4 (LIN_CLK) */
	MC_CGM.AC0_DC4.B.DIV = lin_divider;			/* Divide by 4 */	
	
	MC_CGM.AC0_DC5.B.DE = ENABLED;				/* Enable Auxilliary Clock 0 divider 4 (ETIMER) */
	MC_CGM.AC0_DC5.B.DIV = DIVIDEBY1;			/* Divide by 1 */	

	/* Trigger DRUN mode Transision */
	MC_ME.MCTL.R = (DRUN_MODE << 28 | 0x00005AF0);		/* Mode & Key */
	MC_ME.MCTL.R = (DRUN_MODE << 28 | 0x0000A50F);      /* Mode & Key inverted */
	while(MC_ME.GS.B.S_MTRANS == 1);            		/* Wait for mode entry to complete */
	while(MC_ME.GS.B.S_CURRENT_MODE != DRUN_MODE);    	/* Check DRUN mode has been entered */
}

void disableWatchdog()
{
  meml(SWT_SR)=0xc520;
  meml(SWT_SR)=0xd928;
  meml(SWT_CR)=0xFF00010A; 
}

void targetInit(void)
{
  bridge_divider = DIVIDEBY2;
	pll0_clk = _SYSCLK_;
  lin_divider = DIVIDEBY1;
  MC_MODE_Init();
  
  initINTC();
  initPIT();
  initGPIO(); 
  targetEnableInterrupts();
}

void initGPIO()
{
  SIUL2.MSCR[0].B.IBE = 0x0; //disable input buffer
  SIUL2.MSCR[0].B.ODC = 0x1; //enable open drain output buffer
  SIUL2.GPDO[0].B.PDO = 0x0; //PA0 off
}

void initPIT()
{
  PIT_0.MCR.B.MDIS = 0; //enable PIT
  PIT_0.TIMER[0].LDVAL.R = 64000; //set the counter to reach 1ms
  INTC.PSR226_227.B.PRC_SELa =0xE; //CPU 0,1 and 2
  INTC.PSR226_227.B.PRIa = 0x1; //priority 1
}

void targetEnableWakeupInterrupts()
{
  INTC.CPR[0].B.PRI = 0;  //lower current INTC priority 
  PIT_0.RTI_TCTRL.B.TIE = 1; //enable interrupts
  PIT_0.RTI_TFLG.B.TIF = 1;  // clear interrupt flag
  PIT_0.RTI_TCTRL.B.TEN = 1; //enable RTI timer
  asm(" wrteei 1"); //enable external interrupts 
}

void initINTC()
{
  e200zX_Interrupt_Setup();
}

void targetDisableWakeupInterrupts()
{
  PIT_0.RTI_TCTRL.B.TEN = 0; // stop RTI timer
  PIT_0.RTI_TCTRL.B.TIE = 0; // disable interrupts
  PIT_0.RTI_TFLG.B.TIF = 1; // clear interrupt flag
}

void enableSecondCore()
{
}

void GPIOPinToggle(void)
{
  GpioOffOn = !GpioOffOn; 
  if (GpioOffOn)
  { 
    SIUL2.GPDO[0].B.PDO = 0x1;  // set PA[0], BGA292 A17, LQFP176 137, motherboard PA0
  }
  else
  {
    SIUL2.GPDO[0].B.PDO = 0x0;  // clear PA[0]  
  }
}


void targetEnableInterrupts()
{
  INTC.CPR[0].B.PRI = 0;  //lower current INTC priority 
  PIT_0.TIMER[0].TCTRL.B.TIE = 1; //enable PIT0 interrupt
  PIT_0.TIMER[0].TFLG.B.TIF = 1; // clear interrupt flag
  PIT_0.TIMER[0].TCTRL.B.TEN = 1; //start PIT
  asm(" wrteei 1"); //enable external interrupts
}
 
void targetDisableInterrupts()
{
  PIT_0.TIMER[0].TCTRL.B.TEN = 0; //stop PIT
  asm(" wrteei 0"); //disable external interrupts
}


void profilerAddTestMessages(void)
{
  asm("e_li r10,2");
  asm("mtspr PID0,r10"); //rt ProfilerITMOTM: id=data1value1, symbol=OTM, value=0x02
  asm("e_li r10,3");
  asm("mtspr PID0,r10"); //rt ProfilerITMOTM: id=data1value2, symbol=OTM, value=0x03
  asm("e_li r10,4");
  asm("mtspr PID0,r10"); //rt ProfilerITMOTM: id=data1value3, symbol=OTM, value=0x04
  
  #define DEVENT 975
  #define DAMM 576  
  asm("e_lis r10, 0x0");    
  asm("mtspr 975,r10"); //Set DQTAG to 0
  asm("e_li r10,3");
  asm("mtspr 576,r10"); //rt ProfilerITMOTM: id=data1value4, symbol=DQM(0), value=0x03
  asm("e_li r10,4");
  asm("mtspr 576,r10"); //rt ProfilerITMOTM: id=data1value5, symbol=DQM(0), value=0x04
  asm("e_lis r6, 0x8765");
  asm("e_li r7, 0x4321");
  asm("se_or r6,r7");
  asm("mtspr 576,r6"); //rt ProfilerITMOTM: id=data1value6, symbol=DQM(0), value=0x87654321
  
  asm("e_lis r10, 0x1200");    
  asm("mtspr 975,r10"); //Set DQTAG to 18
  asm("e_li r10,1");
  asm("mtspr 576,r10"); //rt ProfilerITMOTM: id=data1value7, symbol=DQM(18), value=0x01
  asm("e_li r10,2");
  asm("mtspr 576,r10"); //rt ProfilerITMOTM: id=data1value8, symbol=DQM(18), value=0x02
  asm("e_lis r6, 0x1234");
  asm("e_li r7, 0x5678");
  asm("se_or r6,r7");
  asm("mtspr 576,r6"); //rt ProfilerITMOTM: id=data1value9, symbol=DQM(18), value=0x12345678
}

void InterruptHandler()
{
  int dummy = INTC.IACKR[0].R;
  
  InterruptRoutine();
  
  PIT_0.TIMER[0].TFLG.B.TIF = 1;
}

