/*===========================================================================*/
/* Module      = dr7f701503_irq.h                                            */
/* Version     = E1.00b                                                      */
/*               extracted from device file dr7f701503.dvf                   */
/*               generated by DeFiXRH850 0.7.1.4                             */
/*===========================================================================*/
/*                                  COPYRIGHT                                */
/*===========================================================================*/
/* Copyright (c) 2013 by Renesas Electronics Europe GmbH,                    */
/*               a company of the Renesas Electronics Corporation            */
/*===========================================================================*/
/* Purpose:      Declarations of Interrupt Vector Table                      */
/*                                                                           */
/*===========================================================================*/
/*                                                                           */
/* Warranty Disclaimer                                                       */
/*                                                                           */
/* Because the Product(s) is licensed free of charge, there is no warranty   */
/* of any kind whatsoever and expressly disclaimed and excluded by Renesas,  */
/* either expressed or implied, including but not limited to those for       */
/* non-infringement of intellectual property, merchantability and/or         */
/* fitness for the particular purpose.                                       */
/* Renesas shall not have any obligation to maintain, service or provide bug */
/* fixes for the supplied Product(s) and/or the Application.                 */
/*                                                                           */
/* Each User is solely responsible for determining the appropriateness of    */
/* using the Product(s) and assumes all risks associated with its exercise   */
/* of rights under this Agreement, including, but not limited to the risks   */
/* and costs of program errors, compliance with applicable laws, damage to   */
/* or loss of data, programs or equipment, and unavailability or             */
/* interruption of operations.                                               */
/*                                                                           */
/* Limitation of Liability                                                   */
/*                                                                           */
/* In no event shall Renesas be liable to the User for any incidental,       */
/* consequential, indirect, or punitive damage (including but not limited    */
/* to lost profits) regardless of whether such liability is based on breach  */
/* of contract, tort, strict liability, breach of warranties, failure of     */
/* essential purpose or otherwise and even if advised of the possibility of  */
/* such damages. Renesas shall not be liable for any services or products    */
/* provided by third party vendors, developers or consultants identified or  */
/* referred to the User by Renesas in connection with the Product(s) and/or  */
/* the Application.                                                          */
/*                                                                           */
/*===========================================================================*/
/* Environment:                                                              */
/*              Device:         R7F701503xAFP                                */
/*              IDE:            GHS Multi for V800  V6.xx or later           */
/*===========================================================================*/

#ifndef __R7F701503xAFP_IRQ_H
#define __R7F701503xAFP_IRQ_H

#define IRQ_TABLE_START                 0x00000200u

#define RESET_ENABLE                    0x00000001u

// #define SYSERR_ENABLE                   0x00000010u

// #define FETRAPEX_ENABLE                 0x00000030u

// #define EITRAP0_ENABLE                  0x00000040u

// #define EITRAP1_ENABLE                  0x00000050u

// #define RIEX_ENABLE                     0x00000060u

// #define UCPOP_ENABLE                    0x00000080u

// #define MIP_MDP_ENABLE                  0x00000090u

// #define MAE_ENABLE                      0x000000C0u

// #define FENMI_ENABLE                    0x000000E0u

// #define FEINT_ENABLE                    0x000000F0u

// #define EINTPRIO_0_ENABLE               0x00000100u

// #define EINTPRIO_1_ENABLE               0x00000110u

// #define EINTPRIO_2_ENABLE               0x00000120u

// #define EINTPRIO_3_ENABLE               0x00000130u

// #define EINTPRIO_4_ENABLE               0x00000140u

// #define EINTPRIO_5_ENABLE               0x00000150u

// #define EINTPRIO_6_ENABLE               0x00000160u

// #define EINTPRIO_7_ENABLE               0x00000170u

// #define EINTPRIO_8_ENABLE               0x00000180u

// #define EINTPRIO_9_ENABLE               0x00000190u

// #define EINTPRIO_10_ENABLE              0x000001A0u

// #define EINTPRIO_11_ENABLE              0x000001B0u

// #define EINTPRIO_12_ENABLE              0x000001C0u

// #define EINTPRIO_13_ENABLE              0x000001D0u

// #define EINTPRIO_14_ENABLE              0x000001E0u

// #define EINTPRIO_15_ENABLE              0x000001F0u

// #define INTIPIR0_ENABLE                 (IRQ_TABLE_START + 0x00000000u)

// #define INTIPIR1_ENABLE                 (IRQ_TABLE_START + 0x00000004u)

// #define INTIPIR2_ENABLE                 (IRQ_TABLE_START + 0x00000008u)

// #define INTIPIR3_ENABLE                 (IRQ_TABLE_START + 0x0000000Cu)

// #define INTBN0_ENABLE                   (IRQ_TABLE_START + 0x00000010u)

// #define INTTAUD0I0_ENABLE               (IRQ_TABLE_START + 0x00000020u)

// #define INTCSIH2IC_1_ENABLE             (IRQ_TABLE_START + 0x00000020u)

 
#ifndef INTTAUD0I0_ENABLE              
  #define INTTAUD0I0_ENABLE               0x00000000u
#endif
#ifndef INTCSIH2IC_1_ENABLE            
  #define INTCSIH2IC_1_ENABLE             0x00000000u
#endif
// #define INTTAUD0I2_ENABLE               (IRQ_TABLE_START + 0x00000024u)

// #define INTCSIH3IC_1_ENABLE             (IRQ_TABLE_START + 0x00000024u)

 
#ifndef INTTAUD0I2_ENABLE              
  #define INTTAUD0I2_ENABLE               0x00000000u
#endif
#ifndef INTCSIH3IC_1_ENABLE            
  #define INTCSIH3IC_1_ENABLE             0x00000000u
#endif
// #define INTCSIH2IR_1_ENABLE             (IRQ_TABLE_START + 0x00000028u)

// #define INTTAUD0I4_ENABLE               (IRQ_TABLE_START + 0x00000028u)

 
#ifndef INTCSIH2IR_1_ENABLE            
  #define INTCSIH2IR_1_ENABLE             0x00000000u
#endif
#ifndef INTTAUD0I4_ENABLE              
  #define INTTAUD0I4_ENABLE               0x00000000u
