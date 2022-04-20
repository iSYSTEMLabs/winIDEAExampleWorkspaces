#include "SAMD21.h"
#include "SAMD21_sfr.h"


void targetEnableInterrupts()
{
   /*ENABLE TIMER INTERRUPT */
   //TC4_TC_COUNT32.TC_INTENSET.R =  0X01 << 0; // enables the Overflow interrupt
   TC4_TC_COUNT32.TC_INTENSET.R =  0X01 << 4; // enables the MC0 interrupt
   
   /* NVIC  http://infocenter.arm.com/help/index.jsp?topic=/com.arm.doc.dui0497a/CIHIGCIF.html*/
   //System_Control_Space_NVIC.INT_0_31_SET_EN  = 1 << 19 ;  TC4  
   System_Control_Space_NVIC.INT_0_31_SET_EN  = 0X1 << 19 ; 
    
   /* START TIMER  TC4 */
   TC4_TC_COUNT32.TC_CTRLA.B.ENABLE = 1;
   while (GCLK.GCLK_STATUS.B.SYNCBUSY);
  
}


void targetInit()
{
  #ifndef EMPTY_TARGET_INIT

  GPIOPortInit();
  GPIOPortOn();
  SetupClocks();
  SetupTimer();

  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}

void disableWatchdog()
{
  #define WDT_MR          (*((volatile unsigned int *) 0x400E1454)) 
  #define WDT_MR_WDDIS    1 << 15
  WDT_MR &= ~WDT_MR_WDDIS;
}


void GPIOPortInit()
{
     // set pin PA17 as output  
     PORT_DIR_SET =  PORT_A_17 ;
     
     // set  P14  as CLK_IO[0]
     unsigned int config  =  0;
     config  |= 1 << 30 |  /* WRPINCFG  pins will be updated */
                1 << 28 |  /* WRPMUX    PMUx will be updated */
                7 << 24 |  /* Peripheral Function H selected (GCLK_IO[0]) */
                1 << 16 |  /* PMUXEN */
                1 << 14 ;  /* PIN select  */
     
     PORT_WRCONFIG  =   config   ;
     
     
}


void GPIOPortOn()
{
     // set pin PA17 ---> 1  
     PORT_OUT_SET  =  PORT_A_17 ;
}


