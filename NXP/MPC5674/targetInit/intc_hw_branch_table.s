  .section .intc_hw_branch_table
  .extern Pit1Handler

.equ ALIGN_OFFSET, 4 # MPC555x: 16 byte branch alignments (Diab/GHS use 4; CW 16)
 
IntcHandlerBranchTable: 
           .align ALIGN_OFFSET 
hw_vect1:   b hw_vect1        #INTC HW vector 1	
           .align ALIGN_OFFSET 
hw_vect2:   b hw_vect2        #INTC HW vector 2	
           .align ALIGN_OFFSET 
hw_vect3:   b hw_vect3        #INTC HW vector 3	
           .align ALIGN_OFFSET 
hw_vect4:   b hw_vect4        #INTC HW vector 4
           .align ALIGN_OFFSET 
hw_vect5:   b hw_vect5        #INTC HW vector 5	
           .align ALIGN_OFFSET 
hw_vect6:   b hw_vect6        #INTC HW vector 6	
           .align ALIGN_OFFSET 
hw_vect7:   b hw_vect7        #INTC HW vector 7	
           .align ALIGN_OFFSET 
hw_vect8:   b hw_vect8        #INTC HW vector 8	
           .align ALIGN_OFFSET 
hw_vect9:   b hw_vect9        #INTC HW vector 9	
           .align ALIGN_OFFSET 
hw_vect10:  b hw_vect10       #INTC HW vector 10	
           .align ALIGN_OFFSET 
hw_vect11:  b hw_vect11       #INTC HW vector 11	
           .align ALIGN_OFFSET 
hw_vect12:  b hw_vect12       #INTC HW vector 12	
           .align ALIGN_OFFSET 
hw_vect13:  b hw_vect13       #INTC HW vector 13	
           .align ALIGN_OFFSET 
hw_vect14:  b hw_vect14       #INTC HW vector 14	
           .align ALIGN_OFFSET 
hw_vect15:  b hw_vect15       #INTC HW vector 15	
           .align ALIGN_OFFSET 
hw_vect16:  b hw_vect16       #INTC HW vector 16	
           .align ALIGN_OFFSET 
hw_vect17:  b hw_vect17       #INTC HW vector 17	
           .align ALIGN_OFFSET 
hw_vect18:  b hw_vect18       #INTC HW vector 18	
           .align ALIGN_OFFSET 
hw_vect19:  b hw_vect19       #INTC HW vector 19	
           .align ALIGN_OFFSET 
hw_vect20:  b hw_vect20       #INTC HW vector 20	
           .align ALIGN_OFFSET 
hw_vect21:  b hw_vect21       #INTC HW vector 21	
           .align ALIGN_OFFSET 
hw_vect22:  b hw_vect22       #INTC HW vector 22	
           .align ALIGN_OFFSET 
hw_vect23:  b hw_vect23       #INTC HW vector 23	
           .align ALIGN_OFFSET 
hw_vect24:  b hw_vect24       #INTC HW vector 24	
           .align ALIGN_OFFSET 
hw_vect25:  b hw_vect25       #INTC HW vector 25	
           .align ALIGN_OFFSET 
hw_vect26:  b hw_vect26       #INTC HW vector 26	
           .align ALIGN_OFFSET 
hw_vect27:  b hw_vect27       #INTC HW vector 27	
           .align ALIGN_OFFSET 
hw_vect28:  b hw_vect28       #INTC HW vector 28	
           .align ALIGN_OFFSET 
hw_vect29:  b hw_vect29       #INTC HW vector 29	
           .align ALIGN_OFFSET 
hw_vect30:  b hw_vect30       #INTC HW vector 30	
           .align ALIGN_OFFSET 
hw_vect31:  b hw_vect31       #INTC HW vector 31	
           .align ALIGN_OFFSET 
hw_vect32:  b hw_vect32       #INTC HW vector 32	
           .align ALIGN_OFFSET 
hw_vect33:  b hw_vect33       #INTC HW vector 33	
           .align ALIGN_OFFSET 
hw_vect34:  b hw_vect34       #INTC HW vector 34	
           .align ALIGN_OFFSET 
hw_vect35:  b hw_vect35       #INTC HW vector 35	
           .align ALIGN_OFFSET 
hw_vect36:  b hw_vect36       #INTC HW vector 36	
           .align ALIGN_OFFSET 
hw_vect37:  b hw_vect37       #INTC HW vector 37	
           .align ALIGN_OFFSET 
hw_vect38:  b hw_vect38       #INTC HW vector 38	
           .align ALIGN_OFFSET 
hw_vect39:  b hw_vect39       #INTC HW vector 39	
           .align ALIGN_OFFSET 
hw_vect40:  b hw_vect40       #INTC HW vector 40	
           .align ALIGN_OFFSET 
hw_vect41:  b hw_vect41       #INTC HW vector 41	
           .align ALIGN_OFFSET 
hw_vect42:  b hw_vect42       #INTC HW vector 42	
           .align ALIGN_OFFSET 
hw_vect43:  b hw_vect43       #INTC HW vector 43	
           .align ALIGN_OFFSET 
hw_vect44:  b hw_vect44       #INTC HW vector 44	
           .align ALIGN_OFFSET 
hw_vect45:  b hw_vect45       #INTC HW vector 45	
           .align ALIGN_OFFSET 
hw_vect46:  b hw_vect46       #INTC HW vector 46	
           .align ALIGN_OFFSET 
hw_vect47:  b hw_vect47       #INTC HW vector 47	
           .align ALIGN_OFFSET 
hw_vect48:  b hw_vect48       #INTC HW vector 48	
           .align ALIGN_OFFSET 
hw_vect49:  b hw_vect49       #INTC HW vector 49	
           .align ALIGN_OFFSET 
hw_vect50:  b hw_vect50       #INTC HW vector 50	
           .align ALIGN_OFFSET
hw_vect51:  b hw_vect51       #INTC HW vector 51	
           .align ALIGN_OFFSET 
hw_vect52:  b hw_vect52       #INTC HW vector 52	
           .align ALIGN_OFFSET 
