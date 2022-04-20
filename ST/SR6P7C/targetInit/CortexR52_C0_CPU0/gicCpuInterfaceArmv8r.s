//
// Copyright (C) ARM Limited, 2016. All rights reserved.
//

// This file contains some GIC utility assembly routines
 
  .thumb  
  .syntax unified

// ------------------------------------------------------------

	.global setICC_SRE
  // void setICC_SRE(unsigned int value)
	.type setICC_SRE, %function
setICC_SRE:
  MCR p15,0,r0,c12,c12,5 // Write r0 to ICC_SRE
  ISB
  BX lr

   

// ------------------------------------------------------------

	.global getICC_SRE
  // unsigned int getICC_SRE(void)
	.type getICC_SRE, %function
getICC_SRE:
  MRC p15,0,r0,c12,c12,5 // Read ICC_SRE into r0
  BX lr

   

// ------------------------------------------------------------

	.global setICC_HSRE
  // void setICC_HSRE(unsigned int value)
	.type setICC_HSRE, %function
setICC_HSRE:
  MCR p15,4,r0,c12,c9,5 // Write r0 to ICC_HSRE
  ISB
  BX lr

   

// ------------------------------------------------------------

	.global getICC_HSRE
  // unsigned int getICC_HSRE(void)
	.type getICC_HSRE, %function
getICC_HSRE:
  MRC p15,4,r0,c12,c9,5 // Read ICC_HSRE into r0
  BX lr

   
  
// ------------------------------------------------------------

	.global setICC_MSRE
  // void setICC_MSRE(unsigned int value)
	.type setICC_MSRE, %function
setICC_MSRE:
  MCR p15,6,r0,c12,c12,5 // Write r0 to ICC_MSRE
  ISB
  BX lr

   

// ------------------------------------------------------------

	.global getICC_MSRE
  // unsigned int getICC_MSRE(void)
	.type getICC_MSRE, %function
getICC_MSRE:
  MRC p15,6,r0,c12,c12,5 // Read ICC_MSRE into r0
  BX lr

   

// ------------------------------------------------------------

	.global enableGroup0Ints
  // void enableGroup0Ints(void)
	.type enableGroup0Ints, %function
enableGroup0Ints:
  MOV   r0, #1
  MCR p15,0,r0,c12,c12,6 // Write r0 to ICC_IGRPEN0
  ISB
  BX lr

   

// ------------------------------------------------------------

	.global disableGroup0Ints
  // void disableGroup0Ints(void)
	.type disableGroup0Ints, %function
disableGroup0Ints:

  MOV   r0, #0
  MCR p15,0,r0,c12,c12,6 // Write r0 to ICC_IGRPEN0
  ISB
  BX lr

   

// ------------------------------------------------------------

	.global enableGroup1Ints
  // void enableGroup1Ints((void)//
	.type enableGroup1Ints, %function
enableGroup1Ints:
  MRC p15,0,r0,c12,c12,7 // Read ICC_IGRPEN1 into r0
  ORR   r0, r0, #1
  MCR p15,0,r0,c12,c12,7 // Write r0 to ICC_IGRPEN1
  ISB
  BX lr
   

// ------------------------------------------------------------

	.global disableGroup1Ints
  // void disableGroup1Ints(void)//
	.type disableGroup1Ints, %function
disableGroup1Ints:
  MOV   r1, #1
  MRC p15,0,r0,c12,c12,7 // Read ICC_IGRPEN1 into r0
  BIC   r0, r0, r1
  MCR p15,0,r0,c12,c12,7 // Write r0 to ICC_IGRPEN1
  ISB
  BX lr
   
  
// ------------------------------------------------------------

	.global enableNSGroup1Ints
  // void enableNSGroup1Ints(void)
	.type enableNSGroup1Ints, %function
enableNSGroup1Ints:
  MRC p15,6,r0,c12,c12,7 // Read ICC_MGRPEN1 into r0
  ORR   r0, r0, #1
  MCR p15,6,r0,c12,c12,7 // Write r0 to ICC_MGRPEN1
  ISB
  BX lr

   

// ------------------------------------------------------------

	.global disableNSGroup1Ints
  // void disableNSGroup1Ints(void)
	.type disableNSGroup1Ints, %function