void SetupClocks(void){
    
    /* (0) */ 
    /**********************************************************************************************/
    // Switch NVM wait states to 1 --> value applicable to 48 MHz
    NVMCTRL.NVMCTRL_CTRLB.B.RWS = 1;  // TEST PASSED
    /**********************************************************************************************/
    
    /* (1) */
    // CONFIGURE 32K EXETERNAL OSCILATOR , IT WILL BE USEDD AS CLOSED LOOP REFERNCE FOR DFLL48M
    // During the start-up time, the oscillator output is masked to ensure that no unstable clock propagates to the digital logic. 
    // The External Multipurpose Crystal Oscillator Ready bit in the Power and Clock Status register (PCLKSR.XOSCRDY) is set 
    // when the user-selected start-up time is over
    
    // Disable XOSC32K phase 
    SYSCTRL.SYSCTRL_XOSC32K.R  &= ~(0x1 << 1 ) ; // PASSED
    // set bit(s) phase
    unsigned short  temp = SYSCTRL.SYSCTRL_XOSC32K.R   ;
    
    temp |=   0x1 << 2  |     /* enable XTALEN */
              0x1 << 3  |     /* enable EN32K  */
              0x1 << 9  ;     /* enabled/ON bits of STARTUP numeric setting */
                                
    // clear bit phase   
    temp &=   ~( 0x1 << 12  |                         /* disable WRTLOCK*/     
                 0x1 << 5   |                         /* disbale automatric amplitude */
                 0x1 << 7   |                         /* disbale on demand */
                 0x1 <<  10 |   0x1 << 8  );          /* clear 2 bits of STRATUP */
                                         
    SYSCTRL.SYSCTRL_XOSC32K.R  = temp ;  
    // Enable device phase 
    SYSCTRL.SYSCTRL_XOSC32K.R  |= 0x1 << 1;
    // Wait device to become ready 
    while(!SYSCTRL.SYSCTRL_PCLKSR.B.XOSC32KRDY);
    /* XOSC32K up and running */
    
    /* (2) */
    /// Use XOSC32K as clock source (CLKCTRL register) for  clock generator 1      
    GCLK.GCLK_GENDIV.R = ( 0x0001 << 8) | 0x1;   /*division factor 1 for genrator 1 */
    while (GCLK.GCLK_STATUS.B.SYNCBUSY ) ;
    /* Set clock 1 as user of 32k quartz  SRC = 5 and ID = 1  */
    unsigned int temp1  = GCLK.GCLK_GENCTRL.R ; 
    
    temp1 &= ~(  1 << 21   |  
                 1 << 20   |
                 1 << 19   |
                 1 << 18   |
                 1 <<  12  |  1 << 11  |   1 << 9 |     /* SRC = 5 clear  bits */
                 1 <<  3   |  1 <<  2   |   1 <<  1 );  /* ID clear bits */
    
    temp1 |=  ( 1 << 17   |              /* idc */ 
                1 << 16   |              /* gen enable  */
                1 <<  0   |              /* id == 1*/
                1 << 10   |  1 << 8 );   /* src set bits */
     
    GCLK.GCLK_GENCTRL.R = temp1 ;
    /* GLC_GENCOTRL is wtrite synchronized , wait for synchronization to complete */
    while(GCLK.GCLK_STATUS.B.SYNCBUSY);
    
    /* (3) */
    /* GeneratorMux is ready to be used as refrence for DFLL48M */ 
    /* DFLL48M Reference ID = 0x00 (GCLK_DFLL48M_REF)  and GEN = 0x1 -- Chapter 14.1 */
     
    GCLK.GCLK_CLKCTRL.B.CLKEN  = 0; 
    while(GCLK.GCLK_CLKCTRL.B.CLKEN); 
    
    temp =  GCLK.GCLK_CLKCTRL.R ;
    temp &= ~(   0x1 << 15 |      /* clear WRTLOCK */
                 0xF <<  8 |      /* GEN = 1       */
                0x3F <<  0 );     /* ID =  0        */
    temp |=    ( 0x1 << 8  );     /* GEN 1*/
    GCLK.GCLK_CLKCTRL.R = temp;
    while(GCLK.GCLK_STATUS.B.SYNCBUSY);
    
    GCLK.GCLK_CLKCTRL.B.CLKEN  = 1;
    //while(!GCLK.GCLK_CLKCTRL.B.CLKEN);  // THIS BIT SEEM NOT TO BE SETABLE TO 1 


    /* (4) -DFLL CONFIGURATION */
    // Write a '0' to the DFLL ONDEMAND bit in the DFLLCTRL register before configuring the DFLL module. SYSCTRL->DFLLCTRL.reg = 0; See Errata 
    temp = SYSCTRL.SYSCTRL_DFLLCTRL.R ;
    temp &=  ~(0x1 << 7) ;
    SYSCTRL.SYSCTRL_DFLLCTRL.R = temp;
    while(!SYSCTRL.SYSCTRL_PCLKSR.B.DFLLRDY);
    
    // temp = SYSCTRL.SYSCTRL_DFLLCTRL.R  ;
    /* enable in defult open loop mode */
    //temp |= 0x1 << 1 ;           
    //SYSCTRL.SYSCTRL_DFLLCTRL.R = temp;
    //while(!SYSCTRL.SYSCTRL_PCLKSR.B.DFLLRDY);
    //SYSCTRL.SYSCTRL_DFLLSYNC.B.READREQ  = 1;
    
    //temp1 = SYSCTRL.SYSCTRL_DFLLMUL.R;
    temp1 = 0;
    temp1 = 31    << 26  |   /* CSTEP */
            511   << 16  |   /* FSTEP */
            1465  << 0   ;   /* MUL*/
    SYSCTRL.SYSCTRL_DFLLMUL.R = temp1 ;
    while(!SYSCTRL.SYSCTRL_PCLKSR.B.DFLLRDY);
    
    /* Write coarse value obtained from NVM */
    /*   2C    [0x806020]*/
    //temp1 =  SYSCTRL.SYSCTRL_DFLLVAL.R  ;
    //temp1 |=    0x1 << 14 | 0x1 << 13 | 0x1 << 12 ;
    //temp1 &=  ~(0x1 << 15 | 0x1 << 11 | 0x1 << 10 ); 
    //SYSCTRL.SYSCTRL_DFLLVAL.R  = temp1 ;   //Set the value of the Coarse Calibration register. In closed-loop mode, this field is read-only.
   
    //while(!SYSCTRL.SYSCTRL_PCLKSR.B.DFLLRDY);
    
    
    SYSCTRL.SYSCTRL_DFLLCTRL.R |=  1 << 11 | 1 << 2;  // SYSCTRL_DFLLCTRL_WAITLOCK | SYSCTRL_DFLLCTRL_MODE   
    while(!SYSCTRL.SYSCTRL_PCLKSR.B.DFLLRDY);
    
    
    SYSCTRL.SYSCTRL_DFLLCTRL.R |=  1 << 1  ;         //  ENABLE  ;
    
    while ( (SYSCTRL.SYSCTRL_PCLKSR.B.DFLLLCKC == 0 ) || (SYSCTRL.SYSCTRL_PCLKSR.B.DFLLLCKF  == 0 )  )  
            {
    /* Wait for locks flags */ }

  
    while (!SYSCTRL.SYSCTRL_PCLKSR.B.DFLLRDY)
 
            {
    /* Wait for synchronization */}


    //  DFLL48M is ready, switch CLKGEN0 source to it to run the core at 48 MHz.
    temp1  = GCLK.GCLK_GENCTRL.R ;  
    temp1 &= ~(  1 << 21   |  
                 1 << 20   |
                 1 << 18   |
                 1 << 12   | 1 << 11  |                          /* SRC = 7  clear  bits */
                 1 <<  3   | 1 <<  2  |   1 <<  1 |  1 << 0  );  /* ID  = 0  clear bits */
    
    temp1 |=  ( 1 << 19   |                            /* OE */
                1 << 17   |                            /* idc */
                1 << 16   |                            /* gen enable  */
                1 << 10   | 1 << 9 |  1 << 8  );       /* SRC = 7  set bits */
     
    GCLK.GCLK_GENCTRL.R = temp1 ;
    
    while(GCLK.GCLK_STATUS.B.SYNCBUSY);
    
    
    /* TODO: PA28  */
    /* ----------- */
    
    /* TODO: Put OSC8M as source for Generic Clock Generator 3 */
    /* ------------------------------------------------------- */
    
    /* No scaling of main clock*/
    PM.PM_CPUSEL.R  = 0;
    PM.PM_APBASEL.R = 0;
    PM.PM_APBBSEL.R = 0;
    PM.PM_APBCSEL.R = 0;
    
    
}