hw_vect53:  b hw_vect53       #INTC HW vector 53	
           .align ALIGN_OFFSET 
hw_vect54:  b hw_vect54       #INTC HW vector 54	
           .align ALIGN_OFFSET 
hw_vect55:  b hw_vect55       #INTC HW vector 55	
           .align ALIGN_OFFSET 
hw_vect56:  b hw_vect56       #INTC HW vector 56	
           .align ALIGN_OFFSET 
hw_vect57:  b hw_vect57       #INTC HW vector 57	
           .align ALIGN_OFFSET 
hw_vect58:  b hw_vect58       #INTC HW vector 58	
           .align ALIGN_OFFSET 
hw_vect59:  b hw_vect59       #INTC HW vector 59	
           .align ALIGN_OFFSET 
hw_vect60:  b hw_vect60       #INTC HW vector 60	
           .align ALIGN_OFFSET 
hw_vect61:  b hw_vect61       #INTC HW vector 61	
           .align ALIGN_OFFSET 
hw_vect62:  b hw_vect62       #INTC HW vector 62	
           .align ALIGN_OFFSET 
hw_vect63:  b hw_vect63       #INTC HW vector 63	
           .align ALIGN_OFFSET 
hw_vect64:  b hw_vect64       #INTC HW vector 64	
           .align ALIGN_OFFSET 
hw_vect65:  b hw_vect65       #INTC HW vector 65	
           .align ALIGN_OFFSET 
hw_vect66:  b hw_vect66       #INTC HW vector 66	
           .align ALIGN_OFFSET 
hw_vect67:  b hw_vect67       #INTC HW vector 67	
           .align ALIGN_OFFSET 
hw_vect68:  b hw_vect68       #INTC HW vector 68	
           .align ALIGN_OFFSET 
hw_vect69:  b hw_vect69       #INTC HW vector 69	
           .align ALIGN_OFFSET 
hw_vect70:  b hw_vect70       #INTC HW vector 70	
           .align ALIGN_OFFSET 
hw_vect71:  b hw_vect71       #INTC HW vector 71	
           .align ALIGN_OFFSET 
hw_vect72:  b hw_vect72       #INTC HW vector 72	
           .align ALIGN_OFFSET 
hw_vect73:  b hw_vect73       #INTC HW vector 73	
           .align ALIGN_OFFSET 
hw_vect74:  b hw_vect74       #INTC HW vector 74	
           .align ALIGN_OFFSET 
hw_vect75:  b hw_vect75       #INTC HW vector 75	
           .align ALIGN_OFFSET 
hw_vect76:  b hw_vect76       #INTC HW vector 76	
           .align ALIGN_OFFSET 
hw_vect77:  b hw_vect77       #INTC HW vector 77	
           .align ALIGN_OFFSET 
hw_vect78:  b hw_vect78       #INTC HW vector 78	
           .align ALIGN_OFFSET 
hw_vect79:  b hw_vect79       #INTC HW vector 79	
           .align ALIGN_OFFSET 
hw_vect80:  b hw_vect80       #INTC HW vector 80	
           .align ALIGN_OFFSET 
hw_vect81:  b hw_vect81       #INTC HW vector 81	
           .align ALIGN_OFFSET 
hw_vect82:  b hw_vect82       #INTC HW vector 82	
           .align ALIGN_OFFSET 
hw_vect83:  b hw_vect83       #INTC HW vector 83	
           .align ALIGN_OFFSET 
hw_vect84:  b hw_vect84       #INTC HW vector 84	
           .align ALIGN_OFFSET 
hw_vect85:  b hw_vect85       #INTC HW vector 85	
           .align ALIGN_OFFSET 
hw_vect86:  b hw_vect86       #INTC HW vector 86	
           .align ALIGN_OFFSET 
hw_vect87:  b hw_vect87       #INTC HW vector 87	
           .align ALIGN_OFFSET 
hw_vect88:  b hw_vect88       #INTC HW vector 88	
           .align ALIGN_OFFSET 
hw_vect89:  b hw_vect89       #INTC HW vector 89	
           .align ALIGN_OFFSET 
hw_vect90:  b hw_vect90       #INTC HW vector 90	
           .align ALIGN_OFFSET 
hw_vect91:  b hw_vect91       #INTC HW vector 91	
           .align ALIGN_OFFSET 
hw_vect92:  b hw_vect92       #INTC HW vector 92	
           .align ALIGN_OFFSET 
hw_vect93:  b hw_vect93       #INTC HW vector 93	
           .align ALIGN_OFFSET 
hw_vect94:  b hw_vect94       #INTC HW vector 94	
           .align ALIGN_OFFSET 
hw_vect95:  b hw_vect95       #INTC HW vector 95	
           .align ALIGN_OFFSET 
hw_vect96:  b hw_vect96       #INTC HW vector 96	
           .align ALIGN_OFFSET 
hw_vect97:  b hw_vect97       #INTC HW vector 97	
           .align ALIGN_OFFSET 
hw_vect98:  b hw_vect98       #INTC HW vector 98	
           .align ALIGN_OFFSET 
hw_vect99:  b hw_vect99       #INTC HW vector 99	
           .align ALIGN_OFFSET 
hw_vect100: b hw_vect100      #INTC HW vector 100	
           .align ALIGN_OFFSET 
hw_vect101:   b hw_vect101    #INTC HW vector 101	
           .align ALIGN_OFFSET
hw_vect102:   b hw_vect102    #INTC HW vector 102	
           .align ALIGN_OFFSET 
hw_vect103:   b hw_vect103    #INTC HW vector 103	
           .align ALIGN_OFFSET 
hw_vect104:   b hw_vect104    #INTC HW vector 104
           .align ALIGN_OFFSET 
hw_vect105:   b hw_vect105    #INTC HW vector 105	
           .align ALIGN_OFFSET
hw_vect106:   b hw_vect106    #INTC HW vector 106	
           .align ALIGN_OFFSET 
