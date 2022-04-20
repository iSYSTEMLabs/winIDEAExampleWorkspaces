#ifndef __TriCore_h__
#define __TriCore_h__
void enableSecondCore(void);
#define STM_INT0 0x00000005 // Service Request Number for STM

unsigned volatile char releaseCore;

enum ESRCcontrolBits
{
  SRC_SETR    = 0x00008000, // Set Service Request
  SRC_SRE     = 0x00001000, // Service Request Enable
  SRC_TOS_PCP = 0x00000400, // Type of Service: PCP
  
  PCP_SPRN    = 1,
};
#define mem(addr) (*(unsigned char volatile *)(addr))
#define memw(addr) (*(unsigned short volatile *)(addr))
#define meml(addr) (*(unsigned long volatile *)(addr))
#define PC1 0xF883FE08
#define PC2 0xF885FE08
#define DBGSR1 0xF883FD00
#define DBGSR2 0xF885FD00
#define DBGSR_MASK_HALT 0xFFFFFFF9
#define DBGSR_SET_RUN   0x00000004
#define DBGSR_SUSPEND   0x00000010

#define P00_IOCR0  	(*(unsigned long volatile *)(0xF003A010))
#define P00_OUT 	  (*(unsigned char volatile *)(0xF003A000))
#define SRC_STM2SR0	(*(unsigned long volatile *)(0xF00384A0))

#endif



