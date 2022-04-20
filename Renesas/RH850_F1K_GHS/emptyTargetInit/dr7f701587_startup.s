-------------------------------------------------------------------------------
-- Module      = dr7f701587_startup.850
-- Version     = E1.00d
--               extracted from device file dr7f701587.dvf 
--               by DeFiXRH850 0.8.0.0
-------------------------------------------------------------------------------
--                                  COPYRIGHT
-------------------------------------------------------------------------------
-- Copyright (c) 2015 by Renesas Electronics Europe GmbH,
--               a company of the Renesas Electronics Corporation
-------------------------------------------------------------------------------
-- Purpose:      Startup Code
--
-------------------------------------------------------------------------------
--
-- Warranty Disclaimer
--
-- Because the Product(s) is licensed free of charge, there is no warranty
-- of any kind whatsoever and expressly disclaimed and excluded by Renesas,
-- either expressed or implied, including but not limited to those for
-- non-infringement of intellectual property, merchantability and/or
-- fitness for the particular purpose.
-- Renesas shall not have any obligation to maintain, service or provide bug
-- fixes for the supplied Product(s) and/or the Application.
--
-- Each User is solely responsible for determining the appropriateness of
-- using the Product(s) and assumes all risks associated with its exercise
-- of rights under this Agreement, including, but not limited to the risks
-- and costs of program errors, compliance with applicable laws, damage to
-- or loss of data, programs or equipment, and unavailability or
-- interruption of operations.
--
-- Limitation of Liability
--
-- In no event shall Renesas be liable to the User for any incidental,
-- consequential, indirect, or punitive damage (including but not limited
-- to lost profits) regardless of whether such liability is based on breach
-- of contract, tort, strict liability, breach of warranties, failure of
-- essential purpose or otherwise and even if advised of the possibility of
-- such damages. Renesas shall not be liable for any services or products
-- provided by third party vendors, developers or consultants identified or
-- referred to the User by Renesas in connection with the Product(s) and/or
-- the Application.
--
-------------------------------------------------------------------------------
-- Environment:
--              Device:         R7F701587   
--              IDE:            GHS Multi for V800  V6.xx or later
-------------------------------------------------------------------------------

-------------------------------------------------------------------------------
-------------  Selection of external interrupt service handler
-------------  User modifiable section
-------------  Please uncomment the required interrupt service handler
-------------------------------------------------------------------------------
#include <dr7f701587_IRQ.h>

-------------------------------------------------------------------------------
-------------  Basic Initialisation of the controller
-------------  User modifiable section
-------------------------------------------------------------------------------
  .weak	___lowinit
  .set   EBV, 0x8000
  .text
_RESET:
  -- Initialization of the global pointer
  mov     __gp, gp

  -- Initialization of the text pointer
  mov     __tp, r5

  -- Initialization of the stack pointer
  movhi	hi(___ghsend_stack-4),zero,sp
  movea	lo(___ghsend_stack-4),sp,sp
  mov -4,r1
  and r1,sp

  -- Initialization of the interrupt base pointer
  mov __ex_entry + IRQ_TABLE_START,r1
  ldsr r1,intbp,1

  -- First set EBASE register address
  mov __ex_entry, r10
  -- set 0x0 or 0x1 to EBASE.RINT for reduced interrupt 
  -- ori  1, r10
  ldsr r10, EBASE, 1
  -- then set 1 to PSW.EBV -> RBASE!=EBASE
  stsr PSW, r10, 0
  mov  EBV, r11
  or   r11, r10
  ldsr r10, PSW, 0

  -- Jump to the HW initialisation function
  jarl	___lowinit, lp

  -- Jump to the initialisation functions of the library
  -- and from there to main()
  jr __start
-------------------------------------------------------------------------------

-------------------------------------------------------------------------------
-------------  Interrupt service routine of unused interrupts
  .global  __unused_isr
__unused_isr:
  br	__unused_isr
-------------------------------------------------------------------------------

-------------------------------------------------------------------------------
-------------  Add section ".intvect" to your linker command file
-------------  at address 0x0000
-------------
-------------	i.e.	.intvect    0x0000:
-------------------------------------------------------------------------------
.section".intvect",.text

-------------------------------------------------------------------------------
-------------  Initializing of interrupt vector table
-------------  Please don't modify this section
-------------------------------------------------------------------------------

  .global _RESET
  .offset 0x0000
__ex_entry:
  #if (RESET_ENABLE > 0x00000000)
    .extern _RESET
    jr _RESET
  #else
    jr __unused_isr
  #endif

#ifdef __OS_HANDLES__      

/* OS interrupt code can be added here */

