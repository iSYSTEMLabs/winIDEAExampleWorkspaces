.syntax unified
#.cpu cortex-m4
.thumb

.global asm_Initialization  
#define  AttrIndx_0        0b000
#define  AttrIndx_1        0b001



asm_Initialization:
  
;/* ----------------------------------------------------------------------------
; * MPU configuration - direct way
; * --------------------------------------------------------------------------*/
;/* Notes:
; * Regions apply to both instruction and data accesses.
; * Each region base address must be a multiple of its size
; * Any address range not covered by an enabled region will abort
; * The region at 0x0 over the Vector table is needed to support semihosting
; *
; * Region 0: Code      Base = 0x28000000  Limit = 0x2FFFFFFF  Normal  Non-shared  Read-only    Executable
; * Region 1: Data      Base = 0x60000000  Limit = 0x67FFFFFF  Normal  Non-shared  Full access  Executable
; * Region 2: TCM       Base = 0x68000000  Limit = 0x6BFFFFFF  Normal  Non-shared  Full access  Executable; Always non-cacheable, non-shareable!
; * Region 3: Per       Base = 0x6C000000  Limit = 0x7FFFFFFF  Device  InnerShareable  Full access  Not Executable
; * Region 4: DME       Base = 0x20200000  Limit = 0x20210000  Device  InnerShareable  Full access  Not Executable
; * Region 5: DSPH      Base = 0x20500000  Limit = 0x20510000  Device  InnerShareable  Full access  Not Executable
; * Region 6: DME_data  Base = 0x20100000  Limit = 0x20110000  Device  InnerShareable  Full access  Not Executable
; * Region 7: DSPH data Base = 0x20400000  Limit = 0x20410000  Device  InnerShareable  Full access  Not Executable
; * Region 8: HSM CODE  Base = 0x24000000  Limit = 0x24010000  Device  InnerShareable  Full access  Not Executable
; * Region 9: HSM DATA  Base = 0x24800000  Limit = 0x24810000  Device  InnerShareable  Full access  Not Executable

; */
;/* DAN-0045423 - HSM memory as device -> non-gathering!!! */
    MRC p15, 4, r0, c1, c0, 0       ;/* Read System Control Register */
    BIC r0, r0, #0x05               ;/* Disable MPU (M bit) and data cache (C bit) */
    BIC r0, r0, #0x1000             ;/* Disable instruction cache (I bit) */
    DSB                             ;/* Ensure all previous loads/stores have completed */
    MCR p15, 4, r0, c1, c0, 0       ;/* Write System Control Register */
    DSB
    ISB                             ;/* Ensure subsequent insts execute wrt new MPU settings */

    LDR     r0, =64

    DMB  ;/* Force any outstanding transfers to complete before disabling MPU */

;/* MAIR0 Memory Attribute Indirection */
    MRC     p15, 4, r0, c10, c2, 0   ;/* Read MAIR0 into r0 */
    LDR     r1, =0xBB      ;/* Normal inner/outer RW cacheable, write-through */
    BFI     r0, r1, #0, #8           ;/* Update Attr0 (AttrIndx_0) */
    LDR     r1, =0x04                ;/* Device nGnRnE memory*/
    BFI     r0, r1, #8, #8           ;/* Update Attr1 (AttrIndx_1) */
    MCR     p15, 4, r0, c10, c2, 0   ;/* Write r0 to MAIR0 */

;/* Region 0 - Code */
    LDR     r1, =0x28000000
    LDR     r2, =((0<<3) | (2<<1) | (0))
    ORR     r1, r1, r2
    MCR     p15, 4, r1, c6, c8, 0                   ;/* write PRBAR0 */
    LDR     r1, =0x2FFFFFFF
    BFC     r1, #0, #6                              ;/* align Limit to 64bytes*/
    LDR     r2, =((AttrIndx_0<<1) | (1))
    ORR     r1, r1, r2
    MCR     p15, 4, r1, c6, c8, 1                   ;/* write PRLAR0 */

;/* Region 1 - Data */
    LDR     r1, =0x60000000
    LDR     r2, =((0<<3) | (1<<1) | (0))
    ORR     r1, r1, r2
    MCR     p15, 4, r1, c6, c8, 4                   ;/* write PRBAR1 */
    LDR     r1, =0x67FFFFFF
    BFC     r1, #0, #6                              ;/* align Limit to 64bytes*/
    LDR     r2, =((AttrIndx_0<<1) | (1))
    ORR     r1, r1, r2
    MCR     p15, 4, r1, c6, c8, 5                   ;/* write PRLAR1 */

;/* Region 2 - TCM */
    LDR     r1, =0x68000000
    LDR     r2, =((0<<3) | (1<<1) | (0))
    ORR     r1, r1, r2
    MCR     p15, 4, r1, c6, c9, 0                   ;/* write PRBAR2 */
    LDR     r1, =0x6BFFFFFF
    BFC     r1, #0, #6                              ;/* align Limit to 64bytes*/
    LDR     r2, =((AttrIndx_0<<1) | (1))
    ORR     r1, r1, r2
    MCR     p15, 4, r1, c6, c9, 1                   ;/* write PRLAR2 */

;/* Region 3 - Peripherals */
    LDR     r1, =0x6C000000
    LDR     r2, =((2<<3) | (1<<1) | (1))
    ORR     r1, r1, r2
    MCR     p15, 4, r1, c6, c9, 4                   ;/* write PRBAR3 */
    LDR     r1, =0x7FFFFFFF
    BFC     r1, #0, #6                              ;/* align Limit to 64bytes*/
    LDR     r2, =((AttrIndx_1<<1) | (1))
    ORR     r1, r1, r2
    MCR     p15, 4, r1, c6, c9, 5                   ;/* write PRLAR3 */