#endif
// #define INTCSIH2IRE_1_ENABLE            (IRQ_TABLE_START + 0x0000002Cu)

// #define INTTAUD0I6_ENABLE               (IRQ_TABLE_START + 0x0000002Cu)

 
#ifndef INTCSIH2IRE_1_ENABLE           
  #define INTCSIH2IRE_1_ENABLE            0x00000000u
#endif
#ifndef INTTAUD0I6_ENABLE              
  #define INTTAUD0I6_ENABLE               0x00000000u
#endif
// #define INTTAUD0I8_ENABLE               (IRQ_TABLE_START + 0x00000030u)

// #define INTCSIH2IJC_1_ENABLE            (IRQ_TABLE_START + 0x00000030u)

 
#ifndef INTTAUD0I8_ENABLE              
  #define INTTAUD0I8_ENABLE               0x00000000u
#endif
#ifndef INTCSIH2IJC_1_ENABLE           
  #define INTCSIH2IJC_1_ENABLE            0x00000000u
#endif
// #define INTTAUD0I10_ENABLE              (IRQ_TABLE_START + 0x00000034u)

// #define INTCSIH3IR_1_ENABLE             (IRQ_TABLE_START + 0x00000034u)

 
#ifndef INTTAUD0I10_ENABLE             
  #define INTTAUD0I10_ENABLE              0x00000000u
#endif
#ifndef INTCSIH3IR_1_ENABLE            
  #define INTCSIH3IR_1_ENABLE             0x00000000u
#endif
// #define INTTAUD0I12_ENABLE              (IRQ_TABLE_START + 0x00000038u)

// #define INTCSIH3IRE_1_ENABLE            (IRQ_TABLE_START + 0x00000038u)

 
#ifndef INTTAUD0I12_ENABLE             
  #define INTTAUD0I12_ENABLE              0x00000000u
#endif
#ifndef INTCSIH3IRE_1_ENABLE           
  #define INTCSIH3IRE_1_ENABLE            0x00000000u
#endif
// #define INTTAUD0I14_ENABLE              (IRQ_TABLE_START + 0x0000003Cu)

// #define INTCSIH3IJC_1_ENABLE            (IRQ_TABLE_START + 0x0000003Cu)

 
#ifndef INTTAUD0I14_ENABLE             
  #define INTTAUD0I14_ENABLE              0x00000000u
#endif
#ifndef INTCSIH3IJC_1_ENABLE           
  #define INTCSIH3IJC_1_ENABLE            0x00000000u
#endif
// #define INTTAPA0IPEK0_ENABLE            (IRQ_TABLE_START + 0x00000040u)

// #define INTCSIH1IC_1_ENABLE             (IRQ_TABLE_START + 0x00000040u)

 
#ifndef INTTAPA0IPEK0_ENABLE           
  #define INTTAPA0IPEK0_ENABLE            0x00000000u
#endif
#ifndef INTCSIH1IC_1_ENABLE            
  #define INTCSIH1IC_1_ENABLE             0x00000000u
#endif
// #define INTTAPA0IVLY0_ENABLE            (IRQ_TABLE_START + 0x00000044u)

// #define INTCSIH1IR_1_ENABLE             (IRQ_TABLE_START + 0x00000044u)

 
#ifndef INTTAPA0IVLY0_ENABLE           
  #define INTTAPA0IVLY0_ENABLE            0x00000000u
#endif
#ifndef INTCSIH1IR_1_ENABLE            
  #define INTCSIH1IR_1_ENABLE             0x00000000u
#endif
// #define INTADCA0I0_ENABLE               (IRQ_TABLE_START + 0x00000048u)

// #define INTADCA0I1_ENABLE               (IRQ_TABLE_START + 0x0000004Cu)

// #define INTCSIH0IJC_1_ENABLE            (IRQ_TABLE_START + 0x00000050u)

// #define INTADCA0I2_ENABLE               (IRQ_TABLE_START + 0x00000050u)

 
#ifndef INTCSIH0IJC_1_ENABLE           
  #define INTCSIH0IJC_1_ENABLE            0x00000000u
#endif
#ifndef INTADCA0I2_ENABLE              
  #define INTADCA0I2_ENABLE               0x00000000u
#endif
// #define INTDCUTDI_ENABLE                (IRQ_TABLE_START + 0x00000054u)

// #define INTRCANGERR0_ENABLE             (IRQ_TABLE_START + 0x00000058u)

// #define INTRCANGRECC0_ENABLE            (IRQ_TABLE_START + 0x0000005Cu)

// #define INTRCAN0ERR_ENABLE              (IRQ_TABLE_START + 0x00000060u)

// #define INTRCAN0REC_ENABLE              (IRQ_TABLE_START + 0x00000064u)

// #define INTRCAN0TRX_ENABLE              (IRQ_TABLE_START + 0x00000068u)

// #define INTCSIG0IC_ENABLE               (IRQ_TABLE_START + 0x0000006Cu)

// #define INTCSIH1IRE_1_ENABLE            (IRQ_TABLE_START + 0x0000006Cu)

 
#ifndef INTCSIG0IC_ENABLE              
  #define INTCSIG0IC_ENABLE               0x00000000u
#endif
#ifndef INTCSIH1IRE_1_ENABLE           
  #define INTCSIH1IRE_1_ENABLE            0x00000000u
#endif
// #define INTCSIG0IR_ENABLE               (IRQ_TABLE_START + 0x00000070u)

// #define INTCSIH1IJC_1_ENABLE            (IRQ_TABLE_START + 0x00000070u)

 
#ifndef INTCSIG0IR_ENABLE              
  #define INTCSIG0IR_ENABLE               0x00000000u
#endif
#ifndef INTCSIH1IJC_1_ENABLE           
  #define INTCSIH1IJC_1_ENABLE            0x00000000u
#endif
// #define INTCSIH0IC_ENABLE               (IRQ_TABLE_START + 0x00000074u)

// #define INTCSIH0IR_ENABLE               (IRQ_TABLE_START + 0x00000078u)

// #define INTCSIH0IRE_ENABLE              (IRQ_TABLE_START + 0x0000007Cu)

// #define INTCSIH0IJC_ENABLE              (IRQ_TABLE_START + 0x00000080u)

