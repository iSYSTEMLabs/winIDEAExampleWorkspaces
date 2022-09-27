#define memll(addr) (*(unsigned long long volatile *)(addr))

#define DME_RAM_START_ADDR            0x20100000
#define DME_RAM_END_ADDR              0x20110000

#define DSPH_RAM_START_ADDR           0x20400000
#define DSPH_RAM_END_ADDR             0x20410000

#define C0_CPU1_RAM_START_ADDR        0x60400000
#define C0_CPU1_RAM_END_ADDR          0x60800000

#define C1_CPU0_RAM_START_ADDR        0x60800000
#define C1_CPU0_RAM_END_ADDR          0x60C00000

#define C1_CPU1_RAM_START_ADDR        0x60C00000
#define C1_CPU1_RAM_END_ADDR          0x61000000

#define C2_CPU0_RAM_START_ADDR        0x61000000
#define C2_CPU0_RAM_END_ADDR          0x61400000

#define C2_CPU1_RAM_START_ADDR        0x61400000
#define C2_CPU1_RAM_END_ADDR          0x61800000

#define Cluster0_C0_TCM_A             0x68000000
#define Cluster0_C0_TCM_B             0x68100000
#define Cluster0_C0_TCM_C             0x68200000
#define Cluster0_C1_TCM_A             0x68400000
#define Cluster0_C1_TCM_B             0x68500000
#define Cluster0_C1_TCM_C             0x68600000

#define Cluster1_C0_TCM_A             0x69000000
#define Cluster1_C0_TCM_B             0x69100000
#define Cluster1_C0_TCM_C             0x69200000
#define Cluster1_C1_TCM_A             0x69400000
#define Cluster1_C1_TCM_B             0x69500000
#define Cluster1_C1_TCM_C             0x69600000

#define Cluster2_C0_TCM_A             0x6A000000
#define Cluster2_C0_TCM_B             0x6A100000
#define Cluster2_C0_TCM_C             0x6A200000
#define Cluster2_C1_TCM_A             0x6A400000
#define Cluster2_C1_TCM_B             0x6A500000
#define Cluster2_C1_TCM_C             0x6A600000

/*
  PBRIDGE 2 peripherals
  
  0x70C00000 - 0x711FFFFF
*/

// MC_ME_domain_0

#define MC_ME_DOMAIN_0_GS             (*(unsigned volatile int *)   0x710D0000)
#define MC_ME_DOMAIN_0_MCTL           (*(unsigned volatile int *)   0x710D0004)
#define MC_ME_DOMAIN_0_ME             (*(unsigned volatile int *)   0x710D0008)
#define MC_ME_DOMAIN_0_CCTL0          (*(unsigned volatile short *) 0x710D01C6)
#define MC_ME_DOMAIN_0_CCTL1          (*(unsigned volatile short *) 0x710D01C4)
#define MC_ME_DOMAIN_0_CADDR0         (*(unsigned volatile int *)   0x710D01E0)
#define MC_ME_DOMAIN_0_CADDR1         (*(unsigned volatile int *)   0x710D01E4)

// MC_ME_domain_2

#define MC_ME_DOMAIN_2_GS             (*(unsigned volatile int *)   0x710D4000)
#define MC_ME_DOMAIN_2_MCTL           (*(unsigned volatile int *)   0x710D4004)
#define MC_ME_DOMAIN_2_ME             (*(unsigned volatile int *)   0x710D4008)
#define MC_ME_DOMAIN_2_CCTL0          (*(unsigned volatile short *) 0x710D41C6)
#define MC_ME_DOMAIN_2_CCTL1          (*(unsigned volatile short *) 0x710D41C4)
#define MC_ME_DOMAIN_2_CADDR0         (*(unsigned volatile int *)   0x710D41E0)
#define MC_ME_DOMAIN_2_CADDR1         (*(unsigned volatile int *)   0x710D41E4)

// MC_ME_peripheral_domain

#define MC_ME_PERIPHERAL_DOMAIN_GS             (*(unsigned volatile int *)   0x710E8000)
#define MC_ME_PERIPHERAL_DOMAIN_MCTL           (*(unsigned volatile int *)   0x710E8004)
#define MC_ME_PERIPHERAL_DOMAIN_ME             (*(unsigned volatile int *)   0x710E8008)
#define MC_ME_PERIPHERAL_DOMAIN_CCTL0          (*(unsigned volatile short *) 0x710E81C6)
#define MC_ME_PERIPHERAL_DOMAIN_CCTL1          (*(unsigned volatile short *) 0x710E81C4)
#define MC_ME_PERIPHERAL_DOMAIN_CADDR0         (*(unsigned volatile int *)   0x710E81E0)
#define MC_ME_PERIPHERAL_DOMAIN_CADDR1         (*(unsigned volatile int *)   0x710E81E4)

/*
  PBRIDGE 3 peripherals
  
  0x71200000 - 0x717FFFFF
*/

// MC_ME_domain_1

#define MC_ME_DOMAIN_1_GS             (*(unsigned volatile int *)   0x716D0000)
#define MC_ME_DOMAIN_1_MCTL           (*(unsigned volatile int *)   0x716D0004)
#define MC_ME_DOMAIN_1_ME             (*(unsigned volatile int *)   0x716D0008)
#define MC_ME_DOMAIN_1_CCTL0          (*(unsigned volatile short *) 0x716D01C6)
#define MC_ME_DOMAIN_1_CCTL1          (*(unsigned volatile short *) 0x716D01C4)
#define MC_ME_DOMAIN_1_CADDR0         (*(unsigned volatile int *)   0x716D01E0)
#define MC_ME_DOMAIN_1_CADDR1         (*(unsigned volatile int *)   0x716D01E4)

// Register bits

// MC_ME

#define MC_ME_GS_S_MTRANS             27
#define MC_ME_GS_S_CURRENT_MODE       28