;/* Region 4 - DME RAM */
    LDR     r1, =0x20200000
    LDR     r2, =((2<<3) | (1<<1) | (1))
    ORR     r1, r1, r2
    MCR     p15, 4, r1, c6, c10, 0                   ;/* write PRBAR4 */
    LDR     r1, =0x20210000
    BFC     r1, #0, #6                              ;/* align Limit to 64bytes*/
    LDR     r2, =((AttrIndx_1<<1) | (1))
    ORR     r1, r1, r2
    MCR     p15, 4, r1, c6, c10, 1                   ;/* write PRLAR4 */

;/* Region 5 - DSPH RAM */
    LDR     r1, =0x20500000
    LDR     r2, =((2<<3) | (1<<1) | (1))
    ORR     r1, r1, r2
    MCR     p15, 4, r1, c6, c10, 4                   ;/* write PRBAR5 */
    LDR     r1, =0x20510000
    BFC     r1, #0, #6                              ;/* align Limit to 64bytes*/
    LDR     r2, =((AttrIndx_1<<1) | (1))
    ORR     r1, r1, r2
    MCR     p15, 4, r1, c6, c10, 5                   ;/* write PRLAR5 */
    
;/* Region 6 -DME RAM_DATA */
    LDR     r1, =0x20100000
    LDR     r2, =((2<<3) | (1<<1) | (1))
    ORR     r1, r1, r2
    MCR     p15, 4, r1, c6, c11, 0                  ;/* write PRBAR6 */
    LDR     r1, =0x20110000
    BFC     r1, #0, #6                              ;/* align Limit to 64bytes*/
    LDR     r2, =((AttrIndx_1<<1) | (1))
    ORR     r1, r1, r2
    MCR     p15, 4, r1, c6, c11, 1                  ;/* write PRLAR6 */

;/* Region 7 - HSM RAM */
    LDR     r1, =0x20400000
    LDR     r2, =((2<<3) | (1<<1) | (1))
    ORR     r1, r1, r2
    MCR     p15, 4, r1, c6, c11, 4                   ;/* write PRBAR7 */
    LDR     r1, =0x20410000
    BFC     r1, #0, #6                              ;/* align Limit to 64bytes*/
    LDR     r2, =((AttrIndx_1<<1) | (1))
    ORR     r1, r1, r2
    MCR     p15, 4, r1, c6, c11, 5                   ;/* write PRLAR7 */

;/* Region 8 - HSM CODE */
    LDR     r1, =0x24000000
    LDR     r2, =((2<<3) | (1<<1) | (1))
    ORR     r1, r1, r2
    MCR     p15, 4, r1, c6, c12, 0                  ;/* write PRBAR8 */
    LDR     r1, =0x24010000
    BFC     r1, #0, #6                              ;/* align Limit to 64bytes*/
    LDR     r2, =((AttrIndx_1<<1) | (1))
    ORR     r1, r1, r2
    MCR     p15, 4, r1, c6, c12, 1                  ;/* write PRLAR8 */

;/* Region 9 - HSM RAM */
    LDR     r1, =0x24800000
    LDR     r2, =((2<<3) | (1<<1) | (1))
    ORR     r1, r1, r2
    MCR     p15, 4, r1, c6, c12, 4                   ;/* write PRBAR9 */
    LDR     r1, =0x24810000
    BFC     r1, #0, #6                              ;/* align Limit to 64bytes*/
    LDR     r2, =((AttrIndx_1<<1) | (1))
    ORR     r1, r1, r2
    MCR     p15, 4, r1, c6, c12, 5                   ;/* write PRLAR9 */



 ;/* MPU Enable */
    MRC     p15, 4, r0, c1, c0, 0  ;/* Read System Control Register */
    ORR     r0, r0, #0x01          ;/* Set M bit to enable MPU */
    DSB                            ;/* Ensure all previous loads/stores have completed */
    MCR     p15, 4, r0, c1, c0, 0  ;/* Write System Control Register */
    DSB
    ISB                            ;/* Ensure subsequent insts execute wrt new MPU settings  */

;;/* ----------------------------------------------------------------------------
; * MPU default configuration - EL1
; * --------------------------------------------------------------------------*/
//    BL  uc_mpu_config
//
//; * Enable LLPP and NVM
//; * --------------------------------------------------------------------------*/
    MRC     p15, 4, r1, c1, c0, 1   //; HACTRL
    ORR     r1, r1, #(0x1 << 8)     //; Enable PERIPHREGIONR EL1
    ORR     r1, r1, #(0x1 << 7)     //; Enable FLASHIFREGIONR EL1
    MCR     p15, 4, r1, c1, c0, 1

//; Enable PERIPHREGIONR (LLPP)
    MRC     p15, 0, r1, c15, c0, 0   //; PERIPHREGIONR
    ORR     r1, r1, #(0x1 << 1)      //; Enable PERIPHREGIONR EL2
    ORR     r1, r1, #(0x1)           //; Enable PERIPHREGIONR EL10 (REVISIT)
    MCR     p15, 0, r1, c15, c0, 0   //; PERIPHREGIONR

//; Enable FLASHIFREGIONR (NVM)
    MRC     p15, 0, r1, c15, c0, 1   //; FLASHIFREGIONR
    ORR     r1, r1, #(0x1)           //; Enable FLASHIFREGIONR
    MCR     p15, 0, r1, c15, c0, 1   //; FLASHIFREGIONR


    BX      lr 