// #define INTADCA0I2_2_ENABLE             (IRQ_TABLE_START + 0x00000080u)

 
#ifndef INTCSIH0IJC_ENABLE             
  #define INTCSIH0IJC_ENABLE              0x00000000u
#endif
#ifndef INTADCA0I2_2_ENABLE            
  #define INTADCA0I2_2_ENABLE             0x00000000u
#endif
// #define INTRLIN30_ENABLE                (IRQ_TABLE_START + 0x00000084u)

// #define INTRLIN30UR0_ENABLE             (IRQ_TABLE_START + 0x00000088u)

// #define INTRLIN30UR1_ENABLE             (IRQ_TABLE_START + 0x0000008Cu)

// #define INTRLIN30UR2_ENABLE             (IRQ_TABLE_START + 0x00000090u)

// #define INTP0_ENABLE                    (IRQ_TABLE_START + 0x00000094u)

// #define INTP1_ENABLE                    (IRQ_TABLE_START + 0x00000098u)

// #define INTP2_ENABLE                    (IRQ_TABLE_START + 0x0000009Cu)

// #define INTWDTA0_ENABLE                 (IRQ_TABLE_START + 0x000000A0u)

// #define INTWDTA1_ENABLE                 (IRQ_TABLE_START + 0x000000A4u)

// #define INTWDTA2_ENABLE                 (IRQ_TABLE_START + 0x000000A8u)

// #define INTP3_ENABLE                    (IRQ_TABLE_START + 0x000000ACu)

// #define INTP4_ENABLE                    (IRQ_TABLE_START + 0x000000B0u)

// #define INTP5_ENABLE                    (IRQ_TABLE_START + 0x000000B4u)

// #define INTP10_ENABLE                   (IRQ_TABLE_START + 0x000000B8u)

// #define INTP11_ENABLE                   (IRQ_TABLE_START + 0x000000BCu)

// #define INTTAUD0I1_ENABLE               (IRQ_TABLE_START + 0x000000C0u)

// #define INTTAUD0I3_ENABLE               (IRQ_TABLE_START + 0x000000C4u)

// #define INTTAUD0I5_ENABLE               (IRQ_TABLE_START + 0x000000C8u)

// #define INTTAUD0I7_ENABLE               (IRQ_TABLE_START + 0x000000CCu)

// #define INTTAUD0I9_ENABLE               (IRQ_TABLE_START + 0x000000D0u)

// #define INTTAUD0I11_ENABLE              (IRQ_TABLE_START + 0x000000D4u)

// #define INTTAUD0I13_ENABLE              (IRQ_TABLE_START + 0x000000D8u)

// #define INTTAUD0I15_ENABLE              (IRQ_TABLE_START + 0x000000DCu)

// #define INTADCA0ERR_ENABLE              (IRQ_TABLE_START + 0x000000E0u)

// #define INTCSIG0IRE_ENABLE              (IRQ_TABLE_START + 0x000000E4u)

// #define INTRLIN20_ENABLE                (IRQ_TABLE_START + 0x000000E8u)

// #define INTRLIN21_ENABLE                (IRQ_TABLE_START + 0x000000ECu)

// #define INTDMA0_ENABLE                  (IRQ_TABLE_START + 0x000000F0u)

// #define INTDMA1_ENABLE                  (IRQ_TABLE_START + 0x000000F4u)

// #define INTDMA2_ENABLE                  (IRQ_TABLE_START + 0x000000F8u)

// #define INTDMA3_ENABLE                  (IRQ_TABLE_START + 0x000000FCu)

// #define INTDMA4_ENABLE                  (IRQ_TABLE_START + 0x00000100u)

// #define INTDMA5_ENABLE                  (IRQ_TABLE_START + 0x00000104u)

// #define INTDMA6_ENABLE                  (IRQ_TABLE_START + 0x00000108u)

// #define INTDMA7_ENABLE                  (IRQ_TABLE_START + 0x0000010Cu)

// #define INTDMA8_ENABLE                  (IRQ_TABLE_START + 0x00000110u)

// #define INTDMA9_ENABLE                  (IRQ_TABLE_START + 0x00000114u)

// #define INTDMA10_ENABLE                 (IRQ_TABLE_START + 0x00000118u)

// #define INTDMA11_ENABLE                 (IRQ_TABLE_START + 0x0000011Cu)

// #define INTDMA12_ENABLE                 (IRQ_TABLE_START + 0x00000120u)

// #define INTDMA13_ENABLE                 (IRQ_TABLE_START + 0x00000124u)

// #define INTDMA14_ENABLE                 (IRQ_TABLE_START + 0x00000128u)

// #define INTDMA15_ENABLE                 (IRQ_TABLE_START + 0x0000012Cu)

// #define INTRIIC0TI_ENABLE               (IRQ_TABLE_START + 0x00000130u)

// #define INTRIIC0TEI_ENABLE              (IRQ_TABLE_START + 0x00000134u)

// #define INTRIIC0RI_ENABLE               (IRQ_TABLE_START + 0x00000138u)

// #define INTRIIC0EE_ENABLE               (IRQ_TABLE_START + 0x0000013Cu)

// #define INTTAUJ0I0_ENABLE               (IRQ_TABLE_START + 0x00000140u)

// #define INTTAUJ0I1_ENABLE               (IRQ_TABLE_START + 0x00000144u)

// #define INTTAUJ0I2_ENABLE               (IRQ_TABLE_START + 0x00000148u)

// #define INTTAUJ0I3_ENABLE               (IRQ_TABLE_START + 0x0000014Cu)

// #define INTOSTM0_1_ENABLE               (IRQ_TABLE_START + 0x00000150u)

// #define INTENCA0IOV_ENABLE              (IRQ_TABLE_START + 0x00000154u)

// #define INTPWGA4_ENABLE                 (IRQ_TABLE_START + 0x00000154u)

 
#ifndef INTENCA0IOV_ENABLE             
  #define INTENCA0IOV_ENABLE              0x00000000u
#endif
#ifndef INTPWGA4_ENABLE                
  #define INTPWGA4_ENABLE                 0x00000000u
#endif
// #define INTENCA0IUD_ENABLE              (IRQ_TABLE_START + 0x00000158u)

