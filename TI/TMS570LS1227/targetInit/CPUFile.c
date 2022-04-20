#include "registerAddresses.h"
#include "rti.h"
#include "sys_vim.h"
#include "system.h"
#include "pinmux.h"
#include "TMS570LS1227.h"
#include "gio.h"


void CPU_Init(void);

int portA5Val;

void initVariables(void)
{ 
  portA5Val           = 0;
}

#define INT0      1U // INT0 is set by Compare 0 match


void TimerInterruptHandler(void)
{


  InterruptRoutine();  
  
}


void targetEnableInterrupts(void)
{               
  vimEnableInterrupt(2, SYS_IRQ);
  rtiREG1->INTFLAG    = INT0;
  rtiREG1->SETINTENA  = INT0;
  _Enable_Irq();
}


void targetInit(void)
{   
  #ifndef EMPTY_TARGET_INIT

  initVariables();
  CPU_Init(); 
  vimInit();   // Vectot Interrupt Init
  rtiInit();
  gioInit();
	gioSetDirection(gioPORTA, 0xFFFFFFFF);  
  rtiStartCounter(rtiCOUNTER_BLOCK0);
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}

void CPU_Init(void)
{
//   /* setup pll at about 176 Mhz, this works */
//   _PLLCTL1 = 0x20058600;
//   _PLLCTL2 = 0x3FC0623D;   
  
  initVariables();
  
  setupPLL();   /* 160 MHz */
  
  periphInit();
  
	muxInit();
  
	trimLPO();
  
  //setup flash wrapper
  _FRDCNTL    = 0x00000411;
  _FBFALLBACK = 0x000000FF;
//   EEPROM_CONFIG |= (3 << 16);
  
// setupFlash();
  
  mapClocks();
}

void setupPLL(void)
{

	/* Disable PLL1 and PLL2 */
	systemREG1->CSDISSET = 0x00000002U | 0x00000040U; 
	while((systemREG1->CSDIS & 0x42U) != 0x42U)
	{
	/* Wait */
    	systemREG1->CSDISSET = 0x00000002U | 0x00000040U; 
      asm("nop");
      
	}	
	/* Clear Global Status Register */
	systemREG1->GBLSTAT = 0x301U;
  
  systemREG1->PLLCTL1 = 0x20058600;
  systemREG1->PLLCTL2 = 0x3FC0623D;  
  systemREG2->PLLCTL3 = (uint32)((uint32)(2U - 1U) << 29U)
                        | (uint32)((uint32)0x1FU << 24U) 
                        | (uint32)((uint32)(6U - 1U)<< 16U) 
                        | (uint32)((uint32)(120U - 1U) << 8U);

	/** - Enable PLL(s) to start up or Lock */
    systemREG1->CSDIS = 0x00000088;
}

