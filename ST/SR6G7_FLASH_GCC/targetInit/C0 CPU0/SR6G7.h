#include <typedefs.h>

#define mem(addr) (*(unsigned char volatile *)(addr))
#define memw(addr) (*(unsigned short volatile *)(addr))
#define meml(addr) (*(unsigned long volatile *)(addr))
#define memll(addr) (*(unsigned long long volatile *)(addr))

#define GIC0            (*(unsigned long volatile*) 0x704BC000)

#define RUN_PC3	        (*(unsigned long volatile*) 0x710E808C)
#define RUN_PC3_RUN0    4

/*
 *  PLLDIG_peripheral_domain
 */
#define PLLDIG_PERIPHERAL_DOMAIN_BASE   0x722C8100
#define PLLDIG_PER_PLL0DV    (*(unsigned long volatile*) (PLLDIG_PERIPHERAL_DOMAIN_BASE + 0x08))

/*
 *  MC_CGM_peripheral_domain
 */
#define MC_CGM_PERIPHERAL_DOMAIN_BASE   0x722C8600
#define CGM_PER_SC_DC0        (*(unsigned long volatile*) (MC_CGM_PERIPHERAL_DOMAIN_BASE + 0x01E8))
#define CGM_PER_AC1_SC        (*(unsigned long volatile*) (MC_CGM_PERIPHERAL_DOMAIN_BASE + 0x0220))
#define CGM_PER_AC11_SC       (*(unsigned long volatile*) (MC_CGM_PERIPHERAL_DOMAIN_BASE + 0x0360))
#define CGM_PER_AC11_DC0      (*(unsigned long volatile*) (MC_CGM_PERIPHERAL_DOMAIN_BASE + 0x0368))

/*
 *  MC_ME_peripheral_domain
 */
#define MC_ME_PERIPHERAL_DOMAIN_BASE    0x722E8000
#define ME_PER_GS             (*(unsigned long volatile*) (MC_ME_PERIPHERAL_DOMAIN_BASE + 0x000))
#define ME_PER_MCTL           (*(unsigned long volatile*) (MC_ME_PERIPHERAL_DOMAIN_BASE + 0x004))
#define ME_PER_DRUN_MC        (*(unsigned long volatile*) (MC_ME_PERIPHERAL_DOMAIN_BASE + 0x02C))
#define ME_PER_RUN3_MC        (*(unsigned long volatile*) (MC_ME_PERIPHERAL_DOMAIN_BASE + 0x03C))
#define ME_PER_RUN_PC1        (*(unsigned long volatile*) (MC_ME_PERIPHERAL_DOMAIN_BASE + 0x084))
#define ME_PER_CCTL01         (*(unsigned long volatile*) (MC_ME_PERIPHERAL_DOMAIN_BASE + 0x1C4))
#define ME_PER_CADDR0         (*(unsigned long volatile*) (MC_ME_PERIPHERAL_DOMAIN_BASE + 0x1E0))
#define ME_PER_CADDR1         (*(unsigned long volatile*) (MC_ME_PERIPHERAL_DOMAIN_BASE + 0x1E4))
#define ME_PER_PS3_M0         (*(unsigned long volatile*) (MC_ME_PERIPHERAL_DOMAIN_BASE + 0x20C))
#define ME_PER_PCTL101        (*(unsigned char volatile*) (MC_ME_PERIPHERAL_DOMAIN_BASE + 0x466))

/*
 *  MC_ME_domain_0
 */
#define MC_ME_DOMAIN_0_BASE             0x710D0000
#define ME_CORE0_GS           (*(unsigned long volatile*) (MC_ME_DOMAIN_0_BASE + 0x000))
#define ME_CORE0_MCTL         (*(unsigned long volatile*) (MC_ME_DOMAIN_0_BASE + 0x004))
#define ME_CORE0_CCTL01       (*(unsigned long volatile*) (MC_ME_DOMAIN_0_BASE + 0x1C4))
#define ME_CORE0_CADDR0       (*(unsigned long volatile*) (MC_ME_DOMAIN_0_BASE + 0x1E0))
#define ME_CORE0_CADDR1       (*(unsigned long volatile*) (MC_ME_DOMAIN_0_BASE + 0x1E4))

/*
 *  MC_ME_domain_2
 */