// #define INTPWGA5_ENABLE                 (IRQ_TABLE_START + 0x00000158u)

 
#ifndef INTENCA0IUD_ENABLE             
  #define INTENCA0IUD_ENABLE              0x00000000u
#endif
#ifndef INTPWGA5_ENABLE                
  #define INTPWGA5_ENABLE                 0x00000000u
#endif
// #define INTPWGA6_ENABLE                 (IRQ_TABLE_START + 0x0000015Cu)

// #define INTENCA0I0_ENABLE               (IRQ_TABLE_START + 0x0000015Cu)

 
#ifndef INTPWGA6_ENABLE                
  #define INTPWGA6_ENABLE                 0x00000000u
#endif
#ifndef INTENCA0I0_ENABLE              
  #define INTENCA0I0_ENABLE               0x00000000u
#endif
// #define INTPWGA7_ENABLE                 (IRQ_TABLE_START + 0x00000160u)

// #define INTENCA0I1_ENABLE               (IRQ_TABLE_START + 0x00000160u)

 
#ifndef INTPWGA7_ENABLE                
  #define INTPWGA7_ENABLE                 0x00000000u
#endif
#ifndef INTENCA0I1_ENABLE              
  #define INTENCA0I1_ENABLE               0x00000000u
#endif
// #define INTENCA0IEC_ENABLE              (IRQ_TABLE_START + 0x00000164u)

// #define INTKR0_ENABLE                   (IRQ_TABLE_START + 0x00000168u)

// #define INTQFULL_ENABLE                 (IRQ_TABLE_START + 0x0000016Cu)

// #define INTPWGA0_ENABLE                 (IRQ_TABLE_START + 0x00000170u)

// #define INTPWGA1_ENABLE                 (IRQ_TABLE_START + 0x00000174u)

// #define INTPWGA2_ENABLE                 (IRQ_TABLE_START + 0x00000178u)

// #define INTPWGA3_ENABLE                 (IRQ_TABLE_START + 0x0000017Cu)

// #define INTPWGA8_ENABLE                 (IRQ_TABLE_START + 0x00000180u)

// #define INTPWGA9_ENABLE                 (IRQ_TABLE_START + 0x00000184u)

// #define INTPWGA10_ENABLE                (IRQ_TABLE_START + 0x00000188u)

// #define INTPWGA11_ENABLE                (IRQ_TABLE_START + 0x0000018Cu)

// #define INTPWGA12_ENABLE                (IRQ_TABLE_START + 0x00000190u)

// #define INTPWGA13_ENABLE                (IRQ_TABLE_START + 0x00000194u)

// #define INTPWGA14_ENABLE                (IRQ_TABLE_START + 0x00000198u)

// #define INTPWGA15_ENABLE                (IRQ_TABLE_START + 0x0000019Cu)

// #define INTFLERR_ENABLE                 (IRQ_TABLE_START + 0x000001B8u)

// #define INTFLENDNM_ENABLE               (IRQ_TABLE_START + 0x000001BCu)

// #define INTCWEND_ENABLE                 (IRQ_TABLE_START + 0x000001C0u)

// #define INTRCAN1ERR_ENABLE              (IRQ_TABLE_START + 0x000001C4u)

// #define INTRCAN1REC_ENABLE              (IRQ_TABLE_START + 0x000001C8u)

// #define INTRCAN1TRX_ENABLE              (IRQ_TABLE_START + 0x000001CCu)

// #define INTTAPA0IPEK0_2_ENABLE          (IRQ_TABLE_START + 0x000001D0u)

// #define INTCSIH1IC_ENABLE               (IRQ_TABLE_START + 0x000001D0u)

 
#ifndef INTTAPA0IPEK0_2_ENABLE         
  #define INTTAPA0IPEK0_2_ENABLE          0x00000000u
#endif
#ifndef INTCSIH1IC_ENABLE              
  #define INTCSIH1IC_ENABLE               0x00000000u
#endif
// #define INTTAPA0IVLY0_2_ENABLE          (IRQ_TABLE_START + 0x000001D4u)

// #define INTCSIH1IR_ENABLE               (IRQ_TABLE_START + 0x000001D4u)

 
#ifndef INTTAPA0IVLY0_2_ENABLE         
  #define INTTAPA0IVLY0_2_ENABLE          0x00000000u
#endif
#ifndef INTCSIH1IR_ENABLE              
  #define INTCSIH1IR_ENABLE               0x00000000u
#endif
// #define INTCSIH1IRE_ENABLE              (IRQ_TABLE_START + 0x000001D8u)

// #define INTCSIG0IC_2_ENABLE             (IRQ_TABLE_START + 0x000001D8u)

 
#ifndef INTCSIH1IRE_ENABLE             
  #define INTCSIH1IRE_ENABLE              0x00000000u
#endif
#ifndef INTCSIG0IC_2_ENABLE            
  #define INTCSIG0IC_2_ENABLE             0x00000000u
#endif
// #define INTCSIG0IR_2_ENABLE             (IRQ_TABLE_START + 0x000001DCu)

// #define INTCSIH1IJC_ENABLE              (IRQ_TABLE_START + 0x000001DCu)

 
#ifndef INTCSIG0IR_2_ENABLE            
  #define INTCSIG0IR_2_ENABLE             0x00000000u
#endif
#ifndef INTCSIH1IJC_ENABLE             
  #define INTCSIH1IJC_ENABLE              0x00000000u
#endif
// #define INTRLIN31_ENABLE                (IRQ_TABLE_START + 0x000001E0u)

// #define INTRLIN31UR0_ENABLE             (IRQ_TABLE_START + 0x000001E4u)

// #define INTRLIN31UR1_ENABLE             (IRQ_TABLE_START + 0x000001E8u)

// #define INTRLIN31UR2_ENABLE             (IRQ_TABLE_START + 0x000001ECu)

// #define INTPWGA20_ENABLE                (IRQ_TABLE_START + 0x000001F0u)

// #define INTPWGA21_ENABLE                (IRQ_TABLE_START + 0x000001F4u)

// #define INTPWGA22_ENABLE                (IRQ_TABLE_START + 0x000001F8u)

