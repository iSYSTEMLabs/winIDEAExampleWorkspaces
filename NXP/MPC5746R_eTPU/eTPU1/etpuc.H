#ifndef __ETPUC_H
#define __ETPUC_H

/*
 *	eTPU C Code Development System
 *
 *	Processor register definitions
 *	for the eTPU C Code Development System.
 *
 *	This code may be adapted for any purpose
 *	when used with the eTPU C Code Development
 *	System.  No warranty is implied or given
 *	as to their usability for any purpose.
 *
 *	(c) Copyright 2002-2004 Byte Craft Limited
 *	421 King St.N., Waterloo, ON, Canada, N2J 4E4
 *	VOICE: 1 (519) 888 6911
 *	FAX  : 1 (519) 746 6751
 *	email: support@bytecraft.com
 *
 *	Byte Craft Limited
 *	Waterloo, Ontario
 *	Canada N2J 4E4
 *	(519) 888-6911
 *
 *	Walter Banks
 *
 * Revision history
 * ----------------
 * V0.90  WB    Nov 2003  First pre-release of etpuc.h based on V1.10 etpu.h with 
 *                        changes to reflect eTPU naming conventions 
 * V1.00  WB    Nov 2003  First release changes to the channel fields to reflect 
 *                        naming conventions for eTPU
 * V1.01  WB    Dec 2003  Corrected definitions of pin_opacA and pin_opacB 
 *
 * 
 *                         
 *  All of the eTPU registers can be directly accessed from C
 *
 */
     register_ac        ac   ;      // 24 bits
     register_b         b    ;      // 24 bits
     register_c         c    ;      // 24 bits
     register_d         d    ;      // 24 bits
     register_chan      chan ;      //  5 bits
     register_diob      diob ;      // 24 bits
     register_erta      erta ;      // 24 bits
     register_ertb      ertb ;      // 24 bits
     register_link      link ;      //  8 bits
     register_mach      mach ;      // 24 bits
     register_macl      macl ;      // 24 bits
     register_p         p    ;      // 24 bits
     register_rar       rar  ;      // 14 bits
     register_sr        sr   ;      // 24 bits
     register_tcr1      tcr1 ;      // 24 bits
     register_tcr2      tcr2 ;      // 24 bits
     register_tpr       tpr  ;      // 16 bits
     register_trr       trr  ;      // 24 bits
     register_chan_base chan_base;  // 24 bits
/*     
*/

/* The following registers are defined for 
   eTPU C application code */
/*
     register_chan       chan ;       //  5 bits
     register_erta       erta ;       // 24 bits
     register_ertb       ertb ;       // 24 bits
     register_tcr1       tcr1 ;       // 24 bits
     register_tcr2       tcr2 ;       // 24 bits
     register_tpr        tpr  ;       // 16 bits
     register_trr        trr  ;       // 24 bits
     register_chan_base  chan_base;   // 24 bits
     register_link       link;        // 8 bits 
*/
/*
   The link request can be set by copying the
   channel number into the link register. The
   following definition does this.
 */

#define link_request(channel) link = channel

/*
 *
 *
 *  All of the eTPU channel fields are predefined as a
 *  large C structure (chan_struct) by the eTPU C compiler.
 *
 *  struct chan {
 *               CIRC   int : 2 ;
 *               ERWA   int : 1 ;
 *               ERWB   int : 1 ;
 *               FLC    int : 3 ;
 *               IPACA  int : 3 ;
 *               IPACB  int : 3 ;
 *               LSR    int : 1 ;  // w test
 *               MRLA   int : 1 ;  // w test
 *               MRLB   int : 1 ;  // w test
 *               MRLE   int : 1 ;
 *               MTD    int : 2 ;
 *               OPACA  int : 3 ;
 *               OPACB  int : 3 ;
 *               PDCM   int : 4 ;
 *               PIN    int : 3 ;
 *               TBSA   int : 4 ;
 *               TBSB   int : 4 ;
 *               TDL    int : 1 ;
 *               SMPR   int : 2 ;
 * State Resolution
 *               FLAG0  int : 1 ;  // w only also defined in FLC
 *               FLAG1  int : 1 ;
 * Channel Flags
 *               FM0    int : 1 ;
 *               FM1    int : 1 ;
 *         //    LSR    int : 1 ;  // also channel fields
 *         //    MRLA   int : 1 ;  // also channel fields
 *         //    MRLB   int : 1 ;  // also channel fields
 *               PSS    int : 1 ;
 *               PSTI   int : 1 ;
 *               PSTO   int : 1 ;
 *               TDLA   int : 1 ;
 *               TDLB   int : 1 ;
 *              }
 ***/

chan_struct channel;

#define erwA       channel.ERWA
#define erwB       channel.ERWB

#define flc        channel.FLC
#define ipacA      channel.IPACA
#define ipacB      channel.IPACB
#define lsr        channel.LSR

#define mrlA       channel.MRLA
#define mrlB       channel.MRLB
#define mrle       channel.MRLE
#define mtd        channel.MTD
#define opacA      channel.OPACA
#define opacB      channel.OPACB
#define pdcm       channel.PDCM
#define pin        channel.PIN
#define act_unitA  channel.TBSA
#define act_unitB  channel.TBSB
#define tdl        channel.TDL
#define flag0      channel.FLAG0
#define flag1      channel.FLAG1
#define fm0        channel.FM0
#define fm1        channel.FM1
#define pss        channel.PSS
#define psti       channel.PSTI
#define psto       channel.PSTO
#define tdlA       channel.TDLA
#define tdlB       channel.TDLB


// IPAC 1,2
#define no_detect                 0
#define low_high                  1
#define high_low                  2
#define any_trans                 3
#define detect_input_0_on_match   4
#define detect_input_1_on_match   5
#define no_change_ipac            7

// OPAC 1,2  fields

#define match_no_change   0
#define match_high        1
#define match_low         2
#define match_toggle      3
#define opac_high         1
#define opac_low          2
#define toggle            3
#define opac_high_low     4
#define opac_low_high     5
#define transition_low    4
#define transition_high   5
#define transition_toggle 6

// PDCM fields
#define em_b_st  0				//Either Match, Blocking, Single Transition
#define em_b_dt  1				//Either Match, Blocking, Double Transition
#define em_nb_st 2				//Either Match, NonBlocking, Single Transition
#define em_nb_dt 3				//Either Match, NonBlocking, Double Transition
#define m2_st    4				//Match2, Single, Transition
#define m2_dt    5				//Match2, Double, Transition
#define bm_st    6				//Both Match, Single Transition
#define bm_dt    7				//Both Match, Double Transition
#define m2_o_st  8				//Match2, Ordered, Single Transition
#define m2_o_dt  9				//Match2, Ordered, Double Transition
#define sm_st_e  0xE				//Single Match, Single Transition, Enhanced
#define sm_st    0xC				//Single Match, Single Transition
#define sm_dt    0xD				//Single Match, Double Transition

// Time Bases Selection for match and capture
#define Mtcr1_Ctcr1_ge       0		//Match tcr1, Capture tcr1, greater than
#define Mtcr2_Ctcr1_ge       1		//Match tcr2, Capture tcr1, greater than
#define Mtcr1_Ctcr2_ge       2		//Match tcr1, Capture tcr2, greater than
#define Mtcr2_Ctcr2_ge       3		//Match tcr2, Capture tcr2, greater than
#define Mtcr1_Ctcr1_eq       4		//Match tcr1, Capture tcr1, equal
#define Mtcr2_Ctcr1_eq       5		//Match tcr2, Capture tcr1, equal
#define Mtcr1_Ctcr2_eq       6		//Match tcr1, Capture tcr2, equal
#define Mtcr2_Ctcr2_eq       7		//Match tcr2, Capture tcr2, equal

#define enable_output_buffer  8		// TBSx[3] = 1, TBSx[2:0] = 000
#define disable_output_buffer 9		// TBSx[3] = 1, TBSx[2:0] = 001
#define do_nothing	     15		// TBSx[3] = 1, TBSx[2:0] = 111

// Time Bases Selection for transition and capture
#define Capture_tcr1		0		//TBSx[2] = 0
#define Capture_tcr2		2		//TBSx[2] = 1

// Tooth Program Register structure

struct tpr_struct {
  int TICKS   : 10;
  int TPR10   : 1;
  int HOLD    : 1;
  int IPH     : 1;
  int MISSCNT : 2;
  int LAST    : 1;
  } ;

// pin definitions
//   pin = pin_high;
#define pin_opacA  0
#define pin_opacB  1
#define pin_high   2
#define pin_low    4

#endif /* __ETPUC_H */

