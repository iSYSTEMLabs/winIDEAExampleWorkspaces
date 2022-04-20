# ivor_branch_table.s - for use with MPC551x, MPC56xxP, MPC56xxB, MPC56xxS only
# Description:  Branch table for 16 core interrupts
# Copyright Freescale 2007, 2009.  All Rights Reserved
# Rev 1.0 Jul 6 2007 S Mihalik - Initial version 
# Rev 1.1 Aug 30 2007 SM - Made IVOR4Handler extern (for SW vector mode)
# Rev 1.2 Sep 9 2008 SM - Converted assembly to VLE syntax

    .globl   IVOR0_Handler
    .globl   IVOR1_Handler
    .globl   IVOR2_Handler
    .globl   IVOR3_Handler
    .globl   IVOR5_Handler
    .globl   IVOR6_Handler
    .globl   IVOR7_Handler
    .globl   IVOR8_Handler
    .globl   IVOR9_Handler
    .globl   IVOR10_Handler
    .globl   IVOR11_Handler
    .globl   IVOR12_Handler
    .globl   IVOR13_Handler
    .globl   IVOR14_Handler
    .globl   IVOR15_Handler
    
  .section .ivor_branch_table,text_vle

	.equ SIXTEEN_BYTES, 16   # 16 byte alignment required for table entries 
                             # Diab compiler uses value of 4 (2**4=16)
							 # CodeWarrior, GHS, Cygnus use 16

				.align SIXTEEN_BYTES       
IVOR0_Handler:  e_b	IVOR0_Handler	 # IVOR 0 interrupt handler

				.align SIXTEEN_BYTES       
IVOR1_Handler:  e_b	IVOR1_Handler	 # IVOR 1 interrupt handler
						
				.align SIXTEEN_BYTES       
IVOR2_Handler:  e_b	IVOR2_Handler	 # IVOR 2 interrupt handler

				.align SIXTEEN_BYTES       
IVOR3_Handler:  e_b	IVOR3_Handler	 # IVOR 3 interrupt handler

				.align SIXTEEN_BYTES       
IVOR5_Handler:  e_b	IVOR5_Handler    # IVOR 5 interrupt handler

				.align SIXTEEN_BYTES       
IVOR6_Handler:  e_b	IVOR6_Handler	 # IVOR 6 interrupt handler

				.align SIXTEEN_BYTES       
IVOR7_Handler:  e_b	IVOR7_Handler	 # IVOR 7 interrupt handler

				.align SIXTEEN_BYTES       
IVOR8_Handler:  e_b	IVOR8_Handler	 # IVOR 8 interrupt handler

				.align SIXTEEN_BYTES       
IVOR9_Handler:  e_b	IVOR9_Handler	 # IVOR 9 interrupt handler

				.align SIXTEEN_BYTES       
IVOR10_Handler: e_b   IVOR10_Handler   # IVOR 10 interrupt handler

				.align SIXTEEN_BYTES       
IVOR11_Handler: e_b	IVOR11_Handler	 # IVOR 11 interrupt handler

				.align SIXTEEN_BYTES       
IVOR12_Handler: e_b	IVOR12_Handler	 # IVOR 12 interrupt handler

				.align SIXTEEN_BYTES       
IVOR13_Handler: e_b	IVOR13_Handler	 # IVOR 13 interrupt handler

				.align SIXTEEN_BYTES       
IVOR14_Handler: e_b	IVOR14_Handler	 # IVOR 14 interrupt handler

				.align SIXTEEN_BYTES       
IVOR15_Handler: e_b	IVOR15_Handler	 # IVOR15 interrupt handler