hw_vect107:   b hw_vect107    #INTC HW vector 107	
           .align ALIGN_OFFSET 
hw_vect108:   b hw_vect108    #INTC HW vector 108	
           .align ALIGN_OFFSET
hw_vect109:   b hw_vect109    #INTC HW vector 109	
           .align ALIGN_OFFSET 
hw_vect110:  b hw_vect110     #INTC HW vector 110	
           .align ALIGN_OFFSET 
hw_vect111:  b hw_vect111       #INTC HW vector 111	
           .align ALIGN_OFFSET 
hw_vect112:  b hw_vect112       #INTC HW vector 112	
           .align ALIGN_OFFSET 
hw_vect113:  b hw_vect113       #INTC HW vector 113	
           .align ALIGN_OFFSET 
hw_vect114:  b hw_vect114       #INTC HW vector 114	
           .align ALIGN_OFFSET 
hw_vect115:  b hw_vect115       #INTC HW vector 115	
           .align ALIGN_OFFSET 
hw_vect116:  b hw_vect116       #INTC HW vector 116	
           .align ALIGN_OFFSET 
hw_vect117:  b hw_vect117       #INTC HW vector 117	
           .align ALIGN_OFFSET 
hw_vect118:  b hw_vect118       #INTC HW vector 118	
           .align ALIGN_OFFSET 
hw_vect119:  b hw_vect119       #INTC HW vector 119	
           .align ALIGN_OFFSET 
hw_vect120:  b hw_vect120       #INTC HW vector 120	
           .align ALIGN_OFFSET 
hw_vect121:  b hw_vect121       #INTC HW vector 121	
           .align ALIGN_OFFSET 
hw_vect122:  b hw_vect122       #INTC HW vector 122	
           .align ALIGN_OFFSET 
hw_vect123:  b hw_vect123       #INTC HW vector 123	
           .align ALIGN_OFFSET 
hw_vect124:  b hw_vect124       #INTC HW vector 124	
           .align ALIGN_OFFSET 
hw_vect125:  b hw_vect125       #INTC HW vector 125	
           .align ALIGN_OFFSET 
hw_vect126:  b hw_vect126       #INTC HW vector 126	
           .align ALIGN_OFFSET 
hw_vect127:  b hw_vect127       #INTC HW vector 127	
           .align ALIGN_OFFSET 
hw_vect128:  b hw_vect128       #INTC HW vector 128	
           .align ALIGN_OFFSET 
hw_vect129:  b hw_vect129       #INTC HW vector 129	
           .align ALIGN_OFFSET 
hw_vect130:  b hw_vect130       #INTC HW vector 130	
           .align ALIGN_OFFSET 
hw_vect131:  b hw_vect131       #INTC HW vector 131	
           .align ALIGN_OFFSET 
hw_vect132:  b hw_vect132       #INTC HW vector 132	
           .align ALIGN_OFFSET 
hw_vect133:  b hw_vect133       #INTC HW vector 133	
           .align ALIGN_OFFSET 
hw_vect134:  b hw_vect134       #INTC HW vector 134	
           .align ALIGN_OFFSET 
hw_vect135:  b hw_vect135       #INTC HW vector 135	
           .align ALIGN_OFFSET 
hw_vect136:  b hw_vect136       #INTC HW vector 136	
           .align ALIGN_OFFSET 
hw_vect137:  b hw_vect137       #INTC HW vector 137	
           .align ALIGN_OFFSET 
hw_vect138:  b hw_vect138       #INTC HW vector 138	
           .align ALIGN_OFFSET 
hw_vect139:  b hw_vect139       #INTC HW vector 139	
           .align ALIGN_OFFSET 
hw_vect140:  b hw_vect140       #INTC HW vector 140	
           .align ALIGN_OFFSET 
hw_vect141:  b hw_vect141       #INTC HW vector 141	
           .align ALIGN_OFFSET 
hw_vect142:  b hw_vect142       #INTC HW vector 142	
           .align ALIGN_OFFSET 
hw_vect143:  b hw_vect143       #INTC HW vector 143	
           .align ALIGN_OFFSET 
hw_vect144:  b hw_vect144       #INTC HW vector 144	
           .align ALIGN_OFFSET 
hw_vect145:  b hw_vect145       #INTC HW vector 145	
           .align ALIGN_OFFSET 
hw_vect146:  b hw_vect146       #INTC HW vector 146	
           .align ALIGN_OFFSET 
hw_vect147:  b hw_vect147       #INTC HW vector 147	
           .align ALIGN_OFFSET 
hw_vect148:  b hw_vect148       #INTC HW vector 148	
           .align ALIGN_OFFSET 
hw_vect149:  b hw_vect149       #INTC HW vector 149	
           .align ALIGN_OFFSET 
hw_vect150:  b hw_vect150       #INTC HW vector 150	
           .align ALIGN_OFFSET
hw_vect151:  b hw_vect151       #INTC HW vector 151	
           .align ALIGN_OFFSET 
hw_vect152:  b hw_vect152       #INTC HW vector 152	
           .align ALIGN_OFFSET 
hw_vect153:  b hw_vect153       #INTC HW vector 153	
           .align ALIGN_OFFSET 
hw_vect154:  b hw_vect154       #INTC HW vector 154	
           .align ALIGN_OFFSET 
hw_vect155:  b hw_vect155       #INTC HW vector 155	
           .align ALIGN_OFFSET 
hw_vect156:  b hw_vect156       #INTC HW vector 156	
           .align ALIGN_OFFSET 
hw_vect157:  b hw_vect157       #INTC HW vector 157	
           .align ALIGN_OFFSET 
hw_vect158:  b hw_vect158       #INTC HW vector 158	
           .align ALIGN_OFFSET 
hw_vect159:  b hw_vect159       #INTC HW vector 159	
           .align ALIGN_OFFSET 
hw_vect160:  b hw_vect160       #INTC HW vector 160	
           .align ALIGN_OFFSET 
hw_vect161:  b hw_vect161       #INTC HW vector 161	
           .align ALIGN_OFFSET 
