/********************************************************************************/
/* FILE NAME: etpuc_common.h                        COPYRIGHT (c) MOTOROLA 2003 */
/* VERSION:  0.9                                    All Rights Reserved         */
/*                                                                              */
/* This file is maintained as part of the support for the eTPU C development    */
/* tools by Byte Craft Limited.                                                 */
/*                                                                              */
/* This code may be adapted for any purpose when used with the                  */
/* eTPU C Code Development System.  No warranty is implied or                   */
/* given as to their usability for any purpose. Portions of this                */
/* file is Copyright Motorola.                                                  */
/*                                                                              */
/*	(c) Copyright 2002-2004 Byte Craft Limited                                  */
/*	421 King St.N., Waterloo, ON, Canada, N2J 4E4                               */
/*	VOICE: 1 (519) 888 6911                                                     */
/*	email: support@bytecraft.com                                                */
/*                                                                              */
/*	Walter Banks                                                                */
/* 	                                                                            */
/*                                                                              */
/* DESCRIPTION: This file defines the application friendly macros, functions    */
/*              for common task like channel set up and register control fields */
/*				access.                                                         */
/*                                                                              */
/*              etpuc_common.h is based follow header files commonly used by    */
/*              eTPU development community:                                     */
/*              AshWareETpu.h - developped by Andy Klumpp from Ash Ware         */
/*              Mike.h - developped by Mike Pauwels from Motorola               */
/*              etpu_common.h - developped by Ming Li from Motorola             */
/*              Jeff Leoliger from Motorola and Walter Banks from Byte Craft    */
/*              also made significant contibution.                              */
/*==============================================================================*/
/* UPDATE HISTORY                                                               */
/* REV      AUTHOR        DATE		DESCRIPTION OF CHANGE                       */
/* ---      -------      --------    ---------------------                      */
/* 0.0      Ming Li      10/30/03    Initial creation                           */
/* 0.1      Ming Li      11/12/03    Updated to incorporate comments from eTPU  */
/*                                   development community.                     */
/* 0.2      Walter Banks 15 Dec 03   Made changes to be reflect definitions in  */
/*                                   eTPUc.h                                    */
/*                                   Corrected IsTransALatched()                */
/*                                             IsTransBLatched()                */
/*                                   Added missing definitions                  */
/*                                             set_pin_per_opacA                */
/*                                             set_pin_per_opacB                */
/*                                             force_pin_high                   */
/*                                             force_pin_low                    */
/*                                   Corrected opac1 to opacA                   */
/*                                             opac2 to opacB                   */
/*                                                                              */
/* 0.3      Walter Banks  5 Jan 04   Corrected opacB = pin_action; to           */
/*                                     opacA = pin_action;                      */
/* 0.4     J. Loeliger    21/Jan/04  Cleared up reorganized and added more:     */
/*                                   -Moved TRUE & FALSE to top and added       */
/*                                      conditional                             */
/*									 -Moved entry conditions up and added macros*/
/*                                      for all conditions                      */
/*									 -Merged with AshWareETpu.h                 */
/*   								 -Removed commet with of PDCM names.        */
/*                                   -Grouped latches and flags together.       */
/*                                     -added new set and clear for latches and */
/*                                        flags                                 */
/*                                   -Merged output pin value to 1 set rather   */
/*                                      than 2                                  */
/*                                   -Added long channel mode names.            */
/*                                   -Added SetupMatch_AB for better            */
/*                                      optimization                            */
/*                                   -Added match only conditions for output    */
/*                                      functions.                              */
/*                                   -Added new ActionUnintA/B macros           */
/*                                   -Added new Pin macro                       */
/*                                   -And more.                                 */
/* 0.5     J. Loeliger     12/Feb/04 -Changed DetectTrans to OnTrans.           */
/* 0.6     J. Loeliger     30/Mar/04 -Added SetupMatchB and fixed some old      */
/*                                     references to 1 & 2 -> A & B             */
/* 0.7     J. Loeliger     16/Apr/04 -Changed Disable match (MRLE) to =0        */
/* 0.8     J. Loeliger     27/Apr/04 -Fixed Disable/Enable match in thread,     */
/*                                      they were swapped.                      */
/* 0.9     J. Loeliger     10/May/04 -Added support for OBE with new            */
/*         M. Brejl                   EnableOutputBuffer()/DisableOutputBuffer()*/
/*                                    Removed all // comments. Changed Motorola */
/*                                    to Freescale.                             */
/*                                    Fixed spelling mistake in GetCurentChanNum*/
/********************************************************************************/
#ifndef _ETPUC_COMMON__H_
#define _ETPUC_COMMON__H_

