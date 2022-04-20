#define DCFG_CCSR_SCRATCHRW1_ADDRESS  0x01EE0200
#define DCFG_CCSR_BRR_ADDRESS         0x01EE00E4
#define core1startAddress             0x10018000
#define CSU_CSL_BASE 0x01510000
#define CSU_CSL_TOP 0x015100E8
#define DCFG_CCSR_CRSTSR1 (*(unsigned volatile int*)0x01EE0404)
#define DCFG_CCSR_CRSTSR1_READY 26


#define SYS_COUNTER_CNTCR       (*(volatile unsigned int*)0x02B00000)
#define SYS_COUNTER_CNCTV1      (*(volatile unsigned int*)0x02B00008)
#define SYS_COUNTER_CNCTV2      (*(volatile unsigned int*)0x02B0000C)

#define FTM1_POL (*(volatile unsigned int*)0x029D0070)
#define FTM1_POL_POL0 31
#define FTM1_SYNC (*(volatile unsigned int*)0x029D0058)
#define FTM1_SYNC_SYNCHOM 3
#define FTM1_MOD (*(volatile unsigned int*)0x029D0008)
#define FTM1_MOD_MOD 16
#define FTM1_CNTIN (*(volatile unsigned int*)0x029D004C)
#define FTM1_CNTIN_INIT 16
#define FTM1_C0V (*(volatile unsigned int*)0x029D0010)
#define FTM1_C0V_VAL 16
#define FTM1_CNT (*(volatile unsigned int*)0x029D0004)
#define FTM1_CNT_COUNT 16
#define FTM1_SC (*(volatile unsigned int*)0x029D0000)
#define FTM1_SC_CLKS 27
#define FTM1_SC_PS 29
#define FTM1_SC_ADDRESS 0x029D0000
#define FTM1_CNTIN_ADDRESS 0x029D004C


#define GIC_BASE       0x01400000
#define GIC_DIST       0x1000
#define GIC_CPU        0x2000
#define GICD_CTLR       (*(volatile unsigned int*)(GIC_BASE+GIC_DIST+0))
#define GICD_TYPER      (*(volatile unsigned int*)(GIC_BASE+GIC_DIST+0x4))
#define GICD_IGROUPR    (*(volatile unsigned int*)(GIC_BASE+GIC_DIST+0x80))
#define GICD_ISENABLER  (*(volatile unsigned int*)(GIC_BASE+GIC_DIST+0x100))
#define GICD_ISPENDR    (*(volatile unsigned int*)(GIC_BASE+GIC_DIST+0x200))
#define GICD_ICPENDR    (*(volatile unsigned int*)(GIC_BASE+GIC_DIST+0x280))
#define GICD_ISACTIVER  (*(volatile unsigned int*)(GIC_BASE+GIC_DIST+0x300))
#define GICD_IPRIORITYR (*(volatile unsigned int*)(GIC_BASE+GIC_DIST+0x400+(4*7))) //7 = IDm % 4; m = 28, 29, 30, 31
#define GICD_ITARGETSR  (*(volatile unsigned int*)(GIC_BASE+GIC_DIST+0x820+(4*7)))

#define GICC_CTLR       (*(volatile unsigned int*)(GIC_BASE+GIC_CPU+0))
#define GICC_PMR        (*(volatile unsigned int*)(GIC_BASE+GIC_CPU+0x4))

#define GPIO0_GPDIR     (*(volatile unsigned int*)0x02300000)
#define GPIO0_GPDAT     (*(volatile unsigned int*)0x02300008)
#define GPIO0_GPIER     (*(volatile unsigned int*)0x0230000C)
#define GPIO0_GPIMR     (*(volatile unsigned int*)0x02300010)

void InterruptRoutine();
void initTimer();
void targetEnableInterrupts();
void initIRQ();