// #define INTPWGA23_ENABLE                (IRQ_TABLE_START + 0x000001FCu)

// #define INTP6_ENABLE                    (IRQ_TABLE_START + 0x00000200u)

// #define INTP7_ENABLE                    (IRQ_TABLE_START + 0x00000204u)

// #define INTP8_ENABLE                    (IRQ_TABLE_START + 0x00000208u)

// #define INTP12_ENABLE                   (IRQ_TABLE_START + 0x0000020Cu)

// #define INTCSIH2IC_ENABLE               (IRQ_TABLE_START + 0x00000210u)

// #define INTTAUD0I0_2_ENABLE             (IRQ_TABLE_START + 0x00000210u)

 
#ifndef INTCSIH2IC_ENABLE              
  #define INTCSIH2IC_ENABLE               0x00000000u
#endif
#ifndef INTTAUD0I0_2_ENABLE            
  #define INTTAUD0I0_2_ENABLE             0x00000000u
#endif
// #define INTTAUD0I4_2_ENABLE             (IRQ_TABLE_START + 0x00000214u)

// #define INTCSIH2IR_ENABLE               (IRQ_TABLE_START + 0x00000214u)

 
#ifndef INTTAUD0I4_2_ENABLE            
  #define INTTAUD0I4_2_ENABLE             0x00000000u
#endif
#ifndef INTCSIH2IR_ENABLE              
  #define INTCSIH2IR_ENABLE               0x00000000u
#endif
// #define INTTAUD0I6_2_ENABLE             (IRQ_TABLE_START + 0x00000218u)

// #define INTCSIH2IRE_ENABLE              (IRQ_TABLE_START + 0x00000218u)

 
#ifndef INTTAUD0I6_2_ENABLE            
  #define INTTAUD0I6_2_ENABLE             0x00000000u
#endif
#ifndef INTCSIH2IRE_ENABLE             
  #define INTCSIH2IRE_ENABLE              0x00000000u
#endif
// #define INTCSIH2IJC_ENABLE              (IRQ_TABLE_START + 0x0000021Cu)

// #define INTTAUD0I8_2_ENABLE             (IRQ_TABLE_START + 0x0000021Cu)

 
#ifndef INTCSIH2IJC_ENABLE             
  #define INTCSIH2IJC_ENABLE              0x00000000u
#endif
#ifndef INTTAUD0I8_2_ENABLE            
  #define INTTAUD0I8_2_ENABLE             0x00000000u
#endif
// #define INTTAUB0I0_ENABLE               (IRQ_TABLE_START + 0x00000238u)

// #define INTTAUB0I1_ENABLE               (IRQ_TABLE_START + 0x0000023Cu)

// #define INTTAUB0I2_ENABLE               (IRQ_TABLE_START + 0x00000240u)

// #define INTPWGA16_ENABLE                (IRQ_TABLE_START + 0x00000244u)

// #define INTTAUB0I3_ENABLE               (IRQ_TABLE_START + 0x00000244u)

 
#ifndef INTPWGA16_ENABLE               
  #define INTPWGA16_ENABLE                0x00000000u
#endif
#ifndef INTTAUB0I3_ENABLE              
  #define INTTAUB0I3_ENABLE               0x00000000u
#endif
// #define INTTAUB0I4_ENABLE               (IRQ_TABLE_START + 0x00000248u)

// #define INTPWGA17_ENABLE                (IRQ_TABLE_START + 0x0000024Cu)

// #define INTTAUB0I5_ENABLE               (IRQ_TABLE_START + 0x0000024Cu)

 
#ifndef INTPWGA17_ENABLE               
  #define INTPWGA17_ENABLE                0x00000000u
#endif
#ifndef INTTAUB0I5_ENABLE              
  #define INTTAUB0I5_ENABLE               0x00000000u
#endif
// #define INTTAUB0I6_ENABLE               (IRQ_TABLE_START + 0x00000250u)

// #define INTPWGA18_ENABLE                (IRQ_TABLE_START + 0x00000254u)

// #define INTTAUB0I7_ENABLE               (IRQ_TABLE_START + 0x00000254u)

 
#ifndef INTPWGA18_ENABLE               
  #define INTPWGA18_ENABLE                0x00000000u
#endif
#ifndef INTTAUB0I7_ENABLE              
  #define INTTAUB0I7_ENABLE               0x00000000u
#endif
// #define INTTAUB0I8_ENABLE               (IRQ_TABLE_START + 0x00000258u)

// #define INTPWGA19_ENABLE                (IRQ_TABLE_START + 0x0000025Cu)

// #define INTTAUB0I9_ENABLE               (IRQ_TABLE_START + 0x0000025Cu)

 
#ifndef INTPWGA19_ENABLE               
  #define INTPWGA19_ENABLE                0x00000000u
#endif
#ifndef INTTAUB0I9_ENABLE              
  #define INTTAUB0I9_ENABLE               0x00000000u
#endif
// #define INTTAUB0I10_ENABLE              (IRQ_TABLE_START + 0x00000260u)

// #define INTTAUB0I11_ENABLE              (IRQ_TABLE_START + 0x00000264u)

// #define INTPWGA26_ENABLE                (IRQ_TABLE_START + 0x00000264u)

 
#ifndef INTTAUB0I11_ENABLE             
  #define INTTAUB0I11_ENABLE              0x00000000u
#endif
#ifndef INTPWGA26_ENABLE               
  #define INTPWGA26_ENABLE                0x00000000u
#endif
// #define INTTAUB0I12_ENABLE              (IRQ_TABLE_START + 0x00000268u)

// #define INTPWGA30_ENABLE                (IRQ_TABLE_START + 0x0000026Cu)

// #define INTTAUB0I13_ENABLE              (IRQ_TABLE_START + 0x0000026Cu)

 
#ifndef INTPWGA30_ENABLE               
  #define INTPWGA30_ENABLE                0x00000000u
#endif
#ifndef INTTAUB0I13_ENABLE             
  #define INTTAUB0I13_ENABLE              0x00000000u
#endif
// #define INTTAUB0I14_ENABLE              (IRQ_TABLE_START + 0x00000270u)

// #define INTTAUB0I15_ENABLE              (IRQ_TABLE_START + 0x00000274u)