/*---------------------------------------------------------------------------+
|                      	Constants Definition      							 |
+---------------------------------------------------------------------------*/
#ifndef TRUE
#define TRUE	1
#endif

#ifndef FALSE
#define FALSE	0
#endif

/*--------------------------------------------------------------------------+
|                      Entry Conditions Definition      					|
+--------------------------------------------------------------------------*/
#define HostServiceRequest               hsr
#define IsHostServiceRequestEvent(num)   (hsr==num)

#define MatchA_TransB                    (m1==1)
#define IsMatchAOrTransitionBEvent()     (m1==1)
#define matchA_transB                    (m1==1)

#define MatchB_TransA                    (m2==1)
#define IsMatchBOrTransitionAEvent()     (m2==1)
#define matchB_transA	                 (m2==1)

#define linkRequest                      (lsr==1)
#define IsLinkServiceRequestEvent()      (lsr==1)

/*For output only functions */
#define MatchA                           (m1==1)
#define MatchB                           (m2==1)

/*---------------------------------------------------------------------+
|                        Latches and Flags                             |
+---------------------------------------------------------------------*/
/* Usage: Set(flag0 | flag0);*/
#define Set(cond)     (cond = 1)

/* Usage: Clear(flag0 | flag0 | LSRLatch | lsr | MatchALatch | mrlA |
                 MatchBLatch | mrlB | TransLatch | tdl);         */
#define Clear(cond)   (cond = 0)

#define ClrFlag0()            (channel.FLAG0 = 0)
#define SetFlag0()            (channel.FLAG0 = 1)
#define ClrFlag1()            (channel.FLAG1 = 0)
#define SetFlag1()            (channel.FLAG1 = 1)

#define ClearLSRLatch()                (lsr  = 0)
#define ClearLinkServiceRequestEvent() (lsr  = 0)

#define ClearMatchALatch()    (channel.MRLA = 0)
#define ClearMatchAEvent()    (channel.MRLA = 0)

#define ClearMatchBLatch()    (channel.MRLB = 0)
#define ClearMatchBEvent()    (channel.MRLB = 0)

#define ClearTransLatch()       (channel.TDL = 0)
#define ClearTransitionEvents() (channel.TDL = 0)

#define ClearAllLatches() 	(lsr = 0);(mrlA = 0);(mrlB = 0);(tdl = 0);

/* There are used with the clear macro */
#define LSRLatch    lsr
#define LatchedMatchA mrlA
#define LatchedMatchB mrlB
#define TransLatch  tdl

/*---------------------------------------------------------------------+
|                       Set Output Pin                                 |
+---------------------------------------------------------------------*/
/* usage: Pin( SetHigh | SetLow | PerPacA | PerPacB ); */
#define Pin( state )          (channel.PIN=state)

#define SetPinHigh()          (channel.PIN=pin_high)
#define SetPinLow()           (channel.PIN=pin_low)
#define SetPinPerPacA()       (channel.PIN=pin_opacA)
#define SetPinPerPacB()       (channel.PIN=pin_opacB)

/*These are used with the Pin macro */
#define SetHigh                pin_high
#define SetLow                 pin_low
#define PerPacA                pin_opacA
#define PerPacB                pin_opacB

/*---------------------------------------------------------------------+
|                      Branch Conditions                               |
+----------------------------------------------------------------------*/
#define SampledInputPin            channel.PSS
#define IsLatchedInputPin()       (channel.PSS==1)
#define IsSampledInputPinHigh()   (channel.PSS==1)
#define IsLatchedInputPinHigh()   (channel.PSS==1)