disableNSGroup1Ints:
  MOV   r1, #0x1
  MRC p15,6,r0,c12,c12,7 // Read ICC_MGRPEN1 into r0
  BIC   r0, r0, r1
  MCR p15,6,r0,c12,c12,7 // Write r0 to ICC_MGRPEN1
  ISB
  BX lr

   

// ------------------------------------------------------------

	.global getICC_MCTLR
  // unsigned int getICC_MCTLR(void)//
	.type getICC_MCTLR, %function
getICC_MCTLR:
  MRC p15,6,r0,c12,c12,4 // Read ICC_MCTLR into r0
  BX lr
   

// ------------------------------------------------------------
	.global setICC_MCTLR
  // void setICC_MCTLR(unsigned int value)
	.type setICC_MCTLR, %function
setICC_MCTLR:
  MCR p15,6,r0,c12,c12,4 // Write r0 to ICC_MCTLR
  ISB
  BX lr

   

// ------------------------------------------------------------

	.global getICC_CTLR
  // unsigned int getICC_CTLR(void)//
	.type getICC_CTLR, %function
getICC_CTLR:
  MRC p15,0,r0,c12,c12,4 // Read ICC_CTLR into r0
  BX lr
   

// ------------------------------------------------------------

	.global setICC_CTLR
  // void setICC_CTLR(unsigned int value)
	.type setICC_CTLR, %function
setICC_CTLR:
  MCR p15,0,r0,c12,c12,4 // Write r0 to ICC_CTLR
  ISB
  BX lr

   

// ------------------------------------------------------------

	.global readIntAck
  // unsigned int readIntAck(void)//
	.type readIntAck, %function
readIntAck:
  MRC p15,0,r0,c12,c8,0 // Read ICC_IAR0 into r0
  BX lr
   

// ------------------------------------------------------------

	.global writeEOI
  // void writeEOI(unsigned int ID)//
	.type writeEOI, %function
writeEOI:
  MCR p15,0,r0,c12,c8,1 // Write r0 to ICC_EOIR0
  ISB
  BX lr
   

// ------------------------------------------------------------

	.global writeDIR
  // void writeDIR(unsigned int ID)//
	.type writeDIR, %function
writeDIR:
  MCR p15,0,r0,c12,c11,1 // Write r0 to ICC_DIR
  ISB
  BX lr
   
  
// ------------------------------------------------------------

	.global readAliasedIntAck
  // unsigned int readAliasedIntAck(void)//
	.type readAliasedIntAck, %function
readAliasedIntAck:
  MRC p15,0,r0,c12,c12,0 // Read ICC_IAR1 into r0
  BX lr
   

// ------------------------------------------------------------

	.global writeAliasedEOI
  // void writeAliasedEOI(unsigned int ID)//
	.type writeAliasedEOI, %function
writeAliasedEOI:
  MCR p15,0,r0,c12,c12,1 // Write r0 to ICC_EOIR1
  DSB   SY
  BX lr
   
  
// ------------------------------------------------------------

	.global setPriorityMask
  // void setPriorityMask(unsigned int ID)//
	.type setPriorityMask, %function
setPriorityMask:
  MCR p15,0,r0,c4,c6,0 // Write r0 to ICC_PMR
  BX lr
   

// ------------------------------------------------------------

	.global getBinaryPoint
  // unsigned int getBinaryPoint(void)//
	.type getBinaryPoint, %function
getBinaryPoint:
  MRC p15,0,r0,c12,c8,3 // Read ICC_BPR0 into r0
  BX lr
   

// ------------------------------------------------------------

	.global setBinaryPoint
  // void setBinaryPoint(unsigned int ID)//
	.type setBinaryPoint, %function
setBinaryPoint:
  MCR p15,0,r0,c12,c8,3 // Write r0 to ICC_BPR0
  ISB
  BX lr
   

// ------------------------------------------------------------

	.global getAliasedBinaryPoint
  // unsigned int getAliasedBinaryPoint(void)//
	.type getAliasedBinaryPoint, %function
getAliasedBinaryPoint:
  MRC p15,0,r0,c12,c12,3 // Read ICC_BPR1 into r0
  BX lr
   

