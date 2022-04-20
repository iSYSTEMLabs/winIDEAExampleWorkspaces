// TDA4VM.h

// Function prototypes
void targetInit(void); 
void disableWatchdog(void); 

#define PSC0_PTCMD                    (*(volatile unsigned int*)0x00400120)
#define PSC0_PTSTAT                   (*(volatile unsigned int*)0x00400128)
#define PSC0_PDCTL_PD_PULSAR_0        (*(volatile unsigned int*)0x00400360)
#define PSC0_MDCTL_LPSC_PULSAR_0_R5_0 (*(volatile unsigned int*)0x00400B74)
#define PSC0_MDCTL_LPSC_PULSAR_0_R5_1 (*(volatile unsigned int*)0x00400B78)

#define PSC0_PDCTL_PD_PULSAR_1        (*(volatile unsigned int*)0x00400364)
#define PSC0_MDCTL_LPSC_PULSAR_1_R5_0 (*(volatile unsigned int*)0x00400B80)
#define PSC0_MDCTL_LPSC_PULSAR_1_R5_1 (*(volatile unsigned int*)0x00400B84)

#define WKUP_PSC0_PTCMD               (*(volatile unsigned int*)0x42000120)
#define WKUP_PSC0_PTSTAT              (*(volatile unsigned int*)0x42000128)
#define WKUP_PSC0_PDCTL_PD_1_R5_1     (*(volatile unsigned int*)0x42000304)
#define WKUP_PSC0_MDCTL_LPSC_1_R5_1   (*(volatile unsigned int*)0x42000A50)

#define PSC0_PDCTL_PD_A72_CLUSTER     (*(volatile unsigned int*)0x00400338)
#define PSC0_MDCTL_LPSC_A72_CLUSTER   (*(volatile unsigned int*)0x00400B38)

#define PSC0_PDCTL_PD_A72_CORE_0      (*(volatile unsigned int*)0x0040033C)
#define PSC0_MDCTL_LPSC_A72_CORE_0    (*(volatile unsigned int*)0x00400B40)

#define PSC0_PDCTL_PD_A72_CORE_1      (*(volatile unsigned int*)0x00400340)
#define PSC0_MDCTL_LPSC_A72_CORE_1    (*(volatile unsigned int*)0x00400B44)

#define PD_MCU_R5_CORE1_GO            1  
#define PD_MAIN_R5_CORE0_GO           24    
#define PD_MAIN_R5_CORE1_GO           25   
#define PD_A72_CLUSTER_GO             14   
#define PD_A72_CORE0_GO               15    
#define PD_A72_CORE1_GO               16    

#define MODULE_NEXT_ENABLE            0x00000003
#define MODULE_NEXT_DISABLE           0x00000002
#define MODULE_LRSTZ                  0x00000100

#define CTRLMMR_MCUSEC_CLSTR0_CORE0_CFG       (*(volatile unsigned int*)0x45A50100)
#define CTRLMMR_MCUSEC_CLSTR0_CORE1_CFG       (*(volatile unsigned int*)0x45A50180)
#define CTRLMMR_MCUSEC_CLSTR0_CORE1_BOOTVECT_LO (*(volatile unsigned int*)0x45A50190)
#define CTRLMMR_MCUSEC_CLSTR0_CORE1_BOOTVECT_HI (*(volatile unsigned int*)0x45A50194)

#define CTRLMMR_SEC_CLSTR0_CORE0_CFG          (*(volatile unsigned int*)0x45A40100)
#define CTRLMMR_SEC_CLSTR0_CORE0_BOOTVECT_LO  (*(volatile unsigned int*)0x45A40110)
#define CTRLMMR_SEC_CLSTR0_CORE0_BOOTVECT_HI  (*(volatile unsigned int*)0x45A40114)
#define CTRLMMR_SEC_CLSTR0_CORE0_PMCTRL       (*(volatile unsigned int*)0x45A40120)

#define CTRLMMR_SEC_CLSTR0_CORE1_CFG          (*(volatile unsigned int*)0x45A40180)
#define CTRLMMR_SEC_CLSTR0_CORE1_BOOTVECT_LO  (*(volatile unsigned int*)0x45A40190)
#define CTRLMMR_SEC_CLSTR0_CORE1_BOOTVECT_HI  (*(volatile unsigned int*)0x45A40194)
#define CTRLMMR_SEC_CLSTR0_CORE1_PMCTRL       (*(volatile unsigned int*)0x45A401A0)

#define CTRLMMR_SEC_CLSTR1_CORE0_CFG          (*(volatile unsigned int*)0x45A41100)
#define CTRLMMR_SEC_CLSTR1_CORE0_BOOTVECT_LO  (*(volatile unsigned int*)0x45A41110)
#define CTRLMMR_SEC_CLSTR1_CORE0_BOOTVECT_HI  (*(volatile unsigned int*)0x45A41114)
#define CTRLMMR_SEC_CLSTR1_CORE0_PMCTRL       (*(volatile unsigned int*)0x45A41120)

#define CTRLMMR_SEC_CLSTR1_CORE1_CFG          (*(volatile unsigned int*)0x45A41180)
#define CTRLMMR_SEC_CLSTR1_CORE1_BOOTVECT_LO  (*(volatile unsigned int*)0x45A41190)
#define CTRLMMR_SEC_CLSTR1_CORE1_BOOTVECT_HI  (*(volatile unsigned int*)0x45A41194)
#define CTRLMMR_SEC_CLSTR1_CORE1_PMCTRL       (*(volatile unsigned int*)0x45A411A0)

#define CC_CP_CONFIG                          (*(volatile unsigned int*)0x45A01004)
#define CC_RST_VEC_LO_CP0                     (*(volatile unsigned int*)0x45A01008)
#define CC_RST_VEC_HI_CP0                     (*(volatile unsigned int*)0x45A0100C)
#define CC_RST_VEC_LO_CP1                     (*(volatile unsigned int*)0x45A01010)
#define CC_RST_VEC_HI_CP1                     (*(volatile unsigned int*)0x45A01014)