#define CurrentInputPin            channel.PSTI
#define IsCurrentInputPin()       (channel.PSTI==1)
#define IsCurrentInputPinHigh()   (channel.PSTI==1)

#define CurrentOutputPin           channel.PSTO
#define IsCurrentOutputPin()      (channel.PSTO==1)
#define IsCurrentOutputPinHigh()  (channel.PSTO==1)

#define TransitionALatch           channel.TDLA
#define IsTransALatched()         (channel.TDLA==1)
#define IsLatchedTransitionA()    (channel.TDLA==1)

#define TransitionBLatch           channel.TDLB
#define IsTransBLatched()         (channel.TDLB==1)
#define IsLatchedTransitionB()    (channel.TDLB==1)

#define MatchALatch            channel.MRLA
#define IsMatchALatched()     (channel.MRLA==1)
#define IsLatchedMatchA()           (channel.MRLA==1)

#define MatchBLatch            channel.MRLB
#define IsMatchBLatched()     (channel.MRLB==1)
#define IsLatchedMatchB()           (channel.MRLB==1)

#define LinkServiceRequest     channel.LSR
#define IsLinkReqActive()     (channel.LSR==1)
#define IsSampledLink()       (channel.LSR==1)
#define IsLatchedLink()       (channel.LSR==1)

#define FunctionMode0          channel.FM0
#define IsFunctionMode0()     (channel.FM0==1)
#define IsSampledFuncMode0()  (channel.FM0==1)
#define IsLatchedFuncMode0()  (channel.FM0==1)

#define FunctionMode1          channel.FM1
#define IsFunctionMode1()     (channel.FM1==1)
#define IsSampledFuncMode1()  (channel.FM1==1)
#define IsLatchedFuncMode1()  (channel.FM1==1)

/*---------------------------------------------------------------------+
|                      Channel Modes                                   |
+---------------------------------------------------------------------*/
#define EitherMatchBlockingSingleTransition()     channel.PDCM = em_b_st
#define EitherMatchBlockingDoubleTransition()     channel.PDCM = em_b_dt
#define EitherMatchNonBlockingSingleTransition()  channel.PDCM = em_nb_st
#define EitherMatchNonBlockingDoubleTransition()  channel.PDCM = em_nb_dt
#define Match2SingleTransition()                  channel.PDCM = m2_st
#define Match2DoubleTransition()    	          channel.PDCM = m2_dt
#define BothMatchSingleTransition()               channel.PDCM = bm_st
#define BothMatchDoubleTransition()               channel.PDCM = bm_dt
#define Match2OrderedSingleBlockingTransition()   channel.PDCM = m2_o_st
#define Match2OrderedDoubleTransition()           channel.PDCM = m2_o_dt
#define SingleMatchSingleTransitionEnhanced()     channel.PDCM = sm_st_e
#define SingleMatchSingleTransition()             channel.PDCM = sm_st
#define SingleMatchDoubleTransition()             channel.PDCM = sm_dt

#define SetChannelMode(mode)	(channel.PDCM = mode)

/*---------------------------------------------------------------------+
|                         Action Units                                 |
+---------------------------------------------------------------------*/
/*Usage: ActionUnitA( MatchTCR1 | MatchTCR2, CaptureTCR1 | CaptureTCR2, \
                        GreaterEqual | EqualOnly);             */
#define ActionUnitA( match, capture, compare)   (act_unitA=match##capture##compare)
#define ActionUnitB( match, capture, compare)   (act_unitB=match##capture##compare)

#define MatchTCR1    Mtcr1_
#define MatchTCR2    Mtcr2_
#define CaptureTCR1  Ctcr1_
#define CaptureTCR2  Ctcr2_
#define GreaterEqual ge
#define EqualOnly    eq