hw_vect162:  b hw_vect162       #INTC HW vector 162	
           .align ALIGN_OFFSET 
hw_vect163:  b hw_vect163       #INTC HW vector 163	
           .align ALIGN_OFFSET 
hw_vect164:  b hw_vect164       #INTC HW vector 164	
           .align ALIGN_OFFSET 
hw_vect165:  b hw_vect165       #INTC HW vector 165	
           .align ALIGN_OFFSET 
hw_vect166:  b hw_vect166       #INTC HW vector 166	
           .align ALIGN_OFFSET 
hw_vect167:  b hw_vect167       #INTC HW vector 167	
           .align ALIGN_OFFSET 
hw_vect168:  b hw_vect168       #INTC HW vector 168	
           .align ALIGN_OFFSET 
hw_vect169:  b hw_vect169       #INTC HW vector 169	
           .align ALIGN_OFFSET 
hw_vect170:  b hw_vect170       #INTC HW vector 170	
           .align ALIGN_OFFSET 
hw_vect171:  b hw_vect171       #INTC HW vector 171	
           .align ALIGN_OFFSET 
hw_vect172:  b hw_vect172       #INTC HW vector 172	
           .align ALIGN_OFFSET 
hw_vect173:  b hw_vect173       #INTC HW vector 173	
           .align ALIGN_OFFSET 
hw_vect174:  b hw_vect174       #INTC HW vector 174	
           .align ALIGN_OFFSET 
hw_vect175:  b hw_vect175       #INTC HW vector 175	
           .align ALIGN_OFFSET 
hw_vect176:  b hw_vect176       #INTC HW vector 176	
           .align ALIGN_OFFSET 
hw_vect177:  b hw_vect177       #INTC HW vector 177	
           .align ALIGN_OFFSET 
hw_vect178:  b hw_vect178       #INTC HW vector 178	
           .align ALIGN_OFFSET 
hw_vect179:  b hw_vect179       #INTC HW vector 179	
           .align ALIGN_OFFSET 
hw_vect180:  b hw_vect180       #INTC HW vector 180	
           .align ALIGN_OFFSET 
hw_vect181:  b hw_vect181       #INTC HW vector 181	
           .align ALIGN_OFFSET 
hw_vect182:  b hw_vect182       #INTC HW vector 182	
           .align ALIGN_OFFSET 
hw_vect183:  b hw_vect183       #INTC HW vector 183	
           .align ALIGN_OFFSET 
hw_vect184:  b hw_vect184       #INTC HW vector 184	
           .align ALIGN_OFFSET 
hw_vect185:  b hw_vect185       #INTC HW vector 185	
           .align ALIGN_OFFSET 
hw_vect186:  b hw_vect186       #INTC HW vector 186	
           .align ALIGN_OFFSET 
hw_vect187:  b hw_vect187       #INTC HW vector 187	
           .align ALIGN_OFFSET 
hw_vect188:  b hw_vect188       #INTC HW vector 188	
           .align ALIGN_OFFSET 
hw_vect189:  b hw_vect189       #INTC HW vector 189	
           .align ALIGN_OFFSET 
hw_vect190:  b hw_vect190       #INTC HW vector 190	
           .align ALIGN_OFFSET 
hw_vect191:  b hw_vect191       #INTC HW vector 191	
           .align ALIGN_OFFSET 
hw_vect192:  b hw_vect192       #INTC HW vector 192	
           .align ALIGN_OFFSET 
hw_vect193:  b hw_vect193       #INTC HW vector 193	
           .align ALIGN_OFFSET 
hw_vect194:  b hw_vect194       #INTC HW vector 194	
           .align ALIGN_OFFSET 
hw_vect195:  b hw_vect195       #INTC HW vector 195	
           .align ALIGN_OFFSET 
hw_vect196:  b hw_vect196       #INTC HW vector 196	
           .align ALIGN_OFFSET 
hw_vect197:  b hw_vect197       #INTC HW vector 197	
           .align ALIGN_OFFSET 
hw_vect198:  b hw_vect198       #INTC HW vector 198	
           .align ALIGN_OFFSET 
hw_vect199:  b hw_vect199       #INTC HW vector 199	
           .align ALIGN_OFFSET 
hw_vect200:   b hw_vect200        #INTC HW vector 200	
           .align ALIGN_OFFSET 
hw_vect201:   b hw_vect201        #INTC HW vector 201	
           .align ALIGN_OFFSET 
hw_vect202:   b hw_vect202        #INTC HW vector 202	
           .align ALIGN_OFFSET 
hw_vect203:   b hw_vect203        #INTC HW vector 203	
           .align ALIGN_OFFSET 
hw_vect204:   b hw_vect204        #INTC HW vector 204
           .align ALIGN_OFFSET 
hw_vect205:   b hw_vect205        #INTC HW vector 205	
           .align ALIGN_OFFSET 
hw_vect206:   b hw_vect206        #INTC HW vector 206	
           .align ALIGN_OFFSET 
hw_vect207:   b hw_vect207        #INTC HW vector 207	
           .align ALIGN_OFFSET 
hw_vect208:   b hw_vect208        #INTC HW vector 208	
           .align ALIGN_OFFSET 
hw_vect209:   b hw_vect209        #INTC HW vector 209	
           .align ALIGN_OFFSET 
hw_vect210:  b hw_vect210       #INTC HW vector 210	
           .align ALIGN_OFFSET 
hw_vect211:  b hw_vect211       #INTC HW vector 211	
           .align ALIGN_OFFSET 
hw_vect212:  b hw_vect212       #INTC HW vector 212	
           .align ALIGN_OFFSET 
hw_vect213:  b hw_vect213       #INTC HW vector 213	
           .align ALIGN_OFFSET 
hw_vect214:  b hw_vect214       #INTC HW vector 214	
           .align ALIGN_OFFSET 
hw_vect215:  b hw_vect215       #INTC HW vector 215	
           .align ALIGN_OFFSET 
hw_vect216:  b hw_vect216       #INTC HW vector 216	
           .align ALIGN_OFFSET 
