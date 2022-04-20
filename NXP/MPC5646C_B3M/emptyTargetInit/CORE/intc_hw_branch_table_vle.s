# intc_hw_branch_table_vle.s - INTC hardware vector mode branch table example
# Description: INTC vector branch table when using INTC in HW vector mode
#            **** NOTE **** ONLY 100 EXAMPLE VECTORS ARE IMPLEMENTED HERE
# Rev 1.0 Jul  2, 2007 S Mihalik 
# Rev 1.1 Aug 30 1007 SM - Made SwIrq4Handler, emiosCh0Handler .extern 
# Rev 2.0 Jan 22 2009 SM - Modified for VLE and MPC56xxB/P/S INTC vector numbers
# Copyright Freescale Semiconductor, Inc. 2007. All rights reserved

  .section .intc_hw_branch_table,text_vle 
  .extern TimerInterruptHandler


.equ ALIGN_OFFSET, 4  # MPC551x,MPC56xxB/P/S: 4 byte branch alignments (Diab/GHS use 2; CW 4)
#.equ ALIGN_OFFSET, 4 # MPC555x: 16 byte branch alignments (Diab/GHS use 4; CW 16)
 
IntcHandlerBranchTable: # Only 100 example vectors are implemented here
                        # MPC555x: This table must have 64 KB alignment
                        # MPC551x, MPC56xxB/P/S: Requires 2 KB alignment after 4KB boundary

           .align ALIGN_OFFSET 
hw_vect0:   e_b hw_vect0        #INTC HW vector 0	
           .align ALIGN_OFFSET 
hw_vect1:   e_b hw_vect1        #INTC HW vector 1	
           .align ALIGN_OFFSET 
hw_vect2:   e_b hw_vect2        #INTC HW vector 2	
           .align ALIGN_OFFSET 
hw_vect3:   e_b hw_vect3        #INTC HW vector 3	
           .align ALIGN_OFFSET 
hw_vect4:   e_b hw_vect4        #INTC HW vector 4
           .align ALIGN_OFFSET 
hw_vect5:   e_b hw_vect5        #INTC HW vector 5	
           .align ALIGN_OFFSET 
hw_vect6:   e_b hw_vect6        #INTC HW vector 6	
           .align ALIGN_OFFSET 
hw_vect7:   e_b hw_vect7        #INTC HW vector 7	
           .align ALIGN_OFFSET 
hw_vect8:   e_b hw_vect8        #INTC HW vector 8	
           .align ALIGN_OFFSET 
hw_vect9:   e_b hw_vect9        #INTC HW vector 9	
           .align ALIGN_OFFSET 
hw_vect10:  e_b hw_vect10       #INTC HW vector 10	
           .align ALIGN_OFFSET 
hw_vect11:  e_b hw_vect11       #INTC HW vector 11	
           .align ALIGN_OFFSET 
hw_vect12:  e_b hw_vect12       #INTC HW vector 12	
           .align ALIGN_OFFSET 
hw_vect13:  e_b hw_vect13       #INTC HW vector 13	
           .align ALIGN_OFFSET 
hw_vect14:  e_b hw_vect14       #INTC HW vector 14	
           .align ALIGN_OFFSET 
hw_vect15:  e_b hw_vect15       #INTC HW vector 15	
           .align ALIGN_OFFSET 
hw_vect16:  e_b hw_vect16       #INTC HW vector 16	
           .align ALIGN_OFFSET 
hw_vect17:  e_b hw_vect17       #INTC HW vector 17	
           .align ALIGN_OFFSET 
hw_vect18:  e_b hw_vect18       #INTC HW vector 18	
           .align ALIGN_OFFSET 
hw_vect19:  e_b hw_vect19       #INTC HW vector 19	
           .align ALIGN_OFFSET 
hw_vect20:  e_b hw_vect20       #INTC HW vector 20	
           .align ALIGN_OFFSET 
hw_vect21:  e_b hw_vect21       #INTC HW vector 21	
           .align ALIGN_OFFSET 
hw_vect22:  e_b hw_vect22       #INTC HW vector 22	
           .align ALIGN_OFFSET 
hw_vect23:  e_b hw_vect23       #INTC HW vector 23	
           .align ALIGN_OFFSET 
hw_vect24:  e_b hw_vect24       #INTC HW vector 24	
           .align ALIGN_OFFSET 