/* Action Unit A, Time Bases for match and capture */
#define TimeBaseAMatchTcr1CaptureTcr1GreaterEqual()      channel.TBSA = Mtcr1_Ctcr1_ge
#define TimeBaseAMatchTcr2CaptureTcr1GreaterEqual()      channel.TBSA = Mtcr2_Ctcr1_ge
#define TimeBaseAMatchTcr1CaptureTcr2GreaterEqual()      channel.TBSA = Mtcr1_Ctcr2_ge
#define TimeBaseAMatchTcr2CaptureTcr2GreaterEqual()      channel.TBSA = Mtcr2_Ctcr2_ge
#define TimeBaseAMatchTcr1CaptureTcr1ExactlyEqual()      channel.TBSA = Mtcr1_Ctcr1_eq
#define TimeBaseAMatchTcr2CaptureTcr1ExactlyEqual()      channel.TBSA = Mtcr2_Ctcr1_eq
#define TimeBaseAMatchTcr1CaptureTcr2ExactlyEqual()      channel.TBSA = Mtcr1_Ctcr2_eq
#define TimeBaseAMatchTcr2CaptureTcr2ExactlyEqual()      channel.TBSA = Mtcr2_Ctcr2_eq

/* Action Unit B, Time Bases for match and capture */
#define TimeBaseBMatchTcr1CaptureTcr1GreaterEqual()      channel.TBSB = Mtcr1_Ctcr1_ge
#define TimeBaseBMatchTcr2CaptureTcr1GreaterEqual()      channel.TBSB = Mtcr2_Ctcr1_ge
#define TimeBaseBMatchTcr1CaptureTcr2GreaterEqual()      channel.TBSB = Mtcr1_Ctcr2_ge
#define TimeBaseBMatchTcr2CaptureTcr2GreaterEqual()      channel.TBSB = Mtcr2_Ctcr2_ge
#define TimeBaseBMatchTcr1CaptureTcr1ExactlyEqual()      channel.TBSB = Mtcr1_Ctcr1_eq
#define TimeBaseBMatchTcr2CaptureTcr1ExactlyEqual()      channel.TBSB = Mtcr2_Ctcr1_eq
#define TimeBaseBMatchTcr1CaptureTcr2ExactlyEqual()      channel.TBSB = Mtcr1_Ctcr2_eq
#define TimeBaseBMatchTcr2CaptureTcr2ExactlyEqual()      channel.TBSB = Mtcr2_Ctcr2_eq

/*---------------------------------------------------------------------+
|                         Output Pin Action                            |
+----------------------------------------------------------------------*/
/* usage: OnMatchA( NoChange | PinHigh | PinLow | PinToggle ); */
#define OnMatchA(action)      (opacA = action)
#define OnMatchB(action)      (opacB = action)

#define NoChange    match_no_change
#define PinHigh     match_high
#define PinLow      match_low
#define PinToggle   match_toggle

/* Action Unit A, Output Pin Actions */
#define OnMatchAPinNoChange()      channel.OPACA = match_no_change
#define OnMatchAPinHigh()          channel.OPACA = match_high
#define OnMatchAPinLow()           channel.OPACA = match_low
#define OnMatchAPinToggle()        channel.OPACA = match_toggle
#define OnInputActionAPinLow()     channel.OPACA = transition_low
#define OnInputActionAPinHigh()    channel.OPACA = transition_high
#define OnInputActionAPinToggle()  channel.OPACA = transition_toggle

/* Action Unit B, Output Pin Actions */
#define OnMatchBPinNoChange()      channel.OPACB = match_no_change
#define OnMatchBPinHigh()          channel.OPACB = match_high
#define OnMatchBPinLow()           channel.OPACB = match_low
#define OnMatchBPinToggle()        channel.OPACB = match_toggle
#define OnInputActionBPinLow()     channel.OPACB = transition_low
#define OnInputActionBPinHigh()    channel.OPACB = transition_high
#define OnInputActionBPinToggle()  channel.OPACB = transition_toggle

/*---------------------------------------------------------------------+
|                         Input Pin Action                             |
+----------------------------------------------------------------------*/
/*usage: DetectTransA( no_detect | low_high | high_low | any_trans | ...); */
#define OnTransA(action)     (ipacA = action)
#define OnTransB(action)     (ipacB = action)

