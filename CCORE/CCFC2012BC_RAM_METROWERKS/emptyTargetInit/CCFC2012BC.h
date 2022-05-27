#ifndef _CCFC2012BC_H_
#define _CCFC2012BC_H_

void targetInit(void);
void targetShutdown(void);
void targetEnableInterrupts(void);
void disableWatchdog(void);


#define SWT_CR (*(unsigned volatile int*)0xFFF38000)
#define SWT_SR (*(unsigned volatile int*)0xFFF38010)


#endif  /* ifdef _CCFC2012BC_H */
/* End of file */ 