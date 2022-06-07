# ivor_branch_table.s - for use with MPC551x, MPC56xxP, MPC56xxB, MPC56xxS only
# Description:  Branch table for 16 core interrupts
# Copyright Freescale 2007, 2009.  All Rights Reserved
# Rev 1.0 Jul 6 2007 S Mihalik - Initial version 
# Rev 1.1 Aug 30 2007 SM - Made IVOR4Handler extern (for SW vector mode)
# Rev 1.2 Sep 9 2008 SM - Converted assembly to VLE syntax

  .section .ivor_branch_table,text_vle

	.equ SIXTEEN_BYTES, 16   # 16 byte alignment required for table entries 
                             # Diab compiler uses value of 4 (2**4=16)
							 # CodeWarrior, GHS, Cygnus use 16

				.align SIXTEEN_BYTES       
IVOR0trap:  e_b	IVOR0trap	 # IVOR 0 interrupt handler

				.align SIXTEEN_BYTES       
IVOR1trap:  e_b	IVOR1trap	 # IVOR 1 interrupt handler
						
				.align SIXTEEN_BYTES       
IVOR2trap:  e_b	IVOR2trap	 # IVOR 2 interrupt handler

				.align SIXTEEN_BYTES       
IVOR3trap:  e_b	IVOR3trap	 # IVOR 3 interrupt handler

				.align SIXTEEN_BYTES       
IVOR4trap:  e_b  IVOR4trap # IVOR 4 interrupt handler 

				.align SIXTEEN_BYTES       
IVOR5trap:  e_b	IVOR5trap    # IVOR 5 interrupt handler

				.align SIXTEEN_BYTES       
IVOR6trap:  e_b	IVOR6trap	 # IVOR 6 interrupt handler

				.align SIXTEEN_BYTES       
IVOR7trap:  e_b	IVOR7trap	 # IVOR 7 interrupt handler

				.align SIXTEEN_BYTES       
IVOR8trap:  e_b	IVOR8trap	 # IVOR 8 interrupt handler

				.align SIXTEEN_BYTES       
IVOR9trap:  e_b	IVOR9trap	 # IVOR 9 interrupt handler

				.align SIXTEEN_BYTES       
IVOR10trap: e_b   IVOR10trap   # IVOR 10 interrupt handler

				.align SIXTEEN_BYTES       
IVOR11trap: e_b	IVOR11trap	 # IVOR 11 interrupt handler

				.align SIXTEEN_BYTES       
IVOR12trap: e_b	IVOR12trap	 # IVOR 12 interrupt handler

				.align SIXTEEN_BYTES       
IVOR13trap: e_b	IVOR13trap	 # IVOR 13 interrupt handler

				.align SIXTEEN_BYTES       
IVOR14trap: e_b	IVOR14trap	 # IVOR 14 interrupt handler

				.align SIXTEEN_BYTES       
IVOR15trap: e_b	IVOR15trap	 # IVOR15 interrupt handler
