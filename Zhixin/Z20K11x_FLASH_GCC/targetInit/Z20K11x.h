/* DMA */
#define DMA_BASE                  0x40008000
#define DMA_DMAE                  (*(unsigned long volatile*) (DMA_BASE + 0x4))

/* WATCHDOG */
#define WDOG_BASE                 0x40052000
#define WDOG_CS                   (*(unsigned long volatile*) (WDOG_BASE + 0x8))
#define WDOG_TMO                  (*(unsigned long volatile*) (WDOG_BASE + 0xc))
#define WDOG_CNT                  (*(unsigned long volatile*) (WDOG_BASE + 0x14))


/* PARCC */
#define PARCC_BASE                0x40065000
#define PARCC_WDOG                (*(unsigned long volatile*) (PARCC_BASE + 0x0))
#define PARCC_WDOG_KEY            (*(unsigned char volatile*) (PARCC_BASE + 0x3))
#define PARCC_DMA                 (*(unsigned long volatile*) (PARCC_BASE  + 0x58))