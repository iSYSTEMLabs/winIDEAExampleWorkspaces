// AM6422.h

// Function prototypes
void targetInit(void); 
void disableWatchdog(void); 
void setRatRegion(unsigned long);
void enable_R5FSS0_Cores(void);
void enable_R5FSS1_Cores(void);
void enable_A53_Cores(void);

// Definitions
#define RAT_CTRL_0                    (*(volatile unsigned int*)0x44200020)
#define RAT_BASE_0                    (*(volatile unsigned int*)0x44200024)
#define RAT_TRANS_L_0                 (*(volatile unsigned int*)0x44200028)
#define RAT_TRANS_H_0                 (*(volatile unsigned int*)0x4420002C)

#define RAT_BASE                      0x60000000
#define RAT_ENABLE_MAX_REGION_SIZE    0x8000001D

#define PSC0_PTCMD                    (*(volatile unsigned int*)(RAT_BASE + 0x0400120))
#define PSC0_PTSTAT                   (*(volatile unsigned int*)(RAT_BASE + 0x0400128))

#define PSC0_MDCTL_LPSC_3             (*(volatile unsigned int*)(RAT_BASE + 0x0400A0C))

#define PSC0_MDCTL_LPSC_24            (*(volatile unsigned int*)(RAT_BASE + 0x0400A60))
#define PSC0_MDCTL_LPSC_25            (*(volatile unsigned int*)(RAT_BASE + 0x0400A64))

#define PSC0_MDCTL_LPSC_27            (*(volatile unsigned int*)(RAT_BASE + 0x0400A6C))
#define PSC0_MDCTL_LPSC_28            (*(volatile unsigned int*)(RAT_BASE + 0x0400A70))

#define PSC0_PDCTL_PD_A53_CLUSTER     (*(volatile unsigned int*)(RAT_BASE + 0x0400304))
#define PSC0_MDCTL_LPSC_A53_CLUSTER   (*(volatile unsigned int*)(RAT_BASE + 0x0400A50))

#define PSC0_PDCTL_PD_A53_CORE_0      (*(volatile unsigned int*)(RAT_BASE + 0x0400308))
#define PSC0_MDCTL_LPSC_A53_CORE_0    (*(volatile unsigned int*)(RAT_BASE + 0x0400A58))

#define PSC0_PDCTL_PD_A53_CORE_1      (*(volatile unsigned int*)(RAT_BASE + 0x040030C))
#define PSC0_MDCTL_LPSC_A53_CORE_1    (*(volatile unsigned int*)(RAT_BASE + 0x0400A5C))

#define PD_GP_CORE_CTL_GO             0
#define PD_A53_CLUSTER_GO             1
#define PD_A53_CORE0_GO               2
#define PD_A53_CORE1_GO               3
#define PD_R5FSS0_GO                  4
#define PD_R5FSS1_GO                  5

#define MODULE_NEXT_ENABLE            0x00000003
#define MODULE_NEXT_DISABLE           0x00000002
#define MODULE_LRSTZ                  0x00000100

// Following registers are to be accessed after mapping RAT to 0x4000'0000
// For example; address 0x45A0'0000 shall then be accessed by 0x05A0'0000 + RAT_BASE 
#define WWRTI_KICK0                           (*(volatile unsigned int*)(RAT_BASE + 0x04135120))
#define WWRTI_KICK1                           (*(volatile unsigned int*)(RAT_BASE + 0x04135124))
#define WWRTI_CLK_CTRL                        (*(volatile unsigned int*)(RAT_BASE + 0x04135150))

#define CTRLMMR_SEC_CLSTR0_CORE0_BOOTVECT_LO  (*(volatile unsigned int*)(RAT_BASE + 0x05A00110))
#define CTRLMMR_SEC_CLSTR0_CORE0_BOOTVECT_HI  (*(volatile unsigned int*)(RAT_BASE + 0x05A00114))

#define CTRLMMR_SEC_CLSTR0_CORE1_BOOTVECT_LO  (*(volatile unsigned int*)(RAT_BASE + 0x05A00190))
#define CTRLMMR_SEC_CLSTR0_CORE1_BOOTVECT_HI  (*(volatile unsigned int*)(RAT_BASE + 0x05A00194))

#define CTRLMMR_SEC_CLSTR1_CORE0_BOOTVECT_LO  (*(volatile unsigned int*)(RAT_BASE + 0x05A01110))
#define CTRLMMR_SEC_CLSTR1_CORE0_BOOTVECT_HI  (*(volatile unsigned int*)(RAT_BASE + 0x05A01114))

#define CTRLMMR_SEC_CLSTR1_CORE1_BOOTVECT_LO  (*(volatile unsigned int*)(RAT_BASE + 0x05A01190))
#define CTRLMMR_SEC_CLSTR1_CORE1_BOOTVECT_HI  (*(volatile unsigned int*)(RAT_BASE + 0x05A01194))

#define CTRLMMR_SEC_CLSTR9_RST_VEC_LO_CORE0   (*(volatile unsigned int*)(RAT_BASE + 0x05A09110))
#define CTRLMMR_SEC_CLSTR9_RST_VEC_HI_CORE0   (*(volatile unsigned int*)(RAT_BASE + 0x05A09114))
#define CTRLMMR_SEC_CLSTR9_RST_VEC_LO_CORE1   (*(volatile unsigned int*)(RAT_BASE + 0x05A09190))
#define CTRLMMR_SEC_CLSTR9_RST_VEC_HI_CORE1   (*(volatile unsigned int*)(RAT_BASE + 0x05A09194))
