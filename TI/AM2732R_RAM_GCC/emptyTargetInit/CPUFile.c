#include "AM2732R.h"


extern unsigned long svc;
extern unsigned long user;
extern unsigned long irq;
extern unsigned long fiq;

extern void __init_;

extern unsigned char isInterruptsEnabled;

#define vimRAM ((vimRAM_t *)0x02082000)
typedef void (*t_isrFuncPTR)(void);
typedef volatile struct vimRam
{
    t_isrFuncPTR ISR[VIM_CHANNELS];
} vimRAM_t;

void initVIM();


void initClocks(void)
{  
  // External osc 40MHz
  
  // Select clock mux to default (WUCPUCLK)
  MSS_TOPRCM.MSS_CR5_CLK_SRC_SEL.R = (0x000 << 0);

  // fDPLL = (CLKINP * M * 2)/(N + 1)
  // fOUT = fDPLL / M2 / 2
  
  MSS_TOPRCM.PLL_CORE_MN2DIV.R |= (480 << PLL_CORE_MN2DIV_M);
  MSS_TOPRCM.PLL_CORE_MN2DIV.R |= (0 << PLL_CORE_MN2DIV_N2);
  
  MSS_TOPRCM.PLL_CORE_MN2DIV.R |= (1 << PLL_CORE_M2NDIV_M2);
  MSS_TOPRCM.PLL_CORE_M2NDIV.R |= (23 << PLL_CORE_M2NDIV_N);
  
  // CLKDCOLDOEN set to 1
  MSS_TOPRCM.PLL_CORE_CLKCTRL.R |= (1 << 29);
  
  // Set IDLE bit to zero
  MSS_TOPRCM.PLL_CORE_CLKCTRL.R &= ~(1 << PLL_CORE_CLKCTRL_IDLE);
  
  // CLKDCOLDPWDNZ to 1
  MSS_TOPRCM.PLL_CORE_CLKCTRL.R |= (1 << 17);
  
  // SELFREQDCO set to 4
  MSS_TOPRCM.PLL_CORE_CLKCTRL.R |= (4 << 10);

  // Trim PLL if needed with NWELLTRIMM register
  
  // Soft reset PLL
  MSS_TOPRCM.PLL_CORE_CLKCTRL.R &= ~(1 << PLL_CORE_CLKCTRL_TINTZ);
  
  // Latch M, N, SD and SELFREQDCO (active rise edge)
  MSS_TOPRCM.PLL_CORE_TENABLE.R |= (1 << PLL_CORE_TENABLE_TENABLE);
  
  // Release soft reset PLL
  MSS_TOPRCM.PLL_CORE_CLKCTRL.R |= (1 << PLL_CORE_CLKCTRL_TINTZ);
  
  // Release latch 
  MSS_TOPRCM.PLL_CORE_TENABLE.R &= ~(1 << PLL_CORE_TENABLE_TENABLE);
  
  // Latch M2 and N2 (active rise edge)
  MSS_TOPRCM.PLL_CORE_TENABLEDIV.R |= (1 << PLL_CORE_TENABLEDIV_TENABLEDIV);
  MSS_TOPRCM.PLL_CORE_TENABLEDIV.R &= ~(1 << PLL_CORE_TENABLEDIV_TENABLEDIV);
 
  // Wait until PLL is locked
  while(!(MSS_TOPRCM.PLL_CORE_STATUS.R  & (1 << PLL_CORE_STATUS_PHASELOCK)));
  
  // Configure individual HSDIVIDERS
  MSS_TOPRCM.PLL_CORE_HSDIVIDER_CLKOUT0.R &= ~(0x1F << 0);
  MSS_TOPRCM.PLL_CORE_HSDIVIDER_CLKOUT0.R |= (3 << 0);
  
  MSS_TOPRCM.PLL_CORE_HSDIVIDER_CLKOUT1.R &= ~(0x1F << 0);
  MSS_TOPRCM.PLL_CORE_HSDIVIDER_CLKOUT1.R |= (3 << 0);
  
  MSS_TOPRCM.PLL_CORE_HSDIVIDER_CLKOUT2.R &= ~(0x1F << 0);
  MSS_TOPRCM.PLL_CORE_HSDIVIDER_CLKOUT2.R |= (1 << 0);
  
  MSS_TOPRCM.PLL_CORE_HSDIVIDER_CLKOUT3.R &= ~(0x1F << 0);
  MSS_TOPRCM.PLL_CORE_HSDIVIDER_CLKOUT3.R |= (9 << 0);
  
  // Release HSDIVIDERS gate
  MSS_TOPRCM.PLL_CORE_HSDIVIDER_CLKOUT0.R |= (1 << 8);
  MSS_TOPRCM.PLL_CORE_HSDIVIDER_CLKOUT1.R |= (1 << 8);
  MSS_TOPRCM.PLL_CORE_HSDIVIDER_CLKOUT2.R |= (1 << 8);
  MSS_TOPRCM.PLL_CORE_HSDIVIDER_CLKOUT3.R |= (1 << 8);

  // Sets Cortex R5 divider to 1
  MSS_TOPRCM.MSS_CR5_DIV_VAL.R = (0x000 << 0);
  
  // Divide SYS_CLK by 2
  MSS_TOPRCM.SYS_CLK_DIV_VAL.R = (0x111 << 0);
  
  // Select clock mux to DLL_CORE_HSDIV0_CLKOUT2
  MSS_TOPRCM.MSS_CR5_CLK_SRC_SEL.R = (0x222 << 0);
}