// ------------------------------------------------------------

	.global setAliasedBinaryPoint
  // void setAliasedBinaryPoint(unsigned int ID)//
	.type setAliasedBinaryPoint, %function
setAliasedBinaryPoint:
  MCR p15,0,r0,c12,c12,3 // Write r0 to ICC_BPR1
  ISB
  BX lr
   

// ------------------------------------------------------------

	.global getRunningPriority
  // unsigned int getRunningPriority(void)//
	.type getRunningPriority, %function
getRunningPriority:
  MRC p15,0,r0,c12,c11,3 // Read ICC_RPR into r0
  BX lr
   

// ------------------------------------------------------------
// SGIs
// ------------------------------------------------------------

	.global sendGroup0SGI
  // void sendGroup0SGI(unsigned int ID, unsigned int mode, unsigned target_list)//
	.type sendGroup0SGI, %function
sendGroup0SGI:
  ORR   r0, r0, r2
  MCRR p15,2,r0,r1,c12 // Write r0 to ICC_SGI0R[31:0] and r1 to ICC_SGI0R[63:32]
  BX lr
   
  
// ------------------------------------------------------------

	.global sendGroup1SGI
  // void sendGroup1SGI(unsigned int ID, unsigned int mode, unsigned target_list)//
	.type sendGroup1SGI, %function
sendGroup1SGI:
  ORR   r0, r0, r2
  MCRR p15,0,r0,r1,c12 // Write r0 to ICC_SGI1R[31:0] and r1 to ICC_SGI1R[63:32]
  BX lr
   

// ------------------------------------------------------------

	.global sendOtherGroup1SGI
  // void sendOtherGroup1SGI(unsigned int ID, unsigned int mode, unsigned target_list)//
	.type sendOtherGroup1SGI, %function
sendOtherGroup1SGI:
  ORR   r0, r0, r2
  MCRR p15,1,r0,r1,c12 // Write r0 to ICC_ASGI1R[31:0] and r1 to ICC_ASGI1R[63:32]
  BX lr
   
// ------------------------------------------------------------

	.global setICH_HCR
  // void setICH_HCR(unsigned int value)
	.type setICH_HCR, %function
setICH_HCR:
  MCR p15,4,r0,c12,c11,0 // Write r0 to ICH_HCR
  ISB
  BX lr

// ------------------------------------------------------------

	.global getICH_HCR
  // unsigned int getICH_HCR(void)
	.type getICH_HCR, %function
getICH_HCR:
  MRC p15,4,r0,c12,c11,0 // Read ICH_HCR into r0
  BX lr

// ------------------------------------------------------------

	.global getICH_AP0R0
  // unsigned int getICH_AP0R0(void)//
	.type getICH_AP0R0, %function
getICH_AP0R0:
  MRC p15,4,r0,c12,c8,0 // Read ICH_AP0R0 into r0
  BX lr
   

// ------------------------------------------------------------
	.global setICH_AP0R0
  // void setICH_AP0R0(unsigned int value)
	.type setICH_AP0R0, %function
setICH_AP0R0:
  MCR p15,4,r0,c12,c8,0 // Write r0 to ICH_AP0R0
  ISB
  BX lr

// ------------------------------------------------------------

	.global getICH_AP1R0
  // unsigned int getICH_AP1R0(void)//
	.type getICH_AP1R0, %function
getICH_AP1R0:
  MRC p15,4,r0,c12,c9,0 // Read ICH_AP1R0 into r0
  BX lr
   

// ------------------------------------------------------------
	.global setICH_AP1R0
  // void setICH_AP1R0(unsigned int value)
	.type setICH_AP1R0, %function
setICH_AP1R0:
  MCR p15,4,r0,c12,c9,0 // Write r0 to ICH_AP1R0
  ISB
  BX lr


// ------------------------------------------------------------

	.global getICH_LR0
  // unsigned int getICH_LR0(void)
	.type getICH_LR0, %function
getICH_LR0:
  MRC p15,4,r0,c12,c12,0 // Read ICH_LR0 into r0
  BX lr

// ------------------------------------------------------------

	.global setICH_LR0
  // void setICH_LR0(unsigned int value)
	.type setICH_LR0, %function
