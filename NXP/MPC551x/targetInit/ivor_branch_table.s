.extern IVOR11Handler
.extern TimerInterruptHandler
.section .ivor_branch_table
.equ SIXTEEN_BYTES, 16 

.align SIXTEEN_BYTES
IVOR0trap: b IVOR0trap # IVOR 0 interrupt handler

.align SIXTEEN_BYTES
IVOR1trap: b IVOR1trap # IVOR 1 interrupt handler

.align SIXTEEN_BYTES
IVOR2trap: b IVOR2trap # IVOR 2 interrupt handler

.align SIXTEEN_BYTES
IVOR3trap: b IVOR3trap # IVOR 3 interrupt handler

.align SIXTEEN_BYTES
IVOR4trap: b IVOR4trap # IVOR 4 interrupt handler

.align SIXTEEN_BYTES
IVOR5trap: b IVOR5trap # IVOR 5 interrupt handler

.align SIXTEEN_BYTES
IVOR6trap: b IVOR6trap # IVOR 6 interrupt handler

.align SIXTEEN_BYTES
IVOR7trap: b IVOR7trap # IVOR 7 interrupt handler

.align SIXTEEN_BYTES
IVOR8trap: b IVOR8trap # IVOR 8 interrupt handler

.align SIXTEEN_BYTES
IVOR9trap: b IVOR9trap # IVOR 9 interrupt handler

.align SIXTEEN_BYTES
b TimerInterruptHandler # IVOR 10 interrupt handler

.align SIXTEEN_BYTES
//b IVOR11Handler # IVOR 11 interrupt handler (Fixed Interval Timer)
IVOR11trap: b IVOR11trap # IVOR 11 interrupt handler

.align SIXTEEN_BYTES
IVOR12trap: b IVOR12trap # IVOR 12 interrupt handler

.align SIXTEEN_BYTES
IVOR13trap: b IVOR13trap # IVOR 13 interrupt handler

.align SIXTEEN_BYTES
IVOR14trap: b IVOR14trap # IVOR 14 interrupt handler

.align SIXTEEN_BYTES
IVOR15trap: b IVOR15trap # IVOR15 interrupt handler