void mapClocks(void)
{
	uint32 SYS_CSVSTAT, SYS_CSDIS;

  systemREG1->CDDIS = (uint32)((uint32)0U << 4U ) /* AVCLK 1 OFF */
                      | (uint32)((uint32)0U << 5U ) /* AVCLK 2 OFF */
	                    | (uint32)((uint32)0U << 8U ) /* VCLK3 OFF */
					            | (uint32)((uint32)0U << 9U ) /* VCLK4 OFF */
	                    | (uint32)((uint32)1U << 10U) /* AVCLK 3 OFF */
                      | (uint32)((uint32)0U << 11U); /* AVCLK 4 OFF */


    /* Work Around for Errata SYS#46:
     * Errata Description:            
     *    Clock Source Switching Not Qualified with Clock Source Enable And Clock Source Valid
     * Workaround:
     *    Always check the CSDIS register to make sure the clock source is turned on and check 
     * the CSVSTAT register to make sure the clock source is valid. Then write to GHVSRC to switch the clock.
     */
	/** - Wait for until clocks are locked */
	SYS_CSVSTAT = systemREG1->CSVSTAT;
	SYS_CSDIS   = systemREG1->CSDIS;
  while ((SYS_CSVSTAT & ((SYS_CSDIS ^ 0xFFU) & 0xFFU)) != ((SYS_CSDIS ^ 0xFFU) & 0xFFU))
  { 
		SYS_CSVSTAT         = systemREG1->CSVSTAT;
		SYS_CSDIS           = systemREG1->CSDIS;
	} /* Wait */
  systemREG1->PLLCTL1   = 0x20058600;
  systemREG2->PLLCTL3   = (systemREG2->PLLCTL3 & 0xE0FFFFFFU) | (uint32)((uint32)(1U - 1U) << 24U);

  /* Enable/Disable Frequency modulation */
	systemREG1->PLLCTL2 |= 0x3FC0023DU;    

  systemREG1->GHVSRC = (uint32)((uint32)SYS_OSC << 24U) 
                       | (uint32)((uint32)SYS_OSC << 16U) 
                       | (uint32)((uint32)SYS_PLL1 << 0U);
                       
  /** - Setup synchronous peripheral clock dividers for VCLK1, VCLK2, VCLK3 */
  systemREG1->CLKCNTL  = (systemREG1->CLKCNTL & 0xF0FFFFFFU) 
						              | (uint32)((uint32)1U << 24U);
  systemREG1->CLKCNTL  = (systemREG1->CLKCNTL & 0xFFF0FFFFU) 
						              | (uint32)((uint32)1U << 16U); 
    
  systemREG1->CLKCNTL  = (systemREG1->CLKCNTL & 0xFFF0FFFFU) 
						              | (uint32)((uint32)1U << 8U); 

	systemREG2->CLK2CNTL = (systemREG2->CLK2CNTL & 0xFFFFF0F0U)
	                      | (uint32)((uint32)1U << 8U)
						            | (uint32)((uint32)1U << 0U);
  systemREG1->RCLKSRC  = (uint32)((uint32)1U << 24U)
                        | (uint32)((uint32)SYS_VCLK << 16U) 
                        | (uint32)((uint32)1U << 8U)  
                        | (uint32)((uint32)SYS_VCLK << 0U);

  /** - Setup asynchronous peripheral clock sources for AVCLK1 and AVCLK2 */
  systemREG1->VCLKASRC = (uint32)((uint32)SYS_VCLK << 8U)
                         | (uint32)((uint32)SYS_VCLK << 0U);

  systemREG2->VCLKACON1 =  (uint32)((uint32)(1U - 1U) << 24U) 
                           | (uint32)((uint32)0U << 20U) 
                           | (uint32)((uint32)SYS_VCLK << 16U)
                           | (uint32)((uint32)(1U - 1U) << 8U)
                           | (uint32)((uint32)0U << 4U) 
                           | (uint32)((uint32)SYS_VCLK << 0U);
}

void setupFlash(void)
{
    flashWREG->FRDCNTL =  0x00000000U 
                       | (uint32)((uint32)3U << 8U) 
                       | (uint32)((uint32)1U << 4U) 
                       |  1U;

    /** - Setup flash access wait states for bank 7 */
    FSM_WR_ENA_HL    = 0x5U;
    EEPROM_CONFIG_HL = 0x00040000;

    /** - Disable write access to flash state machine registers */
    FSM_WR_ENA_HL    = 0xAU;

    /** - Setup flash bank power modes */
    flashWREG->FBFALLBACK = 0x00000000U
                          | (uint32)((uint32)SYS_ACTIVE << 14U) /* BANK 7 */
                          | (uint32)((uint32)SYS_ACTIVE << 2U)  /* BANK 1 */
                          | (uint32)((uint32)SYS_ACTIVE << 0U); /* BANK 0 */

}

void periphInit(void)
{
    systemREG1->CLKCNTL &= 0xFFFFFEFFU;

	  /** - Release peripherals from reset and enable clocks to all peripherals */
    /** - Power-up all peripherals */
    pcrREG->PSPWRDWNCLR0 = 0xFFFFFFFFU;
    pcrREG->PSPWRDWNCLR1 = 0xFFFFFFFFU;
    pcrREG->PSPWRDWNCLR2 = 0xFFFFFFFFU;
    pcrREG->PSPWRDWNCLR3 = 0xFFFFFFFFU;

    /** - Enable Peripherals */
    systemREG1->CLKCNTL |= 0x00000100U;
}

