-------------------------------------------------------------------------------
-- Module      = dr7f701378_startup.850
-- Version     = V1.10
--               extracted from device file dr7f701378.dvf 
--               by DeFiXRH850 1.0.2.5
-------------------------------------------------------------------------------
--                                  COPYRIGHT
-------------------------------------------------------------------------------
-- Copyright (c) 2018 by Renesas Electronics Europe GmbH,
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
--              Device:         R7F701378   
--              IDE:            GHS Multi for V800  V6.xx or later
-------------------------------------------------------------------------------

-------------------------------------------------------------------------------
-------------  Selection of external interrupt service handler
-------------  User modifiable section
-------------  Please uncomment the required interrupt service handler
-------------------------------------------------------------------------------
#include <dr7f701378_IRQ.h>

-------------------------------------------------------------------------------
-------------  Basic Initialisation of the controller
-------------  User modifiable section
-------------------------------------------------------------------------------
  .weak	___lowinit
  .weak	___ghs_rramstart
  .set   EBV, 0x8000
  .text
_RESET:
  -- Initialization of the global pointer
  mov     __gp, gp

  -- Initialization of the text pointer
  mov     __tp, r5

  -- Initialization of the stack pointer
  movhi	hi(___ghsend_stack),zero,sp
  movea	lo(___ghsend_stack),sp,sp

  -- 4-byte stack alignment
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
__ex_entry:
    .offset 0x0000
  #if (RESET_ENABLE > 0x00000000)
    syncp
    .extern _RESET
    jr _RESET
  #else
    jr __unused_isr
  #endif

#ifdef __OS_HANDLES__      

/* OS interrupt code can be added here */

#else /* __OS_HANDLES__ */ 

__isr_prio_entry:
    .offset 0x0010
  #if (SYSERR_ENABLE > 0x00000000)
    syncp
    .extern _SYSERR
    jr _SYSERR
  #else
    jr __unused_isr
  #endif

    .offset 0x0020
  #if (HVTRAP_ENABLE > 0x00000000)
    syncp
    .extern _HVTRAP
    jr _HVTRAP
  #else
    jr __unused_isr
  #endif

    .offset 0x0030
  #if (FETRAPEX_ENABLE > 0x00000000)
    syncp
    .extern _FETRAPEX
    jr _FETRAPEX
  #else
    jr __unused_isr
  #endif

    .offset 0x0040
  #if (EITRAP0_ENABLE > 0x00000000)
    syncp
    .extern _EITRAP0
    jr _EITRAP0
  #else
    jr __unused_isr
  #endif

    .offset 0x0050
  #if (EITRAP1_ENABLE > 0x00000000)
    syncp
    .extern _EITRAP1
    jr _EITRAP1
  #else
    jr __unused_isr
  #endif

    .offset 0x0060
  #if (RIEX_ENABLE > 0x00000000)
    syncp
    .extern _RIEX
    jr _RIEX
  #else
    jr __unused_isr
  #endif

    .offset 0x0080
  #if (UCPOP_ENABLE > 0x00000000)
    syncp
    .extern _UCPOP
    jr _UCPOP
  #else
    jr __unused_isr
  #endif

    .offset 0x0090
  #if (MIP_MDP_ENABLE > 0x00000000)
    syncp
    .extern _MIP_MDP
    jr _MIP_MDP
  #else
    jr __unused_isr
  #endif

    .offset 0x00a0
  #if (PIEX_ENABLE > 0x00000000)
    syncp
    .extern _PIEX
    jr _PIEX
  #else
    jr __unused_isr
  #endif

    .offset 0x00c0
  #if (MAE_MAEX_ENABLE > 0x00000000)
    syncp
    .extern _MAE_MAEX
    jr _MAE_MAEX
  #else
    jr __unused_isr
  #endif

    .offset 0x00e0
  #if (FENMI_ENABLE > 0x00000000)
    syncp
    .extern _FENMI
    jr _FENMI
  #else
    jr __unused_isr
  #endif

    .offset 0x00f0
  #if (FEINT_ENABLE > 0x00000000)
    syncp
    .extern _FEINT
    jr _FEINT
  #else
    jr __unused_isr
  #endif

  .global _TimerInterruptHandler
    .offset 0x0100
  #if (EINTPRIO_0_ENABLE > 0x00000000)
    syncp
    .extern _EINTPRIO_0
    jr _EINTPRIO_0
  #else
    jr _TimerInterruptHandler
  #endif

    .offset 0x0110
  #if (EINTPRIO_1_ENABLE > 0x00000000)
    syncp
    .extern _EINTPRIO_1
    jr _EINTPRIO_1
  #else
    jr __unused_isr
  #endif

    .offset 0x0120
  #if (EINTPRIO_2_ENABLE > 0x00000000)
    syncp
    .extern _EINTPRIO_2
    jr _EINTPRIO_2
  #else
    jr __unused_isr
  #endif

    .offset 0x0130
  #if (EINTPRIO_3_ENABLE > 0x00000000)
    syncp
    .extern _EINTPRIO_3
    jr _EINTPRIO_3
  #else
    jr __unused_isr
  #endif

    .offset 0x0140
  #if (EINTPRIO_4_ENABLE > 0x00000000)
    syncp
    .extern _EINTPRIO_4
    jr _EINTPRIO_4
  #else
    jr __unused_isr
  #endif

    .offset 0x0150
  #if (EINTPRIO_5_ENABLE > 0x00000000)
    syncp
    .extern _EINTPRIO_5
    jr _EINTPRIO_5
  #else
    jr __unused_isr
  #endif

    .offset 0x0160
  #if (EINTPRIO_6_ENABLE > 0x00000000)
    syncp
    .extern _EINTPRIO_6
    jr _EINTPRIO_6
  #else
    jr __unused_isr
  #endif

    .offset 0x0170
  #if (EINTPRIO_7_ENABLE > 0x00000000)
    syncp
    .extern _EINTPRIO_7
    jr _EINTPRIO_7
  #else
    jr __unused_isr
  #endif

    .offset 0x0180
  #if (EINTPRIO_8_ENABLE > 0x00000000)
    syncp
    .extern _EINTPRIO_8
    jr _EINTPRIO_8
  #else
    jr __unused_isr
  #endif

    .offset 0x0190
  #if (EINTPRIO_9_ENABLE > 0x00000000)
    syncp
    .extern _EINTPRIO_9
    jr _EINTPRIO_9
  #else
    jr __unused_isr
  #endif

    .offset 0x01a0
  #if (EINTPRIO_10_ENABLE > 0x00000000)
    syncp
    .extern _EINTPRIO_10
    jr _EINTPRIO_10
  #else
    jr __unused_isr
  #endif

    .offset 0x01b0
  #if (EINTPRIO_11_ENABLE > 0x00000000)
    syncp
    .extern _EINTPRIO_11
    jr _EINTPRIO_11
  #else
    jr __unused_isr
  #endif

    .offset 0x01c0
  #if (EINTPRIO_12_ENABLE > 0x00000000)
    syncp
    .extern _EINTPRIO_12
    jr _EINTPRIO_12
  #else
    jr __unused_isr
  #endif

    .offset 0x01d0
  #if (EINTPRIO_13_ENABLE > 0x00000000)
    syncp
    .extern _EINTPRIO_13
    jr _EINTPRIO_13
  #else
    jr __unused_isr
  #endif

    .offset 0x01e0
  #if (EINTPRIO_14_ENABLE > 0x00000000)
    syncp
    .extern _EINTPRIO_14
    jr _EINTPRIO_14
  #else
    jr __unused_isr
  #endif

    .offset 0x01f0
  #if (EINTPRIO_15_ENABLE > 0x00000000)
    syncp
    .extern _EINTPRIO_15
    jr _EINTPRIO_15
  #else
    jr __unused_isr
  #endif

    .offset (IRQ_TABLE_START)
_irq_table_start:
    .offset (IRQ_TABLE_START+0x0020)
  #if (INTECM_ENABLE > 0x00000000)
    .extern _INTECM
    .word _INTECM
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0024)
  #if (INTWDTA0_ENABLE > 0x00000000)
    .extern _INTWDTA0
    .word _INTWDTA0
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0040)
  #if (INTDMA0_ENABLE > 0x00000000)
    .extern _INTDMA0
    .word _INTDMA0
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0044)
  #if (INTDMA1_ENABLE > 0x00000000)
    .extern _INTDMA1
    .word _INTDMA1
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0048)
  #if (INTDMA2_ENABLE > 0x00000000)
    .extern _INTDMA2
    .word _INTDMA2
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x004c)
  #if (INTDMA3_ENABLE > 0x00000000)
    .extern _INTDMA3
    .word _INTDMA3
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0050)
  #if (INTDMA4_ENABLE > 0x00000000)
    .extern _INTDMA4
    .word _INTDMA4
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0054)
  #if (INTDMA5_ENABLE > 0x00000000)
    .extern _INTDMA5
    .word _INTDMA5
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0058)
  #if (INTDMA6_ENABLE > 0x00000000)
    .extern _INTDMA6
    .word _INTDMA6
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x005c)
  #if (INTDMA7_ENABLE > 0x00000000)
    .extern _INTDMA7
    .word _INTDMA7
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0060)
  #if (INTDMA8_ENABLE > 0x00000000)
    .extern _INTDMA8
    .word _INTDMA8
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0064)
  #if (INTDMA9_ENABLE > 0x00000000)
    .extern _INTDMA9
    .word _INTDMA9
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0068)
  #if (INTDMA10_ENABLE > 0x00000000)
    .extern _INTDMA10
    .word _INTDMA10
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x006c)
  #if (INTDMA11_ENABLE > 0x00000000)
    .extern _INTDMA11
    .word _INTDMA11
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0070)
  #if (INTDMA12_ENABLE > 0x00000000)
    .extern _INTDMA12
    .word _INTDMA12
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0074)
  #if (INTDMA13_ENABLE > 0x00000000)
    .extern _INTDMA13
    .word _INTDMA13
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0078)
  #if (INTDMA14_ENABLE > 0x00000000)
    .extern _INTDMA14
    .word _INTDMA14
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x007c)
  #if (INTDMA15_ENABLE > 0x00000000)
    .extern _INTDMA15
    .word _INTDMA15
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0080)
  #if (INTP0_ENABLE > 0x00000000)
    .extern _INTP0
    .word _INTP0
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0084)
  #if (INTP1_ENABLE > 0x00000000)
    .extern _INTP1
    .word _INTP1
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0088)
  #if (INTP2_ENABLE > 0x00000000)
    .extern _INTP2
    .word _INTP2
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x008c)
  #if (INTP3_ENABLE > 0x00000000)
    .extern _INTP3
    .word _INTP3
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0090)
  #if (INTP4_ENABLE > 0x00000000)
    .extern _INTP4
    .word _INTP4
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x00a0)
  #if (INTTSG30I0_ENABLE > 0x00000000)
    .extern _INTTSG30I0
    .word _INTTSG30I0
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x00a4)
  #if (INTTSG30I1_ENABLE > 0x00000000)
    .extern _INTTSG30I1
    .word _INTTSG30I1
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x00a8)
  #if (INTTSG30I2_ENABLE > 0x00000000)
    .extern _INTTSG30I2
    .word _INTTSG30I2
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x00ac)
  #if (INTTSG30I3_ENABLE > 0x00000000)
    .extern _INTTSG30I3
    .word _INTTSG30I3
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x00b0)
  #if (INTTSG30I4_ENABLE > 0x00000000)
    .extern _INTTSG30I4
    .word _INTTSG30I4
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x00b4)
  #if (INTTSG30I5_ENABLE > 0x00000000)
    .extern _INTTSG30I5
    .word _INTTSG30I5
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x00b8)
  #if (INTTSG30I6_ENABLE > 0x00000000)
    .extern _INTTSG30I6
    .word _INTTSG30I6
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x00bc)
  #if (INTTSG30I7_ENABLE > 0x00000000)
    .extern _INTTSG30I7
    .word _INTTSG30I7
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x00c0)
  #if (INTTSG30I8_ENABLE > 0x00000000)
    .extern _INTTSG30I8
    .word _INTTSG30I8
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x00c4)
  #if (INTTSG30I9_ENABLE > 0x00000000)
    .extern _INTTSG30I9
    .word _INTTSG30I9
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x00c8)
  #if (INTTSG30I10_ENABLE > 0x00000000)
    .extern _INTTSG30I10
    .word _INTTSG30I10
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x00cc)
  #if (INTTSG30I11_ENABLE > 0x00000000)
    .extern _INTTSG30I11
    .word _INTTSG30I11
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x00d0)
  #if (INTTSG30I12_ENABLE > 0x00000000)
    .extern _INTTSG30I12
    .word _INTTSG30I12
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x00d4)
  #if (INTTSG30IPEK_ENABLE > 0x00000000)
    .extern _INTTSG30IPEK
    .word _INTTSG30IPEK
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x00d8)
  #if (INTTSG30IVLY_ENABLE > 0x00000000)
    .extern _INTTSG30IVLY
    .word _INTTSG30IVLY
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x00dc)
  #if (INTTSG30IER_ENABLE > 0x00000000)
    .extern _INTTSG30IER
    .word _INTTSG30IER
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x00e0)
  #if (INTTSG30IWN_ENABLE > 0x00000000)
    .extern _INTTSG30IWN
    .word _INTTSG30IWN
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x00e4)
  #if (INTTSG31I0_ENABLE > 0x00000000)
    .extern _INTTSG31I0
    .word _INTTSG31I0
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x00e8)
  #if (INTTSG31I1_ENABLE > 0x00000000)
    .extern _INTTSG31I1
    .word _INTTSG31I1
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x00ec)
  #if (INTTSG31I2_ENABLE > 0x00000000)
    .extern _INTTSG31I2
    .word _INTTSG31I2
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x00f0)
  #if (INTTSG31I3_ENABLE > 0x00000000)
    .extern _INTTSG31I3
    .word _INTTSG31I3
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x00f4)
  #if (INTTSG31I4_ENABLE > 0x00000000)
    .extern _INTTSG31I4
    .word _INTTSG31I4
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x00f8)
  #if (INTTSG31I5_ENABLE > 0x00000000)
    .extern _INTTSG31I5
    .word _INTTSG31I5
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x00fc)
  #if (INTTSG31I6_ENABLE > 0x00000000)
    .extern _INTTSG31I6
    .word _INTTSG31I6
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0100)
  #if (INTTSG31I7_ENABLE > 0x00000000)
    .extern _INTTSG31I7
    .word _INTTSG31I7
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0104)
  #if (INTTSG31I8_ENABLE > 0x00000000)
    .extern _INTTSG31I8
    .word _INTTSG31I8
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0108)
  #if (INTTSG31I9_ENABLE > 0x00000000)
    .extern _INTTSG31I9
    .word _INTTSG31I9
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x010c)
  #if (INTTSG31I10_ENABLE > 0x00000000)
    .extern _INTTSG31I10
    .word _INTTSG31I10
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0110)
  #if (INTTSG31I11_ENABLE > 0x00000000)
    .extern _INTTSG31I11
    .word _INTTSG31I11
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0114)
  #if (INTTSG31I12_ENABLE > 0x00000000)
    .extern _INTTSG31I12
    .word _INTTSG31I12
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0118)
  #if (INTTSG31IPEK_ENABLE > 0x00000000)
    .extern _INTTSG31IPEK
    .word _INTTSG31IPEK
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x011c)
  #if (INTTSG31IVLY_ENABLE > 0x00000000)
    .extern _INTTSG31IVLY
    .word _INTTSG31IVLY
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0120)
  #if (INTTSG31IER_ENABLE > 0x00000000)
    .extern _INTTSG31IER
    .word _INTTSG31IER
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0124)
  #if (INTTSG31IWN_ENABLE > 0x00000000)
    .extern _INTTSG31IWN
    .word _INTTSG31IWN
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0128)
  #if (INTOSTM0_ENABLE > 0x00000000)
    .extern _INTOSTM0
    .word _INTOSTM0
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x012c)
  #if (INTOSTM1_ENABLE > 0x00000000)
    .extern _INTOSTM1
    .word _INTOSTM1
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0130)
  #if (INTADCG0ERR_ENABLE > 0x00000000)
    .extern _INTADCG0ERR
    .word _INTADCG0ERR
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0134)
  #if (INTADCG0I0_ENABLE > 0x00000000)
    .extern _INTADCG0I0
    .word _INTADCG0I0
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0138)
  #if (INTADCG0I1_ENABLE > 0x00000000)
    .extern _INTADCG0I1
    .word _INTADCG0I1
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x013c)
  #if (INTADCG0I2_ENABLE > 0x00000000)
    .extern _INTADCG0I2
    .word _INTADCG0I2
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0140)
  #if (INTADCG0I3_ENABLE > 0x00000000)
    .extern _INTADCG0I3
    .word _INTADCG0I3
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0144)
  #if (INTADCG0I4_ENABLE > 0x00000000)
    .extern _INTADCG0I4
    .word _INTADCG0I4
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0148)
  #if (INTCSIH0IRE_ENABLE > 0x00000000)
    .extern _INTCSIH0IRE
    .word _INTCSIH0IRE
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x014c)
  #if (INTCSIH0IR0S_ENABLE > 0x00000000)
    .extern _INTCSIH0IR0S
    .word _INTCSIH0IR0S
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0150)
  #if (INTCSIH0IC0S_ENABLE > 0x00000000)
    .extern _INTCSIH0IC0S
    .word _INTCSIH0IC0S
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0154)
  #if (INTCSIH0IR1_ENABLE > 0x00000000)
    .extern _INTCSIH0IR1
    .word _INTCSIH0IR1
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0158)
  #if (INTCSIH0IC1_ENABLE > 0x00000000)
    .extern _INTCSIH0IC1
    .word _INTCSIH0IC1
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x015c)
  #if (INTCSIH0IR2_ENABLE > 0x00000000)
    .extern _INTCSIH0IR2
    .word _INTCSIH0IR2
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0160)
  #if (INTCSIH0IC2_ENABLE > 0x00000000)
    .extern _INTCSIH0IC2
    .word _INTCSIH0IC2
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0164)
  #if (INTCSIH0IJC_ENABLE > 0x00000000)
    .extern _INTCSIH0IJC
    .word _INTCSIH0IJC
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0168)
  #if (INTCSIH1IRE_ENABLE > 0x00000000)
    .extern _INTCSIH1IRE
    .word _INTCSIH1IRE
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x016c)
  #if (INTCSIH1IR0S_ENABLE > 0x00000000)
    .extern _INTCSIH1IR0S
    .word _INTCSIH1IR0S
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0170)
  #if (INTCSIH1IC0S_ENABLE > 0x00000000)
    .extern _INTCSIH1IC0S
    .word _INTCSIH1IC0S
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0174)
  #if (INTCSIH1IR1_ENABLE > 0x00000000)
    .extern _INTCSIH1IR1
    .word _INTCSIH1IR1
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0178)
  #if (INTCSIH1IC1_ENABLE > 0x00000000)
    .extern _INTCSIH1IC1
    .word _INTCSIH1IC1
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x017c)
  #if (INTCSIH1IR2_ENABLE > 0x00000000)
    .extern _INTCSIH1IR2
    .word _INTCSIH1IR2
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0180)
  #if (INTCSIH1IC2_ENABLE > 0x00000000)
    .extern _INTCSIH1IC2
    .word _INTCSIH1IC2
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0184)
  #if (INTCSIH1IJC_ENABLE > 0x00000000)
    .extern _INTCSIH1IJC
    .word _INTCSIH1IJC
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0188)
  #if (INTCSIH2IRE_ENABLE > 0x00000000)
    .extern _INTCSIH2IRE
    .word _INTCSIH2IRE
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x018c)
  #if (INTCSIH2IR_ENABLE > 0x00000000)
    .extern _INTCSIH2IR
    .word _INTCSIH2IR
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0190)
  #if (INTCSIH2IC_ENABLE > 0x00000000)
    .extern _INTCSIH2IC
    .word _INTCSIH2IC
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0194)
  #if (INTCSIH2IJC_ENABLE > 0x00000000)
    .extern _INTCSIH2IJC
    .word _INTCSIH2IJC
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0198)
  #if (INTCSIH3IRE_ENABLE > 0x00000000)
    .extern _INTCSIH3IRE
    .word _INTCSIH3IRE
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x019c)
  #if (INTCSIH3IR_ENABLE > 0x00000000)
    .extern _INTCSIH3IR
    .word _INTCSIH3IR
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x01a0)
  #if (INTCSIH3IC_ENABLE > 0x00000000)
    .extern _INTCSIH3IC
    .word _INTCSIH3IC
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x01a4)
  #if (INTCSIH3IJC_ENABLE > 0x00000000)
    .extern _INTCSIH3IJC
    .word _INTCSIH3IJC
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x01a8)
  #if (INTSCI30ERI_ENABLE > 0x00000000)
    .extern _INTSCI30ERI
    .word _INTSCI30ERI
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x01ac)
  #if (INTSCI30RXI_ENABLE > 0x00000000)
    .extern _INTSCI30RXI
    .word _INTSCI30RXI
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x01b0)
  #if (INTSCI30TXI_ENABLE > 0x00000000)
    .extern _INTSCI30TXI
    .word _INTSCI30TXI
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x01b4)
  #if (INTSCI30TEI_ENABLE > 0x00000000)
    .extern _INTSCI30TEI
    .word _INTSCI30TEI
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x01b8)
  #if (INTSCI31ERI_ENABLE > 0x00000000)
    .extern _INTSCI31ERI
    .word _INTSCI31ERI
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x01bc)
  #if (INTSCI31RXI_ENABLE > 0x00000000)
    .extern _INTSCI31RXI
    .word _INTSCI31RXI
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x01c0)
  #if (INTSCI31TXI_ENABLE > 0x00000000)
    .extern _INTSCI31TXI
    .word _INTSCI31TXI
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x01c4)
  #if (INTSCI31TEI_ENABLE > 0x00000000)
    .extern _INTSCI31TEI
    .word _INTSCI31TEI
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x01c8)
  #if (INTRLIN30UR2_ENABLE > 0x00000000)
    .extern _INTRLIN30UR2
    .word _INTRLIN30UR2
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x01cc)
  #if (INTRLIN30UR1_ENABLE > 0x00000000)
    .extern _INTRLIN30UR1
    .word _INTRLIN30UR1
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x01d0)
  #if (INTRLIN30UR0_ENABLE > 0x00000000)
    .extern _INTRLIN30UR0
    .word _INTRLIN30UR0
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x01d4)
  #if (INTRLIN31UR2_ENABLE > 0x00000000)
    .extern _INTRLIN31UR2
    .word _INTRLIN31UR2
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x01d8)
  #if (INTRLIN31UR1_ENABLE > 0x00000000)
    .extern _INTRLIN31UR1
    .word _INTRLIN31UR1
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x01dc)
  #if (INTRLIN31UR0_ENABLE > 0x00000000)
    .extern _INTRLIN31UR0
    .word _INTRLIN31UR0
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x01e0)
  #if (INTSINT3_ENABLE > 0x00000000)
    .extern _INTSINT3
    .word _INTSINT3
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x01e4)
  #if (INTSINT4_ENABLE > 0x00000000)
    .extern _INTSINT4
    .word _INTSINT4
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0200)
  #if (INTP5_ENABLE > 0x00000000)
    .extern _INTP5
    .word _INTP5
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0204)
  #if (INTP6_ENABLE > 0x00000000)
    .extern _INTP6
    .word _INTP6
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0208)
  #if (INTP7_ENABLE > 0x00000000)
    .extern _INTP7
    .word _INTP7
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x020c)
  #if (INTP8_ENABLE > 0x00000000)
    .extern _INTP8
    .word _INTP8
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0210)
  #if (INTP9_ENABLE > 0x00000000)
    .extern _INTP9
    .word _INTP9
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0214)
  #if (INTTAUJ0I0_ENABLE > 0x00000000)
    .extern _INTTAUJ0I0
    .word _INTTAUJ0I0
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0218)
  #if (INTTAUJ0I1_ENABLE > 0x00000000)
    .extern _INTTAUJ0I1
    .word _INTTAUJ0I1
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x021c)
  #if (INTTAUJ0I2_ENABLE > 0x00000000)
    .extern _INTTAUJ0I2
    .word _INTTAUJ0I2
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0220)
  #if (INTTAUJ0I3_ENABLE > 0x00000000)
    .extern _INTTAUJ0I3
    .word _INTTAUJ0I3
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0224)
  #if (INTTAUJ1I0_ENABLE > 0x00000000)
    .extern _INTTAUJ1I0
    .word _INTTAUJ1I0
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0228)
  #if (INTTAUJ1I1_ENABLE > 0x00000000)
    .extern _INTTAUJ1I1
    .word _INTTAUJ1I1
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x022c)
  #if (INTTAUJ1I2_ENABLE > 0x00000000)
    .extern _INTTAUJ1I2
    .word _INTTAUJ1I2
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0230)
  #if (INTTAUJ1I3_ENABLE > 0x00000000)
    .extern _INTTAUJ1I3
    .word _INTTAUJ1I3
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0234)
  #if (INTTAUD0I0_ENABLE > 0x00000000)
    .extern _INTTAUD0I0
    .word _INTTAUD0I0
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0238)
  #if (INTTAUD0I1_ENABLE > 0x00000000)
    .extern _INTTAUD0I1
    .word _INTTAUD0I1
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x023c)
  #if (INTTAUD0I2_ENABLE > 0x00000000)
    .extern _INTTAUD0I2
    .word _INTTAUD0I2
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0240)
  #if (INTTAUD0I3_ENABLE > 0x00000000)
    .extern _INTTAUD0I3
    .word _INTTAUD0I3
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0244)
  #if (INTTAUD0I4_ENABLE > 0x00000000)
    .extern _INTTAUD0I4
    .word _INTTAUD0I4
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0248)
  #if (INTTAUD0I5_ENABLE > 0x00000000)
    .extern _INTTAUD0I5
    .word _INTTAUD0I5
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x024c)
  #if (INTTAUD0I6_ENABLE > 0x00000000)
    .extern _INTTAUD0I6
    .word _INTTAUD0I6
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0250)
  #if (INTTAUD0I7_ENABLE > 0x00000000)
    .extern _INTTAUD0I7
    .word _INTTAUD0I7
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0254)
  #if (INTTAUD0I8_ENABLE > 0x00000000)
    .extern _INTTAUD0I8
    .word _INTTAUD0I8
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0258)
  #if (INTTAUD0I9_ENABLE > 0x00000000)
    .extern _INTTAUD0I9
    .word _INTTAUD0I9
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x025c)
  #if (INTTAUD0I10_ENABLE > 0x00000000)
    .extern _INTTAUD0I10
    .word _INTTAUD0I10
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0260)
  #if (INTTAUD0I11_ENABLE > 0x00000000)
    .extern _INTTAUD0I11
    .word _INTTAUD0I11
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0264)
  #if (INTTAUD0I12_ENABLE > 0x00000000)
    .extern _INTTAUD0I12
    .word _INTTAUD0I12
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0268)
  #if (INTTAUD0I13_ENABLE > 0x00000000)
    .extern _INTTAUD0I13
    .word _INTTAUD0I13
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x026c)
  #if (INTTAUD0I14_ENABLE > 0x00000000)
    .extern _INTTAUD0I14
    .word _INTTAUD0I14
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0270)
  #if (INTTAUD0I15_ENABLE > 0x00000000)
    .extern _INTTAUD0I15
    .word _INTTAUD0I15
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0278)
  #if (INTTAUD1I0_ENABLE > 0x00000000)
    .extern _INTTAUD1I0
    .word _INTTAUD1I0
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x027c)
  #if (INTTAUD1I1_ENABLE > 0x00000000)
    .extern _INTTAUD1I1
    .word _INTTAUD1I1
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0280)
  #if (INTTAUD1I2_ENABLE > 0x00000000)
    .extern _INTTAUD1I2
    .word _INTTAUD1I2
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0284)
  #if (INTTAUD1I3_ENABLE > 0x00000000)
    .extern _INTTAUD1I3
    .word _INTTAUD1I3
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0288)
  #if (INTTAUD1I4_ENABLE > 0x00000000)
    .extern _INTTAUD1I4
    .word _INTTAUD1I4
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x028c)
  #if (INTTAUD1I5_ENABLE > 0x00000000)
    .extern _INTTAUD1I5
    .word _INTTAUD1I5
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0290)
  #if (INTTAUD1I6_ENABLE > 0x00000000)
    .extern _INTTAUD1I6
    .word _INTTAUD1I6
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0294)
  #if (INTTAUD1I7_ENABLE > 0x00000000)
    .extern _INTTAUD1I7
    .word _INTTAUD1I7
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0298)
  #if (INTTAUD1I8_ENABLE > 0x00000000)
    .extern _INTTAUD1I8
    .word _INTTAUD1I8
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x029c)
  #if (INTTAUD1I9_ENABLE > 0x00000000)
    .extern _INTTAUD1I9
    .word _INTTAUD1I9
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x02a0)
  #if (INTTAUD1I10_ENABLE > 0x00000000)
    .extern _INTTAUD1I10
    .word _INTTAUD1I10
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x02a4)
  #if (INTTAUD1I11_ENABLE > 0x00000000)
    .extern _INTTAUD1I11
    .word _INTTAUD1I11
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x02a8)
  #if (INTTAUD1I12_ENABLE > 0x00000000)
    .extern _INTTAUD1I12
    .word _INTTAUD1I12
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x02ac)
  #if (INTTAUD1I13_ENABLE > 0x00000000)
    .extern _INTTAUD1I13
    .word _INTTAUD1I13
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x02b0)
  #if (INTTAUD1I14_ENABLE > 0x00000000)
    .extern _INTTAUD1I14
    .word _INTTAUD1I14
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x02b4)
  #if (INTTAUD1I15_ENABLE > 0x00000000)
    .extern _INTTAUD1I15
    .word _INTTAUD1I15
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x02b8)
  #if (INTCSIG0IRE_ENABLE > 0x00000000)
    .extern _INTCSIG0IRE
    .word _INTCSIG0IRE
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x02bc)
  #if (INTCSIG0IC_ENABLE > 0x00000000)
    .extern _INTCSIG0IC
    .word _INTCSIG0IC
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x02c0)
  #if (INTCSIG0IR_ENABLE > 0x00000000)
    .extern _INTCSIG0IR
    .word _INTCSIG0IR
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x02c4)
  #if (INTADCG1ERR_ENABLE > 0x00000000)
    .extern _INTADCG1ERR
    .word _INTADCG1ERR
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x02c8)
  #if (INTADCG1I0_ENABLE > 0x00000000)
    .extern _INTADCG1I0
    .word _INTADCG1I0
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x02cc)
  #if (INTADCG1I1_ENABLE > 0x00000000)
    .extern _INTADCG1I1
    .word _INTADCG1I1
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x02d0)
  #if (INTADCG1I2_ENABLE > 0x00000000)
    .extern _INTADCG1I2
    .word _INTADCG1I2
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x02d4)
  #if (INTADCG1I3_ENABLE > 0x00000000)
    .extern _INTADCG1I3
    .word _INTADCG1I3
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x02d8)
  #if (INTADCG1I4_ENABLE > 0x00000000)
    .extern _INTADCG1I4
    .word _INTADCG1I4
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x02dc)
  #if (INTRCAN0ERR_ENABLE > 0x00000000)
    .extern _INTRCAN0ERR
    .word _INTRCAN0ERR
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x02e0)
  #if (INTRCAN0REC_ENABLE > 0x00000000)
    .extern _INTRCAN0REC
    .word _INTRCAN0REC
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x02e4)
  #if (INTRCAN0TRX_ENABLE > 0x00000000)
    .extern _INTRCAN0TRX
    .word _INTRCAN0TRX
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x02e8)
  #if (INTRCAN1ERR_ENABLE > 0x00000000)
    .extern _INTRCAN1ERR
    .word _INTRCAN1ERR
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x02ec)
  #if (INTRCAN1REC_ENABLE > 0x00000000)
    .extern _INTRCAN1REC
    .word _INTRCAN1REC
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x02f0)
  #if (INTRCAN1TRX_ENABLE > 0x00000000)
    .extern _INTRCAN1TRX
    .word _INTRCAN1TRX
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x02f4)
  #if (INTRCANGERR_ENABLE > 0x00000000)
    .extern _INTRCANGERR
    .word _INTRCANGERR
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x02f8)
  #if (INTRCANGRECC_ENABLE > 0x00000000)
    .extern _INTRCANGRECC
    .word _INTRCANGRECC
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x02fc)
  #if (INTRCAN2ERR_ENABLE > 0x00000000)
    .extern _INTRCAN2ERR
    .word _INTRCAN2ERR
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0300)
  #if (INTRCAN2REC_ENABLE > 0x00000000)
    .extern _INTRCAN2REC
    .word _INTRCAN2REC
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0304)
  #if (INTRCAN2TRX_ENABLE > 0x00000000)
    .extern _INTRCAN2TRX
    .word _INTRCAN2TRX
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0308)
  #if (INTFLXA0LINE0_ENABLE > 0x00000000)
    .extern _INTFLXA0LINE0
    .word _INTFLXA0LINE0
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x030c)
  #if (INTFLXA0LINE1_ENABLE > 0x00000000)
    .extern _INTFLXA0LINE1
    .word _INTFLXA0LINE1
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0310)
  #if (INTFLXA0TIM0_ENABLE > 0x00000000)
    .extern _INTFLXA0TIM0
    .word _INTFLXA0TIM0
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0314)
  #if (INTFLXA0TIM1_ENABLE > 0x00000000)
    .extern _INTFLXA0TIM1
    .word _INTFLXA0TIM1
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0318)
  #if (INTFLXA0TIM2_ENABLE > 0x00000000)
    .extern _INTFLXA0TIM2
    .word _INTFLXA0TIM2
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x031c)
  #if (INTFLXA0FDA_ENABLE > 0x00000000)
    .extern _INTFLXA0FDA
    .word _INTFLXA0FDA
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0320)
  #if (INTFLXA0FW_ENABLE > 0x00000000)
    .extern _INTFLXA0FW
    .word _INTFLXA0FW
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0324)
  #if (INTFLXA0OW_ENABLE > 0x00000000)
    .extern _INTFLXA0OW
    .word _INTFLXA0OW
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0328)
  #if (INTFLXA0OT_ENABLE > 0x00000000)
    .extern _INTFLXA0OT
    .word _INTFLXA0OT
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x032c)
  #if (INTFLXA0IQF_ENABLE > 0x00000000)
    .extern _INTFLXA0IQF
    .word _INTFLXA0IQF
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0330)
  #if (INTFLXA0IQE_ENABLE > 0x00000000)
    .extern _INTFLXA0IQE
    .word _INTFLXA0IQE
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0368)
  #if (INTSCI32ERI_ENABLE > 0x00000000)
    .extern _INTSCI32ERI
    .word _INTSCI32ERI
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x036c)
  #if (INTSCI32RXI_ENABLE > 0x00000000)
    .extern _INTSCI32RXI
    .word _INTSCI32RXI
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0370)
  #if (INTSCI32TXI_ENABLE > 0x00000000)
    .extern _INTSCI32TXI
    .word _INTSCI32TXI
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0374)
  #if (INTSCI32TEI_ENABLE > 0x00000000)
    .extern _INTSCI32TEI
    .word _INTSCI32TEI
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0388)
  #if (INTPSI50SI_ENABLE > 0x00000000)
    .extern _INTPSI50SI
    .word _INTPSI50SI
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x038c)
  #if (INTPSI50RI_ENABLE > 0x00000000)
    .extern _INTPSI50RI
    .word _INTPSI50RI
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0390)
  #if (INTPSI50TI_ENABLE > 0x00000000)
    .extern _INTPSI50TI
    .word _INTPSI50TI
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0394)
  #if (INTPSI51SI_ENABLE > 0x00000000)
    .extern _INTPSI51SI
    .word _INTPSI51SI
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0398)
  #if (INTPSI51RI_ENABLE > 0x00000000)
    .extern _INTPSI51RI
    .word _INTPSI51RI
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x039c)
  #if (INTPSI51TI_ENABLE > 0x00000000)
    .extern _INTPSI51TI
    .word _INTPSI51TI
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x03a0)
  #if (INTSENT0SI_ENABLE > 0x00000000)
    .extern _INTSENT0SI
    .word _INTSENT0SI
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x03a4)
  #if (INTSENT0RI_ENABLE > 0x00000000)
    .extern _INTSENT0RI
    .word _INTSENT0RI
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x03a8)
  #if (INTSENT1SI_ENABLE > 0x00000000)
    .extern _INTSENT1SI
    .word _INTSENT1SI
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x03ac)
  #if (INTSENT1RI_ENABLE > 0x00000000)
    .extern _INTSENT1RI
    .word _INTSENT1RI
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x03b0)
  #if (INTSENT2SI_ENABLE > 0x00000000)
    .extern _INTSENT2SI
    .word _INTSENT2SI
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x03b4)
  #if (INTSENT2RI_ENABLE > 0x00000000)
    .extern _INTSENT2RI
    .word _INTSENT2RI
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x03b8)
  #if (INTSENT3SI_ENABLE > 0x00000000)
    .extern _INTSENT3SI
    .word _INTSENT3SI
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x03bc)
  #if (INTSENT3RI_ENABLE > 0x00000000)
    .extern _INTSENT3RI
    .word _INTSENT3RI
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x03c0)
  #if (INTSENT4SI_ENABLE > 0x00000000)
    .extern _INTSENT4SI
    .word _INTSENT4SI
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x03c4)
  #if (INTSENT4RI_ENABLE > 0x00000000)
    .extern _INTSENT4RI
    .word _INTSENT4RI
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x03c8)
  #if (INTSENT5SI_ENABLE > 0x00000000)
    .extern _INTSENT5SI
    .word _INTSENT5SI
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x03cc)
  #if (INTSENT5RI_ENABLE > 0x00000000)
    .extern _INTSENT5RI
    .word _INTSENT5RI
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x03d0)
  #if (INTDTSTC0_ENABLE > 0x00000000)
    .extern _INTDTSTC0
    .word _INTDTSTC0
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x03d4)
  #if (INTDTSTC1_ENABLE > 0x00000000)
    .extern _INTDTSTC1
    .word _INTDTSTC1
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x03d8)
  #if (INTDTSTC2_ENABLE > 0x00000000)
    .extern _INTDTSTC2
    .word _INTDTSTC2
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x03dc)
  #if (INTDTSTC3_ENABLE > 0x00000000)
    .extern _INTDTSTC3
    .word _INTDTSTC3
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x03e0)
  #if (INTDTSCM0_ENABLE > 0x00000000)
    .extern _INTDTSCM0
    .word _INTDTSCM0
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x03e4)
  #if (INTDTSCM1_ENABLE > 0x00000000)
    .extern _INTDTSCM1
    .word _INTDTSCM1
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x03e8)
  #if (INTDTSCM2_ENABLE > 0x00000000)
    .extern _INTDTSCM2
    .word _INTDTSCM2
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x03ec)
  #if (INTDTSCM3_ENABLE > 0x00000000)
    .extern _INTDTSCM3
    .word _INTDTSCM3
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x03f0)
  #if (INTSINT0_ENABLE > 0x00000000)
    .extern _INTSINT0
    .word _INTSINT0
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x03f4)
  #if (INTSINT1_ENABLE > 0x00000000)
    .extern _INTSINT1
    .word _INTSINT1
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x03f8)
  #if (INTSINT2_ENABLE > 0x00000000)
    .extern _INTSINT2
    .word _INTSINT2
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0400)
  #if (INTTAUJ2I0_ENABLE > 0x00000000)
    .extern _INTTAUJ2I0
    .word _INTTAUJ2I0
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0404)
  #if (INTTAUJ2I1_ENABLE > 0x00000000)
    .extern _INTTAUJ2I1
    .word _INTTAUJ2I1
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0408)
  #if (INTTAUJ2I2_ENABLE > 0x00000000)
    .extern _INTTAUJ2I2
    .word _INTTAUJ2I2
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x040c)
  #if (INTTAUJ2I3_ENABLE > 0x00000000)
    .extern _INTTAUJ2I3
    .word _INTTAUJ2I3
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0410)
  #if (INTTAUD2I0_ENABLE > 0x00000000)
    .extern _INTTAUD2I0
    .word _INTTAUD2I0
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0414)
  #if (INTTAUD2I1_ENABLE > 0x00000000)
    .extern _INTTAUD2I1
    .word _INTTAUD2I1
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0418)
  #if (INTTAUD2I2_ENABLE > 0x00000000)
    .extern _INTTAUD2I2
    .word _INTTAUD2I2
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x041c)
  #if (INTTAUD2I3_ENABLE > 0x00000000)
    .extern _INTTAUD2I3
    .word _INTTAUD2I3
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0420)
  #if (INTTAUD2I4_ENABLE > 0x00000000)
    .extern _INTTAUD2I4
    .word _INTTAUD2I4
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0424)
  #if (INTTAUD2I5_ENABLE > 0x00000000)
    .extern _INTTAUD2I5
    .word _INTTAUD2I5
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0428)
  #if (INTTAUD2I6_ENABLE > 0x00000000)
    .extern _INTTAUD2I6
    .word _INTTAUD2I6
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x042c)
  #if (INTTAUD2I7_ENABLE > 0x00000000)
    .extern _INTTAUD2I7
    .word _INTTAUD2I7
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0430)
  #if (INTTAUD2I8_ENABLE > 0x00000000)
    .extern _INTTAUD2I8
    .word _INTTAUD2I8
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0434)
  #if (INTTAUD2I9_ENABLE > 0x00000000)
    .extern _INTTAUD2I9
    .word _INTTAUD2I9
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0438)
  #if (INTTAUD2I10_ENABLE > 0x00000000)
    .extern _INTTAUD2I10
    .word _INTTAUD2I10
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x043c)
  #if (INTTAUD2I11_ENABLE > 0x00000000)
    .extern _INTTAUD2I11
    .word _INTTAUD2I11
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0440)
  #if (INTTAUD2I12_ENABLE > 0x00000000)
    .extern _INTTAUD2I12
    .word _INTTAUD2I12
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0444)
  #if (INTTAUD2I13_ENABLE > 0x00000000)
    .extern _INTTAUD2I13
    .word _INTTAUD2I13
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0448)
  #if (INTTAUD2I14_ENABLE > 0x00000000)
    .extern _INTTAUD2I14
    .word _INTTAUD2I14
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x044c)
  #if (INTTAUD2I15_ENABLE > 0x00000000)
    .extern _INTTAUD2I15
    .word _INTTAUD2I15
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0450)
  #if (INTENCA0IOV_ENABLE > 0x00000000)
    .extern _INTENCA0IOV
    .word _INTENCA0IOV
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0454)
  #if (INTENCA0I0_ENABLE > 0x00000000)
    .extern _INTENCA0I0
    .word _INTENCA0I0
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0458)
  #if (INTENCA0I1_ENABLE > 0x00000000)
    .extern _INTENCA0I1
    .word _INTENCA0I1
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x045c)
  #if (INTENCA0IUD_ENABLE > 0x00000000)
    .extern _INTENCA0IUD
    .word _INTENCA0IUD
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0460)
  #if (INTENCA0IEC_ENABLE > 0x00000000)
    .extern _INTENCA0IEC
    .word _INTENCA0IEC
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0464)
  #if (INTENCA1IOV_ENABLE > 0x00000000)
    .extern _INTENCA1IOV
    .word _INTENCA1IOV
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0468)
  #if (INTENCA1I0_ENABLE > 0x00000000)
    .extern _INTENCA1I0
    .word _INTENCA1I0
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x046c)
  #if (INTENCA1I1_ENABLE > 0x00000000)
    .extern _INTENCA1I1
    .word _INTENCA1I1
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0470)
  #if (INTENCA1IUD_ENABLE > 0x00000000)
    .extern _INTENCA1IUD
    .word _INTENCA1IUD
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0474)
  #if (INTENCA1IEC_ENABLE > 0x00000000)
    .extern _INTENCA1IEC
    .word _INTENCA1IEC
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0478)
  #if (INTTPBA0IPRD_ENABLE > 0x00000000)
    .extern _INTTPBA0IPRD
    .word _INTTPBA0IPRD
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x047c)
  #if (INTTPBA0IDTY_ENABLE > 0x00000000)
    .extern _INTTPBA0IDTY
    .word _INTTPBA0IDTY
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0480)
  #if (INTTPBA0IPAT_ENABLE > 0x00000000)
    .extern _INTTPBA0IPAT
    .word _INTTPBA0IPAT
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0484)
  #if (INTTPBA1IPRD_ENABLE > 0x00000000)
    .extern _INTTPBA1IPRD
    .word _INTTPBA1IPRD
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0488)
  #if (INTTPBA1IDTY_ENABLE > 0x00000000)
    .extern _INTTPBA1IDTY
    .word _INTTPBA1IDTY
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x048c)
  #if (INTTPBA1IPAT_ENABLE > 0x00000000)
    .extern _INTTPBA1IPAT
    .word _INTTPBA1IPAT
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x0498)
  #if (INTADCG0MPX_ENABLE > 0x00000000)
    .extern _INTADCG0MPX
    .word _INTADCG0MPX
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x049c)
  #if (INTADCG1MPX_ENABLE > 0x00000000)
    .extern _INTADCG1MPX
    .word _INTADCG1MPX
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x04a0)
  #if (INTP10_ENABLE > 0x00000000)
    .extern _INTP10
    .word _INTP10
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x04a4)
  #if (INTP11_ENABLE > 0x00000000)
    .extern _INTP11
    .word _INTP11
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x04a8)
  #if (INTP12_ENABLE > 0x00000000)
    .extern _INTP12
    .word _INTP12
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x05ec)
  #if (INTFLENDNM_ENABLE > 0x00000000)
    .extern _INTFLENDNM
    .word _INTFLENDNM
  #else
    .word __unused_isr
  #endif

    .offset (IRQ_TABLE_START+0x05fc)
  #if (INTFLERR_ENABLE > 0x00000000)
    .extern _INTFLERR
    .word _INTFLERR
  #else
    .word __unused_isr
  #endif


#endif   /* __OS_HANDLES__ */  

