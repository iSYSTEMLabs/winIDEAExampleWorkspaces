// AM6422.h

// Function prototypes
void targetInit(void); 
void disableWatchdog(void); 
void setRatRegion1(unsigned long);
void execute_PD_change(unsigned int);
void execute_MCU_PD_change(unsigned int);
void enable_M4FFS0_Core(void);
void enable_R5FSS0_Cores(void);
void enable_R5FSS1_Cores(void);
void enable_A53_Cores(void);

// Definitions
#define RAT_CTRL_1                    (*(volatile unsigned int*)0x2FFE0030)
#define RAT_BASE_1                    (*(volatile unsigned int*)0x2FFE0034)
#define RAT_TRANS_L_1                 (*(volatile unsigned int*)0x2FFE0038)
#define RAT_TRANS_H_1                 (*(volatile unsigned int*)0x2FFE003C)

#define RAT_BASE                      0x30000000
#define RAT_ENABLE_MAX_REGION_SIZE    0x80000010

#define RAT_CTRL_3                    (*(volatile unsigned int*)0x2FFE0050)
#define RAT_BASE_3                    (*(volatile unsigned int*)0x2FFE0054)
#define RAT_TRANS_L_3                 (*(volatile unsigned int*)0x2FFE0058)
#define RAT_TRANS_H_3                 (*(volatile unsigned int*)0x2FFE005C)

// Following registers are to be accessed after mapping RAT to 0x0400'0000
// For example; address 0x0400'0120 shall then be accessed by 0x0000'0120 + RAT_BASE 
#define MCU_PSC0_PTCMD                (*(volatile unsigned int*)(RAT_BASE + 0x00000120))
#define MCU_PSC0_PTSTAT               (*(volatile unsigned int*)(RAT_BASE + 0x00000128))
#define MCU_PSC0_MDCTL_LPSC_7         (*(volatile unsigned int*)(RAT_BASE + 0x00000A1C))

// Following registers are to be accessed after mapping RAT to 0x0040'0000
// For example; address 0x0040'0120 shall then be accessed by 0x0000'0120 + RAT_BASE 
#define PSC0_PTCMD                    (*(volatile unsigned int*)(RAT_BASE + 0x00000120))
#define PSC0_PTSTAT                   (*(volatile unsigned int*)(RAT_BASE + 0x00000128))

#define PSC0_MDCTL_LPSC_3             (*(volatile unsigned int*)(RAT_BASE + 0x00000A0C))

#define PSC0_MDCTL_LPSC_24            (*(volatile unsigned int*)(RAT_BASE + 0x00000A60))
#define PSC0_MDCTL_LPSC_25            (*(volatile unsigned int*)(RAT_BASE + 0x00000A64))

#define PSC0_MDCTL_LPSC_27            (*(volatile unsigned int*)(RAT_BASE + 0x00000A6C))
#define PSC0_MDCTL_LPSC_28            (*(volatile unsigned int*)(RAT_BASE + 0x00000A70))

#define PSC0_PDCTL_PD_A53_CLUSTER     (*(volatile unsigned int*)(RAT_BASE + 0x00000304))
#define PSC0_MDCTL_LPSC_A53_CLUSTER   (*(volatile unsigned int*)(RAT_BASE + 0x00000A50))

#define PSC0_PDCTL_PD_A53_CORE_0      (*(volatile unsigned int*)(RAT_BASE + 0x00000308))
#define PSC0_MDCTL_LPSC_A53_CORE_0    (*(volatile unsigned int*)(RAT_BASE + 0x00000A58))

#define PSC0_PDCTL_PD_A53_CORE_1      (*(volatile unsigned int*)(RAT_BASE + 0x0000030C))
#define PSC0_MDCTL_LPSC_A53_CORE_1    (*(volatile unsigned int*)(RAT_BASE + 0x00000A5C))

#define PD_GP_CORE_CTL_GO             0
#define PD_A53_CLUSTER_GO             1
#define PD_A53_CORE0_GO               2
#define PD_A53_CORE1_GO               3
#define PD_R5FSS0_GO                  4
#define PD_R5FSS1_GO                  5
#define PD_M4FSS0_GO                  1

#define MODULE_NEXT_ENABLE            0x00000003
#define MODULE_NEXT_DISABLE           0x00000002
#define MODULE_LRSTZ                  0x00000100

// Following registers are to be accessed after mapping RAT to 0x4000'0000
// For example; address 0x45A0'5120 shall then be accessed by 0x0000'5120 + RAT_BASE 
#define WWRTI_KICK0                           (*(volatile unsigned int*)(RAT_BASE + 0x00005120))
#define WWRTI_KICK1                           (*(volatile unsigned int*)(RAT_BASE + 0x00005124))
#define WWRTI_CLK_CTRL                        (*(volatile unsigned int*)(RAT_BASE + 0x00005150))

// Following registers are to be accessed after mapping RAT to 0x45A0'0000
// For example; address 0x45A0'0110 shall then be accessed by 0x0000'0110 + RAT_BASE 
#define CTRLMMR_SEC_CLSTR0_CORE0_BOOTVECT_LO  (*(volatile unsigned int*)(RAT_BASE + 0x00000110))
#define CTRLMMR_SEC_CLSTR0_CORE0_BOOTVECT_HI  (*(volatile unsigned int*)(RAT_BASE + 0x00000114))

#define CTRLMMR_SEC_CLSTR0_CORE1_BOOTVECT_LO  (*(volatile unsigned int*)(RAT_BASE + 0x00000190))
#define CTRLMMR_SEC_CLSTR0_CORE1_BOOTVECT_HI  (*(volatile unsigned int*)(RAT_BASE + 0x00000194))

#define CTRLMMR_SEC_CLSTR1_CORE0_BOOTVECT_LO  (*(volatile unsigned int*)(RAT_BASE + 0x00001110))
#define CTRLMMR_SEC_CLSTR1_CORE0_BOOTVECT_HI  (*(volatile unsigned int*)(RAT_BASE + 0x00001114))

#define CTRLMMR_SEC_CLSTR1_CORE1_BOOTVECT_LO  (*(volatile unsigned int*)(RAT_BASE + 0x00001190))
#define CTRLMMR_SEC_CLSTR1_CORE1_BOOTVECT_HI  (*(volatile unsigned int*)(RAT_BASE + 0x00001194))

#define CTRLMMR_SEC_CLSTR9_RST_VEC_LO_CORE0   (*(volatile unsigned int*)(RAT_BASE + 0x00009110))
#define CTRLMMR_SEC_CLSTR9_RST_VEC_HI_CORE0   (*(volatile unsigned int*)(RAT_BASE + 0x00009114))
#define CTRLMMR_SEC_CLSTR9_RST_VEC_LO_CORE1   (*(volatile unsigned int*)(RAT_BASE + 0x00009190))
#define CTRLMMR_SEC_CLSTR9_RST_VEC_HI_CORE1   (*(volatile unsigned int*)(RAT_BASE + 0x00009194))
