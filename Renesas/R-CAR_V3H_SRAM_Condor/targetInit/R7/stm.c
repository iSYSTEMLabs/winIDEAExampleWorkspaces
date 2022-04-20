#include "stm.h"        


/*
 * stmTRACEID(stm, traceid)
 *
 * Set STM's TRACEID (which goes out over ATB bus ATBID)
 *
 * Note it is illegal per CoreSight to set the trace ID
 * to 0x00 or one of the reserved values (0x70 onwards)
 * (see IHI0029D D4.2.4 Special trace source IDs).
 *
 * This function doesn't do anything if you pass one of
 * those values, and will return 0 for an invalid value..
 */
unsigned int stmTRACEID(struct STM *stm, unsigned int traceid)
{
    unsigned int tcsr;
    unsigned int current_traceid;

    tcsr = stm->APB->STMTCSR;
    current_traceid = ((tcsr >> TRACEID_SHIFT) & TRACEID_MASK);

    if ((traceid > 0x00) && (traceid < 0x70)) {
        /*
         * We try not to corrupt the Trace ID if it's already
         * valid -- it implies someone already set it up, either
         * an external debugger or previous software.
         *
         * So, if we got a Trace ID that's in the valid range,
         * and the Trace ID is currently invalid, set it,
         * otherwise try not to do anything.
         */
        if (!current_traceid) {
            traceid = traceid & TRACEID_MASK;
            tcsr = (stm->APB->STMTCSR & ~(TRACEID_MASK << TRACEID_SHIFT));
            stm->APB->STMTCSR = (tcsr | (traceid << TRACEID_SHIFT));

            return traceid;
        }
    }

    return current_traceid;
}

/*
 * Platform code needs to allocate and fill in a struct STM
 * with pointers to the base address for APB and AXI memory
 * regions.
 *
 * See stm_retarget.c for usage of gSTM and fputc impl.
 */

void stmInit(struct STM *stm, struct stmAPB *apb, struct stmAXI *axi)
{
    unsigned int tcsrflags;
    unsigned int i;

    stm->APB = apb;
    stm->AXI = axi;
}



/*
 * void stmSendString(stm, channel, string)
 *
 * We specifically write a byte to ensure that we get a D8 packet,
 * although that limits the function to 8-bit encodings.
 *
 * It doesn't matter what we use for the last write (if we see
 * a null character) -- G_FLAGTS has no data except the flag and
 * the timestamp, so a 32-bit access will be just fine..
*/

void stmSendString(struct STM *stm, unsigned int channel, const char *string)
{
    /*
     * Send a string to the STM extended stimulus registers
     * The first character goes out as D8M (Marker) packet
     * The last character is followed by a Timestamp packet
     *
     * This is the Annex C example from the STPv2 spec
     *
     * For a retargeted example see stm_retarget.c
     */
    struct stmAXI *axi = stm->AXI;

    int first = 1;

    while(*string != '\0')
    {
        /*
         * If the character is a linefeed, then don't output
         * it -- just reset our 'first' state to 1 so that
         * the next character (the start of the next line)
         * is marked
         */
        if (*string == '\n') {
            STM32(axi, channel, G_FLAGTS) = *string++;
            first = 1;
        } else {
            /*
             * Continue to output characters -- if it's the
             * first character in a string, or just after a
             * linefeed (handled above), mark it.
             */
            if (first) {
                STM8(axi, channel, G_DM) = (*string++);
                first = 0;
            } else {
                STM8(axi, channel, G_D) = (*string++);
            }
        }
    }

    /*
     * Flag the end of the string
     *
     * Access size doesn't matter as we have no data for flag
     * packets
     */
    STM32(axi, channel, G_FLAGTS) = 0x0;
}

void stmSend8D(struct STM *stm, unsigned int channel, char value)
{
    struct stmAXI *axi = stm->AXI;     
    STM8 (axi, channel, G_D) = value;
}      

void stmSend8DM(struct STM *stm, unsigned int channel, char value)
{
    struct stmAXI *axi = stm->AXI;     
    STM8 (axi, channel, G_DM) = value;
}  

void stmSend8DTS(struct STM *stm, unsigned int channel, char value)
{
    struct stmAXI *axi = stm->AXI;     
    STM8 (axi, channel, G_DTS) = value;
}  

void stmSend8DMTS(struct STM *stm, unsigned int channel, char value)
{
    struct stmAXI *axi = stm->AXI;     
    STM8 (axi, channel, G_DMTS) = value;
}  

void stmSend16DMTS(struct STM *stm, unsigned int channel, short value)
{
    struct stmAXI *axi = stm->AXI;            
    STM16(axi, channel, G_DMTS) = value;
}

void stmSend32DMTS(struct STM *stm, unsigned int channel, long value)
{
    struct stmAXI *axi = stm->AXI;        
    STM32(axi, channel, G_DMTS) = value;
}

void stmSend64DMTS(struct STM *stm, unsigned int channel, long long value)
{
    struct stmAXI *axi = stm->AXI;           
    STM64(axi, channel, G_DMTS) = value;    
}