// #define INTPWGA31_ENABLE                (IRQ_TABLE_START + 0x00000274u)

 
#ifndef INTTAUB0I15_ENABLE             
  #define INTTAUB0I15_ENABLE              0x00000000u
#endif
#ifndef INTPWGA31_ENABLE               
  #define INTPWGA31_ENABLE                0x00000000u
#endif
// #define INTTAUD0I2_2_ENABLE             (IRQ_TABLE_START + 0x00000278u)

// #define INTCSIH3IC_ENABLE               (IRQ_TABLE_START + 0x00000278u)

 
#ifndef INTTAUD0I2_2_ENABLE            
  #define INTTAUD0I2_2_ENABLE             0x00000000u
#endif
#ifndef INTCSIH3IC_ENABLE              
  #define INTCSIH3IC_ENABLE               0x00000000u
#endif
// #define INTCSIH3IR_ENABLE               (IRQ_TABLE_START + 0x0000027Cu)

// #define INTTAUD0I10_2_ENABLE            (IRQ_TABLE_START + 0x0000027Cu)

 
#ifndef INTCSIH3IR_ENABLE              
  #define INTCSIH3IR_ENABLE               0x00000000u
#endif
#ifndef INTTAUD0I10_2_ENABLE           
  #define INTTAUD0I10_2_ENABLE            0x00000000u
#endif
// #define INTCSIH3IRE_ENABLE              (IRQ_TABLE_START + 0x00000280u)

// #define INTTAUD0I12_2_ENABLE            (IRQ_TABLE_START + 0x00000280u)

 
#ifndef INTCSIH3IRE_ENABLE             
  #define INTCSIH3IRE_ENABLE              0x00000000u
#endif
#ifndef INTTAUD0I12_2_ENABLE           
  #define INTTAUD0I12_2_ENABLE            0x00000000u
#endif
// #define INTTAUD0I14_2_ENABLE            (IRQ_TABLE_START + 0x00000284u)

// #define INTCSIH3IJC_ENABLE              (IRQ_TABLE_START + 0x00000284u)

 
#ifndef INTTAUD0I14_2_ENABLE           
  #define INTTAUD0I14_2_ENABLE            0x00000000u
#endif
#ifndef INTCSIH3IJC_ENABLE             
  #define INTCSIH3IJC_ENABLE              0x00000000u
#endif
// #define INTRLIN22_ENABLE                (IRQ_TABLE_START + 0x00000288u)

// #define INTRLIN23_ENABLE                (IRQ_TABLE_START + 0x0000028Cu)

// #define INTRLIN32_ENABLE                (IRQ_TABLE_START + 0x00000290u)

// #define INTRLIN32UR0_ENABLE             (IRQ_TABLE_START + 0x00000294u)

// #define INTRLIN32UR1_ENABLE             (IRQ_TABLE_START + 0x00000298u)

// #define INTRLIN32UR2_ENABLE             (IRQ_TABLE_START + 0x0000029Cu)

// #define INTTAUJ1I0_ENABLE               (IRQ_TABLE_START + 0x000002A0u)

// #define INTTAUJ1I1_ENABLE               (IRQ_TABLE_START + 0x000002A4u)

// #define INTTAUJ1I2_ENABLE               (IRQ_TABLE_START + 0x000002A8u)

// #define INTTAUJ1I3_ENABLE               (IRQ_TABLE_START + 0x000002ACu)

// #define INTFLXA0FDA_ENABLE              (IRQ_TABLE_START + 0x000002B4u)

// #define INTFLXA0FW_ENABLE               (IRQ_TABLE_START + 0x000002B8u)

// #define INTFLXA0IQE_ENABLE              (IRQ_TABLE_START + 0x000002BCu)

// #define INTFLXA0IQF_ENABLE              (IRQ_TABLE_START + 0x000002C0u)

// #define INTFLXA0OT_ENABLE               (IRQ_TABLE_START + 0x000002C4u)

// #define INTFLXA0OW_ENABLE               (IRQ_TABLE_START + 0x000002C8u)

// #define INTFLXA0LINE0_ENABLE            (IRQ_TABLE_START + 0x000002CCu)

// #define INTFLXA0LINE1_ENABLE            (IRQ_TABLE_START + 0x000002D0u)

// #define INTFLXA0TIM0_ENABLE             (IRQ_TABLE_START + 0x000002D4u)

// #define INTFLXA0TIM1_ENABLE             (IRQ_TABLE_START + 0x000002D8u)

// #define INTFLXA0TIM2_ENABLE             (IRQ_TABLE_START + 0x000002DCu)

// #define INTPWGA24_ENABLE                (IRQ_TABLE_START + 0x000002E0u)

// #define INTPWGA25_ENABLE                (IRQ_TABLE_START + 0x000002E4u)

// #define INTPWGA27_ENABLE                (IRQ_TABLE_START + 0x000002E8u)

// #define INTPWGA28_ENABLE                (IRQ_TABLE_START + 0x000002ECu)

// #define INTPWGA29_ENABLE                (IRQ_TABLE_START + 0x000002F0u)

// #define INTPWGA32_ENABLE                (IRQ_TABLE_START + 0x000002F4u)

// #define INTPWGA33_ENABLE                (IRQ_TABLE_START + 0x000002F8u)

// #define INTPWGA34_ENABLE                (IRQ_TABLE_START + 0x000002FCu)

// #define INTPWGA35_ENABLE                (IRQ_TABLE_START + 0x00000300u)

// #define INTPWGA36_ENABLE                (IRQ_TABLE_START + 0x00000304u)

// #define INTPWGA37_ENABLE                (IRQ_TABLE_START + 0x00000308u)

// #define INTPWGA38_ENABLE                (IRQ_TABLE_START + 0x0000030Cu)

// #define INTPWGA39_ENABLE                (IRQ_TABLE_START + 0x00000310u)

// #define INTPWGA40_ENABLE                (IRQ_TABLE_START + 0x00000314u)

// #define INTPWGA41_ENABLE                (IRQ_TABLE_START + 0x00000318u)

// #define INTPWGA42_ENABLE                (IRQ_TABLE_START + 0x0000031Cu)