setICH_LR0:
  MCR p15,4,r0,c12,c12,0 // Write r0 to ICH_LR0
  ISB
  BX lr

// ------------------------------------------------------------

	.global getICH_LRC0
  // unsigned int getICH_LRC0(void)
	.type getICH_LRC0, %function
getICH_LRC0:
  MRC p15,4,r0,c12,c14,0 // Read ICH_LRC0 into r0
  BX lr

// ------------------------------------------------------------

	.global setICH_LRC0
  // void setICH_LRC0(unsigned int value)
	.type setICH_LRC0, %function
setICH_LRC0:
  MCR p15,4,r0,c12,c14,0 // Write r0 to ICH_LRC0
  ISB
  BX lr

// ------------------------------------------------------------

	.global getICH_LR1
  // unsigned int getICH_LR1(void)
	.type getICH_LR1, %function
getICH_LR1:
  MRC p15,4,r0,c12,c12,1 // Read ICH_LR1 into r0
  BX lr

// ------------------------------------------------------------

	.global setICH_LR1
  // void setICH_LR1(unsigned int value)
	.type setICH_LR1, %function
setICH_LR1:
  MCR p15,4,r0,c12,c12,1 // Write r1 to ICH_LR1
  ISB
  BX lr

// ------------------------------------------------------------

	.global getICH_LRC1
  // unsigned int getICH_LRC1(void)
	.type getICH_LRC1, %function
getICH_LRC1:
  MRC p15,4,r0,c12,c14,1 // Read ICH_LRC1 into r0
  BX lr

// ------------------------------------------------------------

	.global setICH_LRC1
  // void setICH_LRC1(unsigned int value)
	.type setICH_LRC1, %function
setICH_LRC1:
  MCR p15,4,r0,c12,c14,1 // Write r0 to ICH_LRC1
  ISB
  BX lr

// ------------------------------------------------------------

	.global getICH_LR2
  // unsigned int getICH_LR2(void)
	.type getICH_LR2, %function
getICH_LR2:
  MRC p15,4,r0,c12,c12,2 // Read ICH_LR2 into r0
  BX lr

// ------------------------------------------------------------

	.global setICH_LR2
  // void setICH_LR2(unsigned int value)
	.type setICH_LR2, %function
setICH_LR2:
  MCR p15,4,r0,c12,c12,2 // Write r1 to ICH_LR2
  ISB
  BX lr

// ------------------------------------------------------------

	.global getICH_LRC2
  // unsigned int getICH_LRC2(void)
	.type getICH_LRC2, %function
getICH_LRC2:
  MRC p15,4,r0,c12,c14,2 // Read ICH_LRC2 into r0
  BX lr

// ------------------------------------------------------------

	.global setICH_LRC2
  // void setICH_LRC2(unsigned int value)
	.type setICH_LRC2, %function
setICH_LRC2:
  MCR p15,4,r0,c12,c14,2 // Write r0 to ICH_LRC2
  ISB
  BX lr

// ------------------------------------------------------------

	.global getICH_LR3
  // unsigned int getICH_LR3(void)
	.type getICH_LR3, %function
getICH_LR3:
  MRC p15,4,r0,c12,c12,3 // Read ICH_LR3 into r0
  BX lr

// ------------------------------------------------------------

	.global setICH_LR3
  // void setICH_LR3(unsigned int value)
	.type setICH_LR3, %function
setICH_LR3:
  MCR p15,4,r0,c12,c12,3 // Write r1 to ICH_LR3
  ISB
  BX lr

// ------------------------------------------------------------

	.global getICH_LRC3
  // unsigned int getICH_LRC3(void)
	.type getICH_LRC3, %function
getICH_LRC3:
  MRC p15,4,r0,c12,c14,3 // Read ICH_LRC3 into r0
  BX lr

// ------------------------------------------------------------

	.global setICH_LRC3
  // void setICH_LRC3(unsigned int value)
	.type setICH_LRC3, %function
setICH_LRC3:
  MCR p15,4,r0,c12,c14,3 // Write r0 to ICH_LRC3
  ISB
  BX lr

// ------------------------------------------------------------
// End of v8rgicv3cpuif.s
// ------------------------------------------------------------
