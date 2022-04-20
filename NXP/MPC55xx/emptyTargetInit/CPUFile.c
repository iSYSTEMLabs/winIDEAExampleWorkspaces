#include "mpc5554.h"
#include "lib.h"
#include "etpuc_set1.h"

uint32_t *fs_free_param;
#define CODE_RAM  (*( uint32_t *)             0xC3FD0000)


volatile unsigned char gpioState = 0; 


void targetEnableInterrupts()
{
  enableInterrupts();
}


void targetInit(void)
{
  #ifndef EMPTY_TARGET_INIT

  initCPU();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}

void initCPU(void)
{
  initClock();
  initTimer();
  initIRQ();
}

void initClock(void)
{
  /* set system clock to 132 MHz */
  const unsigned char PREDIV = 0x1;
  const unsigned char MFD = 0x1D;
  const unsigned char RFD = 0x00;
  //unsigned char PREDIV = 0x02; 
  //unsigned char MFD = 0x02;
  //unsigned char RFD = 0x00;
  
  unsigned int value = 0x00000000;
  value |= PREDIV << 28;
  value |= MFD << 23;
  value |= RFD << 19;
  mem32(FMPLL_SYNCR_R) = value;
}


void initTimer(void)
{
  /* set decrementer; Fsys=128MHz, decValue=32K -> timer=decValue/Fsys=250 us */
  const unsigned int decValue = 127650; //for 1ms interrupt
  //const unsigned int decValue = 7000; //period is 54.7 micro seconds for auxAndDataProfilerWithInternalAndExternalClock()
  setDecDecar(decValue);
 
  /* time base enable and decrementer irq enable */
  const unsigned int timeBase = 0x00004000; //time base enable bit inside HID0 register
  const unsigned int decInterrupt = 0x04400000;
  //const unsigned int decInterrupt = 0x01814000;
  enableTimeBase(timeBase, decInterrupt);
}

void initIRQ(void)
{
  setInterruptVectorPrefix(); 
}


void writeGPIOHigh(void) 
{
  mem8(GPDO_203_ADDR) = 0x01;
  
  return;
}

void writeGPIOLow(void) 
{
  mem8(GPDO_203_ADDR) = 0x00;
  
  return;
}

short int readGPIO(void) 
{
  return mem8(GPDI_204_ADDR);
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