hw_vect217:  b hw_vect217       #INTC HW vector 217	
           .align ALIGN_OFFSET 
hw_vect218:  b hw_vect218       #INTC HW vector 218	
           .align ALIGN_OFFSET 
hw_vect219:  b hw_vect219       #INTC HW vector 219	
           .align ALIGN_OFFSET 
hw_vect220:  b hw_vect220       #INTC HW vector 220	
           .align ALIGN_OFFSET 
hw_vect221:  b hw_vect221       #INTC HW vector 221	
           .align ALIGN_OFFSET 
hw_vect222:  b hw_vect222       #INTC HW vector 222	
           .align ALIGN_OFFSET 
hw_vect223:  b hw_vect223       #INTC HW vector 223	
           .align ALIGN_OFFSET 
hw_vect224:  b hw_vect224       #INTC HW vector 224	
           .align ALIGN_OFFSET 
hw_vect225:  b hw_vect225       #INTC HW vector 225	
           .align ALIGN_OFFSET 
hw_vect226:  b hw_vect226       #INTC HW vector 226	
           .align ALIGN_OFFSET 
hw_vect227:  b hw_vect227       #INTC HW vector 227	
           .align ALIGN_OFFSET 
hw_vect228:  b hw_vect228       #INTC HW vector 228	
           .align ALIGN_OFFSET 
hw_vect229:  b hw_vect229       #INTC HW vector 229	
           .align ALIGN_OFFSET 
hw_vect230:  b hw_vect230       #INTC HW vector 230	
           .align ALIGN_OFFSET 
hw_vect231:  b hw_vect231       #INTC HW vector 231	
           .align ALIGN_OFFSET 
hw_vect232:  b hw_vect232       #INTC HW vector 232	
           .align ALIGN_OFFSET 
hw_vect233:  b hw_vect233       #INTC HW vector 233	
           .align ALIGN_OFFSET 
hw_vect234:  b hw_vect234       #INTC HW vector 234	
           .align ALIGN_OFFSET 
hw_vect235:  b hw_vect235       #INTC HW vector 235	
           .align ALIGN_OFFSET 
hw_vect236:  b hw_vect236       #INTC HW vector 236	
           .align ALIGN_OFFSET 
hw_vect237:  b hw_vect237       #INTC HW vector 237	
           .align ALIGN_OFFSET 
hw_vect238:  b hw_vect238       #INTC HW vector 238	
           .align ALIGN_OFFSET 
hw_vect239:  b hw_vect239       #INTC HW vector 239	
           .align ALIGN_OFFSET 
hw_vect240:  b hw_vect240       #INTC HW vector 240	
           .align ALIGN_OFFSET 
hw_vect241:  b hw_vect241       #INTC HW vector 241	
           .align ALIGN_OFFSET 
hw_vect242:  b hw_vect242       #INTC HW vector 242	
           .align ALIGN_OFFSET 
hw_vect243:  b hw_vect243       #INTC HW vector 243	
           .align ALIGN_OFFSET 
hw_vect244:  b hw_vect244       #INTC HW vector 244	
           .align ALIGN_OFFSET 
hw_vect245:  b hw_vect245       #INTC HW vector 245	
           .align ALIGN_OFFSET 
hw_vect246:  b hw_vect246       #INTC HW vector 246	
           .align ALIGN_OFFSET 
hw_vect247:  b hw_vect247       #INTC HW vector 247	
           .align ALIGN_OFFSET 
hw_vect248:  b hw_vect248       #INTC HW vector 248	
           .align ALIGN_OFFSET 
hw_vect249:  b hw_vect249       #INTC HW vector 249	
           .align ALIGN_OFFSET 
hw_vect250:  b hw_vect250       #INTC HW vector 250	
           .align ALIGN_OFFSET
hw_vect251:  b hw_vect251       #INTC HW vector 251	
           .align ALIGN_OFFSET 
hw_vect252:  b hw_vect252       #INTC HW vector 252	
           .align ALIGN_OFFSET 
hw_vect253:  b hw_vect253       #INTC HW vector 253	
           .align ALIGN_OFFSET 
hw_vect254:  b hw_vect254       #INTC HW vector 254	
           .align ALIGN_OFFSET 
hw_vect255:  b hw_vect255       #INTC HW vector 255	
           .align ALIGN_OFFSET 
hw_vect256:  b hw_vect256       #INTC HW vector 256	
           .align ALIGN_OFFSET 
hw_vect257:  b hw_vect257       #INTC HW vector 257	
           .align ALIGN_OFFSET 
hw_vect258:  b hw_vect258       #INTC HW vector 258	
           .align ALIGN_OFFSET 
hw_vect259:  b hw_vect259       #INTC HW vector 259	
           .align ALIGN_OFFSET 
hw_vect260:  b hw_vect260       #INTC HW vector 260	
           .align ALIGN_OFFSET 
hw_vect261:  b hw_vect261       #INTC HW vector 261	
           .align ALIGN_OFFSET 
hw_vect262:  b hw_vect262       #INTC HW vector 262	
           .align ALIGN_OFFSET 
hw_vect263:  b hw_vect263       #INTC HW vector 263	
           .align ALIGN_OFFSET 
hw_vect264:  b hw_vect264       #INTC HW vector 264	
           .align ALIGN_OFFSET 
hw_vect265:  b hw_vect265       #INTC HW vector 265	
           .align ALIGN_OFFSET 
hw_vect266:  b hw_vect266       #INTC HW vector 266	
           .align ALIGN_OFFSET 
hw_vect267:  b hw_vect267       #INTC HW vector 267	
           .align ALIGN_OFFSET 
hw_vect268:  b hw_vect268       #INTC HW vector 268	
           .align ALIGN_OFFSET 
hw_vect269:  b hw_vect269       #INTC HW vector 269	
           .align ALIGN_OFFSET 
hw_vect270:  b hw_vect270       #INTC HW vector 270	
           .align ALIGN_OFFSET 
hw_vect271:  b hw_vect271       #INTC HW vector 271	
           .align ALIGN_OFFSET 