void SetupTimer(void){
  
    // START POWER MANGER
    /* Give power to TC4 and TC 5 */
    PM.PM_APBCMASK.R |= (0x1 << (12)) | (0x1 << (13));
    /* Just in case write protection  means synhronization */
    
    /*TODO If this is corect check for "write protected" */
    while (GCLK.GCLK_STATUS.B.SYNCBUSY);
    // END STRAT MANAGER  
  
 /* 
  
    /* ------------------------      !!!   IMPORTANT   !!!                --------------------------------------- 
       When paired, the TC peripherals are configured using the registers of the even-numbered TC (TC4 or
       TC6 respectively). The odd-numbered partner (TC3 or TC5 respectively) will act as slave, and the Slave
       bit in the Status register (STATUS.SLAVE) will be set. The register values of a slave will not reflect the
       registers of the 32-bit counter. Writing to any of the slave registers will not affect the 32-bit counter.
       Normal access to the slave COUNT and CCx registers is not allowed 
    */
  

    #define GENERATOR 0x00 
    
    GCLK.GCLK_CLKCTRL.R =      0x01   << 14   |       /* Enable*/
                               0x1C   <<  0   |       /* TC4,TC5 */
                          GENERATOR   <<  8   ;       /* It works with default generator , IT FAILS WITH generator 4 */
    while (GCLK.GCLK_STATUS.B.SYNCBUSY);

    TC4_TC_COUNT32.TC_CTRLA.R = 0x1 <<  3  |   // set MODE[1:0] to 0x2 for 32 bit counting (TOP = 468741, log2(468741) = 18.8384)
                                0x1 <<  5  |   // set WAVEGEN[1:0] to 0x1 for matching the frequency operation
                                0x0 <<  8  |   // set PRESCALER[2:0] to 0x7, prescaler == 1024
                                0x1 << 12  ;   // set PRESYNC[1:0] to 0x1 to Reload or reset the counter on next prescaler cloc (PRESC).
    
    
    // This should be write synchronized 
    TC4_TC_COUNT32.TC_CC0.R   = 1000*48 ;     /* setting for 1 Hz --> 46874   */                        
    while (TC4_TC_COUNT32.TC_STATUS.B.SYNCBUSY == 1);


}