void initTimer(void)
{
  // Sets RTIA clock to SYS_CLK (200MHz)
  //MSS_RCM.MSS_RTIA_CLK_SRC_SEL.R = 2;
  
  // WUCPUCLK = 40MHz
  MSS_RCM.MSS_RTIA_CLK_SRC_SEL.R = 0;
  
  // Make sure the timer is stopped
  MSS_RTIA.RTIGCTRL.R &= ~(0x1);
 
  // Disable timer interrupts
  MSS_RTIA.RTICLEARINT.R |= 0x1;
  
  // Clear the interrupt flag
  MSS_RTIA.RTIINTFLAG.R |= 1;

  // Prescaler timer compare value
  MSS_RTIA.RTICPUC0.R = 400;
  
  // Set free running counter to 0
  MSS_RTIA.RTIFRC0.R = 0;
  
  MSS_RTIA.RTIUC0.R = 0;
  // Free-running timer compare value
  MSS_RTIA.RTICOMP0.R = 1000;
  
  // Free-running counter increment value
  MSS_RTIA.RTIUDCP0.R = 1;

  // Enable free-running counter 0 compare match interrupts 
  MSS_RTIA.RTISETINT.R |= 0x1;
  
  // Enable timer interrupt in VIC
  MSS_VIM_R5A.INTR_EN_SET.R = (1 << 3);
}

void resetTimer(void)
{
  // Set free running counter to 0
  MSS_RTIA.RTIFRC0.R = 0;
  
  // Reset free-running timer compare value
  MSS_RTIA.RTICOMP0CLR.R = 0x0;
  
  /*Clear the pending interupt register*/
  MSS_RTIA.RTIINTFLAG.R |= 1;
}


void targetEnableInterrupts(void)
{ 
  // Start the timer
  MSS_RTIA.RTIGCTRL.R |= (1 << 0);
  __asm volatile("CPSIE i");
}


void targetInit(void)
{
  #ifndef EMPTY_TARGET_INIT

  initVIM();
  initClocks();
  initTimer(); 
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}


void disableWatchdog(void)
{
}

void TimerInterruptHandler(void) __attribute__ ((interrupt ("IRQ")));
void TimerInterruptHandler(void)
{
  // Make sure the timer is stopped
  MSS_RTIA.RTIGCTRL.R &= ~(0x1);
 
  // Clear pending interrupts
  MSS_RTIA.RTIINTFLAG.R |= 0xFF;
  
  // Set free running counter to 0
  MSS_RTIA.RTIFRC0.R = 0;
  
  // Free-running timer compare value
  MSS_RTIA.RTICOMP0.R = 1000;
  
	InterruptRoutine();
  
  // Clear VIM interrupt flags only if interrupt detected (prevent faulty state of VIM)
  if(MSS_VIM_R5A.ACTIRQ.B.VALID) {
    // Clear interrupt STS mask
    MSS_VIM_R5A.STS.R |= (1 << 3);
    
    // Dummy write IRQVEC to disable pending interrupt.
    MSS_VIM_R5A.IRQVEC.R = 0x00;    
  
    // Start the timer
    MSS_RTIA.RTIGCTRL.R = 1;
  }
}

void phantomInterrupt(void) __attribute__ ((interrupt ("IRQ")));
void phantomInterrupt(void)
{
  while(1)
  {
  }
}

/* VIM register IRQVEC is on location 0x02080018 */
void IRQHandler(void) __attribute__((naked));
void IRQHandler(void) {
  __asm volatile("ldr R10, =0x02080018");
  __asm volatile("ldr pc, [R10]");
}

void FIQHandler(void) __attribute__((naked));
void FIQHandler(void) {
  __asm volatile("ldr R10, =0x0208001C");
  __asm volatile("ldr pc, [R10]");
}

__attribute__ ((section(".isr_vector")))
__attribute__((naked))
void reset()
{
  __asm volatile(" b __init_");
  __asm volatile(" b phantomInterrupt");
  __asm volatile(" b phantomInterrupt");
  __asm volatile(" b phantomInterrupt");
  __asm volatile(" b phantomInterrupt");
  __asm volatile(" b phantomInterrupt");
  __asm volatile(" b IRQHandler");
  __asm volatile(" b FIQHandler");
}


static const t_isrFuncPTR s_vim_init[] =
{
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &TimerInterruptHandler,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
    &phantomInterrupt,
};


void initVIM(void)
{   
  int i;
  
  for (i = 0; i < VIM_CHANNELS; i++)
  {
    vimRAM->ISR[i] = s_vim_init[i];
  }
}