#else /* __OS_HANDLES__ */ 

  .offset 0x0010
  #if (SYSERR_ENABLE > 0x00000000)
    .extern _SYSERR
    jr _SYSERR
  #else
    jr __unused_isr
  #endif

  .offset 0x0030
  #if (FETRAPEX_ENABLE > 0x00000000)
    .extern _FETRAPEX
    jr _FETRAPEX
  #else
    jr __unused_isr
  #endif

  .offset 0x0040
  #if (EITRAP0_ENABLE > 0x00000000)
    .extern _EITRAP0
    jr _EITRAP0
  #else
    jr __unused_isr
  #endif

  .offset 0x0050
  #if (EITRAP1_ENABLE > 0x00000000)
    .extern _EITRAP1
    jr _EITRAP1
  #else
    jr __unused_isr
  #endif

  .offset 0x0060
  #if (RIEX_ENABLE > 0x00000000)
    .extern _RIEX
    jr _RIEX
  #else
    jr __unused_isr
  #endif

  .offset 0x0080
  #if (UCPOP_ENABLE > 0x00000000)
    .extern _UCPOP
    jr _UCPOP
  #else
    jr __unused_isr
  #endif

  .offset 0x0090
  #if (MIP_MDP_ENABLE > 0x00000000)
    .extern _MIP_MDP
    jr _MIP_MDP
  #else
    jr __unused_isr
  #endif

  .offset 0x00a0
  #if (PIE_ENABLE > 0x00000000)
    .extern _PIE
    jr _PIE
  #else
    jr __unused_isr
  #endif

  .offset 0x00c0
  #if (MAE_ENABLE > 0x00000000)
    .extern _MAE
    jr _MAE
  #else
    jr __unused_isr
  #endif

  .offset 0x00e0
  #if (FENMI_ENABLE > 0x00000000)
    .extern _FENMI
    jr _FENMI
  #else
    jr __unused_isr
  #endif

  .offset 0x00f0
  #if (FEINT_ENABLE > 0x00000000)
    .extern _FEINT
    jr _FEINT
  #else
    jr __unused_isr
  #endif

  .global _TimerInterruptHandler
  .offset 0x0100
  #if (EINTPRIO_0_ENABLE > 0x00000000)
    .extern _EINTPRIO_0
    jr _EINTPRIO_0
  #else
    jr _TimerInterruptHandler
  #endif

  .offset 0x0110
  #if (EINTPRIO_1_ENABLE > 0x00000000)
    .extern _EINTPRIO_1
    jr _EINTPRIO_1
  #else
    jr __unused_isr
  #endif

  .offset 0x0120
  #if (EINTPRIO_2_ENABLE > 0x00000000)
    .extern _EINTPRIO_2
    jr _EINTPRIO_2
  #else
    jr __unused_isr
  #endif

  .offset 0x0130
  #if (EINTPRIO_3_ENABLE > 0x00000000)
    .extern _EINTPRIO_3
    jr _EINTPRIO_3
  #else
    jr __unused_isr
  #endif

  .offset 0x0140
  #if (EINTPRIO_4_ENABLE > 0x00000000)
    .extern _EINTPRIO_4
    jr _EINTPRIO_4
  #else
    jr __unused_isr
  #endif

  .offset 0x0150
  #if (EINTPRIO_5_ENABLE > 0x00000000)
    .extern _EINTPRIO_5
    jr _EINTPRIO_5
  #else
    jr __unused_isr
  #endif

  .offset 0x0160
  #if (EINTPRIO_6_ENABLE > 0x00000000)
    .extern _EINTPRIO_6
    jr _EINTPRIO_6
  #else
    jr __unused_isr
  #endif

  .offset 0x0170
  #if (EINTPRIO_7_ENABLE > 0x00000000)
    .extern _EINTPRIO_7
    jr _EINTPRIO_7
  #else
    jr __unused_isr
  #endif

  .offset 0x0180
  #if (EINTPRIO_8_ENABLE > 0x00000000)
    .extern _EINTPRIO_8
    jr _EINTPRIO_8
  #else
    jr __unused_isr
  #endif

  .offset 0x0190
  #if (EINTPRIO_9_ENABLE > 0x00000000)
    .extern _EINTPRIO_9
    jr _EINTPRIO_9
  #else
    jr __unused_isr
  #endif

  .offset 0x01a0
  #if (EINTPRIO_10_ENABLE > 0x00000000)
    .extern _EINTPRIO_10
    jr _EINTPRIO_10
  #else
    jr __unused_isr
  #endif

  .offset 0x01b0
  #if (EINTPRIO_11_ENABLE > 0x00000000)
    .extern _EINTPRIO_11
    jr _EINTPRIO_11
  #else
    jr __unused_isr
  #endif

  .offset 0x01c0
  #if (EINTPRIO_12_ENABLE > 0x00000000)
    .extern _EINTPRIO_12
    jr _EINTPRIO_12
  #else
    jr __unused_isr
  #endif

  .offset 0x01d0
  #if (EINTPRIO_13_ENABLE > 0x00000000)
    .extern _EINTPRIO_13
    jr _EINTPRIO_13
  #else
    jr __unused_isr
  #endif

  .offset 0x01e0
  #if (EINTPRIO_14_ENABLE > 0x00000000)
    .extern _EINTPRIO_14
    jr _EINTPRIO_14
  #else
    jr __unused_isr
  #endif

  .offset 0x01f0
  #if (EINTPRIO_15_ENABLE > 0x00000000)
    .extern _EINTPRIO_15
    jr _EINTPRIO_15
  #else
    jr __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0020)
  #if (INTTAUD0I0_ENABLE > 0x00000000)
    .extern _INTTAUD0I0
    .word _INTTAUD0I0
  #endif
  #if (INTCSIH2IC_1_ENABLE > 0x00000000)
    .extern _INTCSIH2IC_1
    .word _INTCSIH2IC_1
  #endif
  #if (  (INTTAUD0I0_ENABLE == 0x00000000)  &&  (INTCSIH2IC_1_ENABLE == 0x00000000) )
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0024)
  #if (INTTAUD0I2_ENABLE > 0x00000000)
    .extern _INTTAUD0I2
    .word _INTTAUD0I2
  #endif
  #if (INTCSIH3IC_1_ENABLE > 0x00000000)
    .extern _INTCSIH3IC_1
    .word _INTCSIH3IC_1
  #endif
  #if (  (INTTAUD0I2_ENABLE == 0x00000000)  &&  (INTCSIH3IC_1_ENABLE == 0x00000000) )
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0028)
  #if (INTTAUD0I4_ENABLE > 0x00000000)
    .extern _INTTAUD0I4
    .word _INTTAUD0I4
  #endif
  #if (INTCSIH2IR_1_ENABLE > 0x00000000)
    .extern _INTCSIH2IR_1
    .word _INTCSIH2IR_1
  #endif
  #if (  (INTTAUD0I4_ENABLE == 0x00000000)  &&  (INTCSIH2IR_1_ENABLE == 0x00000000) )
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x002c)
  #if (INTTAUD0I6_ENABLE > 0x00000000)
    .extern _INTTAUD0I6
    .word _INTTAUD0I6
  #endif
  #if (INTCSIH2IRE_1_ENABLE > 0x00000000)
    .extern _INTCSIH2IRE_1
    .word _INTCSIH2IRE_1
  #endif
  #if (  (INTTAUD0I6_ENABLE == 0x00000000)  &&  (INTCSIH2IRE_1_ENABLE == 0x00000000) )
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0030)
  #if (INTTAUD0I8_ENABLE > 0x00000000)
    .extern _INTTAUD0I8
    .word _INTTAUD0I8
  #endif
  #if (INTCSIH2IJC_1_ENABLE > 0x00000000)
    .extern _INTCSIH2IJC_1
    .word _INTCSIH2IJC_1
  #endif
  #if (  (INTTAUD0I8_ENABLE == 0x00000000)  &&  (INTCSIH2IJC_1_ENABLE == 0x00000000) )
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0034)
  #if (INTCSIH3IR_1_ENABLE > 0x00000000)
    .extern _INTCSIH3IR_1
    .word _INTCSIH3IR_1
  #endif
  #if (INTTAUD0I10_ENABLE > 0x00000000)
    .extern _INTTAUD0I10
    .word _INTTAUD0I10
  #endif
  #if (  (INTCSIH3IR_1_ENABLE == 0x00000000)  &&  (INTTAUD0I10_ENABLE == 0x00000000) )
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0038)
  #if (INTTAUD0I12_ENABLE > 0x00000000)
    .extern _INTTAUD0I12
    .word _INTTAUD0I12
  #endif
  #if (INTCSIH3IRE_1_ENABLE > 0x00000000)
    .extern _INTCSIH3IRE_1
    .word _INTCSIH3IRE_1
  #endif
  #if (  (INTTAUD0I12_ENABLE == 0x00000000)  &&  (INTCSIH3IRE_1_ENABLE == 0x00000000) )
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x003c)
  #if (INTCSIH3IJC_1_ENABLE > 0x00000000)
    .extern _INTCSIH3IJC_1
    .word _INTCSIH3IJC_1
  #endif
  #if (INTTAUD0I14_ENABLE > 0x00000000)
    .extern _INTTAUD0I14
    .word _INTTAUD0I14
  #endif
  #if (  (INTCSIH3IJC_1_ENABLE == 0x00000000)  &&  (INTTAUD0I14_ENABLE == 0x00000000) )
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0040)
  #if (INTCSIH1IC_1_ENABLE > 0x00000000)
    .extern _INTCSIH1IC_1
    .word _INTCSIH1IC_1
  #endif
  #if (INTTAPA0IPEK0_ENABLE > 0x00000000)
    .extern _INTTAPA0IPEK0
    .word _INTTAPA0IPEK0
  #endif
  #if (  (INTCSIH1IC_1_ENABLE == 0x00000000)  &&  (INTTAPA0IPEK0_ENABLE == 0x00000000) )
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0044)
  #if (INTTAPA0IVLY0_ENABLE > 0x00000000)
    .extern _INTTAPA0IVLY0
    .word _INTTAPA0IVLY0
  #endif
  #if (INTCSIH1IR_1_ENABLE > 0x00000000)
    .extern _INTCSIH1IR_1
    .word _INTCSIH1IR_1
  #endif
  #if (  (INTTAPA0IVLY0_ENABLE == 0x00000000)  &&  (INTCSIH1IR_1_ENABLE == 0x00000000) )
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0048)
  #if (INTADCA0I0_ENABLE > 0x00000000)
    .extern _INTADCA0I0
    .word _INTADCA0I0
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x004c)
  #if (INTADCA0I1_ENABLE > 0x00000000)
    .extern _INTADCA0I1
    .word _INTADCA0I1
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0050)
  #if (INTCSIH0IJC_1_ENABLE > 0x00000000)
    .extern _INTCSIH0IJC_1
    .word _INTCSIH0IJC_1
  #endif
  #if (INTADCA0I2_ENABLE > 0x00000000)
    .extern _INTADCA0I2
    .word _INTADCA0I2
  #endif
  #if (  (INTCSIH0IJC_1_ENABLE == 0x00000000)  &&  (INTADCA0I2_ENABLE == 0x00000000) )
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0054)
  #if (INTDCUTDI_ENABLE > 0x00000000)
    .extern _INTDCUTDI
    .word _INTDCUTDI
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0058)
  #if (INTRCANGERR0_ENABLE > 0x00000000)
    .extern _INTRCANGERR0
    .word _INTRCANGERR0
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x005c)
  #if (INTRCANGRECC0_ENABLE > 0x00000000)
    .extern _INTRCANGRECC0
    .word _INTRCANGRECC0
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0060)
  #if (INTRCAN0ERR_ENABLE > 0x00000000)
    .extern _INTRCAN0ERR
    .word _INTRCAN0ERR
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0064)
  #if (INTRCAN0REC_ENABLE > 0x00000000)
    .extern _INTRCAN0REC
    .word _INTRCAN0REC
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0068)
  #if (INTRCAN0TRX_ENABLE > 0x00000000)
    .extern _INTRCAN0TRX
    .word _INTRCAN0TRX
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x006c)
  #if (INTCSIG0IC_ENABLE > 0x00000000)
    .extern _INTCSIG0IC
    .word _INTCSIG0IC
  #endif
  #if (INTCSIH1IRE_1_ENABLE > 0x00000000)
    .extern _INTCSIH1IRE_1
    .word _INTCSIH1IRE_1
  #endif
  #if (  (INTCSIG0IC_ENABLE == 0x00000000)  &&  (INTCSIH1IRE_1_ENABLE == 0x00000000) )
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0070)
  #if (INTCSIH1IJC_1_ENABLE > 0x00000000)
    .extern _INTCSIH1IJC_1
    .word _INTCSIH1IJC_1
  #endif
  #if (INTCSIG0IR_ENABLE > 0x00000000)
    .extern _INTCSIG0IR
    .word _INTCSIG0IR
  #endif
  #if (  (INTCSIH1IJC_1_ENABLE == 0x00000000)  &&  (INTCSIG0IR_ENABLE == 0x00000000) )
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0074)
  #if (INTCSIH0IC_ENABLE > 0x00000000)
    .extern _INTCSIH0IC
    .word _INTCSIH0IC
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0078)
  #if (INTCSIH0IR_ENABLE > 0x00000000)
    .extern _INTCSIH0IR
    .word _INTCSIH0IR
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x007c)
  #if (INTCSIH0IRE_ENABLE > 0x00000000)
    .extern _INTCSIH0IRE
    .word _INTCSIH0IRE
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0080)
  #if (INTCSIH0IJC_ENABLE > 0x00000000)
    .extern _INTCSIH0IJC
    .word _INTCSIH0IJC
  #endif
  #if (INTADCA0I2_2_ENABLE > 0x00000000)
    .extern _INTADCA0I2_2
    .word _INTADCA0I2_2
  #endif
  #if (  (INTCSIH0IJC_ENABLE == 0x00000000)  &&  (INTADCA0I2_2_ENABLE == 0x00000000) )
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0084)
  #if (INTRLIN30_ENABLE > 0x00000000)
    .extern _INTRLIN30
    .word _INTRLIN30
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0088)
  #if (INTRLIN30UR0_ENABLE > 0x00000000)
    .extern _INTRLIN30UR0
    .word _INTRLIN30UR0
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x008c)
  #if (INTRLIN30UR1_ENABLE > 0x00000000)
    .extern _INTRLIN30UR1
    .word _INTRLIN30UR1
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0090)
  #if (INTRLIN30UR2_ENABLE > 0x00000000)
    .extern _INTRLIN30UR2
    .word _INTRLIN30UR2
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0094)
  #if (INTP0_ENABLE > 0x00000000)
    .extern _INTP0
    .word _INTP0
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0098)
  #if (INTP1_ENABLE > 0x00000000)
    .extern _INTP1
    .word _INTP1
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x009c)
  #if (INTP2_ENABLE > 0x00000000)
    .extern _INTP2
    .word _INTP2
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x00a0)
  #if (INTWDTA0_ENABLE > 0x00000000)
    .extern _INTWDTA0
    .word _INTWDTA0
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x00a4)
  #if (INTWDTA1_ENABLE > 0x00000000)
    .extern _INTWDTA1
    .word _INTWDTA1
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x00ac)
  #if (INTP3_ENABLE > 0x00000000)
    .extern _INTP3
    .word _INTP3
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x00b0)
  #if (INTP4_ENABLE > 0x00000000)
    .extern _INTP4
    .word _INTP4
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x00b4)
  #if (INTP5_ENABLE > 0x00000000)
    .extern _INTP5
    .word _INTP5
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x00b8)
  #if (INTP10_ENABLE > 0x00000000)
    .extern _INTP10
    .word _INTP10
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x00bc)
  #if (INTP11_ENABLE > 0x00000000)
    .extern _INTP11
    .word _INTP11
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x00c0)
  #if (INTTAUD0I1_ENABLE > 0x00000000)
    .extern _INTTAUD0I1
    .word _INTTAUD0I1
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x00c4)
  #if (INTTAUD0I3_ENABLE > 0x00000000)
    .extern _INTTAUD0I3
    .word _INTTAUD0I3
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x00c8)
  #if (INTTAUD0I5_ENABLE > 0x00000000)
    .extern _INTTAUD0I5
    .word _INTTAUD0I5
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x00cc)
  #if (INTTAUD0I7_ENABLE > 0x00000000)
    .extern _INTTAUD0I7
    .word _INTTAUD0I7
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x00d0)
  #if (INTTAUD0I9_ENABLE > 0x00000000)
    .extern _INTTAUD0I9
    .word _INTTAUD0I9
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x00d4)
  #if (INTTAUD0I11_ENABLE > 0x00000000)
    .extern _INTTAUD0I11
    .word _INTTAUD0I11
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x00d8)
  #if (INTTAUD0I13_ENABLE > 0x00000000)
    .extern _INTTAUD0I13
    .word _INTTAUD0I13
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x00dc)
  #if (INTTAUD0I15_ENABLE > 0x00000000)
    .extern _INTTAUD0I15
    .word _INTTAUD0I15
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x00e0)
  #if (INTADCA0ERR_ENABLE > 0x00000000)
    .extern _INTADCA0ERR
    .word _INTADCA0ERR
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x00e4)
  #if (INTCSIG0IRE_ENABLE > 0x00000000)
    .extern _INTCSIG0IRE
    .word _INTCSIG0IRE
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x00e8)
  #if (INTRLIN20_ENABLE > 0x00000000)
    .extern _INTRLIN20
    .word _INTRLIN20
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x00ec)
  #if (INTRLIN21_ENABLE > 0x00000000)
    .extern _INTRLIN21
    .word _INTRLIN21
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x00f0)
  #if (INTDMA0_ENABLE > 0x00000000)
    .extern _INTDMA0
    .word _INTDMA0
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x00f4)
  #if (INTDMA1_ENABLE > 0x00000000)
    .extern _INTDMA1
    .word _INTDMA1
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x00f8)
  #if (INTDMA2_ENABLE > 0x00000000)
    .extern _INTDMA2
    .word _INTDMA2
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x00fc)
  #if (INTDMA3_ENABLE > 0x00000000)
    .extern _INTDMA3
    .word _INTDMA3
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0100)
  #if (INTDMA4_ENABLE > 0x00000000)
    .extern _INTDMA4
    .word _INTDMA4
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0104)
  #if (INTDMA5_ENABLE > 0x00000000)
    .extern _INTDMA5
    .word _INTDMA5
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0108)
  #if (INTDMA6_ENABLE > 0x00000000)
    .extern _INTDMA6
    .word _INTDMA6
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x010c)
  #if (INTDMA7_ENABLE > 0x00000000)
    .extern _INTDMA7
    .word _INTDMA7
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0110)
  #if (INTDMA8_ENABLE > 0x00000000)
    .extern _INTDMA8
    .word _INTDMA8
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0114)
  #if (INTDMA9_ENABLE > 0x00000000)
    .extern _INTDMA9
    .word _INTDMA9
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0118)
  #if (INTDMA10_ENABLE > 0x00000000)
    .extern _INTDMA10
    .word _INTDMA10
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x011c)
  #if (INTDMA11_ENABLE > 0x00000000)
    .extern _INTDMA11
    .word _INTDMA11
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0120)
  #if (INTDMA12_ENABLE > 0x00000000)
    .extern _INTDMA12
    .word _INTDMA12
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0124)
  #if (INTDMA13_ENABLE > 0x00000000)
    .extern _INTDMA13
    .word _INTDMA13
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0128)
  #if (INTDMA14_ENABLE > 0x00000000)
    .extern _INTDMA14
    .word _INTDMA14
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x012c)
  #if (INTDMA15_ENABLE > 0x00000000)
    .extern _INTDMA15
    .word _INTDMA15
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0130)
  #if (INTRIIC0TI_ENABLE > 0x00000000)
    .extern _INTRIIC0TI
    .word _INTRIIC0TI
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0134)
  #if (INTRIIC0TEI_ENABLE > 0x00000000)
    .extern _INTRIIC0TEI
    .word _INTRIIC0TEI
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0138)
  #if (INTRIIC0RI_ENABLE > 0x00000000)
    .extern _INTRIIC0RI
    .word _INTRIIC0RI
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x013c)
  #if (INTRIIC0EE_ENABLE > 0x00000000)
    .extern _INTRIIC0EE
    .word _INTRIIC0EE
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0140)
  #if (INTTAUJ0I0_ENABLE > 0x00000000)
    .extern _INTTAUJ0I0
    .word _INTTAUJ0I0
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0144)
  #if (INTTAUJ0I1_ENABLE > 0x00000000)
    .extern _INTTAUJ0I1
    .word _INTTAUJ0I1
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0148)
  #if (INTTAUJ0I2_ENABLE > 0x00000000)
    .extern _INTTAUJ0I2
    .word _INTTAUJ0I2
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x014c)
  #if (INTTAUJ0I3_ENABLE > 0x00000000)
    .extern _INTTAUJ0I3
    .word _INTTAUJ0I3
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0150)
  #if (INTOSTM0_ENABLE > 0x00000000)
    .extern _INTOSTM0
    .word _INTOSTM0
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0154)
  #if (INTPWGA4_ENABLE > 0x00000000)
    .extern _INTPWGA4
    .word _INTPWGA4
  #endif
  #if (INTENCA0IOV_ENABLE > 0x00000000)
    .extern _INTENCA0IOV
    .word _INTENCA0IOV
  #endif
  #if (  (INTPWGA4_ENABLE == 0x00000000)  &&  (INTENCA0IOV_ENABLE == 0x00000000) )
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0158)
  #if (INTPWGA5_ENABLE > 0x00000000)
    .extern _INTPWGA5
    .word _INTPWGA5
  #endif
  #if (INTENCA0IUD_ENABLE > 0x00000000)
    .extern _INTENCA0IUD
    .word _INTENCA0IUD
  #endif
  #if (  (INTPWGA5_ENABLE == 0x00000000)  &&  (INTENCA0IUD_ENABLE == 0x00000000) )
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x015c)
  #if (INTENCA0I0_ENABLE > 0x00000000)
    .extern _INTENCA0I0
    .word _INTENCA0I0
  #endif
  #if (INTPWGA6_ENABLE > 0x00000000)
    .extern _INTPWGA6
    .word _INTPWGA6
  #endif
  #if (  (INTENCA0I0_ENABLE == 0x00000000)  &&  (INTPWGA6_ENABLE == 0x00000000) )
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0160)
  #if (INTPWGA7_ENABLE > 0x00000000)
    .extern _INTPWGA7
    .word _INTPWGA7
  #endif
  #if (INTENCA0I1_ENABLE > 0x00000000)
    .extern _INTENCA0I1
    .word _INTENCA0I1
  #endif
  #if (  (INTPWGA7_ENABLE == 0x00000000)  &&  (INTENCA0I1_ENABLE == 0x00000000) )
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0164)
  #if (INTENCA0IEC_ENABLE > 0x00000000)
    .extern _INTENCA0IEC
    .word _INTENCA0IEC
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0168)
  #if (INTKR0_ENABLE > 0x00000000)
    .extern _INTKR0
    .word _INTKR0
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x016c)
  #if (INTQFULL_ENABLE > 0x00000000)
    .extern _INTQFULL
    .word _INTQFULL
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0170)
  #if (INTPWGA0_ENABLE > 0x00000000)
    .extern _INTPWGA0
    .word _INTPWGA0
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0174)
  #if (INTPWGA1_ENABLE > 0x00000000)
    .extern _INTPWGA1
    .word _INTPWGA1
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0178)
  #if (INTPWGA2_ENABLE > 0x00000000)
    .extern _INTPWGA2
    .word _INTPWGA2
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x017c)
  #if (INTPWGA3_ENABLE > 0x00000000)
    .extern _INTPWGA3
    .word _INTPWGA3
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0180)
  #if (INTPWGA8_ENABLE > 0x00000000)
    .extern _INTPWGA8
    .word _INTPWGA8
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0184)
  #if (INTPWGA9_ENABLE > 0x00000000)
    .extern _INTPWGA9
    .word _INTPWGA9
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0188)
  #if (INTPWGA10_ENABLE > 0x00000000)
    .extern _INTPWGA10
    .word _INTPWGA10
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x018c)
  #if (INTPWGA11_ENABLE > 0x00000000)
    .extern _INTPWGA11
    .word _INTPWGA11
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0190)
  #if (INTPWGA12_ENABLE > 0x00000000)
    .extern _INTPWGA12
    .word _INTPWGA12
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0194)
  #if (INTPWGA13_ENABLE > 0x00000000)
    .extern _INTPWGA13
    .word _INTPWGA13
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0198)
  #if (INTPWGA14_ENABLE > 0x00000000)
    .extern _INTPWGA14
    .word _INTPWGA14
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x019c)
  #if (INTPWGA15_ENABLE > 0x00000000)
    .extern _INTPWGA15
    .word _INTPWGA15
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x01b8)
  #if (INTFLERR_ENABLE > 0x00000000)
    .extern _INTFLERR
    .word _INTFLERR
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x01bc)
  #if (INTFLENDNM_ENABLE > 0x00000000)
    .extern _INTFLENDNM
    .word _INTFLENDNM
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x01c0)
  #if (INTCWEND_ENABLE > 0x00000000)
    .extern _INTCWEND
    .word _INTCWEND
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x01c4)
  #if (INTRCAN1ERR_ENABLE > 0x00000000)
    .extern _INTRCAN1ERR
    .word _INTRCAN1ERR
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x01c8)
  #if (INTRCAN1REC_ENABLE > 0x00000000)
    .extern _INTRCAN1REC
    .word _INTRCAN1REC
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x01cc)
  #if (INTRCAN1TRX_ENABLE > 0x00000000)
    .extern _INTRCAN1TRX
    .word _INTRCAN1TRX
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x01d0)
  #if (INTTAPA0IPEK0_2_ENABLE > 0x00000000)
    .extern _INTTAPA0IPEK0_2
    .word _INTTAPA0IPEK0_2
  #endif
  #if (INTCSIH1IC_ENABLE > 0x00000000)
    .extern _INTCSIH1IC
    .word _INTCSIH1IC
  #endif
  #if (  (INTTAPA0IPEK0_2_ENABLE == 0x00000000)  &&  (INTCSIH1IC_ENABLE == 0x00000000) )
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x01d4)
  #if (INTTAPA0IVLY0_2_ENABLE > 0x00000000)
    .extern _INTTAPA0IVLY0_2
    .word _INTTAPA0IVLY0_2
  #endif
  #if (INTCSIH1IR_ENABLE > 0x00000000)
    .extern _INTCSIH1IR
    .word _INTCSIH1IR
  #endif
  #if (  (INTTAPA0IVLY0_2_ENABLE == 0x00000000)  &&  (INTCSIH1IR_ENABLE == 0x00000000) )
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x01d8)
  #if (INTCSIG0IC_2_ENABLE > 0x00000000)
    .extern _INTCSIG0IC_2
    .word _INTCSIG0IC_2
  #endif
  #if (INTCSIH1IRE_ENABLE > 0x00000000)
    .extern _INTCSIH1IRE
    .word _INTCSIH1IRE
  #endif
  #if (  (INTCSIG0IC_2_ENABLE == 0x00000000)  &&  (INTCSIH1IRE_ENABLE == 0x00000000) )
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x01dc)
  #if (INTCSIH1IJC_ENABLE > 0x00000000)
    .extern _INTCSIH1IJC
    .word _INTCSIH1IJC
  #endif
  #if (INTCSIG0IR_2_ENABLE > 0x00000000)
    .extern _INTCSIG0IR_2
    .word _INTCSIG0IR_2
  #endif
  #if (  (INTCSIH1IJC_ENABLE == 0x00000000)  &&  (INTCSIG0IR_2_ENABLE == 0x00000000) )
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x01e0)
  #if (INTRLIN31_ENABLE > 0x00000000)
    .extern _INTRLIN31
    .word _INTRLIN31
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x01e4)
  #if (INTRLIN31UR0_ENABLE > 0x00000000)
    .extern _INTRLIN31UR0
    .word _INTRLIN31UR0
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x01e8)
  #if (INTRLIN31UR1_ENABLE > 0x00000000)
    .extern _INTRLIN31UR1
    .word _INTRLIN31UR1
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x01ec)
  #if (INTRLIN31UR2_ENABLE > 0x00000000)
    .extern _INTRLIN31UR2
    .word _INTRLIN31UR2
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x01f0)
  #if (INTPWGA20_ENABLE > 0x00000000)
    .extern _INTPWGA20
    .word _INTPWGA20
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x01f4)
  #if (INTPWGA21_ENABLE > 0x00000000)
    .extern _INTPWGA21
    .word _INTPWGA21
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x01f8)
  #if (INTPWGA22_ENABLE > 0x00000000)
    .extern _INTPWGA22
    .word _INTPWGA22
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x01fc)
  #if (INTPWGA23_ENABLE > 0x00000000)
    .extern _INTPWGA23
    .word _INTPWGA23
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0200)
  #if (INTP6_ENABLE > 0x00000000)
    .extern _INTP6
    .word _INTP6
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0204)
  #if (INTP7_ENABLE > 0x00000000)
    .extern _INTP7
    .word _INTP7
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0208)
  #if (INTP8_ENABLE > 0x00000000)
    .extern _INTP8
    .word _INTP8
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x020c)
  #if (INTP12_ENABLE > 0x00000000)
    .extern _INTP12
    .word _INTP12
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0210)
  #if (INTTAUD0I0_2_ENABLE > 0x00000000)
    .extern _INTTAUD0I0_2
    .word _INTTAUD0I0_2
  #endif
  #if (INTCSIH2IC_ENABLE > 0x00000000)
    .extern _INTCSIH2IC
    .word _INTCSIH2IC
  #endif
  #if (  (INTTAUD0I0_2_ENABLE == 0x00000000)  &&  (INTCSIH2IC_ENABLE == 0x00000000) )
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0214)
  #if (INTCSIH2IR_ENABLE > 0x00000000)
    .extern _INTCSIH2IR
    .word _INTCSIH2IR
  #endif
  #if (INTTAUD0I4_2_ENABLE > 0x00000000)
    .extern _INTTAUD0I4_2
    .word _INTTAUD0I4_2
  #endif
  #if (  (INTCSIH2IR_ENABLE == 0x00000000)  &&  (INTTAUD0I4_2_ENABLE == 0x00000000) )
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0218)
  #if (INTCSIH2IRE_ENABLE > 0x00000000)
    .extern _INTCSIH2IRE
    .word _INTCSIH2IRE
  #endif
  #if (INTTAUD0I6_2_ENABLE > 0x00000000)
    .extern _INTTAUD0I6_2
    .word _INTTAUD0I6_2
  #endif
  #if (  (INTCSIH2IRE_ENABLE == 0x00000000)  &&  (INTTAUD0I6_2_ENABLE == 0x00000000) )
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x021c)
  #if (INTCSIH2IJC_ENABLE > 0x00000000)
    .extern _INTCSIH2IJC
    .word _INTCSIH2IJC
  #endif
  #if (INTTAUD0I8_2_ENABLE > 0x00000000)
    .extern _INTTAUD0I8_2
    .word _INTTAUD0I8_2
  #endif
  #if (  (INTCSIH2IJC_ENABLE == 0x00000000)  &&  (INTTAUD0I8_2_ENABLE == 0x00000000) )
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0238)
  #if (INTTAUB0I0_ENABLE > 0x00000000)
    .extern _INTTAUB0I0
    .word _INTTAUB0I0
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x023c)
  #if (INTTAUB0I1_ENABLE > 0x00000000)
    .extern _INTTAUB0I1
    .word _INTTAUB0I1
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0240)
  #if (INTTAUB0I2_ENABLE > 0x00000000)
    .extern _INTTAUB0I2
    .word _INTTAUB0I2
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0244)
  #if (INTTAUB0I3_ENABLE > 0x00000000)
    .extern _INTTAUB0I3
    .word _INTTAUB0I3
  #endif
  #if (INTPWGA16_ENABLE > 0x00000000)
    .extern _INTPWGA16
    .word _INTPWGA16
  #endif
  #if (  (INTTAUB0I3_ENABLE == 0x00000000)  &&  (INTPWGA16_ENABLE == 0x00000000) )
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0248)
  #if (INTTAUB0I4_ENABLE > 0x00000000)
    .extern _INTTAUB0I4
    .word _INTTAUB0I4
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x024c)
  #if (INTPWGA17_ENABLE > 0x00000000)
    .extern _INTPWGA17
    .word _INTPWGA17
  #endif
  #if (INTTAUB0I5_ENABLE > 0x00000000)
    .extern _INTTAUB0I5
    .word _INTTAUB0I5
  #endif
  #if (  (INTPWGA17_ENABLE == 0x00000000)  &&  (INTTAUB0I5_ENABLE == 0x00000000) )
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0250)
  #if (INTTAUB0I6_ENABLE > 0x00000000)
    .extern _INTTAUB0I6
    .word _INTTAUB0I6
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0254)
  #if (INTPWGA18_ENABLE > 0x00000000)
    .extern _INTPWGA18
    .word _INTPWGA18
  #endif
  #if (INTTAUB0I7_ENABLE > 0x00000000)
    .extern _INTTAUB0I7
    .word _INTTAUB0I7
  #endif
  #if (  (INTPWGA18_ENABLE == 0x00000000)  &&  (INTTAUB0I7_ENABLE == 0x00000000) )
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0258)
  #if (INTTAUB0I8_ENABLE > 0x00000000)
    .extern _INTTAUB0I8
    .word _INTTAUB0I8
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x025c)
  #if (INTPWGA19_ENABLE > 0x00000000)
    .extern _INTPWGA19
    .word _INTPWGA19
  #endif
  #if (INTTAUB0I9_ENABLE > 0x00000000)
    .extern _INTTAUB0I9
    .word _INTTAUB0I9
  #endif
  #if (  (INTPWGA19_ENABLE == 0x00000000)  &&  (INTTAUB0I9_ENABLE == 0x00000000) )
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0260)
  #if (INTTAUB0I10_ENABLE > 0x00000000)
    .extern _INTTAUB0I10
    .word _INTTAUB0I10
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0264)
  #if (INTPWGA26_ENABLE > 0x00000000)
    .extern _INTPWGA26
    .word _INTPWGA26
  #endif
  #if (INTTAUB0I11_ENABLE > 0x00000000)
    .extern _INTTAUB0I11
    .word _INTTAUB0I11
  #endif
  #if (  (INTPWGA26_ENABLE == 0x00000000)  &&  (INTTAUB0I11_ENABLE == 0x00000000) )
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0268)
  #if (INTTAUB0I12_ENABLE > 0x00000000)
    .extern _INTTAUB0I12
    .word _INTTAUB0I12
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x026c)
  #if (INTPWGA30_ENABLE > 0x00000000)
    .extern _INTPWGA30
    .word _INTPWGA30
  #endif
  #if (INTTAUB0I13_ENABLE > 0x00000000)
    .extern _INTTAUB0I13
    .word _INTTAUB0I13
  #endif
  #if (  (INTPWGA30_ENABLE == 0x00000000)  &&  (INTTAUB0I13_ENABLE == 0x00000000) )
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0270)
  #if (INTTAUB0I14_ENABLE > 0x00000000)
    .extern _INTTAUB0I14
    .word _INTTAUB0I14
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0274)
  #if (INTPWGA31_ENABLE > 0x00000000)
    .extern _INTPWGA31
    .word _INTPWGA31
  #endif
  #if (INTTAUB0I15_ENABLE > 0x00000000)
    .extern _INTTAUB0I15
    .word _INTTAUB0I15
  #endif
  #if (  (INTPWGA31_ENABLE == 0x00000000)  &&  (INTTAUB0I15_ENABLE == 0x00000000) )
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0278)
  #if (INTTAUD0I2_2_ENABLE > 0x00000000)
    .extern _INTTAUD0I2_2
    .word _INTTAUD0I2_2
  #endif
  #if (INTCSIH3IC_ENABLE > 0x00000000)
    .extern _INTCSIH3IC
    .word _INTCSIH3IC
  #endif
  #if (  (INTTAUD0I2_2_ENABLE == 0x00000000)  &&  (INTCSIH3IC_ENABLE == 0x00000000) )
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x027c)
  #if (INTCSIH3IR_ENABLE > 0x00000000)
    .extern _INTCSIH3IR
    .word _INTCSIH3IR
  #endif
  #if (INTTAUD0I10_2_ENABLE > 0x00000000)
    .extern _INTTAUD0I10_2
    .word _INTTAUD0I10_2
  #endif
  #if (  (INTCSIH3IR_ENABLE == 0x00000000)  &&  (INTTAUD0I10_2_ENABLE == 0x00000000) )
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0280)
  #if (INTCSIH3IRE_ENABLE > 0x00000000)
    .extern _INTCSIH3IRE
    .word _INTCSIH3IRE
  #endif
  #if (INTTAUD0I12_2_ENABLE > 0x00000000)
    .extern _INTTAUD0I12_2
    .word _INTTAUD0I12_2
  #endif
  #if (  (INTCSIH3IRE_ENABLE == 0x00000000)  &&  (INTTAUD0I12_2_ENABLE == 0x00000000) )
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0284)
  #if (INTTAUD0I14_2_ENABLE > 0x00000000)
    .extern _INTTAUD0I14_2
    .word _INTTAUD0I14_2
  #endif
  #if (INTCSIH3IJC_ENABLE > 0x00000000)
    .extern _INTCSIH3IJC
    .word _INTCSIH3IJC
  #endif
  #if (  (INTTAUD0I14_2_ENABLE == 0x00000000)  &&  (INTCSIH3IJC_ENABLE == 0x00000000) )
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0288)
  #if (INTRLIN22_ENABLE > 0x00000000)
    .extern _INTRLIN22
    .word _INTRLIN22
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x028c)
  #if (INTRLIN23_ENABLE > 0x00000000)
    .extern _INTRLIN23
    .word _INTRLIN23
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0290)
  #if (INTRLIN32_ENABLE > 0x00000000)
    .extern _INTRLIN32
    .word _INTRLIN32
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0294)
  #if (INTRLIN32UR0_ENABLE > 0x00000000)
    .extern _INTRLIN32UR0
    .word _INTRLIN32UR0
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0298)
  #if (INTRLIN32UR1_ENABLE > 0x00000000)
    .extern _INTRLIN32UR1
    .word _INTRLIN32UR1
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x029c)
  #if (INTRLIN32UR2_ENABLE > 0x00000000)
    .extern _INTRLIN32UR2
    .word _INTRLIN32UR2
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x02a0)
  #if (INTTAUJ1I0_ENABLE > 0x00000000)
    .extern _INTTAUJ1I0
    .word _INTTAUJ1I0
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x02a4)
  #if (INTTAUJ1I1_ENABLE > 0x00000000)
    .extern _INTTAUJ1I1
    .word _INTTAUJ1I1
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x02a8)
  #if (INTTAUJ1I2_ENABLE > 0x00000000)
    .extern _INTTAUJ1I2
    .word _INTTAUJ1I2
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x02ac)
  #if (INTTAUJ1I3_ENABLE > 0x00000000)
    .extern _INTTAUJ1I3
    .word _INTTAUJ1I3
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x02e0)
  #if (INTPWGA24_ENABLE > 0x00000000)
    .extern _INTPWGA24
    .word _INTPWGA24
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x02e4)
  #if (INTPWGA25_ENABLE > 0x00000000)
    .extern _INTPWGA25
    .word _INTPWGA25
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x02e8)
  #if (INTPWGA27_ENABLE > 0x00000000)
    .extern _INTPWGA27
    .word _INTPWGA27
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x02ec)
  #if (INTPWGA28_ENABLE > 0x00000000)
    .extern _INTPWGA28
    .word _INTPWGA28
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x02f0)
  #if (INTPWGA29_ENABLE > 0x00000000)
    .extern _INTPWGA29
    .word _INTPWGA29
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x02f4)
  #if (INTPWGA32_ENABLE > 0x00000000)
    .extern _INTPWGA32
    .word _INTPWGA32
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x02f8)
  #if (INTPWGA33_ENABLE > 0x00000000)
    .extern _INTPWGA33
    .word _INTPWGA33
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x02fc)
  #if (INTPWGA34_ENABLE > 0x00000000)
    .extern _INTPWGA34
    .word _INTPWGA34
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0300)
  #if (INTPWGA35_ENABLE > 0x00000000)
    .extern _INTPWGA35
    .word _INTPWGA35
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0304)
  #if (INTPWGA36_ENABLE > 0x00000000)
    .extern _INTPWGA36
    .word _INTPWGA36
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0308)
  #if (INTPWGA37_ENABLE > 0x00000000)
    .extern _INTPWGA37
    .word _INTPWGA37
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x030c)
  #if (INTPWGA38_ENABLE > 0x00000000)
    .extern _INTPWGA38
    .word _INTPWGA38
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0310)
  #if (INTPWGA39_ENABLE > 0x00000000)
    .extern _INTPWGA39
    .word _INTPWGA39
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0314)
  #if (INTPWGA40_ENABLE > 0x00000000)
    .extern _INTPWGA40
    .word _INTPWGA40
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0318)
  #if (INTPWGA41_ENABLE > 0x00000000)
    .extern _INTPWGA41
    .word _INTPWGA41
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x031c)
  #if (INTPWGA42_ENABLE > 0x00000000)
    .extern _INTPWGA42
    .word _INTPWGA42
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0320)
  #if (INTPWGA43_ENABLE > 0x00000000)
    .extern _INTPWGA43
    .word _INTPWGA43
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0324)
  #if (INTPWGA44_ENABLE > 0x00000000)
    .extern _INTPWGA44
    .word _INTPWGA44
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0328)
  #if (INTPWGA45_ENABLE > 0x00000000)
    .extern _INTPWGA45
    .word _INTPWGA45
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x032c)
  #if (INTPWGA46_ENABLE > 0x00000000)
    .extern _INTPWGA46
    .word _INTPWGA46
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0330)
  #if (INTPWGA47_ENABLE > 0x00000000)
    .extern _INTPWGA47
    .word _INTPWGA47
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0334)
  #if (INTP9_ENABLE > 0x00000000)
    .extern _INTP9
    .word _INTP9
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0338)
  #if (INTP13_ENABLE > 0x00000000)
    .extern _INTP13
    .word _INTP13
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x033c)
  #if (INTP14_ENABLE > 0x00000000)
    .extern _INTP14
    .word _INTP14
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0340)
  #if (INTP15_ENABLE > 0x00000000)
    .extern _INTP15
    .word _INTP15
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0344)
  #if (INTRTCA01S_ENABLE > 0x00000000)
    .extern _INTRTCA01S
    .word _INTRTCA01S
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0348)
  #if (INTRTCA0AL_ENABLE > 0x00000000)
    .extern _INTRTCA0AL
    .word _INTRTCA0AL
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x034c)
  #if (INTRTCA0R_ENABLE > 0x00000000)
    .extern _INTRTCA0R
    .word _INTRTCA0R
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0350)
  #if (INTADCA1ERR_ENABLE > 0x00000000)
    .extern _INTADCA1ERR
    .word _INTADCA1ERR
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0354)
  #if (INTADCA1I0_ENABLE > 0x00000000)
    .extern _INTADCA1I0
    .word _INTADCA1I0
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0358)
  #if (INTADCA1I1_ENABLE > 0x00000000)
    .extern _INTADCA1I1
    .word _INTADCA1I1
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x035c)
  #if (INTADCA1I2_ENABLE > 0x00000000)
    .extern _INTADCA1I2
    .word _INTADCA1I2
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0364)
  #if (INTRCAN2ERR_ENABLE > 0x00000000)
    .extern _INTRCAN2ERR
    .word _INTRCAN2ERR
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0368)
  #if (INTRCAN2REC_ENABLE > 0x00000000)
    .extern _INTRCAN2REC
    .word _INTRCAN2REC
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x036c)
  #if (INTRCAN2TRX_ENABLE > 0x00000000)
    .extern _INTRCAN2TRX
    .word _INTRCAN2TRX
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0370)
  #if (INTRCAN3ERR_ENABLE > 0x00000000)
    .extern _INTRCAN3ERR
    .word _INTRCAN3ERR
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0374)
  #if (INTRCAN3REC_ENABLE > 0x00000000)
    .extern _INTRCAN3REC
    .word _INTRCAN3REC
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0378)
  #if (INTRCAN3TRX_ENABLE > 0x00000000)
    .extern _INTRCAN3TRX
    .word _INTRCAN3TRX
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x037c)
  #if (INTCSIG1IC_ENABLE > 0x00000000)
    .extern _INTCSIG1IC
    .word _INTCSIG1IC
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0380)
  #if (INTCSIG1IR_ENABLE > 0x00000000)
    .extern _INTCSIG1IR
    .word _INTCSIG1IR
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0384)
  #if (INTCSIG1IRE_ENABLE > 0x00000000)
    .extern _INTCSIG1IRE
    .word _INTCSIG1IRE
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0388)
  #if (INTRLIN24_ENABLE > 0x00000000)
    .extern _INTRLIN24
    .word _INTRLIN24
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x038c)
  #if (INTRLIN25_ENABLE > 0x00000000)
    .extern _INTRLIN25
    .word _INTRLIN25
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0390)
  #if (INTRLIN33_ENABLE > 0x00000000)
    .extern _INTRLIN33
    .word _INTRLIN33
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0394)
  #if (INTRLIN33UR0_ENABLE > 0x00000000)
    .extern _INTRLIN33UR0
    .word _INTRLIN33UR0
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0398)
  #if (INTRLIN33UR1_ENABLE > 0x00000000)
    .extern _INTRLIN33UR1
    .word _INTRLIN33UR1
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x039c)
  #if (INTRLIN33UR2_ENABLE > 0x00000000)
    .extern _INTRLIN33UR2
    .word _INTRLIN33UR2
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x03a0)
  #if (INTRLIN34_ENABLE > 0x00000000)
    .extern _INTRLIN34
    .word _INTRLIN34
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x03a4)
  #if (INTRLIN34UR0_ENABLE > 0x00000000)
    .extern _INTRLIN34UR0
    .word _INTRLIN34UR0
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x03a8)
  #if (INTRLIN34UR1_ENABLE > 0x00000000)
    .extern _INTRLIN34UR1
    .word _INTRLIN34UR1
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x03ac)
  #if (INTRLIN34UR2_ENABLE > 0x00000000)
    .extern _INTRLIN34UR2
    .word _INTRLIN34UR2
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x03b0)
  #if (INTRLIN35_ENABLE > 0x00000000)
    .extern _INTRLIN35
    .word _INTRLIN35
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x03b4)
  #if (INTRLIN35UR0_ENABLE > 0x00000000)
    .extern _INTRLIN35UR0
    .word _INTRLIN35UR0
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x03b8)
  #if (INTRLIN35UR1_ENABLE > 0x00000000)
    .extern _INTRLIN35UR1
    .word _INTRLIN35UR1
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x03bc)
  #if (INTRLIN35UR2_ENABLE > 0x00000000)
    .extern _INTRLIN35UR2
    .word _INTRLIN35UR2
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x03c0)
  #if (INTPWGA48_ENABLE > 0x00000000)
    .extern _INTPWGA48
    .word _INTPWGA48
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x03c4)
  #if (INTPWGA49_ENABLE > 0x00000000)
    .extern _INTPWGA49
    .word _INTPWGA49
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x03c8)
  #if (INTPWGA50_ENABLE > 0x00000000)
    .extern _INTPWGA50
    .word _INTPWGA50
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x03cc)
  #if (INTPWGA51_ENABLE > 0x00000000)
    .extern _INTPWGA51
    .word _INTPWGA51
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x03d0)
  #if (INTPWGA52_ENABLE > 0x00000000)
    .extern _INTPWGA52
    .word _INTPWGA52
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x03d4)
  #if (INTPWGA53_ENABLE > 0x00000000)
    .extern _INTPWGA53
    .word _INTPWGA53
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x03d8)
  #if (INTPWGA54_ENABLE > 0x00000000)
    .extern _INTPWGA54
    .word _INTPWGA54
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x03dc)
  #if (INTPWGA55_ENABLE > 0x00000000)
    .extern _INTPWGA55
    .word _INTPWGA55
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x03e0)
  #if (INTPWGA56_ENABLE > 0x00000000)
    .extern _INTPWGA56
    .word _INTPWGA56
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x03e4)
  #if (INTPWGA57_ENABLE > 0x00000000)
    .extern _INTPWGA57
    .word _INTPWGA57
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x03e8)
  #if (INTPWGA58_ENABLE > 0x00000000)
    .extern _INTPWGA58
    .word _INTPWGA58
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x03ec)
  #if (INTPWGA59_ENABLE > 0x00000000)
    .extern _INTPWGA59
    .word _INTPWGA59
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x03f0)
  #if (INTPWGA60_ENABLE > 0x00000000)
    .extern _INTPWGA60
    .word _INTPWGA60
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x03f4)
  #if (INTPWGA61_ENABLE > 0x00000000)
    .extern _INTPWGA61
    .word _INTPWGA61
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x03f8)
  #if (INTPWGA62_ENABLE > 0x00000000)
    .extern _INTPWGA62
    .word _INTPWGA62
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x03fc)
  #if (INTPWGA63_ENABLE > 0x00000000)
    .extern _INTPWGA63
    .word _INTPWGA63
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0400)
  #if (INTTAUB1I0_ENABLE > 0x00000000)
    .extern _INTTAUB1I0
    .word _INTTAUB1I0
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0404)
  #if (INTTAUB1I1_ENABLE > 0x00000000)
    .extern _INTTAUB1I1
    .word _INTTAUB1I1
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0408)
  #if (INTTAUB1I2_ENABLE > 0x00000000)
    .extern _INTTAUB1I2
    .word _INTTAUB1I2
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x040c)
  #if (INTTAUB1I3_ENABLE > 0x00000000)
    .extern _INTTAUB1I3
    .word _INTTAUB1I3
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0410)
  #if (INTTAUB1I4_ENABLE > 0x00000000)
    .extern _INTTAUB1I4
    .word _INTTAUB1I4
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0414)
  #if (INTTAUB1I5_ENABLE > 0x00000000)
    .extern _INTTAUB1I5
    .word _INTTAUB1I5
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0418)
  #if (INTTAUB1I6_ENABLE > 0x00000000)
    .extern _INTTAUB1I6
    .word _INTTAUB1I6
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x041c)
  #if (INTTAUB1I7_ENABLE > 0x00000000)
    .extern _INTTAUB1I7
    .word _INTTAUB1I7
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0420)
  #if (INTTAUB1I8_ENABLE > 0x00000000)
    .extern _INTTAUB1I8
    .word _INTTAUB1I8
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0424)
  #if (INTTAUB1I9_ENABLE > 0x00000000)
    .extern _INTTAUB1I9
    .word _INTTAUB1I9
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0428)
  #if (INTTAUB1I10_ENABLE > 0x00000000)
    .extern _INTTAUB1I10
    .word _INTTAUB1I10
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x042c)
  #if (INTTAUB1I11_ENABLE > 0x00000000)
    .extern _INTTAUB1I11
    .word _INTTAUB1I11
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0430)
  #if (INTTAUB1I12_ENABLE > 0x00000000)
    .extern _INTTAUB1I12
    .word _INTTAUB1I12
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0434)
  #if (INTTAUB1I13_ENABLE > 0x00000000)
    .extern _INTTAUB1I13
    .word _INTTAUB1I13
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0438)
  #if (INTTAUB1I14_ENABLE > 0x00000000)
    .extern _INTTAUB1I14
    .word _INTTAUB1I14
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x043c)
  #if (INTTAUB1I15_ENABLE > 0x00000000)
    .extern _INTTAUB1I15
    .word _INTTAUB1I15
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0440)
  #if (INTRCAN4ERR_ENABLE > 0x00000000)
    .extern _INTRCAN4ERR
    .word _INTRCAN4ERR
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0444)
  #if (INTRCAN4REC_ENABLE > 0x00000000)
    .extern _INTRCAN4REC
    .word _INTRCAN4REC
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0448)
  #if (INTRCAN4TRX_ENABLE > 0x00000000)
    .extern _INTRCAN4TRX
    .word _INTRCAN4TRX
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x044c)
  #if (INTRLIN26_ENABLE > 0x00000000)
    .extern _INTRLIN26
    .word _INTRLIN26
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0450)
  #if (INTRLIN27_ENABLE > 0x00000000)
    .extern _INTRLIN27
    .word _INTRLIN27
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0454)
  #if (INTPWGA64_ENABLE > 0x00000000)
    .extern _INTPWGA64
    .word _INTPWGA64
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0458)
  #if (INTPWGA65_ENABLE > 0x00000000)
    .extern _INTPWGA65
    .word _INTPWGA65
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x045c)
  #if (INTPWGA66_ENABLE > 0x00000000)
    .extern _INTPWGA66
    .word _INTPWGA66
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0460)
  #if (INTPWGA67_ENABLE > 0x00000000)
    .extern _INTPWGA67
    .word _INTPWGA67
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0464)
  #if (INTPWGA68_ENABLE > 0x00000000)
    .extern _INTPWGA68
    .word _INTPWGA68
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0468)
  #if (INTPWGA69_ENABLE > 0x00000000)
    .extern _INTPWGA69
    .word _INTPWGA69
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x046c)
  #if (INTPWGA70_ENABLE > 0x00000000)
    .extern _INTPWGA70
    .word _INTPWGA70
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0470)
  #if (INTPWGA71_ENABLE > 0x00000000)
    .extern _INTPWGA71
    .word _INTPWGA71
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0474)
  #if (INTRLIN28_ENABLE > 0x00000000)
    .extern _INTRLIN28
    .word _INTRLIN28
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0478)
  #if (INTRLIN29_ENABLE > 0x00000000)
    .extern _INTRLIN29
    .word _INTRLIN29
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x047c)
  #if (INTRCAN5ERR_ENABLE > 0x00000000)
    .extern _INTRCAN5ERR
    .word _INTRCAN5ERR
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0480)
  #if (INTRCAN5REC_ENABLE > 0x00000000)
    .extern _INTRCAN5REC
    .word _INTRCAN5REC
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0484)
  #if (INTRCAN5TRX_ENABLE > 0x00000000)
    .extern _INTRCAN5TRX
    .word _INTRCAN5TRX
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x04fc)
  #if (INTRCANGERR1_ENABLE > 0x00000000)
    .extern _INTRCANGERR1
    .word _INTRCANGERR1
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0500)
  #if (INTRCANGRECC1_ENABLE > 0x00000000)
    .extern _INTRCANGRECC1
    .word _INTRCANGRECC1
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0504)
  #if (INTRCAN6ERR_ENABLE > 0x00000000)
    .extern _INTRCAN6ERR
    .word _INTRCAN6ERR
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0508)
  #if (INTRCAN6REC_ENABLE > 0x00000000)
    .extern _INTRCAN6REC
    .word _INTRCAN6REC
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x050c)
  #if (INTRCAN6TRX_ENABLE > 0x00000000)
    .extern _INTRCAN6TRX
    .word _INTRCAN6TRX
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0590)
  #if (INTDPE_ENABLE > 0x00000000)
    .extern _INTDPE
    .word _INTDPE
  #else
    .word __unused_isr
  #endif

  .offset (IRQ_TABLE_START+0x0594)
  #if (INTAPE_ENABLE > 0x00000000)
    .extern _INTAPE
    .word _INTAPE
  #else
    .word __unused_isr
  #endif


#endif   /* __OS_HANDLES__ */  