void trimLPO(void)
{
  if(LPO_TRIM_VALUE != 0xFFFFU)
  {
    systemREG1->LPOMONCTL  = (uint32)((uint32)1U << 24U)
                             | LPO_TRIM_VALUE;
  }
  else
  {
   	systemREG1->LPOMONCTL 	=  (uint32)((uint32)1U << 24U)
                               | (uint32)((uint32)16U << 8U)
                               | 16U;
  }
}

#define PINMUX_SET(REG, PINNUM, MUX)                                \
                (pinMuxReg->PINMMR##REG = (pinMuxReg->PINMMR##REG & PINMUX_PIN_##PINNUM##_MASK) | (PINMUX_PIN_##PINNUM##_##MUX))
#define PINMUX_GATE_EMIF_CLK_ENABLE(state)      \
            (pinMuxReg->PINMMR29 = (pinMuxReg->PINMMR29 & PINMUX_GATE_EMIF_CLK_MASK) | (PINMUX_GATE_EMIF_CLK_##state))
#define PINMUX_GIOB_DISABLE_HET2_ENABLE(state)  \
            (pinMuxReg->PINMMR29 = (pinMuxReg->PINMMR29 & PINMUX_GIOB_DISABLE_HET2_MASK) | (PINMUX_GIOB_DISABLE_HET2_##state))
#define PINMUX_ALT_ADC_TRIGGER_SELECT(num)  \
            (pinMuxReg->PINMMR30 = (pinMuxReg->PINMMR30 & PINMUX_ALT_ADC_TRIGGER_MASK) | (PINMUX_ALT_ADC_TRIGGER_##num))
#define PINMUX_ETHERNET_SELECT(interface)   \
            (pinMuxReg->PINMMR29 = (pinMuxReg->PINMMR29 & PINMUX_ETHERNET_MASK) | (PINMUX_ETHERNET_##interface))
                                                                                   
void muxInit(void){
    /* Enable Pin Muxing */
    kickerReg->KICKER0 = 0x83E70B13U;
    kickerReg->KICKER1 = 0x95A4F1E0U;

    pinMuxReg->PINMMR0 =    PINMUX_PIN_1_GIOB_3 | PINMUX_PIN_2_GIOA_0 | PINMUX_PIN_3_MIBSPI3NCS_3 | PINMUX_PIN_4_MIBSPI3NCS_2;
    
    pinMuxReg->PINMMR1 =    PINMUX_PIN_5_GIOA_1 | PINMUX_PIN_6_HET1_11;
    
    pinMuxReg->PINMMR2 =    PINMUX_PIN_9_GIOA_2 | PINMUX_PIN_14_GIOA_5;
    
    pinMuxReg->PINMMR3 =    PINMUX_PIN_15_HET1_22 | PINMUX_PIN_16_GIOA_6;
    
    pinMuxReg->PINMMR4 =    PINMUX_PIN_22_GIOA_7 | PINMUX_PIN_23_HET1_01 | PINMUX_PIN_24_HET1_03;
    
    pinMuxReg->PINMMR5 =    PINMUX_PIN_25_HET1_0 | PINMUX_PIN_30_HET1_02 | PINMUX_PIN_31_HET1_05;
    
    pinMuxReg->PINMMR6 =    PINMUX_PIN_33_HET1_07 | PINMUX_PIN_35_HET1_09;
    
    pinMuxReg->PINMMR7 =    PINMUX_PIN_37_MIBSPI3NCS_1 | PINMUX_PIN_38_HET1_06;
    
    pinMuxReg->PINMMR8 =    PINMUX_PIN_39_HET1_13 | PINMUX_PIN_40_MIBSPI1NCS_2 | PINMUX_PIN_41_HET1_15;
    
    pinMuxReg->PINMMR9 = ((~(pinMuxReg->PINMMR9 >> 18U) & 0x00000001U ) << 18U) | PINMUX_PIN_54_MIBSPI3NENA | PINMUX_PIN_55_MIBSPI3NCS_0;
    
    pinMuxReg->PINMMR10 =   PINMUX_PIN_86_AD1EVT;
    
    pinMuxReg->PINMMR11 =   PINMUX_PIN_91_HET1_24;
    
    pinMuxReg->PINMMR12 =   PINMUX_PIN_92_HET1_26 | PINMUX_PIN_96_MIBSPI1NENA | PINMUX_PIN_97_MIBSPI5NENA;
    
    pinMuxReg->PINMMR13 =   PINMUX_PIN_98_MIBSPI5SOMI_0 | PINMUX_PIN_99_MIBSPI5SIMO_0 | PINMUX_PIN_100_MIBSPI5CLK | PINMUX_PIN_105_MIBSPI1NCS_0;
    
    pinMuxReg->PINMMR14 =   PINMUX_PIN_106_HET1_08 | PINMUX_PIN_107_HET1_28;
    
    pinMuxReg->PINMMR15 =   0x01010101U;
    
    pinMuxReg->PINMMR16 =   0x01010101U;
    
    pinMuxReg->PINMMR17 =   PINMUX_PIN_118_HET1_10 | PINMUX_PIN_124_HET1_12;
    
    pinMuxReg->PINMMR18 =   PINMUX_PIN_125_HET1_14 | PINMUX_PIN_126_GIOB_0;
    
    pinMuxReg->PINMMR19 =   PINMUX_PIN_127_HET1_30;
    
    pinMuxReg->PINMMR20 =   PINMUX_PIN_130_MIBSPI1NCS_1;
    
    pinMuxReg->PINMMR21 =   PINMUX_PIN_133_GIOB_1;
    
    pinMuxReg->PINMMR22 =   0x01010101U;
    
    pinMuxReg->PINMMR23 = ((~(pinMuxReg->PINMMR5 >> 1U) & 0x00000001U ) << 8U) | ((~(pinMuxReg->PINMMR5 >> 9U) & 0x00000001U ) << 16U) | ((~(pinMuxReg->PINMMR5 >> 17U) & 0x00000001U ) << 24U);
    
    pinMuxReg->PINMMR24 = ((~(pinMuxReg->PINMMR4 >> 17U) & 0x00000001U ) << 0U) | ((~(pinMuxReg->PINMMR4 >> 25U) & 0x00000001U ) << 8U) | ((~(pinMuxReg->PINMMR20 >> 17U) & 0x00000001U ) << 16U) | ((~(pinMuxReg->PINMMR8 >> 9U) & 0x00000001U ) << 24U);
    
    /*SAFETYMCUSW 134 S MR:12.2 <APPROVED> "LDRA Tool issue" */
    pinMuxReg->PINMMR25 = ((~(pinMuxReg->PINMMR12 >> 17U) & 0x00000001U ) << 8U) | ((~(pinMuxReg->PINMMR7 >> 9U) & 0x00000001U ) << 16U) | ((~(pinMuxReg->PINMMR0 >> 26U) & 0x00000001U ) << 24U);
    
    /*SAFETYMCUSW 134 S MR:12.2 <APPROVED> "LDRA Tool issue" */
    pinMuxReg->PINMMR26 = ((~(pinMuxReg->PINMMR0 >> 18U) & 0x00000001U ) << 0U) | ((~(pinMuxReg->PINMMR9 >> 10U) & 0x00000001U ) << 8U);
    
    pinMuxReg->PINMMR27 = PINMUX_PIN_32_MIBSPI5NCS_0;
    
    pinMuxReg->PINMMR28 = 0x01010101U;
    
    pinMuxReg->PINMMR29 = 0x01010101U;
    
    PINMUX_GATE_EMIF_CLK_ENABLE(OFF);
    PINMUX_GIOB_DISABLE_HET2_ENABLE(OFF);
    PINMUX_ALT_ADC_TRIGGER_SELECT(1);
    
    /* Disable Pin Muxing */
    kickerReg->KICKER0 = 0x00000000U;
    kickerReg->KICKER1 = 0x00000000U;
}


void disableWatchdog()
{
}
