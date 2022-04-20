#include "mpc5674.h"
#include "mpc5554.h"
#include "etpuc_set1.h"

uint32_t *fs_free_param;
#define CODE_RAM  (*( uint32_t *)             0xC3FD0000)


volatile unsigned char gpioState = 0; 

void targetEnableInterrupts()
{
  mem32(INTC_CPR) = 0x0; //Lower INTC's current priority          
  mem32(TFLG0) = 0x1; //clear PIT interrupt flag
  asm(" wrteei 1"); //Enable external interrupts
}


void targetInit(void)
{
  initCPU();
  targetEnableInterrupts();
}

void initCPU(void)
{
  //enable initClock only with iSYSTEM's board which has 8 MHz crystal.
  //AXIOM has 40 MHz crystal, cannot replace.
  //initClock();
  initIRQ();
  initTimer();
}

void initClock(void)
{
  /* set system clock to 160 MHz */
  mem32(ESYNCR1) = 0xF0010040; //EMFD = 64, EPREDIV = 1
  mem32(ESYNCR2) = 0x8001; //ERFD = 1
  while((mem32(FMPLL_SYNSR)&&(1<<28))==0); // wait for PLL lock
}


void initTimer(void)
{
  mem32(LDVAL0) = 0x13800; //load PIT counter
  mem32(TFLG0) = 0x1; //clear PIT interrupt flag
  mem32(TCTRL0) = 0x3; //start timer    and timer interrupts
  mem8(INTC_PSR301) = 0x1; //set PIT interrupt priority  
}

void initIRQ(void)
{
  mem32(INTC_MCR) = 0x1; //Hardware Vector enabled 
  asm("lis 3, __IVPR_VALUE@h");
  asm("ori 3, 3, __IVPR_VALUE@l");
  asm("mtivpr 3"); //Set IVPR from reg3
}


void InterruptHandler()
{
  InterruptRoutine();
  mem32(TFLG0) = 0x1; //clear PIT interrupt flag
}


void enableSecondCore()
{ 
  fs_etpu_init( my_etpu_config, (uint32_t *)etpu_code, sizeof(etpu_code), \
              (uint32_t *)etpu_globals, sizeof(etpu_globals));
  mem32(ETPU_C0CR_A) = 0x23004003; //configuration register
  mem32(ETPU_C0SCR_A) = 0x01;    //status and controll register
  mem32(ETPU_C0HSRR_A) = 0x01; //run second core (service request reg.)
}


void disableWatchdog()
{
}
