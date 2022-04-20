#include "typedefs.h"

extern void TimerInterruptHandlerC( void );
extern void IntDefaultHandler (void);

#pragma section DATA ".ivor4_vector_table" ".ivor4_vector_table"

uint32_t ISRVectorTable[] = { 	 	  
 (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, /* ISRs 00 - 04 */ 
 (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, /* ISRs 05 - 09 */
 (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, /* ISRs 10 - 14 */ 
 (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, /* ISRs 15 - 19 */
 (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, /* ISRs 20 - 24 */ 
 (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, /* ISRs 25 - 29 */
 (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, /* ISRs 30 - 34 */ 
 (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, /* ISRs 35 - 39 */
 (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, /* ISRs 40 - 44 */ 
 (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, /* ISRs 45 - 49 */
 (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, /* ISRs 50 - 54 */ 
 (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, /* ISRs 55 - 59 */
 (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, /* ISRs 60 - 64 */ 
 (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, /* ISRs 65 - 69 */
 (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, /* ISRs 70 - 74 */ 
 (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, /* ISRs 75 - 79 */
 (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, /* ISRs 80 - 84 */ 
 (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, /* ISRs 85 - 89 */
 (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, /* ISRs 90 - 94 */ 
 (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, /* ISRs 95 - 99 */
 (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, /* ISRs 100 - 104 */ 
 (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, /* ISRs 105 - 109 */
 (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, /* ISRs 110 - 114 */ 
 (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, /* ISRs 115 - 119 */
 (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, /* ISRs 120 - 124 */ 
 (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, /* ISRs 125 - 129 */
 (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, /* ISRs 130 - 134 */ 
 (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, /* ISRs 135 - 139 */
 (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, /* ISRs 140 - 144 */ 
 (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, /* ISRs 145 - 149 */
 (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, /* ISRs 150 - 154 */ 
 (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, /* ISRs 155 - 159 */
 (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, /* ISRs 160 - 164 */ 
 (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, /* ISRs 155 - 169 */
 (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, /* ISRs 170 - 174 */ 
 (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, /* ISRs 175 - 179 */
 (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, /* ISRs 180 - 184 */ 
 (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, /* ISRs 185 - 189 */
 (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, /* ISRs 190 - 194 */ 
 (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, /* ISRs 195 - 199 */
 (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, /* ISRs 200 - 204 */ 
 (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, /* ISRs 205 - 209 */
 (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, /* ISRs 210 - 214 */ 
 (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, /* ISRs 215 - 219 */
 (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, /* ISRs 220 - 224 */ 
 (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, /* ISRs 225 - 229 */
 (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, /* ISRs 230 - 234 */ 
 (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, /* ISRs 235 - 239 */
 (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, /* ISRs 240 - 244 */ 
 (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, /* ISRs 245 - 249 */
 (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, /* ISRs 250 - 254 */ 
 (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, /* ISRs 255 - 259 */
 (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, /* ISRs 260 - 264 */ 
 (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, /* ISRs 265 - 269 */
 (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, /* ISRs 270 - 274 */ 
 (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, /* ISRs 275 - 279 */
 (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, /* ISRs 280 - 284 */ 
 (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, /* ISRs 285 - 289 */
 (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, /* ISRs 290 - 294 */ 
 (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, /* ISRs 295 - 299 */
 (uint32_t)&IntDefaultHandler, (uint32_t)&TimerInterruptHandlerC, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler, (uint32_t)&IntDefaultHandler /* ISRs 300 - 304 */
};