hw_vect272:  b hw_vect272       #INTC HW vector 272	
           .align ALIGN_OFFSET 
hw_vect273:  b hw_vect273       #INTC HW vector 273	
           .align ALIGN_OFFSET 
hw_vect274:  b hw_vect274       #INTC HW vector 274	
           .align ALIGN_OFFSET 
hw_vect275:  b hw_vect275       #INTC HW vector 275	
           .align ALIGN_OFFSET 
hw_vect276:  b hw_vect276       #INTC HW vector 276	
           .align ALIGN_OFFSET 
hw_vect277:  b hw_vect277       #INTC HW vector 277	
           .align ALIGN_OFFSET 
hw_vect278:  b hw_vect278       #INTC HW vector 278	
           .align ALIGN_OFFSET 
hw_vect279:  b hw_vect279       #INTC HW vector 279	
           .align ALIGN_OFFSET 
hw_vect280:  b hw_vect280       #INTC HW vector 280	
           .align ALIGN_OFFSET 
hw_vect281:  b hw_vect281       #INTC HW vector 281	
           .align ALIGN_OFFSET 
hw_vect282:  b hw_vect282       #INTC HW vector 282	
           .align ALIGN_OFFSET 
hw_vect283:  b hw_vect283       #INTC HW vector 283	
           .align ALIGN_OFFSET 
hw_vect284:  b hw_vect284       #INTC HW vector 284	
           .align ALIGN_OFFSET 
hw_vect285:  b hw_vect285       #INTC HW vector 285	
           .align ALIGN_OFFSET 
hw_vect286:  b hw_vect286       #INTC HW vector 286	
           .align ALIGN_OFFSET 
hw_vect287:  b hw_vect287       #INTC HW vector 287	
           .align ALIGN_OFFSET 
hw_vect288:  b hw_vect288       #INTC HW vector 288	
           .align ALIGN_OFFSET 
hw_vect289:  b hw_vect289       #INTC HW vector 289	
           .align ALIGN_OFFSET 
hw_vect290:  b hw_vect290       #INTC HW vector 290	
           .align ALIGN_OFFSET 
hw_vect291:  b hw_vect291       #INTC HW vector 291	
           .align ALIGN_OFFSET 
hw_vect292:  b hw_vect292       #INTC HW vector 292	
           .align ALIGN_OFFSET 
hw_vect293:  b hw_vect293       #INTC HW vector 293	
           .align ALIGN_OFFSET 
hw_vect294:  b hw_vect294       #INTC HW vector 294	
           .align ALIGN_OFFSET 
hw_vect295:  b hw_vect295       #INTC HW vector 295	
           .align ALIGN_OFFSET 
hw_vect296:  b hw_vect296       #INTC HW vector 296	
           .align ALIGN_OFFSET 
hw_vect297:  b hw_vect297       #INTC HW vector 297	
           .align ALIGN_OFFSET 
hw_vect298:  b hw_vect298       #INTC HW vector 298	
           .align ALIGN_OFFSET 
hw_vect299:  b hw_vect299       #INTC HW vector 299	
           .align ALIGN_OFFSET 
hw_vect300:   b hw_vect300        #INTC HW vector 300	
           .align ALIGN_OFFSET 
hw_vect301:   b TimerInterruptHandler        #INTC HW vector 301	
           .align ALIGN_OFFSET 
hw_vect302:   b hw_vect302        #INTC HW vector 302	
           .align ALIGN_OFFSET 
hw_vect303:   b hw_vect303        #INTC HW vector 303	
           .align ALIGN_OFFSET 
hw_vect304:   b hw_vect304        #INTC HW vector 304
           .align ALIGN_OFFSET 
hw_vect305:   b hw_vect305        #INTC HW vector 305	
           .align ALIGN_OFFSET 
hw_vect306:   b hw_vect306        #INTC HW vector 306	
           .align ALIGN_OFFSET 
hw_vect307:   b hw_vect307        #INTC HW vector 307	
           .align ALIGN_OFFSET 
hw_vect308:   b hw_vect308        #INTC HW vector 308	
           .align ALIGN_OFFSET 
hw_vect309:   b hw_vect309        #INTC HW vector 309	
           .align ALIGN_OFFSET 
hw_vect310:  b hw_vect310       #INTC HW vector 310	
           .align ALIGN_OFFSET 
hw_vect311:  b hw_vect311       #INTC HW vector 311	
           .align ALIGN_OFFSET 
hw_vect312:  b hw_vect312       #INTC HW vector 312	
           .align ALIGN_OFFSET 
hw_vect313:  b hw_vect313       #INTC HW vector 313	
           .align ALIGN_OFFSET 
hw_vect314:  b hw_vect314       #INTC HW vector 314	
           .align ALIGN_OFFSET 
hw_vect315:  b hw_vect315       #INTC HW vector 315	
           .align ALIGN_OFFSET 
hw_vect316:  b hw_vect316       #INTC HW vector 316	
           .align ALIGN_OFFSET 
hw_vect317:  b hw_vect317       #INTC HW vector 317	
           .align ALIGN_OFFSET 
hw_vect318:  b hw_vect318       #INTC HW vector 318	
           .align ALIGN_OFFSET 
hw_vect319:  b hw_vect319       #INTC HW vector 319	
           .align ALIGN_OFFSET 
hw_vect320:  b hw_vect320       #INTC HW vector 320	
           .align ALIGN_OFFSET 
hw_vect321:  b hw_vect321       #INTC HW vector 321	
           .align ALIGN_OFFSET 
hw_vect322:  b hw_vect322       #INTC HW vector 322	
           .align ALIGN_OFFSET 
hw_vect323:  b hw_vect323       #INTC HW vector 323	
           .align ALIGN_OFFSET 
hw_vect324:  b hw_vect324       #INTC HW vector 324	
           .align ALIGN_OFFSET 
hw_vect325:  b hw_vect325       #INTC HW vector 325	
           .align ALIGN_OFFSET 
hw_vect326:  b hw_vect326       #INTC HW vector 326	
           .align ALIGN_OFFSET 
