.text

.equ SPR_DECAR  ,   54
.equ SPR_TBL_W  ,  284
.equ SPR_TBU_W  ,  285
.equ SPR_TCR    ,  340
.equ SPR_HID0   , 1008
.equ SPR_IVPR   ,   63
.equ SPR_IVOR10 ,  410
.equ SPR_TSR    ,  336
.equ TSR_DIS_H, 0x0800

.extern InterruptRoutine

.global enableTimeBase
enableTimeBase:
  li    r0,0
  mtspr SPR_TBU_W, r0     # reset TBU
  mtspr SPR_TBL_W, r0     # reset TBL
  mtspr SPR_TCR, r4       # set TCR
  mtspr SPR_HID0, r3      # set HID0
  blr

.global setDecDecar
setDecDecar:
  mtspr SPR_DECAR, r3
  blr

.global setInterruptVectorPrefix
setInterruptVectorPrefix:
  lis r3,TimerInterruptHandler@h
  mtspr SPR_IVPR,r3         # set IVPR
  li r3,TimerInterruptHandler@l
  mtspr SPR_IVOR10, r3       # set IVOR10
  blr  

.global enableInterrupts
enableInterrupts:
  sync
  wrteei 1
  blr
 
.global TimerInterruptHandler
.func TimerInterruptHandler,TimerInterruptHandler
.type TimerInterruptHandler,%function
.align 0x8
TimerInterruptHandler:
prolog:							# PROLOGUE 
	stwu		r1, -0x50 (r1)	# Create stack frame and store back chain
	stw			r12, 0x4C (r1)	# Store gprs
	stw			r11, 0x48 (r1)
	stw			r10, 0x44 (r1)
	stw			r9,  0x40 (r1)
	stw			r8,  0x3C (r1)
	stw			r7,  0x38 (r1)
	stw			r6,  0x34 (r1)
	stw			r5,  0x30 (r1)
	stw			r4,  0x2C (r1)
	stw			r3,  0x28 (r1)
	stw			r0,  0x24 (r1)	
	mfCR		r0				# Store CR
	stw			r0,  0x20 (r1)
	mfXER		r0				# Store XER
	stw			r0,  0x1C (r1)
	mfCTR		r0				# Store CTR
	stw			r0,  0x18 (r1)
	mfLR		r0				# Store LR
	stw			r0,  0x14 (r1)				
	 
	bl			InterruptRoutine			# Execute FIT ISR, but return here
  lis   r3, TSR_DIS_H
  mtspr SPR_TSR, r3

epilog:							# EPILOGUE
	lwz			r0,  0x14 (r1)	# Restore LR
	mtLR		r0
	lwz			r0,  0x18 (r1)	# Restore CTR
	mtCTR		r0
	lwz			r0,  0x1C (r1)	# Restore XER
	mtXER		r0
	lwz			r0,  0x20 (r1)	# Restore CR
	mtcrf		0xff, r0
	lwz			r0,  0x24 (r1)	# Restore gprs
	lwz			r3,  0x28 (r1)
	lwz			r4,  0x2C (r1)
	lwz			r5,  0x30 (r1)
	lwz			r6,  0x34 (r1)
	lwz			r7,  0x38 (r1)
	lwz			r8,  0x3C (r1)
	lwz			r9,  0x40 (r1)
	lwz			r10, 0x44 (r1)
	lwz			r11, 0x48 (r1)
	lwz			r12, 0x4C (r1)
	addi		r1, r1, 0x50	# Restore space on stack
	rfi							# End of Interrupt
.size TimerInterruptHandler, . - TimerInterruptHandler
.endfunc

.global disableInterrupts
disableInterrupts:
  sync
  wrteei 0
  blr
.end
