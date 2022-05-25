#pragma language=extended
__intrinsic void __enable_interrupt(void);
__intrinsic void __disable_interrupt(void);
__interrupt void TimerInterruptHandler(void);

extern void ProfilerC_Interrupt();

/* Set option bytes */

#pragma location = "OPTBYTE"
__root const char opbyte0 = 0x6FU;     // Watchdog timer turned off
#pragma location = "OPTBYTE"
__root const char opbyte1 = 0xFFU;    // LVD off 
#pragma location = "OPTBYTE"
__root const char opbyte2 = 0xF8U;    // 64MHz freq 
#pragma location = "OPTBYTE"
__root const char opbyte3 = 0x85U;    // Enable 0CD, does not erase data of flash in case of OCD security ID failure 

/* Set security ID */
#pragma location = "SECUID"
__root const char secuid[10] = 
  {0x00U, 0x00U, 0x00U, 0x00U, 0x00U, 0x00U, 0x00U, 0x00U, 0x00U, 0x00U};