// #define INTPWGA43_ENABLE                (IRQ_TABLE_START + 0x00000320u)

// #define INTPWGA44_ENABLE                (IRQ_TABLE_START + 0x00000324u)

// #define INTPWGA45_ENABLE                (IRQ_TABLE_START + 0x00000328u)

// #define INTPWGA46_ENABLE                (IRQ_TABLE_START + 0x0000032Cu)

// #define INTPWGA47_ENABLE                (IRQ_TABLE_START + 0x00000330u)

// #define INTP9_ENABLE                    (IRQ_TABLE_START + 0x00000334u)

// #define INTP13_ENABLE                   (IRQ_TABLE_START + 0x00000338u)

// #define INTP14_ENABLE                   (IRQ_TABLE_START + 0x0000033Cu)

// #define INTP15_ENABLE                   (IRQ_TABLE_START + 0x00000340u)

// #define INTRTCA01S_ENABLE               (IRQ_TABLE_START + 0x00000344u)

// #define INTRTCA0AL_ENABLE               (IRQ_TABLE_START + 0x00000348u)

// #define INTRTCA0R_ENABLE                (IRQ_TABLE_START + 0x0000034Cu)

// #define INTADCA1ERR_ENABLE              (IRQ_TABLE_START + 0x00000350u)

// #define INTADCA1I0_ENABLE               (IRQ_TABLE_START + 0x00000354u)

// #define INTADCA1I1_ENABLE               (IRQ_TABLE_START + 0x00000358u)

// #define INTADCA1I2_ENABLE               (IRQ_TABLE_START + 0x0000035Cu)

// #define INTRCAN2ERR_ENABLE              (IRQ_TABLE_START + 0x00000364u)

// #define INTRCAN2REC_ENABLE              (IRQ_TABLE_START + 0x00000368u)

// #define INTRCAN2TRX_ENABLE              (IRQ_TABLE_START + 0x0000036Cu)

// #define INTRCAN3ERR_ENABLE              (IRQ_TABLE_START + 0x00000370u)

// #define INTRCAN3REC_ENABLE              (IRQ_TABLE_START + 0x00000374u)

// #define INTRCAN3TRX_ENABLE              (IRQ_TABLE_START + 0x00000378u)

// #define INTCSIG1IC_ENABLE               (IRQ_TABLE_START + 0x0000037Cu)

// #define INTCSIG1IR_ENABLE               (IRQ_TABLE_START + 0x00000380u)

// #define INTCSIG1IRE_ENABLE              (IRQ_TABLE_START + 0x00000384u)

// #define INTRLIN24_ENABLE                (IRQ_TABLE_START + 0x00000388u)

// #define INTRLIN25_ENABLE                (IRQ_TABLE_START + 0x0000038Cu)

// #define INTRLIN33_ENABLE                (IRQ_TABLE_START + 0x00000390u)

// #define INTRLIN33UR0_ENABLE             (IRQ_TABLE_START + 0x00000394u)

// #define INTRLIN33UR1_ENABLE             (IRQ_TABLE_START + 0x00000398u)

// #define INTRLIN33UR2_ENABLE             (IRQ_TABLE_START + 0x0000039Cu)

// #define INTRLIN34_ENABLE                (IRQ_TABLE_START + 0x000003A0u)

// #define INTRLIN34UR0_ENABLE             (IRQ_TABLE_START + 0x000003A4u)

// #define INTRLIN34UR1_ENABLE             (IRQ_TABLE_START + 0x000003A8u)

// #define INTRLIN34UR2_ENABLE             (IRQ_TABLE_START + 0x000003ACu)

// #define INTRLIN35_ENABLE                (IRQ_TABLE_START + 0x000003B0u)

// #define INTRLIN35UR0_ENABLE             (IRQ_TABLE_START + 0x000003B4u)

// #define INTRLIN35UR1_ENABLE             (IRQ_TABLE_START + 0x000003B8u)

// #define INTRLIN35UR2_ENABLE             (IRQ_TABLE_START + 0x000003BCu)

// #define INTPWGA48_ENABLE                (IRQ_TABLE_START + 0x000003C0u)

// #define INTPWGA49_ENABLE                (IRQ_TABLE_START + 0x000003C4u)

// #define INTPWGA50_ENABLE                (IRQ_TABLE_START + 0x000003C8u)

// #define INTPWGA51_ENABLE                (IRQ_TABLE_START + 0x000003CCu)

// #define INTPWGA52_ENABLE                (IRQ_TABLE_START + 0x000003D0u)

// #define INTPWGA53_ENABLE                (IRQ_TABLE_START + 0x000003D4u)

// #define INTPWGA54_ENABLE                (IRQ_TABLE_START + 0x000003D8u)

// #define INTPWGA55_ENABLE                (IRQ_TABLE_START + 0x000003DCu)

// #define INTPWGA56_ENABLE                (IRQ_TABLE_START + 0x000003E0u)

// #define INTPWGA57_ENABLE                (IRQ_TABLE_START + 0x000003E4u)

// #define INTPWGA58_ENABLE                (IRQ_TABLE_START + 0x000003E8u)

// #define INTPWGA59_ENABLE                (IRQ_TABLE_START + 0x000003ECu)

// #define INTPWGA60_ENABLE                (IRQ_TABLE_START + 0x000003F0u)

// #define INTPWGA61_ENABLE                (IRQ_TABLE_START + 0x000003F4u)

// #define INTPWGA62_ENABLE                (IRQ_TABLE_START + 0x000003F8u)

// #define INTPWGA63_ENABLE                (IRQ_TABLE_START + 0x000003FCu)

// #define INTTAUB1I0_ENABLE               (IRQ_TABLE_START + 0x00000400u)

// #define INTTAUB1I1_ENABLE               (IRQ_TABLE_START + 0x00000404u)

// #define INTTAUB1I2_ENABLE               (IRQ_TABLE_START + 0x00000408u)

// #define INTTAUB1I3_ENABLE               (IRQ_TABLE_START + 0x0000040Cu)

// #define INTTAUB1I4_ENABLE               (IRQ_TABLE_START + 0x00000410u)

// #define INTTAUB1I5_ENABLE               (IRQ_TABLE_START + 0x00000414u)