hw_vect327:  b hw_vect327       #INTC HW vector 327	
           .align ALIGN_OFFSET 
hw_vect328:  b hw_vect328       #INTC HW vector 328	
           .align ALIGN_OFFSET 
hw_vect329:  b hw_vect329       #INTC HW vector 329	
           .align ALIGN_OFFSET 
hw_vect330:  b hw_vect330       #INTC HW vector 330	
           .align ALIGN_OFFSET 
hw_vect331:  b hw_vect331       #INTC HW vector 331	
           .align ALIGN_OFFSET 
hw_vect332:  b hw_vect332       #INTC HW vector 332	
           .align ALIGN_OFFSET 
hw_vect333:  b hw_vect333       #INTC HW vector 333	
           .align ALIGN_OFFSET 
hw_vect334:  b hw_vect334       #INTC HW vector 334	
           .align ALIGN_OFFSET 
hw_vect335:  b hw_vect335       #INTC HW vector 335	
           .align ALIGN_OFFSET 
hw_vect336:  b hw_vect336       #INTC HW vector 336	
           .align ALIGN_OFFSET 
hw_vect337:  b hw_vect337       #INTC HW vector 337	
           .align ALIGN_OFFSET 
hw_vect338:  b hw_vect338       #INTC HW vector 338	
           .align ALIGN_OFFSET 
hw_vect339:  b hw_vect339       #INTC HW vector 339	
           .align ALIGN_OFFSET 
hw_vect340:  b hw_vect340       #INTC HW vector 340	
           .align ALIGN_OFFSET 
hw_vect341:  b hw_vect341       #INTC HW vector 341	
           .align ALIGN_OFFSET 
hw_vect342:  b hw_vect342       #INTC HW vector 342	
           .align ALIGN_OFFSET 
hw_vect343:  b hw_vect343       #INTC HW vector 343	
           .align ALIGN_OFFSET 
hw_vect344:  b hw_vect344       #INTC HW vector 344	
           .align ALIGN_OFFSET 
hw_vect345:  b hw_vect345       #INTC HW vector 345	
           .align ALIGN_OFFSET 
hw_vect346:  b hw_vect346       #INTC HW vector 346	
           .align ALIGN_OFFSET 
hw_vect347:  b hw_vect347       #INTC HW vector 347	
           .align ALIGN_OFFSET 
hw_vect348:  b hw_vect348       #INTC HW vector 348	
           .align ALIGN_OFFSET 
hw_vect349:  b hw_vect349       #INTC HW vector 349	
           .align ALIGN_OFFSET 
hw_vect350:  b hw_vect350       #INTC HW vector 350	
           .align ALIGN_OFFSET
hw_vect351:  b hw_vect351       #INTC HW vector 351	
           .align ALIGN_OFFSET 
hw_vect352:  b hw_vect352       #INTC HW vector 352	
           .align ALIGN_OFFSET 
hw_vect353:  b hw_vect353       #INTC HW vector 353	
           .align ALIGN_OFFSET 
hw_vect354:  b hw_vect354       #INTC HW vector 354	
           .align ALIGN_OFFSET 
hw_vect355:  b hw_vect355       #INTC HW vector 355	
           .align ALIGN_OFFSET 
hw_vect356:  b hw_vect356       #INTC HW vector 356	
           .align ALIGN_OFFSET 
hw_vect357:  b hw_vect357       #INTC HW vector 357	
           .align ALIGN_OFFSET 
hw_vect358:  b hw_vect358       #INTC HW vector 358	
           .align ALIGN_OFFSET 
hw_vect359:  b hw_vect359       #INTC HW vector 359	
           .align ALIGN_OFFSET 
hw_vect360:  b hw_vect360       #INTC HW vector 360	
           .align ALIGN_OFFSET 
hw_vect361:  b hw_vect361       #INTC HW vector 361	
           .align ALIGN_OFFSET 
hw_vect362:  b hw_vect362       #INTC HW vector 362	
           .align ALIGN_OFFSET 
hw_vect363:  b hw_vect363       #INTC HW vector 363	
           .align ALIGN_OFFSET 
hw_vect364:  b hw_vect364       #INTC HW vector 364	
           .align ALIGN_OFFSET 
hw_vect365:  b hw_vect365       #INTC HW vector 365	
           .align ALIGN_OFFSET 
hw_vect366:  b hw_vect366       #INTC HW vector 366	
           .align ALIGN_OFFSET 
hw_vect367:  b hw_vect367       #INTC HW vector 367	
           .align ALIGN_OFFSET 
hw_vect368:  b hw_vect368       #INTC HW vector 368	
           .align ALIGN_OFFSET 
hw_vect369:  b hw_vect369       #INTC HW vector 369	
           .align ALIGN_OFFSET 
hw_vect370:  b hw_vect370       #INTC HW vector 370	
           .align ALIGN_OFFSET 
hw_vect371:  b hw_vect371       #INTC HW vector 371	
           .align ALIGN_OFFSET 
hw_vect372:  b hw_vect372       #INTC HW vector 372	
           .align ALIGN_OFFSET 
hw_vect373:  b hw_vect373       #INTC HW vector 373	
           .align ALIGN_OFFSET 
hw_vect374:  b hw_vect374       #INTC HW vector 374	
           .align ALIGN_OFFSET 
hw_vect375:  b hw_vect375       #INTC HW vector 375	
           .align ALIGN_OFFSET 
hw_vect376:  b hw_vect376       #INTC HW vector 376	
           .align ALIGN_OFFSET 
hw_vect377:  b hw_vect377       #INTC HW vector 377	
           .align ALIGN_OFFSET 
hw_vect378:  b hw_vect378       #INTC HW vector 378	
           .align ALIGN_OFFSET 
hw_vect379:  b hw_vect379       #INTC HW vector 379	
           .align ALIGN_OFFSET 
hw_vect380:  b hw_vect380       #INTC HW vector 380	
           .align ALIGN_OFFSET 
hw_vect381:  b hw_vect381       #INTC HW vector 381	
           .align ALIGN_OFFSET 