hw_vect25:  e_b hw_vect25       #INTC HW vector 25	
           .align ALIGN_OFFSET 
hw_vect26:  e_b hw_vect26       #INTC HW vector 26	
           .align ALIGN_OFFSET 
hw_vect27:  e_b hw_vect27       #INTC HW vector 27	
           .align ALIGN_OFFSET 
hw_vect28:  e_b hw_vect28       #INTC HW vector 28	
           .align ALIGN_OFFSET 
hw_vect29:  e_b hw_vect29       #INTC HW vector 29	
           .align ALIGN_OFFSET 
hw_vect30:  e_b hw_vect30       #INTC HW vector 30	
           .align ALIGN_OFFSET 
hw_vect31:  e_b hw_vect31       #INTC HW vector 31	
           .align ALIGN_OFFSET 
hw_vect32:  e_b hw_vect32       #INTC HW vector 32	
           .align ALIGN_OFFSET 
hw_vect33:  e_b hw_vect33       #INTC HW vector 33	
           .align ALIGN_OFFSET 
hw_vect34:  e_b hw_vect34       #INTC HW vector 34	
           .align ALIGN_OFFSET 
hw_vect35:  e_b hw_vect35       #INTC HW vector 35	
           .align ALIGN_OFFSET 
hw_vect36:  e_b hw_vect36       #INTC HW vector 36	
           .align ALIGN_OFFSET 
hw_vect37:  e_b hw_vect37       #INTC HW vector 37	
           .align ALIGN_OFFSET 
hw_vect38:  e_b hw_vect38       #INTC HW vector 38	
           .align ALIGN_OFFSET 
hw_vect39:  e_b hw_vect39       #INTC HW vector 39	
           .align ALIGN_OFFSET 
hw_vect40:  e_b hw_vect40       #INTC HW vector 40	
           .align ALIGN_OFFSET 
hw_vect41:  e_b hw_vect41       #INTC HW vector 41	
           .align ALIGN_OFFSET 
hw_vect42:  e_b hw_vect42       #INTC HW vector 42	
           .align ALIGN_OFFSET 
hw_vect43:  e_b hw_vect43       #INTC HW vector 43	
           .align ALIGN_OFFSET 
hw_vect44:  e_b hw_vect44       #INTC HW vector 44	
           .align ALIGN_OFFSET 
hw_vect45:  e_b hw_vect45       #INTC HW vector 45	
           .align ALIGN_OFFSET 
hw_vect46:  e_b hw_vect46       #INTC HW vector 46	
           .align ALIGN_OFFSET 
hw_vect47:  e_b hw_vect47       #INTC HW vector 47	
           .align ALIGN_OFFSET 
hw_vect48:  e_b hw_vect48       #INTC HW vector 48	
           .align ALIGN_OFFSET 
hw_vect49:  e_b hw_vect49       #INTC HW vector 49	
           .align ALIGN_OFFSET 
hw_vect50:  e_b hw_vect50       #INTC HW vector 50	
           .align ALIGN_OFFSET
hw_vect51:  e_b hw_vect51       #INTC HW vector 51	
           .align ALIGN_OFFSET 
hw_vect52:  e_b hw_vect52       #INTC HW vector 52	
           .align ALIGN_OFFSET 
hw_vect53:  e_b hw_vect53       #INTC HW vector 53	
           .align ALIGN_OFFSET 
hw_vect54:  e_b hw_vect54       #INTC HW vector 54	
           .align ALIGN_OFFSET 
hw_vect55:  e_b hw_vect55       #INTC HW vector 55	
           .align ALIGN_OFFSET 
hw_vect56:  e_b hw_vect56       #INTC HW vector 56	
           .align ALIGN_OFFSET 
hw_vect57:  e_b hw_vect57       #INTC HW vector 57	
           .align ALIGN_OFFSET 
hw_vect58:  e_b hw_vect58      #INTC HW vector 58	
           .align ALIGN_OFFSET 
hw_vect59:  e_b hw_vect59       #INTC HW vector 59	
           .align ALIGN_OFFSET 
hw_vect60:  e_b TimerInterruptHandler     #INTC HW vector 60	
           .align ALIGN_OFFSET 
hw_vect61:  e_b hw_vect61       #INTC HW vector 61	
           .align ALIGN_OFFSET 
hw_vect62:  e_b hw_vect62       #INTC HW vector 62	
           .align ALIGN_OFFSET 
hw_vect63:  e_b hw_vect63       #INTC HW vector 63	
           .align ALIGN_OFFSET 
hw_vect64:  e_b hw_vect64       #INTC HW vector 64	
           .align ALIGN_OFFSET 
hw_vect65:  e_b hw_vect65       #INTC HW vector 65	
           .align ALIGN_OFFSET 
hw_vect66:  e_b hw_vect66       #INTC HW vector 66	
           .align ALIGN_OFFSET 
hw_vect67:  e_b hw_vect67       #INTC HW vector 67	
           .align ALIGN_OFFSET 
hw_vect68:  e_b hw_vect68       #INTC HW vector 68	
           .align ALIGN_OFFSET 
hw_vect69:  e_b hw_vect69       #INTC HW vector 69	
           .align ALIGN_OFFSET 
hw_vect70:  e_b hw_vect70       #INTC HW vector 70	
           .align ALIGN_OFFSET 
hw_vect71:  e_b hw_vect71       #INTC HW vector 71	
           .align ALIGN_OFFSET 
hw_vect72:  e_b hw_vect72       #INTC HW vector 72	
           .align ALIGN_OFFSET 
hw_vect73:  e_b hw_vect73       #INTC HW vector 73	
           .align ALIGN_OFFSET 
hw_vect74:  e_b hw_vect74       #INTC HW vector 74	
           .align ALIGN_OFFSET 
hw_vect75:  e_b hw_vect75       #INTC HW vector 75	
           .align ALIGN_OFFSET 
hw_vect76:  e_b hw_vect76       #INTC HW vector 76	
           .align ALIGN_OFFSET 
hw_vect77:  e_b hw_vect77       #INTC HW vector 77	
           .align ALIGN_OFFSET 
hw_vect78:  e_b hw_vect78       #INTC HW vector 78	
           .align ALIGN_OFFSET 
hw_vect79:  e_b hw_vect79       #INTC HW vector 79	
           .align ALIGN_OFFSET 
hw_vect80:  e_b hw_vect80       #INTC HW vector 80	
           .align ALIGN_OFFSET 
hw_vect81:  e_b hw_vect81       #INTC HW vector 81	
           .align ALIGN_OFFSET 
hw_vect82:  e_b hw_vect82       #INTC HW vector 82	
           .align ALIGN_OFFSET 
hw_vect83:  e_b hw_vect83       #INTC HW vector 83	
           .align ALIGN_OFFSET 
hw_vect84:  e_b hw_vect84       #INTC HW vector 84	
           .align ALIGN_OFFSET 
hw_vect85:  e_b hw_vect85       #INTC HW vector 85	
           .align ALIGN_OFFSET 
hw_vect86:  e_b hw_vect86       #INTC HW vector 86	
           .align ALIGN_OFFSET 
hw_vect87:  e_b hw_vect87       #INTC HW vector 87	
           .align ALIGN_OFFSET 
hw_vect88:  e_b hw_vect88       #INTC HW vector 88	
           .align ALIGN_OFFSET 
hw_vect89:  e_b hw_vect89       #INTC HW vector 89	
           .align ALIGN_OFFSET 
hw_vect90:  e_b hw_vect90       #INTC HW vector 90	
           .align ALIGN_OFFSET 
hw_vect91:  e_b hw_vect91       #INTC HW vector 91	
           .align ALIGN_OFFSET 
hw_vect92:  e_b hw_vect92       #INTC HW vector 92	
           .align ALIGN_OFFSET 
hw_vect93:  e_b hw_vect93       #INTC HW vector 93	
           .align ALIGN_OFFSET 
hw_vect94:  e_b hw_vect94       #INTC HW vector 94	
           .align ALIGN_OFFSET 
hw_vect95:  e_b hw_vect95       #INTC HW vector 95	
           .align ALIGN_OFFSET 
hw_vect96:  e_b hw_vect96       #INTC HW vector 96	
           .align ALIGN_OFFSET 
hw_vect97:  e_b hw_vect97       #INTC HW vector 97	
           .align ALIGN_OFFSET 
hw_vect98:  e_b hw_vect98       #INTC HW vector 98	
           .align ALIGN_OFFSET 
hw_vect99:  e_b hw_vect99       #INTC HW vector 99	