#define MC_ME_DOMAIN_2_BASE             0x710D4000
#define ME_CORE2_GS           (*(unsigned long volatile*) (MC_ME_DOMAIN_2_BASE + 0x000))
#define ME_CORE2_MCTL         (*(unsigned long volatile*) (MC_ME_DOMAIN_2_BASE + 0x004))
#define ME_CORE2_CCTL01       (*(unsigned long volatile*) (MC_ME_DOMAIN_2_BASE + 0x1C4))
#define ME_CORE2_CADDR0       (*(unsigned long volatile*) (MC_ME_DOMAIN_2_BASE + 0x1E0))
#define ME_CORE2_CADDR1       (*(unsigned long volatile*) (MC_ME_DOMAIN_2_BASE + 0x1E4))

/*
 *  MC_ME_domain_1
 */
#define MC_ME_DOMAIN_1_BASE             0x716D0000
#define ME_CORE1_GS           (*(unsigned long volatile*) (MC_ME_DOMAIN_1_BASE + 0x000))
#define ME_CORE1_MCTL         (*(unsigned long volatile*) (MC_ME_DOMAIN_1_BASE + 0x004))
#define ME_CORE1_CCTL01       (*(unsigned long volatile*) (MC_ME_DOMAIN_1_BASE + 0x1C4))
#define ME_CORE1_CADDR0       (*(unsigned long volatile*) (MC_ME_DOMAIN_1_BASE + 0x1E0))
#define ME_CORE1_CADDR1       (*(unsigned long volatile*) (MC_ME_DOMAIN_1_BASE + 0x1E4))

/*
 *  GST
 */
#define GST_BASE 0x70468000
#define GST_NSC_DEBUG_CFG           (*(unsigned long volatile*) (GST_BASE))
#define GST_ARC0_DEBUG_CFG          (*(unsigned long volatile*) (GST_BASE + 0x0240 + 0*0x40))
#define GST_ARC0_CFG                (*(unsigned long volatile*) (GST_BASE + 0x0244 + 0*0x40))
#define GST_ARC0_STATUS             (*(unsigned long volatile*) (GST_BASE + 0x0248 + 0*0x40))
#define GST_ARC0_CTRL               (*(unsigned long volatile*) (GST_BASE + 0x024C + 0*0x40))
#define GST_ARC0_RELOAD_VALUE       (*(unsigned long volatile*) (GST_BASE + 0x0250 + 0*0x40))
#define GST_ARC0_EXPIRY_CFG         (*(unsigned long volatile*) (GST_BASE + 0x0254 + 0*0x40))
#define GST_ARC0_COMPARE_1_CFG      (*(unsigned long volatile*) (GST_BASE + 0x0258 + 0*0x40))
#define GST_ARC0_INT_PULSE_EN_CFG   (*(unsigned long volatile*) (GST_BASE + 0x0268 + 0*0x40))
#define GST_ARC0_INT_CLR            (*(unsigned long volatile*) (GST_BASE + 0x0270 + 0*0x40))
#define GST_CLK_CTRL                (*(unsigned long volatile*) (GST_BASE + 0x0AD0))

/*
 *  IBCM_0
 */
#define IBCM_BASE 0x704BC000
#define GST_NSC_DEBUG_CFG           (*(unsigned long volatile*) (GST_BASE))

/*
 *  GICD
 */

#define GICD_BASE 0x6D800000

/* Due to missing GIC register descriptions in the datasheet, peripheral ID 
   registers were used to determine the base addresses of GIC */
#define GICD_PIDR2 (*(unsigned long volatile*) (GICD_BASE + 0xFFE8))  

/*GIC distributor registers*/
#define GICD_CTRL (*(unsigned long volatile*) GICD_BASE) 
#define GICD_TYPER (*(unsigned long volatile*) (GICD_BASE + 0x04)
#define GICD_IIDR (*(unsigned long volatile*) (GICD_BASE + 0x8) 
#define GICD_STATUSR (*(unsigned long volatile*) (GICD_BASE + 0x10)
#define GICD_SETSPI_NSR (*(unsigned long volatile*) (GICD_BASE + 0x40) 
#define GICD_CLRSPI_NSR (*(unsigned long volatile*) (GICD_BASE + 0x48) 
#define GICD_SETSPI_SR (*(unsigned long volatile*) (GICD_BASE + 0x50) 
#define GICD_CLRSPI_SR (*(unsigned long volatile*) (GICD_BASE + 0x58) 

/*Interrupt Group Register for interrupts 255-287*/
#define GICD_IGROUPR7 (*(unsigned long volatile*) (GICD_BASE + 0xA0)) 
#define GICD_IGROUPR0 (*(unsigned long volatile*) (GICD_BASE + 0x84)) 

/*Interrupt set enable register for interrupts INTID 255-287*/
#define GICD_ISENABLER7 (*(unsigned long volatile*) (GICD_BASE + 0x100 + 0x1C))
/*Interrupt set enable register for interrupts INTID 288-319*/
#define GICD_ISENABLER9 (*(unsigned long volatile*) (GICD_BASE + 0x100 + 0x24))
#define GICD_ISENABLER8 (*(unsigned long volatile*) (GICD_BASE + 0x100 + 0x20))
#define GICD_ISENABLER0 (*(unsigned long volatile*) (GICD_BASE + 0x104)) 

/*Interrupt clear enable register for interrupts 255-287*/
#define GICD_ICENABLER7 (*(unsigned long volatile*) (GICD_BASE + 0x180 + 0x1C))

/*Interrupt set pending register for interrupts 255-287*/
#define GICD_ISPENDR7 (*(unsigned long volatile*) (GICD_BASE + 0x200 + 0x1C)) 

/*Interrupt clear pending register for interrupts 255-287*/
#define GICD_ICPENDR7 (*(unsigned long volatile*) (GICD_BASE + 0x280 + 0x1C)) 

/*Interrupt set active register for interrupts 255-287*/
#define GICD_ISACTIVER7 (*(unsigned long volatile*) (GICD_BASE + 0x300 + 0x1C)) 

/*Interrupt clear active register for interrupts 255-287*/
#define GICD_ICACTIVER7 (*(unsigned long volatile*) (GICD_BASE + 0x380 + 0x1C)) 

/*Interrupt priority register for interrupts 283-287*/
#define GICD_IPRIORITYR70 (*(unsigned long volatile*) (GICD_BASE + 0x0400 + 0x100))
#define GICD_IPRIORITYR0 (*(unsigned long volatile*) (GICD_BASE + 0x0400))

/*Interrupt target core register for interrupts 283-287*/
#define GICD_ITARGETSR70 (*(unsigned long volatile*) (GICD_BASE + 0x0800 + 0x100))


#define GICD_CPENDSGIR0 (*(unsigned long volatile*) (GICD_BASE + 0x0F10))
#define GICD_CPENDSGIR1 (*(unsigned long volatile*) (GICD_BASE + 0x0F14))
#define GICD_CPENDSGIR2 (*(unsigned long volatile*) (GICD_BASE + 0x0F18))
#define GICD_CPENDSGIR3 (*(unsigned long volatile*) (GICD_BASE + 0x0F1C))

#define GICD_SPENDSGIR0 (*(unsigned long volatile*) (GICD_BASE + 0x0F20))
#define GICD_SPENDSGIR1 (*(unsigned long volatile*) (GICD_BASE + 0x0F24))
#define GICD_SPENDSGIR2 (*(unsigned long volatile*) (GICD_BASE + 0x0F28))
#define GICD_SPENDSGIR3 (*(unsigned long volatile*) (GICD_BASE + 0x0F2C))

/*GICD bits*/
#define INT_285 29
#define DS 6

#define GICR_RD_BASE 0x6D900000 
#define GICR_SGI_BASE 0x6D910000 

/*GIC redistributor registers*/
#define GICR_WAKER      (*(unsigned long volatile*)       (GICR_RD_BASE + 0x14)) 
#define GICR_PROPBASE   (*(unsigned long long volatile*)  (GICR_RD_BASE + 0x70)) 
#define GICR_PENDBASER  (*(unsigned long long volatile*)  (GICR_RD_BASE + 0x78)) 
#define GICR_ISENABLER0 (*(unsigned long long volatile*)  (GICR_SGI_BASE + 0x100)) 
#define GICR_ISACTIVER0 (*(unsigned long long volatile*)  (GICR_SGI_BASE + 0x300)) 