// #define INTTAUB1I6_ENABLE               (IRQ_TABLE_START + 0x00000418u)

// #define INTTAUB1I7_ENABLE               (IRQ_TABLE_START + 0x0000041Cu)

// #define INTTAUB1I8_ENABLE               (IRQ_TABLE_START + 0x00000420u)

// #define INTTAUB1I9_ENABLE               (IRQ_TABLE_START + 0x00000424u)

// #define INTTAUB1I10_ENABLE              (IRQ_TABLE_START + 0x00000428u)

// #define INTTAUB1I11_ENABLE              (IRQ_TABLE_START + 0x0000042Cu)

// #define INTTAUB1I12_ENABLE              (IRQ_TABLE_START + 0x00000430u)

// #define INTTAUB1I13_ENABLE              (IRQ_TABLE_START + 0x00000434u)

// #define INTTAUB1I14_ENABLE              (IRQ_TABLE_START + 0x00000438u)

// #define INTTAUB1I15_ENABLE              (IRQ_TABLE_START + 0x0000043Cu)

// #define INTRCAN4ERR_ENABLE              (IRQ_TABLE_START + 0x00000440u)

// #define INTRCAN4REC_ENABLE              (IRQ_TABLE_START + 0x00000444u)

// #define INTRCAN4TRX_ENABLE              (IRQ_TABLE_START + 0x00000448u)

// #define INTRLIN26_ENABLE                (IRQ_TABLE_START + 0x0000044Cu)

// #define INTRLIN27_ENABLE                (IRQ_TABLE_START + 0x00000450u)

// #define INTPWGA64_ENABLE                (IRQ_TABLE_START + 0x00000454u)

// #define INTPWGA65_ENABLE                (IRQ_TABLE_START + 0x00000458u)

// #define INTPWGA66_ENABLE                (IRQ_TABLE_START + 0x0000045Cu)

// #define INTPWGA67_ENABLE                (IRQ_TABLE_START + 0x00000460u)

// #define INTPWGA68_ENABLE                (IRQ_TABLE_START + 0x00000464u)

// #define INTPWGA69_ENABLE                (IRQ_TABLE_START + 0x00000468u)

// #define INTPWGA70_ENABLE                (IRQ_TABLE_START + 0x0000046Cu)

// #define INTPWGA71_ENABLE                (IRQ_TABLE_START + 0x00000470u)

// #define INTRLIN28_ENABLE                (IRQ_TABLE_START + 0x00000474u)

// #define INTRLIN29_ENABLE                (IRQ_TABLE_START + 0x00000478u)

// #define INTRCAN5ERR_ENABLE              (IRQ_TABLE_START + 0x0000047Cu)

// #define INTRCAN5REC_ENABLE              (IRQ_TABLE_START + 0x00000480u)

// #define INTRCAN5TRX_ENABLE              (IRQ_TABLE_START + 0x00000484u)

// #define INTDMA16_ENABLE                 (IRQ_TABLE_START + 0x000004A8u)

// #define INTDMA17_ENABLE                 (IRQ_TABLE_START + 0x000004ACu)

// #define INTDMA18_ENABLE                 (IRQ_TABLE_START + 0x000004B0u)

// #define INTDMA19_ENABLE                 (IRQ_TABLE_START + 0x000004B4u)

// #define INTDMA20_ENABLE                 (IRQ_TABLE_START + 0x000004B8u)

// #define INTDMA21_ENABLE                 (IRQ_TABLE_START + 0x000004BCu)

// #define INTDMA22_ENABLE                 (IRQ_TABLE_START + 0x000004C0u)

// #define INTDMA23_ENABLE                 (IRQ_TABLE_START + 0x000004C4u)

// #define INTDMA24_ENABLE                 (IRQ_TABLE_START + 0x000004C8u)

// #define INTDMA25_ENABLE                 (IRQ_TABLE_START + 0x000004CCu)

// #define INTDMA26_ENABLE                 (IRQ_TABLE_START + 0x000004D0u)

// #define INTDMA27_ENABLE                 (IRQ_TABLE_START + 0x000004D4u)

// #define INTDMA28_ENABLE                 (IRQ_TABLE_START + 0x000004D8u)

// #define INTDMA29_ENABLE                 (IRQ_TABLE_START + 0x000004DCu)

// #define INTDMA30_ENABLE                 (IRQ_TABLE_START + 0x000004E0u)

// #define INTDMA31_ENABLE                 (IRQ_TABLE_START + 0x000004E4u)

// #define INTOSTM5_1_ENABLE               (IRQ_TABLE_START + 0x000004E8u)

// #define INTETNB0DATA_ENABLE             (IRQ_TABLE_START + 0x000004ECu)

// #define INTETNB0ERR_ENABLE              (IRQ_TABLE_START + 0x000004F0u)

// #define INTETNB0MNG_ENABLE              (IRQ_TABLE_START + 0x000004F4u)

// #define INTETNB0MAC_ENABLE              (IRQ_TABLE_START + 0x000004F8u)

// #define INTRCANGERR1_ENABLE             (IRQ_TABLE_START + 0x000004FCu)

// #define INTRCANGRECC1_ENABLE            (IRQ_TABLE_START + 0x00000500u)

// #define INTRCAN6ERR_ENABLE              (IRQ_TABLE_START + 0x00000504u)

// #define INTRCAN6REC_ENABLE              (IRQ_TABLE_START + 0x00000508u)

// #define INTRCAN6TRX_ENABLE              (IRQ_TABLE_START + 0x0000050Cu)

// #define INTCSIG2IC_ENABLE               (IRQ_TABLE_START + 0x00000518u)

// #define INTCSIG2IR_ENABLE               (IRQ_TABLE_START + 0x0000051Cu)

// #define INTCSIG2IRE_ENABLE              (IRQ_TABLE_START + 0x00000520u)

// #define INTCSIG3IC_ENABLE               (IRQ_TABLE_START + 0x00000524u)

// #define INTCSIG3IR_ENABLE               (IRQ_TABLE_START + 0x00000528u)

// #define INTCSIG3IRE_ENABLE              (IRQ_TABLE_START + 0x0000052Cu)



#endif /* __R7F701503xAFP_IRQ_H */