hw_vect382:  b hw_vect382       #INTC HW vector 382	
           .align ALIGN_OFFSET 
hw_vect383:  b hw_vect383       #INTC HW vector 383	
           .align ALIGN_OFFSET 
hw_vect384:  b hw_vect384       #INTC HW vector 384	
           .align ALIGN_OFFSET 
hw_vect385:  b hw_vect385       #INTC HW vector 385	
           .align ALIGN_OFFSET 
hw_vect386:  b hw_vect386       #INTC HW vector 386	
           .align ALIGN_OFFSET 
hw_vect387:  b hw_vect387       #INTC HW vector 387	
           .align ALIGN_OFFSET 
hw_vect388:  b hw_vect388       #INTC HW vector 388	
           .align ALIGN_OFFSET 
hw_vect389:  b hw_vect389       #INTC HW vector 389	
           .align ALIGN_OFFSET 
hw_vect390:  b hw_vect390       #INTC HW vector 390	
           .align ALIGN_OFFSET 
hw_vect391:  b hw_vect391       #INTC HW vector 391	
           .align ALIGN_OFFSET 
hw_vect392:  b hw_vect392       #INTC HW vector 392	
           .align ALIGN_OFFSET 
hw_vect393:  b hw_vect393       #INTC HW vector 393	
           .align ALIGN_OFFSET 
hw_vect394:  b hw_vect394       #INTC HW vector 394	
           .align ALIGN_OFFSET 
hw_vect395:  b hw_vect395       #INTC HW vector 395	
           .align ALIGN_OFFSET 
hw_vect396:  b hw_vect396       #INTC HW vector 396	
           .align ALIGN_OFFSET 
hw_vect397:  b hw_vect397       #INTC HW vector 397	
           .align ALIGN_OFFSET 
hw_vect398:  b hw_vect398       #INTC HW vector 398	
           .align ALIGN_OFFSET 
hw_vect399:  b hw_vect399       #INTC HW vector 399	






  	
  .equ	INTC_EOIR_PRC0,	 0xfff48018	# Dual Core: Proc 0 End Of Interrupt Reg. addr.
  .equ	INTC_EOIR,       0xfff48018 # Single Core: End Of Interrupt Reg. addr.
 
  .extern InterruptHandler
  
  .globl TimerInterruptHandler
	.size TimerInterruptHandler , TimerInterruptHandler_END - TimerInterruptHandler
  .type TimerInterruptHandler , %function	 
TimerInterruptHandler:
                              # PROLOGUE 
  stwu  r1, -0x50 (r1)      # Create stack frame and store back chain
  stw  r3,  0x28 (r1)      # Store a working register 
                              # Note: use se_ form for r0-7, r24-41 with positive offset
  mfsrr0  r3			      # Store SRR0:1 (must be done before enabling EE)
  stw  r3,  0x0C (r1)
  mfsrr1  r3				  	
  stw  r3,  0x10 (r1)

  wrteei  1              # Set MSR[EE]=1	(must wait a couple clocks after reading IACKR)
  stw  r4,  0x2C (r1)        # Store a second working register
  mflr r4                    # Store LR (LR will be used for ISR Vector)
  stw  r4,  0x14 (r1)
  mtlr r3                    # Store ISR address to LR to use for branching later
  
  stw   r12, 0x4C (r1)        # Store rest of gprs
  stw   r11, 0x48 (r1)
  stw   r10, 0x44 (r1)
  stw   r9,  0x40 (r1)
  stw   r8,  0x3C (r1)
  stw  r7,  0x38 (r1)
  stw  r6,  0x34 (r1)
  stw  r5,  0x30 (r1)
  stw  r0,  0x24 (r1)	  
  mfcr    r3                    # Store CR
  stw  r3,  0x20 (r1)
  mfxer   r3                    # Store XER
  stw  r3,  0x1C (r1)
  mfctr  r3                  # Store CTR
  stw  r3,  0x18 (r1)
									
  bl InterruptHandler         # Branch to ISR, but return here
  
  lwz  r3,  0x14 (r1)        # Restore LR	                    
  mtlr r3
  lwz  r3,  0x18 (r1)        # Restore CTR
  mtctr r3
  lwz  r3,  0x1C (r1)        # Restore XER
  mtxer   r3
  lwz  r3,  0x20 (r1)        # Restore CR
  mtcrf   0xff, r3
  lwz  r0,  0x24 (r1)        # Restore other gprs except working registers
  lwz  r5,  0x30 (r1)
  lwz  r6,  0x34 (r1)
  lwz  r7,  0x38 (r1)
  lwz   r8,  0x3C (r1)
  lwz   r9,  0x40 (r1)
  lwz   r10, 0x44 (r1)
  lwz   r11, 0x48 (r1)
  lwz   r12, 0x4C (r1)
  mbar    0                     # Ensure store to clear interrupt flag bit completed
                                # Use one of the following 4 lines:
# lis   r3, INTC_EOIR_PRC0@ha	# Dual Core: Load upper half proc 0 EIOR addr. to r3
  lis   r3, INTC_EOIR@ha      # Single Core: Load upper half of EIOR address to r3

  li    r4, 0
  		
  wrteei  0                        # Disable interrupts for rest of handler
  
                                   # Use 1 or 2 of the next appropriate lines:                                
# stw   r4, INTC_EOIR_PRC0@l(r3) # Dual Core - Write 0 to proc'r 0 INTC_EIOR 
  stw   r4, INTC_EOIR@l(r3)      # Single Core - Write 0 to proc'r 0 INTC_EIOR
      
  lwz   r3,  0x0C (r1)       # Restore SRR0
  mtsrr0  r3
  lwz  r3,  0x10 (r1)        # Restore SRR1
  mtsrr1  r3
  lwz  r4,  0x2C (r1)        # Restore working registers
  lwz  r3,  0x28 (r1)		
  addi r1, r1, 0x50         # Delete stack frame
 
  rfi                        # End of Interrupt
TimerInterruptHandler_END:



