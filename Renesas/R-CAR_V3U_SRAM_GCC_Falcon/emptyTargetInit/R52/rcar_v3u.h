#ifndef RCAR_V3U_H
#define RCAR_V3U_H

#define BOOT_ADDR_A76_C0_0 0xE6310000
#define BOOT_ADDR_A76_C0_1 0xE6320000
#define BOOT_ADDR_A76_C1_0 0xE6330000
#define BOOT_ADDR_A76_C1_1 0xE6340000
#define BOOT_ADDR_A76_C2_0 0xE6350000
#define BOOT_ADDR_A76_C2_1 0xE6360000
#define BOOT_ADDR_A76_C3_0 0xE6370000
#define BOOT_ADDR_A76_C3_1 0xE6380000


#define APMU_DOMAINn(n) (0xE6170000 + 0x1000*n)

// hack for core 0-7 base addresses 800, 840, A00, A40, C00, C40, E00, E40
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
//#define FRSTR_CLUSTER0  (*(unsigned volatile int*) (0xE6170460))
//#define FRSTR_CORE0  (*(unsigned volatile int*) (0xE6170860))


#define PWRCTLRCx__WUP_REQ_mask 0x00000001

// R-CarV3U_Address_Map.xlsl (from K:\Internet\Renesas\R-CAR_V3U\R19UH0124EJ0050_RCARV3U_Manual.pdf)
#define  PLATFORM_STM_AXI_ADDRESS    0xE9000000
#define  PLATFORM_STM_APB_ADDRESS    0xF8010000

void targetInit(void);

#endif //RCAR_V3U_H