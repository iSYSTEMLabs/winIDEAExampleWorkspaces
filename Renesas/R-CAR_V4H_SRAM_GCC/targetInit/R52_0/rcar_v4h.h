#ifndef RCAR_V4H_H
#define RCAR_V4H_H

#define BOOT_ADDR_A76_C0_0 0xE6310000
#define BOOT_ADDR_A76_C0_1 0xE6320000
#define BOOT_ADDR_A76_C1_0 0xE6330000
#define BOOT_ADDR_A76_C1_1 0xE6340000
#define BOOT_ADDR_R52_1    0xE6350000
#define BOOT_ADDR_R52_2    0xE6360000



#define APMU_DOMAINn(n) (0xE6170000 + 0x1000*n)

#define CR52CRx(r)      (*(unsigned volatile int*) (APMU_DOMAINn(0) + 0x300 + 0x40*r))
#define CR52RSTCTRLx(r) (*(unsigned volatile int*) (APMU_DOMAINn(0) + 0x304 + 0x40*r))
//#define CR52BARx(r)     (*(unsigned volatile int*) (APMU_DOMAINn(0) + 0x320 + 0x40*r))
#define CR52BARx(r)     (*(unsigned volatile int*) (APMU_DOMAINn(0) + 0x334+ 0x40*r))

// hack for core 0-7 base addresses 800, 840, A00, A40
#define APMU_A76_CORE(n) (APMU_DOMAINn(0) + 0x800 + n/2 * 0x200 + n%2 * 0x40)

#define PWRCTRLC(n)   (*(unsigned volatile int*) (APMU_A76_CORE(n) + 0x00))
#define SAFECTRLCL(n) (*(unsigned volatile int*) (APMU_A76_CORE(n) + 0x20))
#define RVBARLC(n)    (*(unsigned volatile int*) (APMU_A76_CORE(n) + 0x30))
#define RVBARLC_P(n)  (*(unsigned volatile int*) (APMU_A76_CORE(n) + 0x38))

#define APSREG_AP_CLUSTER(n) (*(unsigned volatile int*) (0xE6280000 + n*0x1000 + 0x10))
#define APSREG_CCI500_AUX    (*(unsigned volatile int*) (0xE6289010))
#define APSREG_P_CCI500_AUX  (*(unsigned volatile int*) (0xE62A9010))

#define FRSTR_ADMIN     (*(unsigned volatile int*) (0xE6170060))
#define FRSTCTRL_ADMIN  (*(unsigned volatile int*) (0xE6170068))


#define PWRCTLRCx__WUP_REQ_mask 0x00000001
  
#define CR52CRx__NCPUHALT_mask      0x40000000
#define CR52CRx__CFGTCMBOOT_mask    0x10000000
#define CR52CRx__CFGRAMPROTEN_mask  0x20000000
#define CR52RSTCTRLx__CR52RST_mask  0x00000001

#define  PLATFORM_STM_AXI_ADDRESS    0xE9000000
#define  PLATFORM_STM_APB_ADDRESS    0xF8010000

#define ADDR_ATCM_R52(n) (0xE4000000 + n*0x00400000)
#define SIZE_ATCM_R52 0x8000

void targetInit(void);

#endif //RCAR_V4H_H