#define NoDetect  no_detect
#define LowHigh   low_high
#define HighLow   high_low
#define AnyTrans  any_trans

/* Action Unit A, Input Pin Edge Detection */
#define DetectADisable()        channel.IPACA = no_detect
#define DetectARisingEdge()     channel.IPACA = low_high
#define DetectAFallingEdge()    channel.IPACA = high_low
#define DetectAAnyEdge()        channel.IPACA = any_trans
#define DetectALowOnMatchA()    channel.IPACA = detect_input_0_on_match
#define DetectAHighOnMatchA()   channel.IPACA = detect_input_1_on_match

/* Action Unit B, Input Pin Edge Detection */
#define DetectBDisable()        channel.IPACB = no_detect
#define DetectBRisingEdge()     channel.IPACB = low_high
#define DetectBFallingEdge()    channel.IPACB = high_low
#define DetectBAnyEdge()        channel.IPACB = any_trans
#define DetectBLowOnMatchA()    channel.IPACB = detect_input_0_on_match
#define DetectBHighOnMatchA()   channel.IPACB = detect_input_1_on_match

/*---------------------------------------------------------------------+
|  Writing the match registers and enabling/disabling the Match        |
|    Recognition Latch Enable                                          |
+---------------------------------------------------------------------*/
#define WriteErtAToMatchAAndEnable()   channel.ERWA = 0
#define EnableMatchA()                (channel.ERWA = 0)

#define WriteErtBToMatchBAndEnable()   channel.ERWB = 0
#define EnableMatchB()                (channel.ERWB = 0)

#define DisableMatchDetection();       channel.MRLE=0
#define DisableMatch()                (channel.MRLE = 0)

/*---------------------------------------------------------------------+
|                        Matches in Threads                            |
+---------------------------------------------------------------------*/
#define DisableMatchesInThread()    match_disable()
#define EnableMatchesInThread()     match_enable()

/*---------------------------------------------------------------------+
|                     Enabling/Disabling Event Handling                |
+---------------------------------------------------------------------*/
#define EnableEventHandling()                   (channel.MTD = 0)
#define EnableMatchAndTransitionEventHandling()  channel.MTD = 0

#define DisableEventHandling()                  (channel.MTD = 1)
#define DisableMatchAndTransitionEventHandling() channel.MTD = 1

/*---------------------------------------------------------------------+
|                     Enabling/Disabling Output Buffer                 |
+---------------------------------------------------------------------*/
#define EnableOutputBuffer()           (channel.TBSA = enable_output_buffer)
#define DisableOutputBuffer()          (channel.TBSA = disable_output_buffer)

/*----------------------------------------------------------------------+
|                     Semaphore operations                              |
+----------------------------------------------------------------------*/
#define IsSemaphoreLocked()   (channel.SMPR == 1)
#define LockSemaphore(num)    (channel.SMPR = num)
#define FreeSemaphore()       (channel.SMPR = -1)

/*---------------------------------------------------------------------+
|                             Exceptions                               |
+---------------------------------------------------------------------*/
/* Channel control macros */
#define SetChannelInterrupt()       (channel.CIRC = 0)
#define SetChannelInterruptRequest()(channel.CIRC = 0)

#define SetDataTransferInterrupt()        (channel.CIRC = 1)
#define SetDataTransferInterruptRequest() (channel.CIRC = 1)

#define SetGlobalException()  (channel.CIRC = 2)

/*---------------------------------------------------------------------+
|                         Channel control                              |
+---------------------------------------------------------------------*/
#define LinkToChannel(ChNum)	    (link = ChNum)  /*Generate the linker request to channel[ChNum] */
#define LinkTo(num)                 link = num;
#define LinkToEngine1Chan(num)      link = (num | (1<<6))
#define LinkToEngine2Chan(num)      link = (num | (2<<6))
#define LinkToOtherEngineChan(num)  link = (num | (3<<6))

#define SwitchToChannel(ChNum)      (chan = ChNum)  /*switch to specified channel from current channel*/
#define GetCurrentChanNum()          (chan)          /*return current channel number*/

/* Read capture register  */
#define GetCapRegA()          (erta)
#define GetCapRegB()          (ertb)

/*----------------------------------------------------------------------+
|                          Complex Macros   							|
+----------------------------------------------------------------------*/
/*These macros should provide to most optimized way on doing things.
  They should be in the best order for optimizing.
  The compiler might be able to identify this code for optimization. */

#define SetupMatchA(reference) \
	erta = reference; \
	EnableMatchA();	\
	ClearMatchALatch();

#define SetupMatchB(reference) \
	ertb = reference; \
	EnableMatchB();	\
	ClearMatchBLatch();

/*These are ONLY useful for init. and if you know which TCR you want to use.
  Latches are cleared at the end so it can be combined with other latches.*/
#define ConfigMatch_AB() \
	WriteErtAToMatchAAndEnable(); \
	WriteErtBToMatchBAndEnable(); \
	EnableMatchA();	\
	EnableMatchB();	\
	EnableEventHandling();\
	ClearMatchALatch();\
	ClearMatchBLatch();

#define SetupMatch_A(reference, timebase_comparator, pin_action) \
	erta = reference; \
	act_unitA = timebase_comparator; \
	opacA = pin_action; \
	EnableMatchA();	\
	ClearMatchALatch();\
	EnableEventHandling();

#define SetupMatch_B(reference, timebase_comparator, pin_action) \
	ertb = reference; \
	act_unitB = timebase_comparator; \
	opacB = pin_action; \
	EnableMatchB();	\
	ClearMatchBLatch();\
	EnableEventHandling();

#define SetupCaptureTrans_A(timebase, pin_trans) \
	act_unitA = timebase;\
	ipacA = pin_trans;\
	ClearTransLatch();\
	EnableEventHandling();

#define SetupCaptureTrans_B(timebase, pin_trans) \
	act_unitB = timebase;\
	ipacB = pin_trans;\
	ClearTransLatch();\
	EnableEventHandling();

#endif /* _ETPUC_COMMON__H_ */

/*********************************************************************
 *
 * Copyright:
 *	Freescale Semiconductor, INC. All Rights Reserved.
 *  You are hereby granted a copyright license to use, modify, and
 *  distribute the SOFTWARE so long as this entire notice is
 *  retained without alteration in any modified and/or redistributed
 *  versions, and that such modified versions are clearly identified
 *  as such. No licenses are granted by implication, estoppel or
 *  otherwise under any patents or trademarks of Freescale
 *  Semiconductor, Inc. This software is provided on an "AS IS"
 *  basis and without warranty.
 *
 *  To the maximum extent permitted by applicable law, Freescale
 *  Semiconductor DISCLAIMS ALL WARRANTIES WHETHER EXPRESS OR IMPLIED,
 *  INCLUDING IMPLIED WARRANTIES OF MERCHANTABILITY OR FITNESS FOR A
 *  PARTICULAR PURPOSE AND ANY WARRANTY AGAINST INFRINGEMENT WITH
 *  REGARD TO THE SOFTWARE (INCLUDING ANY MODIFIED VERSIONS THEREOF)
 *  AND ANY ACCOMPANYING WRITTEN MATERIALS.
 *
 *  To the maximum extent permitted by applicable law, IN NO EVENT
 *  SHALL Freescale Semiconductor BE LIABLE FOR ANY DAMAGES WHATSOEVER
 *  (INCLUDING WITHOUT LIMITATION, DAMAGES FOR LOSS OF BUSINESS PROFITS,
 *  BUSINESS INTERRUPTION, LOSS OF BUSINESS INFORMATION, OR OTHER
 *  PECUNIARY LOSS) ARISING OF THE USE OR INABILITY TO USE THE SOFTWARE.
 *
 *  Freescale Semiconductor assumes no responsibility for the
 *  maintenance and support of this software
 *
 ********************************************************************/

