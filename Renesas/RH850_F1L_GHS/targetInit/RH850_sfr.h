#include <stdint.h>

struct _Others_tag
{
  uint32_t FLMDCNT;
  uint32_t FLMDPCMD;
  uint32_t FLMDPS;
  uint8_t res0[1835252];

  uint8_t SELB_TAUJ0I;
  uint8_t res1[255];

  uint16_t SELB_TAUD0I;
  uint8_t res2[254];

  uint16_t SELB_INTC1;
  uint8_t res3[2];

  uint16_t SELB_INTC2;
  uint8_t res4[762];

  uint8_t SELB_READTEST;
  uint8_t res5[2559];

  uint32_t SLPWGA0;
  uint32_t SLPWGA1;
  uint32_t SLPWGA2;
  uint8_t res6[4084];

  uint32_t SCTLR;
  uint32_t EVFR;
  uint32_t DPSELR0;
  uint32_t DPSELRM;
  uint32_t DPSELRH;
  uint32_t DPDSR0;
  uint32_t DPDSRM;
  uint32_t DPDSRH;
  uint32_t DPDIMR0;
  uint8_t DPDIMR1;
  uint8_t res7[3];

  uint8_t DPDIMR2;
  uint8_t res8[3];

  uint8_t DPDIMR3;
  uint8_t res9[3];

  uint8_t DPDIMR4;
  uint8_t res10[3];

  uint8_t DPDIMR5;
  uint8_t res11[3];

  uint8_t DPDIMR6;
  uint8_t res12[3];

  uint8_t DPDIMR7;
  uint8_t res13[3];

  uint16_t CNTVAL;
  uint8_t res14[2];

  uint8_t SOSTR;
  uint8_t res15[319419];

  uint16_t P0;
  uint8_t res16[2];

  uint16_t P1;
  uint8_t res17[2];

  uint16_t P2;
  uint8_t res18[22];

  uint16_t P8;
  uint8_t res19[2];

  uint16_t P9;
  uint8_t res20[2];

  uint16_t P10;
  uint8_t res21[2];

  uint16_t P11;
  uint8_t res22[2];

  uint16_t P12;
  uint8_t res23[22];

  uint16_t P18;
  uint8_t res24[6];

  uint16_t P20;
  uint8_t res25[118];

  uint16_t AP0;
  uint8_t res26[2];

  uint16_t AP1;
  uint8_t res27[50];

  uint32_t PSR0;
  uint32_t PSR1;
  uint32_t PSR2;
  uint8_t res28[20];

  uint32_t PSR8;
  uint32_t PSR9;
  uint32_t PSR10;
  uint32_t PSR11;
  uint32_t PSR12;
  uint8_t res29[20];

  uint32_t PSR18;
  uint8_t res30[4];

  uint32_t PSR20;
  uint8_t res31[116];

  uint32_t APSR0;
  uint32_t APSR1;
  uint8_t res32[48];

  uint16_t PPR0;
  uint8_t res33[2];

  uint16_t PPR1;
  uint8_t res34[2];

  uint16_t PPR2;
  uint8_t res35[22];

  uint16_t PPR8;
  uint8_t res36[2];

  uint16_t PPR9;
  uint8_t res37[2];

  uint16_t PPR10;
  uint8_t res38[2];

  uint16_t PPR11;
  uint8_t res39[2];

  uint16_t PPR12;
  uint8_t res40[22];

  uint16_t PPR18;
  uint8_t res41[6];

  uint16_t PPR20;
  uint8_t res42[118];

  uint16_t APPR0;
  uint8_t res43[2];

  uint16_t APPR1;
  uint8_t res44[34];

  uint16_t IPPR0;
  uint8_t res45[14];

  uint16_t PM0;
  uint8_t res46[2];

  uint16_t PM1;
  uint8_t res47[2];

  uint16_t PM2;
  uint8_t res48[22];

  uint16_t PM8;
  uint8_t res49[2];

  uint16_t PM9;
  uint8_t res50[2];

  uint16_t PM10;
  uint8_t res51[2];

  uint16_t PM11;
  uint8_t res52[2];

  uint16_t PM12;
  uint8_t res53[22];

  uint16_t PM18;
  uint8_t res54[6];

  uint16_t PM20;
  uint8_t res55[118];

  uint16_t APM0;
  uint8_t res56[2];

  uint16_t APM1;
  uint8_t res57[50];

  uint16_t PMC0;
  uint8_t res58[2];

  uint16_t PMC1;
  uint8_t res59[2];

  uint16_t PMC2;
  uint8_t res60[22];

  uint16_t PMC8;
  uint8_t res61[2];

  uint16_t PMC9;
  uint8_t res62[2];

  uint16_t PMC10;
  uint8_t res63[2];

  uint16_t PMC11;
  uint8_t res64[2];

  uint16_t PMC12;
  uint8_t res65[22];

  uint16_t PMC18;
  uint8_t res66[6];

  uint16_t PMC20;
  uint8_t res67[174];

  uint16_t PFC0;
  uint8_t res68[2];

  uint16_t PFC1;
  uint8_t res69[26];

  uint16_t PFC8;
  uint8_t res70[2];

  uint16_t PFC9;
  uint8_t res71[2];

  uint16_t PFC10;
  uint8_t res72[2];

  uint16_t PFC11;
  uint8_t res73[2];

  uint16_t PFC12;
  uint8_t res74[22];

  uint16_t PFC18;
  uint8_t res75[6];

  uint16_t PFC20;
  uint8_t res76[174];

  uint16_t PFCE0;
  uint8_t res77[30];

  uint16_t PFCE8;
  uint8_t res78[2];

  uint16_t PFCE9;
  uint8_t res79[2];

  uint16_t PFCE10;
  uint8_t res80[2];

  uint16_t PFCE11;
  uint8_t res81[2];

  uint16_t PFCE12;
  uint8_t res82[206];

  uint16_t PNOT0;
  uint8_t res83[2];

  uint16_t PNOT1;
  uint8_t res84[2];

  uint16_t PNOT2;
  uint8_t res85[22];

  uint16_t PNOT8;
  uint8_t res86[2];

  uint16_t PNOT9;
  uint8_t res87[2];

  uint16_t PNOT10;
  uint8_t res88[2];

  uint16_t PNOT11;
  uint8_t res89[2];

  uint16_t PNOT12;
  uint8_t res90[22];

  uint16_t PNOT18;
  uint8_t res91[6];

  uint16_t PNOT20;
  uint8_t res92[118];

  uint16_t APNOT0;
  uint8_t res93[2];

  uint16_t APNOT1;
  uint8_t res94[50];

  uint32_t PMSR0;
  uint32_t PMSR1;
  uint32_t PMSR2;
  uint8_t res95[20];

  uint32_t PMSR8;
  uint32_t PMSR9;
  uint32_t PMSR10;
  uint32_t PMSR11;
  uint32_t PMSR12;
  uint8_t res96[20];

  uint32_t PMSR18;
  uint8_t res97[4];

  uint32_t PMSR20;
  uint8_t res98[116];

  uint32_t APMSR0;
  uint32_t APMSR1;
  uint8_t res99[48];

  uint32_t PMCSR0;
  uint32_t PMCSR1;
  uint32_t PMCSR2;
  uint8_t res100[20];

  uint32_t PMCSR8;
  uint32_t PMCSR9;
  uint32_t PMCSR10;
  uint32_t PMCSR11;
  uint32_t PMCSR12;
  uint8_t res101[20];

  uint32_t PMCSR18;
  uint8_t res102[4];

  uint32_t PMCSR20;
  uint8_t res103[172];

  uint16_t PFCAE0;
  uint8_t res104[38];

  uint16_t PFCAE10;
  uint8_t res105[2];

  uint16_t PFCAE11;
  uint8_t res106[13778];

  uint16_t PIBC0;
  uint8_t res107[2];

  uint16_t PIBC1;
  uint8_t res108[2];

  uint16_t PIBC2;
  uint8_t res109[22];

  uint16_t PIBC8;
  uint8_t res110[2];

  uint16_t PIBC9;
  uint8_t res111[2];

  uint16_t PIBC10;
  uint8_t res112[2];

  uint16_t PIBC11;
  uint8_t res113[2];

  uint16_t PIBC12;
  uint8_t res114[22];

  uint16_t PIBC18;
  uint8_t res115[6];

  uint16_t PIBC20;
  uint8_t res116[118];

  uint16_t APIBC0;
  uint8_t res117[2];

  uint16_t APIBC1;
  uint8_t res118[34];

  uint16_t IPIBC0;
  uint8_t res119[14];

  uint16_t PBDC0;
  uint8_t res120[2];

  uint16_t PBDC1;
  uint8_t res121[2];

  uint16_t PBDC2;
  uint8_t res122[22];

  uint16_t PBDC8;
  uint8_t res123[2];

  uint16_t PBDC9;
  uint8_t res124[2];

  uint16_t PBDC10;
  uint8_t res125[2];

  uint16_t PBDC11;
  uint8_t res126[2];

  uint16_t PBDC12;
  uint8_t res127[22];

  uint16_t PBDC18;
  uint8_t res128[6];

  uint16_t PBDC20;
  uint8_t res129[118];

  uint16_t APBDC0;
  uint8_t res130[2];

  uint16_t APBDC1;
  uint8_t res131[50];

  uint16_t PIPC0;
  uint8_t res132[38];

  uint16_t PIPC10;
  uint8_t res133[2];

  uint16_t PIPC11;
  uint8_t res134[210];

  uint16_t PU0;
  uint8_t res135[2];

  uint16_t PU1;
  uint8_t res136[2];

  uint16_t PU2;
  uint8_t res137[22];

  uint16_t PU8;
  uint8_t res138[2];

  uint16_t PU9;
  uint8_t res139[2];

  uint16_t PU10;
  uint8_t res140[2];

  uint16_t PU11;
  uint8_t res141[2];

  uint16_t PU12;
  uint8_t res142[22];

  uint16_t PU18;
  uint8_t res143[6];

  uint16_t PU20;
  uint8_t res144[174];

  uint16_t PD0;
  uint8_t res145[30];

  uint16_t PD8;
  uint8_t res146[2];

  uint16_t PD9;
  uint8_t res147[2];

  uint16_t PD10;
  uint8_t res148[2];

  uint16_t PD11;
  uint8_t res149[210];

  uint32_t PODC0;
  uint32_t PODC1;
  uint32_t PODC2;
  uint8_t res150[20];

  uint32_t PODC8;
  uint32_t PODC9;
  uint32_t PODC10;
  uint32_t PODC11;
  uint32_t PODC12;
  uint8_t res151[20];

  uint32_t PODC18;
  uint8_t res152[4];

  uint32_t PODC20;
  uint8_t res153[172];

  uint32_t PDSC0;
  uint8_t res154[36];

  uint32_t PDSC10;
  uint32_t PDSC11;
  uint32_t PDSC12;
  uint8_t res155[204];

  uint16_t PIS0;
  uint8_t res156[2];

  uint16_t PIS1;
  uint8_t res157[2];

  uint16_t PIS2;
  uint8_t res158[30];

  uint16_t PIS10;
  uint8_t res159[2];

  uint16_t PIS11;
  uint8_t res160[2];

  uint16_t PIS12;
  uint8_t res161[30];

  uint16_t PIS20;
  uint8_t res162[942];

  uint32_t PPROTS0;
  uint32_t PPROTS1;
  uint32_t PPROTS2;
  uint8_t res163[20];

  uint32_t PPROTS8;
  uint32_t PPROTS9;
  uint32_t PPROTS10;
  uint32_t PPROTS11;
  uint32_t PPROTS12;
  uint8_t res164[20];

  uint32_t PPROTS18;
  uint8_t res165[4];

  uint32_t PPROTS20;
  uint8_t res166[172];

  uint32_t PPCMD0;
  uint32_t PPCMD1;
  uint32_t PPCMD2;
  uint8_t res167[20];

  uint32_t PPCMD8;
  uint32_t PPCMD9;
  uint32_t PPCMD10;
  uint32_t PPCMD11;
  uint32_t PPCMD12;
  uint8_t res168[20];

  uint32_t PPCMD18;
  uint8_t res169[4];

  uint32_t PPCMD20;
  uint8_t res170[45996];

  uint8_t JP0;
  uint8_t res171[15];

  uint32_t JPSR0;
  uint8_t res172[12];

  uint8_t JPPR0;
  uint8_t res173[15];

  uint8_t JPM0;
  uint8_t res174[15];

  uint8_t JPMC0;
  uint8_t res175[15];

  uint8_t JPFC0;
  uint8_t res176[31];

  uint8_t JPNOT0;
  uint8_t res177[15];

  uint32_t JPMSR0;
  uint8_t res178[12];

  uint32_t JPMCSR0;
  uint8_t res179[876];

  uint8_t JPIBC0;
  uint8_t res180[15];

  uint8_t JPBDC0;
  uint8_t res181[31];

  uint8_t JPU0;
  uint8_t res182[15];

  uint8_t JPD0;
  uint8_t res183[15];

  uint32_t JPODC0;
  uint8_t res184[92];

  uint32_t JPPROTS0;
  uint8_t res185[12];

  uint32_t JPPCMD0;
  uint8_t res186[64316];

  uint8_t DNFATAUD0ICTL;
  uint8_t res187[3];

  uint16_t DNFATAUD0IEN;
  uint8_t res188[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DNFATAUD0IENH0:1;
      uint64_t DNFATAUD0IENH1:1;
      uint64_t DNFATAUD0IENH2:1;
      uint64_t DNFATAUD0IENH3:1;
      uint64_t DNFATAUD0IENH4:1;
      uint64_t DNFATAUD0IENH5:1;
      uint64_t DNFATAUD0IENH6:1;
      uint64_t DNFATAUD0IENH7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DNFATAUD0IENH;

  uint8_t res189[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DNFATAUD0IENL0:1;
      uint64_t DNFATAUD0IENL1:1;
      uint64_t DNFATAUD0IENL2:1;
      uint64_t DNFATAUD0IENL3:1;
      uint64_t DNFATAUD0IENL4:1;
      uint64_t DNFATAUD0IENL5:1;
      uint64_t DNFATAUD0IENL6:1;
      uint64_t DNFATAUD0IENL7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DNFATAUD0IENL;

  uint8_t res190[19];

  uint8_t DNFATAUB0ICTL;
  uint8_t res191[3];

  uint16_t DNFATAUB0IEN;
  uint8_t res192[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DNFATAUB0IENH0:1;
      uint64_t DNFATAUB0IENH1:1;
      uint64_t DNFATAUB0IENH2:1;
      uint64_t DNFATAUB0IENH3:1;
      uint64_t DNFATAUB0IENH4:1;
      uint64_t DNFATAUB0IENH5:1;
      uint64_t DNFATAUB0IENH6:1;
      uint64_t DNFATAUB0IENH7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DNFATAUB0IENH;

  uint8_t res193[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DNFATAUB0IENL0:1;
      uint64_t DNFATAUB0IENL1:1;
      uint64_t DNFATAUB0IENL2:1;
      uint64_t DNFATAUB0IENL3:1;
      uint64_t DNFATAUB0IENL4:1;
      uint64_t DNFATAUB0IENL5:1;
      uint64_t DNFATAUB0IENL6:1;
      uint64_t DNFATAUB0IENL7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DNFATAUB0IENL;

  uint8_t res194[19];

  uint8_t DNFATAUB1ICTL;
  uint8_t res195[3];

  uint16_t DNFATAUB1IEN;
  uint8_t res196[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DNFATAUB1IENH0:1;
      uint64_t DNFATAUB1IENH1:1;
      uint64_t DNFATAUB1IENH2:1;
      uint64_t DNFATAUB1IENH3:1;
      uint64_t DNFATAUB1IENH4:1;
      uint64_t DNFATAUB1IENH5:1;
      uint64_t DNFATAUB1IENH6:1;
      uint64_t DNFATAUB1IENH7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DNFATAUB1IENH;

  uint8_t res197[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DNFATAUB1IENL0:1;
      uint64_t DNFATAUB1IENL1:1;
      uint64_t DNFATAUB1IENL2:1;
      uint64_t DNFATAUB1IENL3:1;
      uint64_t DNFATAUB1IENL4:1;
      uint64_t DNFATAUB1IENL5:1;
      uint64_t DNFATAUB1IENL6:1;
      uint64_t DNFATAUB1IENL7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DNFATAUB1IENL;

  uint8_t res198[19];

  uint8_t DNFAENCA0ICTL;
  uint8_t res199[3];

  uint16_t DNFAENCA0IEN;
  uint8_t res200[6];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DNFAENCA0IENL0:1;
      uint64_t DNFAENCA0IENL1:1;
      uint64_t DNFAENCA0IENL2:1;
      uint64_t DNFAENCA0IENL3:1;
      uint64_t DNFAENCA0IENL4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DNFAENCA0IENL;

  uint8_t res201[51];

  uint8_t DNFAADCTL0CTL;
  uint8_t res202[3];

  uint16_t DNFAADCTL0EN;
  uint8_t res203[6];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DNFAADCTL0ENL0:1;
      uint64_t DNFAADCTL0ENL1:1;
      uint64_t DNFAADCTL0ENL2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DNFAADCTL0ENL;

  uint8_t res204[19];

  uint8_t DNFAADCTL1CTL;
  uint8_t res205[3];

  uint16_t DNFAADCTL1EN;
  uint8_t res206[6];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DNFAADCTL1ENL0:1;
      uint64_t DNFAADCTL1ENL1:1;
      uint64_t DNFAADCTL1ENL2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DNFAADCTL1ENL;

  uint8_t res207[16179];

  uint8_t FCLA0CTL0_NMI;
  uint8_t res208[31];

  uint8_t FCLA0CTL0_INTPL;
  uint8_t res209[3];

  uint8_t FCLA0CTL1_INTPL;
  uint8_t res210[3];

  uint8_t FCLA0CTL2_INTPL;
  uint8_t res211[3];

  uint8_t FCLA0CTL3_INTPL;
  uint8_t res212[3];

  uint8_t FCLA0CTL4_INTPL;
  uint8_t res213[3];

  uint8_t FCLA0CTL5_INTPL;
  uint8_t res214[3];

  uint8_t FCLA0CTL6_INTPL;
  uint8_t res215[3];

  uint8_t FCLA0CTL7_INTPL;
  uint8_t res216[3];

  uint8_t FCLA0CTL0_INTPH;
  uint8_t res217[3];

  uint8_t FCLA0CTL1_INTPH;
  uint8_t res218[3];

  uint8_t FCLA0CTL2_INTPH;
  uint8_t res219[3];

  uint8_t FCLA0CTL3_INTPH;
  uint8_t res220[3];

  uint8_t FCLA0CTL4_INTPH;
  uint8_t res221[3];

  uint8_t FCLA0CTL5_INTPH;
  uint8_t res222[3];

  uint8_t FCLA0CTL6_INTPH;
  uint8_t res223[3];

  uint8_t FCLA0CTL7_INTPH;
  uint8_t res224[3];

  uint8_t FCLA0CTL0_ADC0;
  uint8_t res225[3];

  uint8_t FCLA0CTL1_ADC0;
  uint8_t res226[3];

  uint8_t FCLA0CTL2_ADC0;
  uint8_t res227[23];

  uint8_t FCLA0CTL0_ADC1;
  uint8_t res228[3];

  uint8_t FCLA0CTL1_ADC1;
  uint8_t res229[3];

  uint8_t FCLA0CTL2_ADC1;
  uint8_t res230[155527];

  uint8_t EEPRDCYCL;
  uint8_t res231[32751];

  uint16_t CFECCCTL;
  uint8_t res232[2];

  uint32_t CFFSTERSTR;
  uint8_t res233[28];

  uint8_t CFFSTSTC;
  uint8_t res234[3];

  uint8_t CFOVFSTR;
  uint8_t res235[3];

  uint8_t CFOVFSTC;
  uint8_t res236[3];

  uint8_t CFERRINT;
  uint8_t res237[3];

  uint32_t CFFSTEADR;
  uint8_t res238[28];

  uint16_t CFTSTCTL;
  uint8_t res239[4010];

  uint16_t LRECCCTL;
  uint8_t res240[2];

  uint32_t LRFSTERSTR;
  uint8_t res241[28];

  uint8_t LRSTCLR;
  uint8_t res242[3];

  uint8_t LROVFSTR;
  uint8_t res243[3];

  uint8_t LROVFSTC;
  uint8_t res244[3];

  uint32_t LRFSTEADR0;
  uint8_t res245[124];

  uint8_t LRERRINT;
  uint8_t res246[3];

  uint16_t LRTSTCTL;
  uint8_t res247[2];

  uint32_t LRTDATBF0;
  uint8_t res248[12100];

  uint16_t DFECCCTL;
  uint8_t res249[2];

  uint32_t DFERSTR;
  uint8_t DFERSTC;
  uint8_t res250[11];

  uint8_t DFERRINT;
  uint8_t res251[7];

  uint16_t DFTSTCTL;
  uint8_t res252[40930];

  uint16_t ECCCSIH0CTL;
  uint8_t res253[2];

  uint16_t ECCCSIH0TMC;
  uint8_t res254[2];

  uint32_t ECCCSIH0TRC;
  uint32_t ECCCSIH0TED;
  uint16_t ECCCSIH1CTL;
  uint8_t res255[2];

  uint16_t ECCCSIH1TMC;
  uint8_t res256[2];

  uint32_t ECCCSIH1TRC;
  uint32_t ECCCSIH1TED;
  uint16_t ECCCSIH2CTL;
  uint8_t res257[2];

  uint16_t ECCCSIH2TMC;
  uint8_t res258[2];

  uint32_t ECCCSIH2TRC;
  uint32_t ECCCSIH2TED;
  uint16_t ECCCSIH3CTL;
  uint8_t res259[2];

  uint16_t ECCCSIH3TMC;
  uint8_t res260[2];

  uint32_t ECCCSIH3TRC;
  uint32_t ECCCSIH3TED;
  uint8_t res261[4032];

  uint16_t ECCRCAN0CTL;
  uint8_t res262[2];

  uint16_t ECCRCAN0TMC;
  uint8_t res263[2];

  uint32_t ECCRCAN0TRC;
  uint32_t ECCRCAN0TED;
  uint8_t res264[3010544];

  uint32_t CVMF;
  uint32_t CVMDE;
  uint8_t res265[12];

  uint32_t CVMDIAG;
  uint8_t res266[232];

  uint32_t PROTCMDCVM;
  uint32_t PROTSCVM;
  uint8_t res267[196344];

  uint32_t PROTCMD0;
  uint32_t PROTS0;
  uint8_t res268[248];

  uint32_t STBC0PSC;
  uint8_t res269[12];

  uint32_t STBC0STPT;
  uint8_t res270[236];

  uint32_t WDTNMIF;
  uint8_t res271[4];

  uint32_t WDTNMIFC;
  uint8_t res272[244];

  uint32_t FEINTF;
  uint32_t FEINTFMSK;
  uint32_t FEINTFC;
  uint8_t res273[244];

  uint32_t WUF0;
  uint32_t WUFMSK0;
  uint32_t WUFC0;
  uint8_t res274[276];

  uint32_t WUF20;
  uint32_t WUFMSK20;
  uint32_t WUFC20;
  uint8_t res275[564];

  uint32_t RESF;
  uint8_t res276[4];

  uint32_t RESFC;
  uint8_t res277[244];

  uint32_t RESFR;
  uint8_t res278[4];

  uint32_t RESFCR;
  uint8_t res279[276];

  uint32_t VLVF;
  uint8_t res280[4];

  uint32_t VLVFC;
  uint8_t res281[116];

  uint32_t LVICNT;
  uint32_t SWRESA;
  uint8_t res282[248];

  uint32_t IOHOLD;
  uint8_t res283[1276];

  uint32_t ROSCE;
  uint32_t ROSCS;
  uint8_t res284[16];

  uint32_t ROSCSTPM;
  uint8_t res285[228];

  uint32_t MOSCE;
  uint32_t MOSCS;
  uint32_t MOSCC;
  uint32_t MOSCST;
  uint8_t res286[8];

  uint32_t MOSCSTPM;
  uint8_t res287[228];

  uint32_t SOSCE;
  uint32_t SOSCS;
  uint8_t res288[4];

  uint32_t SOSCST;
  uint8_t res289[3568];

  uint32_t CKSC_AWDTAD_CTL;
  uint8_t res290[4];

  uint32_t CKSC_AWDTAD_ACT;
  uint8_t res291[12];

  uint32_t CKSC_AWDTAD_STPM;
  uint8_t res292[228];

  uint32_t CKSC_ATAUJS_CTL;
  uint8_t res293[4];

  uint32_t CKSC_ATAUJS_ACT;
  uint8_t res294[244];

  uint32_t CKSC_ATAUJD_CTL;
  uint8_t res295[4];

  uint32_t CKSC_ATAUJD_ACT;
  uint8_t res296[12];

  uint32_t CKSC_ATAUJD_STPM;
  uint8_t res297[228];

  uint32_t CKSC_ARTCAS_CTL;
  uint8_t res298[4];

  uint32_t CKSC_ARTCAS_ACT;
  uint8_t res299[244];

  uint32_t CKSC_ARTCAD_CTL;
  uint8_t res300[4];

  uint32_t CKSC_ARTCAD_ACT;
  uint8_t res301[12];

  uint32_t CKSC_ARTCAD_STPM;
  uint8_t res302[228];

  uint32_t CKSC_AADCAS_CTL;
  uint8_t res303[4];

  uint32_t CKSC_AADCAS_ACT;
  uint8_t res304[244];

  uint32_t CKSC_AADCAD_CTL;
  uint8_t res305[4];

  uint32_t CKSC_AADCAD_ACT;
  uint8_t res306[12];

  uint32_t CKSC_AADCAD_STPM;
  uint8_t res307[228];

  uint32_t CKSC_AFOUTS_CTL;
  uint8_t res308[4];

  uint32_t CKSC_AFOUTS_ACT;
  uint8_t res309[12];

  uint32_t CKSC_AFOUTS_STPM;
  uint8_t res310[228];

  uint32_t FOUTDIV;
  uint32_t FOUTSTAT;
  uint8_t res311[22520];

  uint32_t PROTCMD1;
  uint32_t PROTS1;
  uint8_t res312[264];

  uint32_t WUF_ISO0;
  uint32_t WUFMSK_ISO0;
  uint32_t WUFC_ISO0;
  uint8_t res313[3812];

  uint32_t PLLE;
  uint32_t PLLS;
  uint32_t PLLC;
  uint8_t res314[4084];

  uint32_t CKSC_CPUCLKS_CTL;
  uint8_t res315[4];

  uint32_t CKSC_CPUCLKS_ACT;
  uint8_t res316[244];

  uint32_t CKSC_CPUCLKD_CTL;
  uint8_t res317[4];

  uint32_t CKSC_CPUCLKD_ACT;
  uint8_t res318[244];

  uint32_t CKSC_IPERI1S_CTL;
  uint8_t res319[4];

  uint32_t CKSC_IPERI1S_ACT;
  uint8_t res320[244];

  uint32_t CKSC_IPERI2S_CTL;
  uint8_t res321[4];

  uint32_t CKSC_IPERI2S_ACT;
  uint8_t res322[244];

  uint32_t CKSC_ILINS_CTL;
  uint8_t res323[4];

  uint32_t CKSC_ILINS_ACT;
  uint8_t res324[244];

  uint32_t CKSC_IADCAS_CTL;
  uint8_t res325[4];

  uint32_t CKSC_IADCAS_ACT;
  uint8_t res326[244];

  uint32_t CKSC_IADCAD_CTL;
  uint8_t res327[4];

  uint32_t CKSC_IADCAD_ACT;
  uint8_t res328[500];

  uint32_t CKSC_ILIND_CTL;
  uint8_t res329[4];

  uint32_t CKSC_ILIND_ACT;
  uint8_t res330[12];

  uint32_t CKSC_ILIND_STPM;
  uint8_t res331[228];

  uint32_t CKSC_ICANS_CTL;
  uint8_t res332[4];

  uint32_t CKSC_ICANS_ACT;
  uint8_t res333[12];

  uint32_t CKSC_ICANS_STPM;
  uint8_t res334[228];

  uint32_t CKSC_ICANOSCD_CTL;
  uint8_t res335[4];

  uint32_t CKSC_ICANOSCD_ACT;
  uint8_t res336[12];

  uint32_t CKSC_ICANOSCD_STPM;
  uint8_t res337[228];

  uint32_t CKSC_ICSIS_CTL;
  uint8_t res338[4];

  uint32_t CKSC_ICSIS_ACT;
  uint8_t res339[5876];

  uint32_t PROTCMDCLMA;
  uint32_t PROTSCLMA;
  uint8_t res340[442360];

  uint16_t BSC;
  uint16_t DEC;
  uint8_t res341[4];

  uint16_t DWC;
  uint8_t res342[2];

  uint16_t DHC;
  uint8_t res343[2];

  uint16_t AWC;
  uint8_t res344[2];

  uint16_t ICC;
  uint8_t res345[234];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DTRC0ADS:1;
      uint64_t reservedSpace0:6;
      uint64_t DTRC0ERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DTRC0;

  uint8_t res346[3];

  uint16_t DMCM0;
  uint8_t res347[14];

  uint32_t DSA0;
  uint8_t res348[12];

  uint32_t DDA0;
  uint8_t res349[10];

  uint16_t DTC0;
  uint8_t res350[4];

  uint16_t DTCT0;
  union
  {
    uint8_t R;
    struct
    {
      uint64_t DTS0DTE:1;
      uint64_t DTS0SR:1;
      uint64_t DTS0DR:1;
      uint64_t DTS0ER:1;
      uint64_t reservedSpace0:2;
      uint64_t DTS0DT:1;
      uint64_t DTS0TC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DTS0;

  uint8_t res351[9];

  uint32_t DSA1;
  uint8_t res352[12];

  uint32_t DDA1;
  uint8_t res353[10];

  uint16_t DTC1;
  uint8_t res354[4];

  uint16_t DTCT1;
  union
  {
    uint8_t R;
    struct
    {
      uint64_t DTS1DTE:1;
      uint64_t DTS1SR:1;
      uint64_t DTS1DR:1;
      uint64_t DTS1ER:1;
      uint64_t reservedSpace0:2;
      uint64_t DTS1DT:1;
      uint64_t DTS1TC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DTS1;

  uint8_t res355[9];

  uint32_t DSA2;
  uint8_t res356[12];

  uint32_t DDA2;
  uint8_t res357[10];

  uint16_t DTC2;
  uint8_t res358[4];

  uint16_t DTCT2;
  union
  {
    uint8_t R;
    struct
    {
      uint64_t DTS2DTE:1;
      uint64_t DTS2SR:1;
      uint64_t DTS2DR:1;
      uint64_t DTS2ER:1;
      uint64_t reservedSpace0:2;
      uint64_t DTS2DT:1;
      uint64_t DTS2TC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DTS2;

  uint8_t res359[9];

  uint32_t DSA3;
  uint8_t res360[12];

  uint32_t DDA3;
  uint8_t res361[10];

  uint16_t DTC3;
  uint8_t res362[4];

  uint16_t DTCT3;
  union
  {
    uint8_t R;
    struct
    {
      uint64_t DTS3DTE:1;
      uint64_t DTS3SR:1;
      uint64_t DTS3DR:1;
      uint64_t DTS3ER:1;
      uint64_t reservedSpace0:2;
      uint64_t DTS3DT:1;
      uint64_t DTS3TC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DTS3;

  uint8_t res363[9];

  uint32_t DSA4;
  uint8_t res364[12];

  uint32_t DDA4;
  uint8_t res365[10];

  uint16_t DTC4;
  uint8_t res366[4];

  uint16_t DTCT4;
  union
  {
    uint8_t R;
    struct
    {
      uint64_t DTS4DTE:1;
      uint64_t DTS4SR:1;
      uint64_t DTS4DR:1;
      uint64_t DTS4ER:1;
      uint64_t reservedSpace0:2;
      uint64_t DTS4DT:1;
      uint64_t DTS4TC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DTS4;

  uint8_t res367[9];

  uint32_t DSA5;
  uint8_t res368[12];

  uint32_t DDA5;
  uint8_t res369[10];

  uint16_t DTC5;
  uint8_t res370[4];

  uint16_t DTCT5;
  union
  {
    uint8_t R;
    struct
    {
      uint64_t DTS5DTE:1;
      uint64_t DTS5SR:1;
      uint64_t DTS5DR:1;
      uint64_t DTS5ER:1;
      uint64_t reservedSpace0:2;
      uint64_t DTS5DT:1;
      uint64_t DTS5TC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DTS5;

  uint8_t res371[9];

  uint32_t DSA6;
  uint8_t res372[12];

  uint32_t DDA6;
  uint8_t res373[10];

  uint16_t DTC6;
  uint8_t res374[4];

  uint16_t DTCT6;
  union
  {
    uint8_t R;
    struct
    {
      uint64_t DTS6DTE:1;
      uint64_t DTS6SR:1;
      uint64_t DTS6DR:1;
      uint64_t DTS6ER:1;
      uint64_t reservedSpace0:2;
      uint64_t DTS6DT:1;
      uint64_t DTS6TC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DTS6;

  uint8_t res375[9];

  uint32_t DSA7;
  uint8_t res376[12];

  uint32_t DDA7;
  uint8_t res377[10];

  uint16_t DTC7;
  uint8_t res378[4];

  uint16_t DTCT7;
  union
  {
    uint8_t R;
    struct
    {
      uint64_t DTS7DTE:1;
      uint64_t DTS7SR:1;
      uint64_t DTS7DR:1;
      uint64_t DTS7ER:1;
      uint64_t reservedSpace0:2;
      uint64_t DTS7DT:1;
      uint64_t DTS7TC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DTS7;

  uint8_t res379[137];

  uint32_t DSA8;
  uint8_t res380[12];

  uint32_t DDA8;
  uint8_t res381[10];

  uint16_t DTC8;
  uint8_t res382[4];

  uint16_t DTCT8;
  union
  {
    uint8_t R;
    struct
    {
      uint64_t DTS8DTE:1;
      uint64_t DTS8SR:1;
      uint64_t DTS8DR:1;
      uint64_t DTS8ER:1;
      uint64_t reservedSpace0:2;
      uint64_t DTS8DT:1;
      uint64_t DTS8TC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DTS8;

  uint8_t res383[9];

  uint32_t DSA9;
  uint8_t res384[12];

  uint32_t DDA9;
  uint8_t res385[10];

  uint16_t DTC9;
  uint8_t res386[4];

  uint16_t DTCT9;
  union
  {
    uint8_t R;
    struct
    {
      uint64_t DTS9DTE:1;
      uint64_t DTS9SR:1;
      uint64_t DTS9DR:1;
      uint64_t DTS9ER:1;
      uint64_t reservedSpace0:2;
      uint64_t DTS9DT:1;
      uint64_t DTS9TC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DTS9;

  uint8_t res387[9];

  uint32_t DSA10;
  uint8_t res388[12];

  uint32_t DDA10;
  uint8_t res389[10];

  uint16_t DTC10;
  uint8_t res390[4];

  uint16_t DTCT10;
  union
  {
    uint8_t R;
    struct
    {
      uint64_t DTS10DTE:1;
      uint64_t DTS10SR:1;
      uint64_t DTS10DR:1;
      uint64_t DTS10ER:1;
      uint64_t reservedSpace0:2;
      uint64_t DTS10DT:1;
      uint64_t DTS10TC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DTS10;

  uint8_t res391[9];

  uint32_t DSA11;
  uint8_t res392[12];

  uint32_t DDA11;
  uint8_t res393[10];

  uint16_t DTC11;
  uint8_t res394[4];

  uint16_t DTCT11;
  union
  {
    uint8_t R;
    struct
    {
      uint64_t DTS11DTE:1;
      uint64_t DTS11SR:1;
      uint64_t DTS11DR:1;
      uint64_t DTS11ER:1;
      uint64_t reservedSpace0:2;
      uint64_t DTS11DT:1;
      uint64_t DTS11TC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DTS11;

  uint8_t res395[9];

  uint32_t DSA12;
  uint8_t res396[12];

  uint32_t DDA12;
  uint8_t res397[10];

  uint16_t DTC12;
  uint8_t res398[4];

  uint16_t DTCT12;
  union
  {
    uint8_t R;
    struct
    {
      uint64_t DTS12DTE:1;
      uint64_t DTS12SR:1;
      uint64_t DTS12DR:1;
      uint64_t DTS12ER:1;
      uint64_t reservedSpace0:2;
      uint64_t DTS12DT:1;
      uint64_t DTS12TC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DTS12;

  uint8_t res399[9];

  uint32_t DSA13;
  uint8_t res400[12];

  uint32_t DDA13;
  uint8_t res401[10];

  uint16_t DTC13;
  uint8_t res402[4];

  uint16_t DTCT13;
  union
  {
    uint8_t R;
    struct
    {
      uint64_t DTS13DTE:1;
      uint64_t DTS13SR:1;
      uint64_t DTS13DR:1;
      uint64_t DTS13ER:1;
      uint64_t reservedSpace0:2;
      uint64_t DTS13DT:1;
      uint64_t DTS13TC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DTS13;

  uint8_t res403[9];

  uint32_t DSA14;
  uint8_t res404[12];

  uint32_t DDA14;
  uint8_t res405[10];

  uint16_t DTC14;
  uint8_t res406[4];

  uint16_t DTCT14;
  union
  {
    uint8_t R;
    struct
    {
      uint64_t DTS14DTE:1;
      uint64_t DTS14SR:1;
      uint64_t DTS14DR:1;
      uint64_t DTS14ER:1;
      uint64_t reservedSpace0:2;
      uint64_t DTS14DT:1;
      uint64_t DTS14TC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DTS14;

  uint8_t res407[9];

  uint32_t DSA15;
  uint8_t res408[12];

  uint32_t DDA15;
  uint8_t res409[10];

  uint16_t DTC15;
  uint8_t res410[4];

  uint16_t DTCT15;
  union
  {
    uint8_t R;
    struct
    {
      uint64_t DTS15DTE:1;
      uint64_t DTS15SR:1;
      uint64_t DTS15DR:1;
      uint64_t DTS15ER:1;
      uint64_t reservedSpace0:2;
      uint64_t DTS15DT:1;
      uint64_t DTS15TC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DTS15;

  uint8_t res411[1141];

  uint16_t DTFR0;
  uint16_t DTFR1;
  uint16_t DTFR2;
  uint16_t DTFR3;
  uint16_t DTFR4;
  uint16_t DTFR5;
  uint16_t DTFR6;
  uint16_t DTFR7;
  uint16_t DTFR8;
  uint16_t DTFR9;
  uint16_t DTFR10;
  uint16_t DTFR11;
  uint16_t DTFR12;
  uint16_t DTFR13;
  uint16_t DTFR14;
  uint16_t DTFR15;
  uint8_t res412[32];

  uint16_t DRQCLR;
  uint8_t res413[2];

  uint16_t DRQSTR;
  uint8_t res414[186];

  uint16_t SEG_CONT;
  uint16_t SEG_FLAG;
  uint8_t res415[1020];

  uint16_t ICCSIH2IC_1;
  uint16_t ICCSIH3IC_1;
  uint16_t ICTAUD0I4;
  uint16_t ICTAUD0I6;
  uint16_t ICTAUD0I8;
  uint16_t ICCSIH3IR_1;
  uint16_t ICCSIH3IRE_1;
  uint16_t ICCSIH3IJC_1;
  uint16_t ICCSIH1IC_1;
  uint16_t ICCSIH1IR_1;
  uint16_t ICADCA0I0;
  uint16_t ICADCA0I1;
  uint16_t ICADCA0I2;
  uint16_t ICDCUTDI;
  uint16_t ICRCANGERR;
  uint16_t ICRCANGRECC;
  uint16_t ICRCAN0ERR;
  uint16_t ICRCAN0REC;
  uint16_t ICRCAN0TRX;
  uint16_t ICCSIG0IC;
  uint16_t ICCSIG0IR;
  uint16_t ICCSIH0IC;
  uint16_t ICCSIH0IR;
  uint16_t ICCSIH0IRE;
  uint16_t ICCSIH0IJC;
  uint16_t ICRLIN30;
  uint16_t ICRLIN30UR0;
  uint16_t ICRLIN30UR1;
  uint16_t ICRLIN30UR2;
  uint16_t ICCSIH2IR_1;
  uint16_t ICCSIH2IRE_1;
  uint16_t ICCSIH2IJC_1;
  uint8_t res416[56];

  uint16_t FNC;
  uint16_t FIC;
  uint8_t res417[116];

  uint32_t IMR0;
  uint8_t res418[3916];

  uint16_t ICWDTA0;
  uint16_t ICWDTA1;
  uint16_t ICP3;
  uint16_t ICP4;
  uint16_t ICP5;
  uint16_t ICP10;
  uint16_t ICP11;
  uint16_t ICTAUD0I1;
  uint16_t ICTAUD0I3;
  uint16_t ICTAUD0I5;
  uint16_t ICTAUD0I7;
  uint16_t ICTAUD0I9;
  uint16_t ICTAUD0I11;
  uint16_t ICTAUD0I13;
  uint16_t ICTAUD0I15;
  uint16_t ICADCA0ERR;
  uint8_t res419[2];

  uint16_t ICCSIG0IRE;
  uint16_t ICRLIN20;
  uint16_t ICRLIN21;
  uint16_t ICDMA0;
  uint16_t ICDMA1;
  uint16_t ICDMA2;
  uint16_t ICDMA3;
  uint16_t ICDMA4;
  uint16_t ICDMA5;
  uint16_t ICDMA6;
  uint16_t ICDMA7;
  uint16_t ICDMA8;
  uint16_t ICDMA9;
  uint16_t ICDMA10;
  uint16_t ICDMA11;
  uint16_t ICDMA12;
  uint16_t ICDMA13;
  uint16_t ICDMA14;
  uint16_t ICDMA15;
  uint16_t ICRIIC0TI;
  uint16_t ICRIIC0TEI;
  uint16_t ICRIIC0RI;
  uint16_t ICRIIC0EE;
  uint16_t ICTAUJ0I0;
  uint16_t ICTAUJ0I1;
  uint16_t ICTAUJ0I2;
  uint16_t ICTAUJ0I3;
  uint16_t ICOSTM0;
  uint16_t ICENCA0IOV;
  uint16_t ICENCA0IUD;
  uint16_t ICENCA0I0;
  uint16_t ICENCA0I1;
  uint16_t ICENCA0IEC;
  uint16_t ICKR0;
  uint16_t ICQFULL;
  uint16_t ICPWGA0;
  uint16_t ICPWGA1;
  uint16_t ICPWGA2;
  uint16_t ICPWGA3;
  uint16_t ICPWGA8;
  uint16_t ICPWGA9;
  uint16_t ICPWGA10;
  uint16_t ICPWGA11;
  uint16_t ICPWGA12;
  uint16_t ICPWGA13;
  uint16_t ICPWGA14;
  uint16_t ICPWGA15;
  uint8_t res420[12];

  uint16_t ICFLERR;
  uint16_t ICFLENDNM;
  uint16_t ICCWEND;
  uint16_t ICRCAN1ERR;
  uint16_t ICRCAN1REC;
  uint16_t ICRCAN1TRX;
  uint16_t ICCSIH1IC;
  uint16_t ICCSIH1IR;
  uint16_t ICCSIG0IC_2;
  uint16_t ICCSIG0IR_2;
  uint16_t ICRLIN31;
  uint16_t ICRLIN31UR0;
  uint16_t ICRLIN31UR1;
  uint16_t ICRLIN31UR2;
  uint16_t ICPWGA20;
  uint16_t ICPWGA21;
  uint16_t ICPWGA22;
  uint16_t ICPWGA23;
  uint16_t ICP6;
  uint16_t ICP7;
  uint16_t ICP8;
  uint16_t ICP12;
  uint16_t ICCSIH2IC;
  uint16_t ICCSIH2IR;
  uint16_t ICCSIH2IRE;
  uint16_t ICCSIH2IJC;
  uint8_t res421[12];

  uint16_t ICTAUB0I0;
  uint16_t ICTAUB0I1;
  uint16_t ICTAUB0I2;
  uint16_t ICPWGA16;
  uint16_t ICTAUB0I4;
  uint16_t ICPWGA17;
  uint16_t ICTAUB0I6;
  uint16_t ICPWGA18;
  uint16_t ICTAUB0I8;
  uint16_t ICPWGA19;
  uint16_t ICTAUB0I10;
  uint16_t ICPWGA26;
  uint16_t ICTAUB0I12;
  uint16_t ICPWGA30;
  uint16_t ICTAUB0I14;
  uint16_t ICPWGA31;
  uint16_t ICCSIH3IC;
  uint16_t ICCSIH3IR;
  uint16_t ICCSIH3IRE;
  uint16_t ICCSIH3IJC;
  uint16_t ICRLIN22;
  uint16_t ICRLIN23;
  uint16_t ICRLIN32;
  uint16_t ICRLIN32UR0;
  uint16_t ICRLIN32UR1;
  uint16_t ICRLIN32UR2;
  uint16_t ICTAUJ1I0;
  uint16_t ICTAUJ1I1;
  uint16_t ICTAUJ1I2;
  uint16_t ICTAUJ1I3;
  uint8_t res422[24];

  uint16_t ICPWGA24;
  uint16_t ICPWGA25;
  uint16_t ICPWGA27;
  uint16_t ICPWGA28;
  uint16_t ICPWGA29;
  uint16_t ICPWGA32;
  uint16_t ICPWGA33;
  uint16_t ICPWGA34;
  uint16_t ICPWGA35;
  uint16_t ICPWGA36;
  uint16_t ICPWGA37;
  uint16_t ICPWGA38;
  uint16_t ICPWGA39;
  uint16_t ICPWGA40;
  uint16_t ICPWGA41;
  uint16_t ICPWGA42;
  uint16_t ICPWGA43;
  uint16_t ICPWGA44;
  uint16_t ICPWGA45;
  uint16_t ICPWGA46;
  uint16_t ICPWGA47;
  uint16_t ICP9;
  uint16_t ICP13;
  uint16_t ICP14;
  uint16_t ICP15;
  uint16_t ICRTCA01S;
  uint16_t ICRTCA0AL;
  uint16_t ICRTCA0R;
  uint16_t ICADCA1ERR;
  uint16_t ICADCA1I0;
  uint16_t ICADCA1I1;
  uint16_t ICADCA1I2;
  uint8_t res423[2];

  uint16_t ICRCAN2ERR;
  uint16_t ICRCAN2REC;
  uint16_t ICRCAN2TRX;
  uint16_t ICRCAN3ERR;
  uint16_t ICRCAN3REC;
  uint16_t ICRCAN3TRX;
  uint16_t ICCSIG1IC;
  uint16_t ICCSIG1IR;
  uint16_t ICCSIG1IRE;
  uint16_t ICRLIN24;
  uint16_t ICRLIN25;
  uint16_t ICRLIN33;
  uint16_t ICRLIN33UR0;
  uint16_t ICRLIN33UR1;
  uint16_t ICRLIN33UR2;
  uint16_t ICRLIN34;
  uint16_t ICRLIN34UR0;
  uint16_t ICRLIN34UR1;
  uint16_t ICRLIN34UR2;
  uint16_t ICRLIN35;
  uint16_t ICRLIN35UR0;
  uint16_t ICRLIN35UR1;
  uint16_t ICRLIN35UR2;
  uint16_t ICPWGA48;
  uint16_t ICPWGA49;
  uint16_t ICPWGA50;
  uint16_t ICPWGA51;
  uint16_t ICPWGA52;
  uint16_t ICPWGA53;
  uint16_t ICPWGA54;
  uint16_t ICPWGA55;
  uint16_t ICPWGA56;
  uint16_t ICPWGA57;
  uint16_t ICPWGA58;
  uint16_t ICPWGA59;
  uint16_t ICPWGA60;
  uint16_t ICPWGA61;
  uint16_t ICPWGA62;
  uint16_t ICPWGA63;
  uint16_t ICTAUB1I0;
  uint16_t ICTAUB1I1;
  uint16_t ICTAUB1I2;
  uint16_t ICTAUB1I3;
  uint16_t ICTAUB1I4;
  uint16_t ICTAUB1I5;
  uint16_t ICTAUB1I6;
  uint16_t ICTAUB1I7;
  uint16_t ICTAUB1I8;
  uint16_t ICTAUB1I9;
  uint16_t ICTAUB1I10;
  uint16_t ICTAUB1I11;
  uint16_t ICTAUB1I12;
  uint16_t ICTAUB1I13;
  uint16_t ICTAUB1I14;
  uint16_t ICTAUB1I15;
  uint16_t ICRCAN4ERR;
  uint16_t ICRCAN4REC;
  uint16_t ICRCAN4TRX;
  uint16_t ICRLIN26;
  uint16_t ICRLIN27;
  uint16_t ICPWGA64;
  uint16_t ICPWGA65;
  uint16_t ICPWGA66;
  uint16_t ICPWGA67;
  uint16_t ICPWGA68;
  uint16_t ICPWGA69;
  uint16_t ICPWGA70;
  uint16_t ICPWGA71;
  uint16_t ICRLIN28;
  uint16_t ICRLIN29;
  uint16_t ICRCAN5ERR;
  uint16_t ICRCAN5REC;
  uint16_t ICRCAN5TRX;
  uint8_t res424[464];

  uint32_t IMR1;
  uint32_t IMR2;
  uint32_t IMR3;
  uint32_t IMR4;
  uint32_t IMR5;
  uint32_t IMR6;
  uint32_t IMR7;
  uint32_t IMR8;
};

#define _Others (*(volatile struct _Others_tag *) 0xffa00000)

struct SELF_tag
{
  uint32_t ID0;
  uint32_t ID1;
  uint32_t ID2;
  uint32_t ID3;
  uint32_t IDST;
};

#define SELF (*(volatile struct SELF_tag *) 0xffa08000)

struct FACI_tag
{
  uint8_t FPMON;
  uint8_t res0[15];

  uint8_t FASTAT;
  uint8_t res1[3];

  uint8_t FAEINT;
  uint8_t res2[11];

  uint16_t FAREASELC;
  uint8_t res3[14];

  uint32_t FSADDR;
  uint32_t FEADDR;
  uint8_t res4[28];

  uint16_t FCURAME;
  uint8_t res5[42];

  uint32_t FSTATR;
  uint16_t FENTRYR;
  uint8_t res6[2];

  uint16_t FPROTR;
  uint8_t res7[2];

  uint16_t FSUINITR;
  uint8_t res8[2];

  uint8_t FLKSTAT;
  uint8_t res9[3];

  uint32_t FRFSTEADR;
  uint8_t FRTSTAT;
  uint8_t res10[3];

  uint8_t FRTEINT;
  uint8_t res11[3];

  uint16_t FCMDR;
  uint8_t res12[14];

  uint16_t FRAMECCR;
  uint8_t res13[14];

  uint16_t FPESTAT;
  uint8_t res14[14];

  uint8_t FBCCNT;
  uint8_t res15[3];

  uint8_t FBCSTAT;
  uint8_t res16[3];

  uint32_t FPSADDR;
  uint8_t res17[4];

  uint16_t FCPSR;
  uint8_t res18[2];

  uint16_t FPCKAR;
  uint8_t res19[10];

  uint8_t FLEMU;
  uint8_t res20[3];

  uint32_t FLEAD;
  uint8_t res21[8];

  uint16_t FECCEMON;
  uint8_t res22[2];

  uint16_t FECCTMD;
  uint8_t res23[2];

  uint16_t FDMYECC;
};

#define FACI (*(volatile struct FACI_tag *) 0xffa10000)

struct PFSS_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t BWCBUFCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) BWCBUFEN;

};

#define PFSS (*(volatile struct PFSS_tag *) 0xffbc0700)

struct CCIB_tag
{
  uint8_t FCUFAREA;
};

#define CCIB (*(volatile struct CCIB_tag *) 0xffc59008)

struct RIIC0_tag
{
  uint32_t CR1;
  uint32_t CR2;
  uint32_t MR1;
  uint32_t MR2;
  uint32_t MR3;
  uint32_t FER;
  uint32_t SER;
  uint32_t IER;
  uint32_t SR1;
  uint32_t SR2;
  uint32_t SAR0;
  uint32_t SAR1;
  uint32_t SAR2;
  uint32_t BRL;
  uint32_t BRH;
  uint32_t DRT;
  uint32_t DRR;
};

#define RIIC0 (*(volatile struct RIIC0_tag *) 0xffca0000)

struct SCDS_tag
{
  uint32_t PRDNAME1;
  uint32_t PRDNAME2;
  uint32_t PRDNAME3;
};

#define SCDS (*(volatile struct SCDS_tag *) 0xffcd00d0)

struct RLN240_tag
{
  uint8_t GLWBR;
  uint8_t GLBRP0;
  uint8_t GLBRP1;
  uint8_t GLSTC;
};

#define RLN240 (*(volatile struct RLN240_tag *) 0xffce0001)

struct RLN2400_tag
{
  uint8_t L0MD;
  uint8_t L0BFC;
  uint8_t L0SC;
  uint8_t L0WUP;
  uint8_t L0IE;
  uint8_t L0EDE;
  uint8_t L0CUC;
  uint8_t res0[1];

  uint8_t L0TRC;
  uint8_t L0MST;
  uint8_t L0ST;
  uint8_t L0EST;
  uint8_t L0DFC;
  uint8_t L0IDB;
  uint8_t L0CBR;
  uint8_t res1[1];

  uint8_t L0DBR1;
  uint8_t L0DBR2;
  uint8_t L0DBR3;
  uint8_t L0DBR4;
  uint8_t L0DBR5;
  uint8_t L0DBR6;
  uint8_t L0DBR7;
  uint8_t L0DBR8;
};

#define RLN2400 (*(volatile struct RLN2400_tag *) 0xffce0008)

struct RLN2401_tag
{
  uint8_t L1MD;
  uint8_t L1BFC;
  uint8_t L1SC;
  uint8_t L1WUP;
  uint8_t L1IE;
  uint8_t L1EDE;
  uint8_t L1CUC;
  uint8_t res0[1];

  uint8_t L1TRC;
  uint8_t L1MST;
  uint8_t L1ST;
  uint8_t L1EST;
  uint8_t L1DFC;
  uint8_t L1IDB;
  uint8_t L1CBR;
  uint8_t res1[1];

  uint8_t L1DBR1;
  uint8_t L1DBR2;
  uint8_t L1DBR3;
  uint8_t L1DBR4;
  uint8_t L1DBR5;
  uint8_t L1DBR6;
  uint8_t L1DBR7;
  uint8_t L1DBR8;
};

#define RLN2401 (*(volatile struct RLN2401_tag *) 0xffce0028)

struct RLN2402_tag
{
  uint8_t L2MD;
  uint8_t L2BFC;
  uint8_t L2SC;
  uint8_t L2WUP;
  uint8_t L2IE;
  uint8_t L2EDE;
  uint8_t L2CUC;
  uint8_t res0[1];

  uint8_t L2TRC;
  uint8_t L2MST;
  uint8_t L2ST;
  uint8_t L2EST;
  uint8_t L2DFC;
  uint8_t L2IDB;
  uint8_t L2CBR;
  uint8_t res1[1];

  uint8_t L2DBR1;
  uint8_t L2DBR2;
  uint8_t L2DBR3;
  uint8_t L2DBR4;
  uint8_t L2DBR5;
  uint8_t L2DBR6;
  uint8_t L2DBR7;
  uint8_t L2DBR8;
};

#define RLN2402 (*(volatile struct RLN2402_tag *) 0xffce0048)

struct RLN2403_tag
{
  uint8_t L3MD;
  uint8_t L3BFC;
  uint8_t L3SC;
  uint8_t L3WUP;
  uint8_t L3IE;
  uint8_t L3EDE;
  uint8_t L3CUC;
  uint8_t res0[1];

  uint8_t L3TRC;
  uint8_t L3MST;
  uint8_t L3ST;
  uint8_t L3EST;
  uint8_t L3DFC;
  uint8_t L3IDB;
  uint8_t L3CBR;
  uint8_t res1[1];

  uint8_t L3DBR1;
  uint8_t L3DBR2;
  uint8_t L3DBR3;
  uint8_t L3DBR4;
  uint8_t L3DBR5;
  uint8_t L3DBR6;
  uint8_t L3DBR7;
  uint8_t L3DBR8;
};

#define RLN2403 (*(volatile struct RLN2403_tag *) 0xffce0068)

struct RLN241_tag
{
  uint8_t GLWBR;
  uint8_t GLBRP0;
  uint8_t GLBRP1;
  uint8_t GLSTC;
};

#define RLN241 (*(volatile struct RLN241_tag *) 0xffce0081)

struct RLN2414_tag
{
  uint8_t L0MD;
  uint8_t L0BFC;
  uint8_t L0SC;
  uint8_t L0WUP;
  uint8_t L0IE;
  uint8_t L0EDE;
  uint8_t L0CUC;
  uint8_t res0[1];

  uint8_t L0TRC;
  uint8_t L0MST;
  uint8_t L0ST;
  uint8_t L0EST;
  uint8_t L0DFC;
  uint8_t L0IDB;
  uint8_t L0CBR;
  uint8_t res1[1];

  uint8_t L0DBR1;
  uint8_t L0DBR2;
  uint8_t L0DBR3;
  uint8_t L0DBR4;
  uint8_t L0DBR5;
  uint8_t L0DBR6;
  uint8_t L0DBR7;
  uint8_t L0DBR8;
};

#define RLN2414 (*(volatile struct RLN2414_tag *) 0xffce0088)

struct RLN2415_tag
{
  uint8_t L1MD;
  uint8_t L1BFC;
  uint8_t L1SC;
  uint8_t L1WUP;
  uint8_t L1IE;
  uint8_t L1EDE;
  uint8_t L1CUC;
  uint8_t res0[1];

  uint8_t L1TRC;
  uint8_t L1MST;
  uint8_t L1ST;
  uint8_t L1EST;
  uint8_t L1DFC;
  uint8_t L1IDB;
  uint8_t L1CBR;
  uint8_t res1[1];

  uint8_t L1DBR1;
  uint8_t L1DBR2;
  uint8_t L1DBR3;
  uint8_t L1DBR4;
  uint8_t L1DBR5;
  uint8_t L1DBR6;
  uint8_t L1DBR7;
  uint8_t L1DBR8;
};

#define RLN2415 (*(volatile struct RLN2415_tag *) 0xffce00a8)

struct RLN2416_tag
{
  uint8_t L2MD;
  uint8_t L2BFC;
  uint8_t L2SC;
  uint8_t L2WUP;
  uint8_t L2IE;
  uint8_t L2EDE;
  uint8_t L2CUC;
  uint8_t res0[1];

  uint8_t L2TRC;
  uint8_t L2MST;
  uint8_t L2ST;
  uint8_t L2EST;
  uint8_t L2DFC;
  uint8_t L2IDB;
  uint8_t L2CBR;
  uint8_t res1[1];

  uint8_t L2DBR1;
  uint8_t L2DBR2;
  uint8_t L2DBR3;
  uint8_t L2DBR4;
  uint8_t L2DBR5;
  uint8_t L2DBR6;
  uint8_t L2DBR7;
  uint8_t L2DBR8;
};

#define RLN2416 (*(volatile struct RLN2416_tag *) 0xffce00c8)

struct RLN2417_tag
{
  uint8_t L3MD;
  uint8_t L3BFC;
  uint8_t L3SC;
  uint8_t L3WUP;
  uint8_t L3IE;
  uint8_t L3EDE;
  uint8_t L3CUC;
  uint8_t res0[1];

  uint8_t L3TRC;
  uint8_t L3MST;
  uint8_t L3ST;
  uint8_t L3EST;
  uint8_t L3DFC;
  uint8_t L3IDB;
  uint8_t L3CBR;
  uint8_t res1[1];

  uint8_t L3DBR1;
  uint8_t L3DBR2;
  uint8_t L3DBR3;
  uint8_t L3DBR4;
  uint8_t L3DBR5;
  uint8_t L3DBR6;
  uint8_t L3DBR7;
  uint8_t L3DBR8;
};

#define RLN2417 (*(volatile struct RLN2417_tag *) 0xffce00e8)

struct RLN210_tag
{
  uint8_t GLWBR;
  uint8_t GLBRP0;
  uint8_t GLBRP1;
  uint8_t GLSTC;
};

#define RLN210 (*(volatile struct RLN210_tag *) 0xffce0101)

struct RLN2108_tag
{
  uint8_t L0MD;
  uint8_t L0BFC;
  uint8_t L0SC;
  uint8_t L0WUP;
  uint8_t L0IE;
  uint8_t L0EDE;
  uint8_t L0CUC;
  uint8_t res0[1];

  uint8_t L0TRC;
  uint8_t L0MST;
  uint8_t L0ST;
  uint8_t L0EST;
  uint8_t L0DFC;
  uint8_t L0IDB;
  uint8_t L0CBR;
  uint8_t res1[1];

  uint8_t L0DBR1;
  uint8_t L0DBR2;
  uint8_t L0DBR3;
  uint8_t L0DBR4;
  uint8_t L0DBR5;
  uint8_t L0DBR6;
  uint8_t L0DBR7;
  uint8_t L0DBR8;
};

#define RLN2108 (*(volatile struct RLN2108_tag *) 0xffce0108)

struct RLN211_tag
{
  uint8_t GLWBR;
  uint8_t GLBRP0;
  uint8_t GLBRP1;
  uint8_t GLSTC;
};

#define RLN211 (*(volatile struct RLN211_tag *) 0xffce0121)

struct RLN2119_tag
{
  uint8_t L0MD;
  uint8_t L0BFC;
  uint8_t L0SC;
  uint8_t L0WUP;
  uint8_t L0IE;
  uint8_t L0EDE;
  uint8_t L0CUC;
  uint8_t res0[1];

  uint8_t L0TRC;
  uint8_t L0MST;
  uint8_t L0ST;
  uint8_t L0EST;
  uint8_t L0DFC;
  uint8_t L0IDB;
  uint8_t L0CBR;
  uint8_t res1[1];

  uint8_t L0DBR1;
  uint8_t L0DBR2;
  uint8_t L0DBR3;
  uint8_t L0DBR4;
  uint8_t L0DBR5;
  uint8_t L0DBR6;
  uint8_t L0DBR7;
  uint8_t L0DBR8;
};

#define RLN2119 (*(volatile struct RLN2119_tag *) 0xffce0128)

struct RLN30_tag
{
  uint8_t LWBR;
  uint16_t LBRP01;
  uint8_t LSTC;
  uint8_t res0[3];

  uint8_t LMD;
  uint8_t LBFC;
  uint8_t LSC;
  uint8_t LWUP;
  uint8_t LIE;
  uint8_t LEDE;
  uint8_t LCUC;
  uint8_t res1[1];

  uint8_t LTRC;
  uint8_t LMST;
  uint8_t LST;
  uint8_t LEST;
  uint8_t LDFC;
  uint8_t LIDB;
  uint8_t LCBR;
  uint8_t LUDB0;
  uint8_t LDBR1;
  uint8_t LDBR2;
  uint8_t LDBR3;
  uint8_t LDBR4;
  uint8_t LDBR5;
  uint8_t LDBR6;
  uint8_t LDBR7;
  uint8_t LDBR8;
  uint8_t LUOER;
  uint8_t LUOR1;
  uint8_t res2[2];

  uint16_t LUTDR;
  uint16_t LURDR;
  uint16_t LUWTDR;
};

#define RLN30 (*(volatile struct RLN30_tag *) 0xffcf0001)

struct RLN31_tag
{
  uint8_t LWBR;
  uint16_t LBRP01;
  uint8_t LSTC;
  uint8_t res0[3];

  uint8_t LMD;
  uint8_t LBFC;
  uint8_t LSC;
  uint8_t LWUP;
  uint8_t LIE;
  uint8_t LEDE;
  uint8_t LCUC;
  uint8_t res1[1];

  uint8_t LTRC;
  uint8_t LMST;
  uint8_t LST;
  uint8_t LEST;
  uint8_t LDFC;
  uint8_t LIDB;
  uint8_t LCBR;
  uint8_t LUDB0;
  uint8_t LDBR1;
  uint8_t LDBR2;
  uint8_t LDBR3;
  uint8_t LDBR4;
  uint8_t LDBR5;
  uint8_t LDBR6;
  uint8_t LDBR7;
  uint8_t LDBR8;
  uint8_t LUOER;
  uint8_t LUOR1;
  uint8_t res2[2];

  uint16_t LUTDR;
  uint16_t LURDR;
  uint16_t LUWTDR;
};

#define RLN31 (*(volatile struct RLN31_tag *) 0xffcf0041)

struct RLN32_tag
{
  uint8_t LWBR;
  uint16_t LBRP01;
  uint8_t LSTC;
  uint8_t res0[3];

  uint8_t LMD;
  uint8_t LBFC;
  uint8_t LSC;
  uint8_t LWUP;
  uint8_t LIE;
  uint8_t LEDE;
  uint8_t LCUC;
  uint8_t res1[1];

  uint8_t LTRC;
  uint8_t LMST;
  uint8_t LST;
  uint8_t LEST;
  uint8_t LDFC;
  uint8_t LIDB;
  uint8_t LCBR;
  uint8_t LUDB0;
  uint8_t LDBR1;
  uint8_t LDBR2;
  uint8_t LDBR3;
  uint8_t LDBR4;
  uint8_t LDBR5;
  uint8_t LDBR6;
  uint8_t LDBR7;
  uint8_t LDBR8;
  uint8_t LUOER;
  uint8_t LUOR1;
  uint8_t res2[2];

  uint16_t LUTDR;
  uint16_t LURDR;
  uint16_t LUWTDR;
};

#define RLN32 (*(volatile struct RLN32_tag *) 0xffcf0081)

struct RLN33_tag
{
  uint8_t LWBR;
  uint16_t LBRP01;
  uint8_t LSTC;
  uint8_t res0[3];

  uint8_t LMD;
  uint8_t LBFC;
  uint8_t LSC;
  uint8_t LWUP;
  uint8_t LIE;
  uint8_t LEDE;
  uint8_t LCUC;
  uint8_t res1[1];

  uint8_t LTRC;
  uint8_t LMST;
  uint8_t LST;
  uint8_t LEST;
  uint8_t LDFC;
  uint8_t LIDB;
  uint8_t LCBR;
  uint8_t LUDB0;
  uint8_t LDBR1;
  uint8_t LDBR2;
  uint8_t LDBR3;
  uint8_t LDBR4;
  uint8_t LDBR5;
  uint8_t LDBR6;
  uint8_t LDBR7;
  uint8_t LDBR8;
  uint8_t LUOER;
  uint8_t LUOR1;
  uint8_t res2[2];

  uint16_t LUTDR;
  uint16_t LURDR;
  uint16_t LUWTDR;
};

#define RLN33 (*(volatile struct RLN33_tag *) 0xffcf00c1)

struct RLN34_tag
{
  uint8_t LWBR;
  uint16_t LBRP01;
  uint8_t LSTC;
  uint8_t res0[3];

  uint8_t LMD;
  uint8_t LBFC;
  uint8_t LSC;
  uint8_t LWUP;
  uint8_t LIE;
  uint8_t LEDE;
  uint8_t LCUC;
  uint8_t res1[1];

  uint8_t LTRC;
  uint8_t LMST;
  uint8_t LST;
  uint8_t LEST;
  uint8_t LDFC;
  uint8_t LIDB;
  uint8_t LCBR;
  uint8_t LUDB0;
  uint8_t LDBR1;
  uint8_t LDBR2;
  uint8_t LDBR3;
  uint8_t LDBR4;
  uint8_t LDBR5;
  uint8_t LDBR6;
  uint8_t LDBR7;
  uint8_t LDBR8;
  uint8_t LUOER;
  uint8_t LUOR1;
  uint8_t res2[2];

  uint16_t LUTDR;
  uint16_t LURDR;
  uint16_t LUWTDR;
};

#define RLN34 (*(volatile struct RLN34_tag *) 0xffcf0101)

struct RLN35_tag
{
  uint8_t LWBR;
  uint16_t LBRP01;
  uint8_t LSTC;
  uint8_t res0[3];

  uint8_t LMD;
  uint8_t LBFC;
  uint8_t LSC;
  uint8_t LWUP;
  uint8_t LIE;
  uint8_t LEDE;
  uint8_t LCUC;
  uint8_t res1[1];

  uint8_t LTRC;
  uint8_t LMST;
  uint8_t LST;
  uint8_t LEST;
  uint8_t LDFC;
  uint8_t LIDB;
  uint8_t LCBR;
  uint8_t LUDB0;
  uint8_t LDBR1;
  uint8_t LDBR2;
  uint8_t LDBR3;
  uint8_t LDBR4;
  uint8_t LDBR5;
  uint8_t LDBR6;
  uint8_t LDBR7;
  uint8_t LDBR8;
  uint8_t LUOER;
  uint8_t LUOR1;
  uint8_t res2[2];

  uint16_t LUTDR;
  uint16_t LURDR;
  uint16_t LUWTDR;
};

#define RLN35 (*(volatile struct RLN35_tag *) 0xffcf0141)

struct RSCAN0_tag
{
  uint32_t C0CFG;
  uint32_t C0CTR;
  uint32_t C0STS;
  uint32_t C0ERFL;
  uint32_t C1CFG;
  uint32_t C1CTR;
  uint32_t C1STS;
  uint32_t C1ERFL;
  uint32_t C2CFG;
  uint32_t C2CTR;
  uint32_t C2STS;
  uint32_t C2ERFL;
  uint32_t C3CFG;
  uint32_t C3CTR;
  uint32_t C3STS;
  uint32_t C3ERFL;
  uint32_t C4CFG;
  uint32_t C4CTR;
  uint32_t C4STS;
  uint32_t C4ERFL;
  uint32_t C5CFG;
  uint32_t C5CTR;
  uint32_t C5STS;
  uint32_t C5ERFL;
  uint8_t res0[36];

  uint32_t GCFG;
  uint32_t GCTR;
  uint32_t GSTS;
  uint32_t GERFL;
  uint32_t GTSC;
  uint32_t GAFLECTR;
  uint32_t GAFLCFG0;
  uint32_t GAFLCFG1;
  uint32_t RMNB;
  uint32_t RMND0;
  uint32_t RMND1;
  uint32_t RMND2;
  uint8_t res1[4];

  uint32_t RFCC0;
  uint32_t RFCC1;
  uint32_t RFCC2;
  uint32_t RFCC3;
  uint32_t RFCC4;
  uint32_t RFCC5;
  uint32_t RFCC6;
  uint32_t RFCC7;
  uint32_t RFSTS0;
  uint32_t RFSTS1;
  uint32_t RFSTS2;
  uint32_t RFSTS3;
  uint32_t RFSTS4;
  uint32_t RFSTS5;
  uint32_t RFSTS6;
  uint32_t RFSTS7;
  uint32_t RFPCTR0;
  uint32_t RFPCTR1;
  uint32_t RFPCTR2;
  uint32_t RFPCTR3;
  uint32_t RFPCTR4;
  uint32_t RFPCTR5;
  uint32_t RFPCTR6;
  uint32_t RFPCTR7;
  uint32_t CFCC0;
  uint32_t CFCC1;
  uint32_t CFCC2;
  uint32_t CFCC3;
  uint32_t CFCC4;
  uint32_t CFCC5;
  uint32_t CFCC6;
  uint32_t CFCC7;
  uint32_t CFCC8;
  uint32_t CFCC9;
  uint32_t CFCC10;
  uint32_t CFCC11;
  uint32_t CFCC12;
  uint32_t CFCC13;
  uint32_t CFCC14;
  uint32_t CFCC15;
  uint32_t CFCC16;
  uint32_t CFCC17;
  uint8_t res2[24];

  uint32_t CFSTS0;
  uint32_t CFSTS1;
  uint32_t CFSTS2;
  uint32_t CFSTS3;
  uint32_t CFSTS4;
  uint32_t CFSTS5;
  uint32_t CFSTS6;
  uint32_t CFSTS7;
  uint32_t CFSTS8;
  uint32_t CFSTS9;
  uint32_t CFSTS10;
  uint32_t CFSTS11;
  uint32_t CFSTS12;
  uint32_t CFSTS13;
  uint32_t CFSTS14;
  uint32_t CFSTS15;
  uint32_t CFSTS16;
  uint32_t CFSTS17;
  uint8_t res3[24];

  uint32_t CFPCTR0;
  uint32_t CFPCTR1;
  uint32_t CFPCTR2;
  uint32_t CFPCTR3;
  uint32_t CFPCTR4;
  uint32_t CFPCTR5;
  uint32_t CFPCTR6;
  uint32_t CFPCTR7;
  uint32_t CFPCTR8;
  uint32_t CFPCTR9;
  uint32_t CFPCTR10;
  uint32_t CFPCTR11;
  uint32_t CFPCTR12;
  uint32_t CFPCTR13;
  uint32_t CFPCTR14;
  uint32_t CFPCTR15;
  uint32_t CFPCTR16;
  uint32_t CFPCTR17;
  uint8_t res4[24];

  uint32_t FESTS;
  uint32_t FFSTS;
  uint32_t FMSTS;
  uint32_t RFISTS;
  uint32_t CFRISTS;
  uint32_t CFTISTS;
  uint8_t TMC0;
  uint8_t TMC1;
  uint8_t TMC2;
  uint8_t TMC3;
  uint8_t TMC4;
  uint8_t TMC5;
  uint8_t TMC6;
  uint8_t TMC7;
  uint8_t TMC8;
  uint8_t TMC9;
  uint8_t TMC10;
  uint8_t TMC11;
  uint8_t TMC12;
  uint8_t TMC13;
  uint8_t TMC14;
  uint8_t TMC15;
  uint8_t TMC16;
  uint8_t TMC17;
  uint8_t TMC18;
  uint8_t TMC19;
  uint8_t TMC20;
  uint8_t TMC21;
  uint8_t TMC22;
  uint8_t TMC23;
  uint8_t TMC24;
  uint8_t TMC25;
  uint8_t TMC26;
  uint8_t TMC27;
  uint8_t TMC28;
  uint8_t TMC29;
  uint8_t TMC30;
  uint8_t TMC31;
  uint8_t TMC32;
  uint8_t TMC33;
  uint8_t TMC34;
  uint8_t TMC35;
  uint8_t TMC36;
  uint8_t TMC37;
  uint8_t TMC38;
  uint8_t TMC39;
  uint8_t TMC40;
  uint8_t TMC41;
  uint8_t TMC42;
  uint8_t TMC43;
  uint8_t TMC44;
  uint8_t TMC45;
  uint8_t TMC46;
  uint8_t TMC47;
  uint8_t TMC48;
  uint8_t TMC49;
  uint8_t TMC50;
  uint8_t TMC51;
  uint8_t TMC52;
  uint8_t TMC53;
  uint8_t TMC54;
  uint8_t TMC55;
  uint8_t TMC56;
  uint8_t TMC57;
  uint8_t TMC58;
  uint8_t TMC59;
  uint8_t TMC60;
  uint8_t TMC61;
  uint8_t TMC62;
  uint8_t TMC63;
  uint8_t TMC64;
  uint8_t TMC65;
  uint8_t TMC66;
  uint8_t TMC67;
  uint8_t TMC68;
  uint8_t TMC69;
  uint8_t TMC70;
  uint8_t TMC71;
  uint8_t TMC72;
  uint8_t TMC73;
  uint8_t TMC74;
  uint8_t TMC75;
  uint8_t TMC76;
  uint8_t TMC77;
  uint8_t TMC78;
  uint8_t TMC79;
  uint8_t TMC80;
  uint8_t TMC81;
  uint8_t TMC82;
  uint8_t TMC83;
  uint8_t TMC84;
  uint8_t TMC85;
  uint8_t TMC86;
  uint8_t TMC87;
  uint8_t TMC88;
  uint8_t TMC89;
  uint8_t TMC90;
  uint8_t TMC91;
  uint8_t TMC92;
  uint8_t TMC93;
  uint8_t TMC94;
  uint8_t TMC95;
  uint8_t res5[32];

  uint8_t TMSTS0;
  uint8_t TMSTS1;
  uint8_t TMSTS2;
  uint8_t TMSTS3;
  uint8_t TMSTS4;
  uint8_t TMSTS5;
  uint8_t TMSTS6;
  uint8_t TMSTS7;
  uint8_t TMSTS8;
  uint8_t TMSTS9;
  uint8_t TMSTS10;
  uint8_t TMSTS11;
  uint8_t TMSTS12;
  uint8_t TMSTS13;
  uint8_t TMSTS14;
  uint8_t TMSTS15;
  uint8_t TMSTS16;
  uint8_t TMSTS17;
  uint8_t TMSTS18;
  uint8_t TMSTS19;
  uint8_t TMSTS20;
  uint8_t TMSTS21;
  uint8_t TMSTS22;
  uint8_t TMSTS23;
  uint8_t TMSTS24;
  uint8_t TMSTS25;
  uint8_t TMSTS26;
  uint8_t TMSTS27;
  uint8_t TMSTS28;
  uint8_t TMSTS29;
  uint8_t TMSTS30;
  uint8_t TMSTS31;
  uint8_t TMSTS32;
  uint8_t TMSTS33;
  uint8_t TMSTS34;
  uint8_t TMSTS35;
  uint8_t TMSTS36;
  uint8_t TMSTS37;
  uint8_t TMSTS38;
  uint8_t TMSTS39;
  uint8_t TMSTS40;
  uint8_t TMSTS41;
  uint8_t TMSTS42;
  uint8_t TMSTS43;
  uint8_t TMSTS44;
  uint8_t TMSTS45;
  uint8_t TMSTS46;
  uint8_t TMSTS47;
  uint8_t TMSTS48;
  uint8_t TMSTS49;
  uint8_t TMSTS50;
  uint8_t TMSTS51;
  uint8_t TMSTS52;
  uint8_t TMSTS53;
  uint8_t TMSTS54;
  uint8_t TMSTS55;
  uint8_t TMSTS56;
  uint8_t TMSTS57;
  uint8_t TMSTS58;
  uint8_t TMSTS59;
  uint8_t TMSTS60;
  uint8_t TMSTS61;
  uint8_t TMSTS62;
  uint8_t TMSTS63;
  uint8_t TMSTS64;
  uint8_t TMSTS65;
  uint8_t TMSTS66;
  uint8_t TMSTS67;
  uint8_t TMSTS68;
  uint8_t TMSTS69;
  uint8_t TMSTS70;
  uint8_t TMSTS71;
  uint8_t TMSTS72;
  uint8_t TMSTS73;
  uint8_t TMSTS74;
  uint8_t TMSTS75;
  uint8_t TMSTS76;
  uint8_t TMSTS77;
  uint8_t TMSTS78;
  uint8_t TMSTS79;
  uint8_t TMSTS80;
  uint8_t TMSTS81;
  uint8_t TMSTS82;
  uint8_t TMSTS83;
  uint8_t TMSTS84;
  uint8_t TMSTS85;
  uint8_t TMSTS86;
  uint8_t TMSTS87;
  uint8_t TMSTS88;
  uint8_t TMSTS89;
  uint8_t TMSTS90;
  uint8_t TMSTS91;
  uint8_t TMSTS92;
  uint8_t TMSTS93;
  uint8_t TMSTS94;
  uint8_t TMSTS95;
  uint8_t res6[32];

  uint32_t TMTRSTS0;
  uint32_t TMTRSTS1;
  uint32_t TMTRSTS2;
  uint8_t res7[4];

  uint32_t TMTARSTS0;
  uint32_t TMTARSTS1;
  uint32_t TMTARSTS2;
  uint8_t res8[4];

  uint32_t TMTCSTS0;
  uint32_t TMTCSTS1;
  uint32_t TMTCSTS2;
  uint8_t res9[4];

  uint32_t TMTASTS0;
  uint32_t TMTASTS1;
  uint32_t TMTASTS2;
  uint8_t res10[4];

  uint32_t TMIEC0;
  uint32_t TMIEC1;
  uint32_t TMIEC2;
  uint8_t res11[4];

  uint32_t TXQCC0;
  uint32_t TXQCC1;
  uint32_t TXQCC2;
  uint32_t TXQCC3;
  uint32_t TXQCC4;
  uint32_t TXQCC5;
  uint8_t res12[8];

  uint32_t TXQSTS0;
  uint32_t TXQSTS1;
  uint32_t TXQSTS2;
  uint32_t TXQSTS3;
  uint32_t TXQSTS4;
  uint32_t TXQSTS5;
  uint8_t res13[8];

  uint32_t TXQPCTR0;
  uint32_t TXQPCTR1;
  uint32_t TXQPCTR2;
  uint32_t TXQPCTR3;
  uint32_t TXQPCTR4;
  uint32_t TXQPCTR5;
  uint8_t res14[8];

  uint32_t THLCC0;
  uint32_t THLCC1;
  uint32_t THLCC2;
  uint32_t THLCC3;
  uint32_t THLCC4;
  uint32_t THLCC5;
  uint8_t res15[8];

  uint32_t THLSTS0;
  uint32_t THLSTS1;
  uint32_t THLSTS2;
  uint32_t THLSTS3;
  uint32_t THLSTS4;
  uint32_t THLSTS5;
  uint8_t res16[8];

  uint32_t THLPCTR0;
  uint32_t THLPCTR1;
  uint32_t THLPCTR2;
  uint32_t THLPCTR3;
  uint32_t THLPCTR4;
  uint32_t THLPCTR5;
  uint8_t res17[8];

  uint32_t GTINTSTS0;
  uint32_t GTINTSTS1;
  uint32_t GTSTCFG;
  uint32_t GTSTCTR;
  uint8_t res18[12];

  uint32_t GLOCKK;
  uint8_t res19[128];

  uint32_t GAFLID0;
  uint32_t GAFLM0;
  uint32_t GAFLP00;
  uint32_t GAFLP10;
  uint32_t GAFLID1;
  uint32_t GAFLM1;
  uint32_t GAFLP01;
  uint32_t GAFLP11;
  uint32_t GAFLID2;
  uint32_t GAFLM2;
  uint32_t GAFLP02;
  uint32_t GAFLP12;
  uint32_t GAFLID3;
  uint32_t GAFLM3;
  uint32_t GAFLP03;
  uint32_t GAFLP13;
  uint32_t GAFLID4;
  uint32_t GAFLM4;
  uint32_t GAFLP04;
  uint32_t GAFLP14;
  uint32_t GAFLID5;
  uint32_t GAFLM5;
  uint32_t GAFLP05;
  uint32_t GAFLP15;
  uint32_t GAFLID6;
  uint32_t GAFLM6;
  uint32_t GAFLP06;
  uint32_t GAFLP16;
  uint32_t GAFLID7;
  uint32_t GAFLM7;
  uint32_t GAFLP07;
  uint32_t GAFLP17;
  uint32_t GAFLID8;
  uint32_t GAFLM8;
  uint32_t GAFLP08;
  uint32_t GAFLP18;
  uint32_t GAFLID9;
  uint32_t GAFLM9;
  uint32_t GAFLP09;
  uint32_t GAFLP19;
  uint32_t GAFLID10;
  uint32_t GAFLM10;
  uint32_t GAFLP010;
  uint32_t GAFLP110;
  uint32_t GAFLID11;
  uint32_t GAFLM11;
  uint32_t GAFLP011;
  uint32_t GAFLP111;
  uint32_t GAFLID12;
  uint32_t GAFLM12;
  uint32_t GAFLP012;
  uint32_t GAFLP112;
  uint32_t GAFLID13;
  uint32_t GAFLM13;
  uint32_t GAFLP013;
  uint32_t GAFLP113;
  uint32_t GAFLID14;
  uint32_t GAFLM14;
  uint32_t GAFLP014;
  uint32_t GAFLP114;
  uint32_t GAFLID15;
  uint32_t GAFLM15;
  uint32_t GAFLP015;
  uint32_t GAFLP115;
  uint32_t RMID0;
  uint32_t RMPTR0;
  uint32_t RMDF00;
  uint32_t RMDF10;
  uint32_t RMID1;
  uint32_t RMPTR1;
  uint32_t RMDF01;
  uint32_t RMDF11;
  uint32_t RMID2;
  uint32_t RMPTR2;
  uint32_t RMDF02;
  uint32_t RMDF12;
  uint32_t RMID3;
  uint32_t RMPTR3;
  uint32_t RMDF03;
  uint32_t RMDF13;
  uint32_t RMID4;
  uint32_t RMPTR4;
  uint32_t RMDF04;
  uint32_t RMDF14;
  uint32_t RMID5;
  uint32_t RMPTR5;
  uint32_t RMDF05;
  uint32_t RMDF15;
  uint32_t RMID6;
  uint32_t RMPTR6;
  uint32_t RMDF06;
  uint32_t RMDF16;
  uint32_t RMID7;
  uint32_t RMPTR7;
  uint32_t RMDF07;
  uint32_t RMDF17;
  uint32_t RMID8;
  uint32_t RMPTR8;
  uint32_t RMDF08;
  uint32_t RMDF18;
  uint32_t RMID9;
  uint32_t RMPTR9;
  uint32_t RMDF09;
  uint32_t RMDF19;
  uint32_t RMID10;
  uint32_t RMPTR10;
  uint32_t RMDF010;
  uint32_t RMDF110;
  uint32_t RMID11;
  uint32_t RMPTR11;
  uint32_t RMDF011;
  uint32_t RMDF111;
  uint32_t RMID12;
  uint32_t RMPTR12;
  uint32_t RMDF012;
  uint32_t RMDF112;
  uint32_t RMID13;
  uint32_t RMPTR13;
  uint32_t RMDF013;
  uint32_t RMDF113;
  uint32_t RMID14;
  uint32_t RMPTR14;
  uint32_t RMDF014;
  uint32_t RMDF114;
  uint32_t RMID15;
  uint32_t RMPTR15;
  uint32_t RMDF015;
  uint32_t RMDF115;
  uint32_t RMID16;
  uint32_t RMPTR16;
  uint32_t RMDF016;
  uint32_t RMDF116;
  uint32_t RMID17;
  uint32_t RMPTR17;
  uint32_t RMDF017;
  uint32_t RMDF117;
  uint32_t RMID18;
  uint32_t RMPTR18;
  uint32_t RMDF018;
  uint32_t RMDF118;
  uint32_t RMID19;
  uint32_t RMPTR19;
  uint32_t RMDF019;
  uint32_t RMDF119;
  uint32_t RMID20;
  uint32_t RMPTR20;
  uint32_t RMDF020;
  uint32_t RMDF120;
  uint32_t RMID21;
  uint32_t RMPTR21;
  uint32_t RMDF021;
  uint32_t RMDF121;
  uint32_t RMID22;
  uint32_t RMPTR22;
  uint32_t RMDF022;
  uint32_t RMDF122;
  uint32_t RMID23;
  uint32_t RMPTR23;
  uint32_t RMDF023;
  uint32_t RMDF123;
  uint32_t RMID24;
  uint32_t RMPTR24;
  uint32_t RMDF024;
  uint32_t RMDF124;
  uint32_t RMID25;
  uint32_t RMPTR25;
  uint32_t RMDF025;
  uint32_t RMDF125;
  uint32_t RMID26;
  uint32_t RMPTR26;
  uint32_t RMDF026;
  uint32_t RMDF126;
  uint32_t RMID27;
  uint32_t RMPTR27;
  uint32_t RMDF027;
  uint32_t RMDF127;
  uint32_t RMID28;
  uint32_t RMPTR28;
  uint32_t RMDF028;
  uint32_t RMDF128;
  uint32_t RMID29;
  uint32_t RMPTR29;
  uint32_t RMDF029;
  uint32_t RMDF129;
  uint32_t RMID30;
  uint32_t RMPTR30;
  uint32_t RMDF030;
  uint32_t RMDF130;
  uint32_t RMID31;
  uint32_t RMPTR31;
  uint32_t RMDF031;
  uint32_t RMDF131;
  uint32_t RMID32;
  uint32_t RMPTR32;
  uint32_t RMDF032;
  uint32_t RMDF132;
  uint32_t RMID33;
  uint32_t RMPTR33;
  uint32_t RMDF033;
  uint32_t RMDF133;
  uint32_t RMID34;
  uint32_t RMPTR34;
  uint32_t RMDF034;
  uint32_t RMDF134;
  uint32_t RMID35;
  uint32_t RMPTR35;
  uint32_t RMDF035;
  uint32_t RMDF135;
  uint32_t RMID36;
  uint32_t RMPTR36;
  uint32_t RMDF036;
  uint32_t RMDF136;
  uint32_t RMID37;
  uint32_t RMPTR37;
  uint32_t RMDF037;
  uint32_t RMDF137;
  uint32_t RMID38;
  uint32_t RMPTR38;
  uint32_t RMDF038;
  uint32_t RMDF138;
  uint32_t RMID39;
  uint32_t RMPTR39;
  uint32_t RMDF039;
  uint32_t RMDF139;
  uint32_t RMID40;
  uint32_t RMPTR40;
  uint32_t RMDF040;
  uint32_t RMDF140;
  uint32_t RMID41;
  uint32_t RMPTR41;
  uint32_t RMDF041;
  uint32_t RMDF141;
  uint32_t RMID42;
  uint32_t RMPTR42;
  uint32_t RMDF042;
  uint32_t RMDF142;
  uint32_t RMID43;
  uint32_t RMPTR43;
  uint32_t RMDF043;
  uint32_t RMDF143;
  uint32_t RMID44;
  uint32_t RMPTR44;
  uint32_t RMDF044;
  uint32_t RMDF144;
  uint32_t RMID45;
  uint32_t RMPTR45;
  uint32_t RMDF045;
  uint32_t RMDF145;
  uint32_t RMID46;
  uint32_t RMPTR46;
  uint32_t RMDF046;
  uint32_t RMDF146;
  uint32_t RMID47;
  uint32_t RMPTR47;
  uint32_t RMDF047;
  uint32_t RMDF147;
  uint32_t RMID48;
  uint32_t RMPTR48;
  uint32_t RMDF048;
  uint32_t RMDF148;
  uint32_t RMID49;
  uint32_t RMPTR49;
  uint32_t RMDF049;
  uint32_t RMDF149;
  uint32_t RMID50;
  uint32_t RMPTR50;
  uint32_t RMDF050;
  uint32_t RMDF150;
  uint32_t RMID51;
  uint32_t RMPTR51;
  uint32_t RMDF051;
  uint32_t RMDF151;
  uint32_t RMID52;
  uint32_t RMPTR52;
  uint32_t RMDF052;
  uint32_t RMDF152;
  uint32_t RMID53;
  uint32_t RMPTR53;
  uint32_t RMDF053;
  uint32_t RMDF153;
  uint32_t RMID54;
  uint32_t RMPTR54;
  uint32_t RMDF054;
  uint32_t RMDF154;
  uint32_t RMID55;
  uint32_t RMPTR55;
  uint32_t RMDF055;
  uint32_t RMDF155;
  uint32_t RMID56;
  uint32_t RMPTR56;
  uint32_t RMDF056;
  uint32_t RMDF156;
  uint32_t RMID57;
  uint32_t RMPTR57;
  uint32_t RMDF057;
  uint32_t RMDF157;
  uint32_t RMID58;
  uint32_t RMPTR58;
  uint32_t RMDF058;
  uint32_t RMDF158;
  uint32_t RMID59;
  uint32_t RMPTR59;
  uint32_t RMDF059;
  uint32_t RMDF159;
  uint32_t RMID60;
  uint32_t RMPTR60;
  uint32_t RMDF060;
  uint32_t RMDF160;
  uint32_t RMID61;
  uint32_t RMPTR61;
  uint32_t RMDF061;
  uint32_t RMDF161;
  uint32_t RMID62;
  uint32_t RMPTR62;
  uint32_t RMDF062;
  uint32_t RMDF162;
  uint32_t RMID63;
  uint32_t RMPTR63;
  uint32_t RMDF063;
  uint32_t RMDF163;
  uint32_t RMID64;
  uint32_t RMPTR64;
  uint32_t RMDF064;
  uint32_t RMDF164;
  uint32_t RMID65;
  uint32_t RMPTR65;
  uint32_t RMDF065;
  uint32_t RMDF165;
  uint32_t RMID66;
  uint32_t RMPTR66;
  uint32_t RMDF066;
  uint32_t RMDF166;
  uint32_t RMID67;
  uint32_t RMPTR67;
  uint32_t RMDF067;
  uint32_t RMDF167;
  uint32_t RMID68;
  uint32_t RMPTR68;
  uint32_t RMDF068;
  uint32_t RMDF168;
  uint32_t RMID69;
  uint32_t RMPTR69;
  uint32_t RMDF069;
  uint32_t RMDF169;
  uint32_t RMID70;
  uint32_t RMPTR70;
  uint32_t RMDF070;
  uint32_t RMDF170;
  uint32_t RMID71;
  uint32_t RMPTR71;
  uint32_t RMDF071;
  uint32_t RMDF171;
  uint32_t RMID72;
  uint32_t RMPTR72;
  uint32_t RMDF072;
  uint32_t RMDF172;
  uint32_t RMID73;
  uint32_t RMPTR73;
  uint32_t RMDF073;
  uint32_t RMDF173;
  uint32_t RMID74;
  uint32_t RMPTR74;
  uint32_t RMDF074;
  uint32_t RMDF174;
  uint32_t RMID75;
  uint32_t RMPTR75;
  uint32_t RMDF075;
  uint32_t RMDF175;
  uint32_t RMID76;
  uint32_t RMPTR76;
  uint32_t RMDF076;
  uint32_t RMDF176;
  uint32_t RMID77;
  uint32_t RMPTR77;
  uint32_t RMDF077;
  uint32_t RMDF177;
  uint32_t RMID78;
  uint32_t RMPTR78;
  uint32_t RMDF078;
  uint32_t RMDF178;
  uint32_t RMID79;
  uint32_t RMPTR79;
  uint32_t RMDF079;
  uint32_t RMDF179;
  uint32_t RMID80;
  uint32_t RMPTR80;
  uint32_t RMDF080;
  uint32_t RMDF180;
  uint32_t RMID81;
  uint32_t RMPTR81;
  uint32_t RMDF081;
  uint32_t RMDF181;
  uint32_t RMID82;
  uint32_t RMPTR82;
  uint32_t RMDF082;
  uint32_t RMDF182;
  uint32_t RMID83;
  uint32_t RMPTR83;
  uint32_t RMDF083;
  uint32_t RMDF183;
  uint32_t RMID84;
  uint32_t RMPTR84;
  uint32_t RMDF084;
  uint32_t RMDF184;
  uint32_t RMID85;
  uint32_t RMPTR85;
  uint32_t RMDF085;
  uint32_t RMDF185;
  uint32_t RMID86;
  uint32_t RMPTR86;
  uint32_t RMDF086;
  uint32_t RMDF186;
  uint32_t RMID87;
  uint32_t RMPTR87;
  uint32_t RMDF087;
  uint32_t RMDF187;
  uint32_t RMID88;
  uint32_t RMPTR88;
  uint32_t RMDF088;
  uint32_t RMDF188;
  uint32_t RMID89;
  uint32_t RMPTR89;
  uint32_t RMDF089;
  uint32_t RMDF189;
  uint32_t RMID90;
  uint32_t RMPTR90;
  uint32_t RMDF090;
  uint32_t RMDF190;
  uint32_t RMID91;
  uint32_t RMPTR91;
  uint32_t RMDF091;
  uint32_t RMDF191;
  uint32_t RMID92;
  uint32_t RMPTR92;
  uint32_t RMDF092;
  uint32_t RMDF192;
  uint32_t RMID93;
  uint32_t RMPTR93;
  uint32_t RMDF093;
  uint32_t RMDF193;
  uint32_t RMID94;
  uint32_t RMPTR94;
  uint32_t RMDF094;
  uint32_t RMDF194;
  uint32_t RMID95;
  uint32_t RMPTR95;
  uint32_t RMDF095;
  uint32_t RMDF195;
  uint8_t res20[512];

  uint32_t RFID0;
  uint32_t RFPTR0;
  uint32_t RFDF00;
  uint32_t RFDF10;
  uint32_t RFID1;
  uint32_t RFPTR1;
  uint32_t RFDF01;
  uint32_t RFDF11;
  uint32_t RFID2;
  uint32_t RFPTR2;
  uint32_t RFDF02;
  uint32_t RFDF12;
  uint32_t RFID3;
  uint32_t RFPTR3;
  uint32_t RFDF03;
  uint32_t RFDF13;
  uint32_t RFID4;
  uint32_t RFPTR4;
  uint32_t RFDF04;
  uint32_t RFDF14;
  uint32_t RFID5;
  uint32_t RFPTR5;
  uint32_t RFDF05;
  uint32_t RFDF15;
  uint32_t RFID6;
  uint32_t RFPTR6;
  uint32_t RFDF06;
  uint32_t RFDF16;
  uint32_t RFID7;
  uint32_t RFPTR7;
  uint32_t RFDF07;
  uint32_t RFDF17;
  uint32_t CFID0;
  uint32_t CFPTR0;
  uint32_t CFDF00;
  uint32_t CFDF10;
  uint32_t CFID1;
  uint32_t CFPTR1;
  uint32_t CFDF01;
  uint32_t CFDF11;
  uint32_t CFID2;
  uint32_t CFPTR2;
  uint32_t CFDF02;
  uint32_t CFDF12;
  uint32_t CFID3;
  uint32_t CFPTR3;
  uint32_t CFDF03;
  uint32_t CFDF13;
  uint32_t CFID4;
  uint32_t CFPTR4;
  uint32_t CFDF04;
  uint32_t CFDF14;
  uint32_t CFID5;
  uint32_t CFPTR5;
  uint32_t CFDF05;
  uint32_t CFDF15;
  uint32_t CFID6;
  uint32_t CFPTR6;
  uint32_t CFDF06;
  uint32_t CFDF16;
  uint32_t CFID7;
  uint32_t CFPTR7;
  uint32_t CFDF07;
  uint32_t CFDF17;
  uint32_t CFID8;
  uint32_t CFPTR8;
  uint32_t CFDF08;
  uint32_t CFDF18;
  uint32_t CFID9;
  uint32_t CFPTR9;
  uint32_t CFDF09;
  uint32_t CFDF19;
  uint32_t CFID10;
  uint32_t CFPTR10;
  uint32_t CFDF010;
  uint32_t CFDF110;
  uint32_t CFID11;
  uint32_t CFPTR11;
  uint32_t CFDF011;
  uint32_t CFDF111;
  uint32_t CFID12;
  uint32_t CFPTR12;
  uint32_t CFDF012;
  uint32_t CFDF112;
  uint32_t CFID13;
  uint32_t CFPTR13;
  uint32_t CFDF013;
  uint32_t CFDF113;
  uint32_t CFID14;
  uint32_t CFPTR14;
  uint32_t CFDF014;
  uint32_t CFDF114;
  uint32_t CFID15;
  uint32_t CFPTR15;
  uint32_t CFDF015;
  uint32_t CFDF115;
  uint32_t CFID16;
  uint32_t CFPTR16;
  uint32_t CFDF016;
  uint32_t CFDF116;
  uint32_t CFID17;
  uint32_t CFPTR17;
  uint32_t CFDF017;
  uint32_t CFDF117;
  uint8_t res21[96];

  uint32_t TMID0;
  uint32_t TMPTR0;
  uint32_t TMDF00;
  uint32_t TMDF10;
  uint32_t TMID1;
  uint32_t TMPTR1;
  uint32_t TMDF01;
  uint32_t TMDF11;
  uint32_t TMID2;
  uint32_t TMPTR2;
  uint32_t TMDF02;
  uint32_t TMDF12;
  uint32_t TMID3;
  uint32_t TMPTR3;
  uint32_t TMDF03;
  uint32_t TMDF13;
  uint32_t TMID4;
  uint32_t TMPTR4;
  uint32_t TMDF04;
  uint32_t TMDF14;
  uint32_t TMID5;
  uint32_t TMPTR5;
  uint32_t TMDF05;
  uint32_t TMDF15;
  uint32_t TMID6;
  uint32_t TMPTR6;
  uint32_t TMDF06;
  uint32_t TMDF16;
  uint32_t TMID7;
  uint32_t TMPTR7;
  uint32_t TMDF07;
  uint32_t TMDF17;
  uint32_t TMID8;
  uint32_t TMPTR8;
  uint32_t TMDF08;
  uint32_t TMDF18;
  uint32_t TMID9;
  uint32_t TMPTR9;
  uint32_t TMDF09;
  uint32_t TMDF19;
  uint32_t TMID10;
  uint32_t TMPTR10;
  uint32_t TMDF010;
  uint32_t TMDF110;
  uint32_t TMID11;
  uint32_t TMPTR11;
  uint32_t TMDF011;
  uint32_t TMDF111;
  uint32_t TMID12;
  uint32_t TMPTR12;
  uint32_t TMDF012;
  uint32_t TMDF112;
  uint32_t TMID13;
  uint32_t TMPTR13;
  uint32_t TMDF013;
  uint32_t TMDF113;
  uint32_t TMID14;
  uint32_t TMPTR14;
  uint32_t TMDF014;
  uint32_t TMDF114;
  uint32_t TMID15;
  uint32_t TMPTR15;
  uint32_t TMDF015;
  uint32_t TMDF115;
  uint32_t TMID16;
  uint32_t TMPTR16;
  uint32_t TMDF016;
  uint32_t TMDF116;
  uint32_t TMID17;
  uint32_t TMPTR17;
  uint32_t TMDF017;
  uint32_t TMDF117;
  uint32_t TMID18;
  uint32_t TMPTR18;
  uint32_t TMDF018;
  uint32_t TMDF118;
  uint32_t TMID19;
  uint32_t TMPTR19;
  uint32_t TMDF019;
  uint32_t TMDF119;
  uint32_t TMID20;
  uint32_t TMPTR20;
  uint32_t TMDF020;
  uint32_t TMDF120;
  uint32_t TMID21;
  uint32_t TMPTR21;
  uint32_t TMDF021;
  uint32_t TMDF121;
  uint32_t TMID22;
  uint32_t TMPTR22;
  uint32_t TMDF022;
  uint32_t TMDF122;
  uint32_t TMID23;
  uint32_t TMPTR23;
  uint32_t TMDF023;
  uint32_t TMDF123;
  uint32_t TMID24;
  uint32_t TMPTR24;
  uint32_t TMDF024;
  uint32_t TMDF124;
  uint32_t TMID25;
  uint32_t TMPTR25;
  uint32_t TMDF025;
  uint32_t TMDF125;
  uint32_t TMID26;
  uint32_t TMPTR26;
  uint32_t TMDF026;
  uint32_t TMDF126;
  uint32_t TMID27;
  uint32_t TMPTR27;
  uint32_t TMDF027;
  uint32_t TMDF127;
  uint32_t TMID28;
  uint32_t TMPTR28;
  uint32_t TMDF028;
  uint32_t TMDF128;
  uint32_t TMID29;
  uint32_t TMPTR29;
  uint32_t TMDF029;
  uint32_t TMDF129;
  uint32_t TMID30;
  uint32_t TMPTR30;
  uint32_t TMDF030;
  uint32_t TMDF130;
  uint32_t TMID31;
  uint32_t TMPTR31;
  uint32_t TMDF031;
  uint32_t TMDF131;
  uint32_t TMID32;
  uint32_t TMPTR32;
  uint32_t TMDF032;
  uint32_t TMDF132;
  uint32_t TMID33;
  uint32_t TMPTR33;
  uint32_t TMDF033;
  uint32_t TMDF133;
  uint32_t TMID34;
  uint32_t TMPTR34;
  uint32_t TMDF034;
  uint32_t TMDF134;
  uint32_t TMID35;
  uint32_t TMPTR35;
  uint32_t TMDF035;
  uint32_t TMDF135;
  uint32_t TMID36;
  uint32_t TMPTR36;
  uint32_t TMDF036;
  uint32_t TMDF136;
  uint32_t TMID37;
  uint32_t TMPTR37;
  uint32_t TMDF037;
  uint32_t TMDF137;
  uint32_t TMID38;
  uint32_t TMPTR38;
  uint32_t TMDF038;
  uint32_t TMDF138;
  uint32_t TMID39;
  uint32_t TMPTR39;
  uint32_t TMDF039;
  uint32_t TMDF139;
  uint32_t TMID40;
  uint32_t TMPTR40;
  uint32_t TMDF040;
  uint32_t TMDF140;
  uint32_t TMID41;
  uint32_t TMPTR41;
  uint32_t TMDF041;
  uint32_t TMDF141;
  uint32_t TMID42;
  uint32_t TMPTR42;
  uint32_t TMDF042;
  uint32_t TMDF142;
  uint32_t TMID43;
  uint32_t TMPTR43;
  uint32_t TMDF043;
  uint32_t TMDF143;
  uint32_t TMID44;
  uint32_t TMPTR44;
  uint32_t TMDF044;
  uint32_t TMDF144;
  uint32_t TMID45;
  uint32_t TMPTR45;
  uint32_t TMDF045;
  uint32_t TMDF145;
  uint32_t TMID46;
  uint32_t TMPTR46;
  uint32_t TMDF046;
  uint32_t TMDF146;
  uint32_t TMID47;
  uint32_t TMPTR47;
  uint32_t TMDF047;
  uint32_t TMDF147;
  uint32_t TMID48;
  uint32_t TMPTR48;
  uint32_t TMDF048;
  uint32_t TMDF148;
  uint32_t TMID49;
  uint32_t TMPTR49;
  uint32_t TMDF049;
  uint32_t TMDF149;
  uint32_t TMID50;
  uint32_t TMPTR50;
  uint32_t TMDF050;
  uint32_t TMDF150;
  uint32_t TMID51;
  uint32_t TMPTR51;
  uint32_t TMDF051;
  uint32_t TMDF151;
  uint32_t TMID52;
  uint32_t TMPTR52;
  uint32_t TMDF052;
  uint32_t TMDF152;
  uint32_t TMID53;
  uint32_t TMPTR53;
  uint32_t TMDF053;
  uint32_t TMDF153;
  uint32_t TMID54;
  uint32_t TMPTR54;
  uint32_t TMDF054;
  uint32_t TMDF154;
  uint32_t TMID55;
  uint32_t TMPTR55;
  uint32_t TMDF055;
  uint32_t TMDF155;
  uint32_t TMID56;
  uint32_t TMPTR56;
  uint32_t TMDF056;
  uint32_t TMDF156;
  uint32_t TMID57;
  uint32_t TMPTR57;
  uint32_t TMDF057;
  uint32_t TMDF157;
  uint32_t TMID58;
  uint32_t TMPTR58;
  uint32_t TMDF058;
  uint32_t TMDF158;
  uint32_t TMID59;
  uint32_t TMPTR59;
  uint32_t TMDF059;
  uint32_t TMDF159;
  uint32_t TMID60;
  uint32_t TMPTR60;
  uint32_t TMDF060;
  uint32_t TMDF160;
  uint32_t TMID61;
  uint32_t TMPTR61;
  uint32_t TMDF061;
  uint32_t TMDF161;
  uint32_t TMID62;
  uint32_t TMPTR62;
  uint32_t TMDF062;
  uint32_t TMDF162;
  uint32_t TMID63;
  uint32_t TMPTR63;
  uint32_t TMDF063;
  uint32_t TMDF163;
  uint32_t TMID64;
  uint32_t TMPTR64;
  uint32_t TMDF064;
  uint32_t TMDF164;
  uint32_t TMID65;
  uint32_t TMPTR65;
  uint32_t TMDF065;
  uint32_t TMDF165;
  uint32_t TMID66;
  uint32_t TMPTR66;
  uint32_t TMDF066;
  uint32_t TMDF166;
  uint32_t TMID67;
  uint32_t TMPTR67;
  uint32_t TMDF067;
  uint32_t TMDF167;
  uint32_t TMID68;
  uint32_t TMPTR68;
  uint32_t TMDF068;
  uint32_t TMDF168;
  uint32_t TMID69;
  uint32_t TMPTR69;
  uint32_t TMDF069;
  uint32_t TMDF169;
  uint32_t TMID70;
  uint32_t TMPTR70;
  uint32_t TMDF070;
  uint32_t TMDF170;
  uint32_t TMID71;
  uint32_t TMPTR71;
  uint32_t TMDF071;
  uint32_t TMDF171;
  uint32_t TMID72;
  uint32_t TMPTR72;
  uint32_t TMDF072;
  uint32_t TMDF172;
  uint32_t TMID73;
  uint32_t TMPTR73;
  uint32_t TMDF073;
  uint32_t TMDF173;
  uint32_t TMID74;
  uint32_t TMPTR74;
  uint32_t TMDF074;
  uint32_t TMDF174;
  uint32_t TMID75;
  uint32_t TMPTR75;
  uint32_t TMDF075;
  uint32_t TMDF175;
  uint32_t TMID76;
  uint32_t TMPTR76;
  uint32_t TMDF076;
  uint32_t TMDF176;
  uint32_t TMID77;
  uint32_t TMPTR77;
  uint32_t TMDF077;
  uint32_t TMDF177;
  uint32_t TMID78;
  uint32_t TMPTR78;
  uint32_t TMDF078;
  uint32_t TMDF178;
  uint32_t TMID79;
  uint32_t TMPTR79;
  uint32_t TMDF079;
  uint32_t TMDF179;
  uint32_t TMID80;
  uint32_t TMPTR80;
  uint32_t TMDF080;
  uint32_t TMDF180;
  uint32_t TMID81;
  uint32_t TMPTR81;
  uint32_t TMDF081;
  uint32_t TMDF181;
  uint32_t TMID82;
  uint32_t TMPTR82;
  uint32_t TMDF082;
  uint32_t TMDF182;
  uint32_t TMID83;
  uint32_t TMPTR83;
  uint32_t TMDF083;
  uint32_t TMDF183;
  uint32_t TMID84;
  uint32_t TMPTR84;
  uint32_t TMDF084;
  uint32_t TMDF184;
  uint32_t TMID85;
  uint32_t TMPTR85;
  uint32_t TMDF085;
  uint32_t TMDF185;
  uint32_t TMID86;
  uint32_t TMPTR86;
  uint32_t TMDF086;
  uint32_t TMDF186;
  uint32_t TMID87;
  uint32_t TMPTR87;
  uint32_t TMDF087;
  uint32_t TMDF187;
  uint32_t TMID88;
  uint32_t TMPTR88;
  uint32_t TMDF088;
  uint32_t TMDF188;
  uint32_t TMID89;
  uint32_t TMPTR89;
  uint32_t TMDF089;
  uint32_t TMDF189;
  uint32_t TMID90;
  uint32_t TMPTR90;
  uint32_t TMDF090;
  uint32_t TMDF190;
  uint32_t TMID91;
  uint32_t TMPTR91;
  uint32_t TMDF091;
  uint32_t TMDF191;
  uint32_t TMID92;
  uint32_t TMPTR92;
  uint32_t TMDF092;
  uint32_t TMDF192;
  uint32_t TMID93;
  uint32_t TMPTR93;
  uint32_t TMDF093;
  uint32_t TMDF193;
  uint32_t TMID94;
  uint32_t TMPTR94;
  uint32_t TMDF094;
  uint32_t TMDF194;
  uint32_t TMID95;
  uint32_t TMPTR95;
  uint32_t TMDF095;
  uint32_t TMDF195;
  uint8_t res22[512];

  uint32_t THLACC0;
  uint32_t THLACC1;
  uint32_t THLACC2;
  uint32_t THLACC3;
  uint32_t THLACC4;
  uint32_t THLACC5;
  uint8_t res23[232];

  uint32_t RPGACC0;
  uint32_t RPGACC1;
  uint32_t RPGACC2;
  uint32_t RPGACC3;
  uint32_t RPGACC4;
  uint32_t RPGACC5;
  uint32_t RPGACC6;
  uint32_t RPGACC7;
  uint32_t RPGACC8;
  uint32_t RPGACC9;
  uint32_t RPGACC10;
  uint32_t RPGACC11;
  uint32_t RPGACC12;
  uint32_t RPGACC13;
  uint32_t RPGACC14;
  uint32_t RPGACC15;
  uint32_t RPGACC16;
  uint32_t RPGACC17;
  uint32_t RPGACC18;
  uint32_t RPGACC19;
  uint32_t RPGACC20;
  uint32_t RPGACC21;
  uint32_t RPGACC22;
  uint32_t RPGACC23;
  uint32_t RPGACC24;
  uint32_t RPGACC25;
  uint32_t RPGACC26;
  uint32_t RPGACC27;
  uint32_t RPGACC28;
  uint32_t RPGACC29;
  uint32_t RPGACC30;
  uint32_t RPGACC31;
  uint32_t RPGACC32;
  uint32_t RPGACC33;
  uint32_t RPGACC34;
  uint32_t RPGACC35;
  uint32_t RPGACC36;
  uint32_t RPGACC37;
  uint32_t RPGACC38;
  uint32_t RPGACC39;
  uint32_t RPGACC40;
  uint32_t RPGACC41;
  uint32_t RPGACC42;
  uint32_t RPGACC43;
  uint32_t RPGACC44;
  uint32_t RPGACC45;
  uint32_t RPGACC46;
  uint32_t RPGACC47;
  uint32_t RPGACC48;
  uint32_t RPGACC49;
  uint32_t RPGACC50;
  uint32_t RPGACC51;
  uint32_t RPGACC52;
  uint32_t RPGACC53;
  uint32_t RPGACC54;
  uint32_t RPGACC55;
  uint32_t RPGACC56;
  uint32_t RPGACC57;
  uint32_t RPGACC58;
  uint32_t RPGACC59;
  uint32_t RPGACC60;
  uint32_t RPGACC61;
  uint32_t RPGACC62;
  uint32_t RPGACC63;
};

#define RSCAN0 (*(volatile struct RSCAN0_tag *) 0xffd00000)

struct CSIH0_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t MBS:1;
      uint64_t JOBE:1;
      uint64_t reservedSpace0:3;
      uint64_t RXE:1;
      uint64_t TXE:1;
      uint64_t PWR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL0;

  uint8_t res0[3];

  uint32_t STR0;
  uint16_t STCR0;
  uint8_t res1[6];

  uint32_t CTL1;
  uint16_t CTL2;
  uint8_t res2[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:7;
      uint64_t SVSDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) EMU;

  uint8_t res3[4071];

  uint32_t MCTL1;
  uint32_t MCTL2;
  uint32_t TX0W;
  uint16_t TX0H;
  uint8_t res4[2];

  uint32_t RX0W;
  uint16_t RX0H;
  uint8_t res5[2];

  uint32_t MRWP0;
  uint8_t res6[36];

  uint16_t MCTL0;
  uint8_t res7[2];

  uint32_t CFG0;
  uint32_t CFG1;
  uint32_t CFG2;
  uint32_t CFG3;
  uint32_t CFG4;
  uint32_t CFG5;
  uint32_t CFG6;
  uint32_t CFG7;
  uint8_t res8[4];

  uint16_t BRS0;
  uint8_t res9[2];

  uint16_t BRS1;
  uint8_t res10[2];

  uint16_t BRS2;
  uint8_t res11[2];

  uint16_t BRS3;
};

#define CSIH0 (*(volatile struct CSIH0_tag *) 0xffd80000)

struct CSIH1_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t MBS:1;
      uint64_t JOBE:1;
      uint64_t reservedSpace0:3;
      uint64_t RXE:1;
      uint64_t TXE:1;
      uint64_t PWR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL0;

  uint8_t res0[3];

  uint32_t STR0;
  uint16_t STCR0;
  uint8_t res1[6];

  uint32_t CTL1;
  uint16_t CTL2;
  uint8_t res2[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:7;
      uint64_t SVSDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) EMU;

  uint8_t res3[4071];

  uint32_t MCTL1;
  uint32_t MCTL2;
  uint32_t TX0W;
  uint16_t TX0H;
  uint8_t res4[2];

  uint32_t RX0W;
  uint16_t RX0H;
  uint8_t res5[2];

  uint32_t MRWP0;
  uint8_t res6[36];

  uint16_t MCTL0;
  uint8_t res7[2];

  uint32_t CFG0;
  uint32_t CFG1;
  uint32_t CFG2;
  uint32_t CFG3;
  uint32_t CFG4;
  uint32_t CFG5;
  uint8_t res8[12];

  uint16_t BRS0;
  uint8_t res9[2];

  uint16_t BRS1;
  uint8_t res10[2];

  uint16_t BRS2;
  uint8_t res11[2];

  uint16_t BRS3;
};

#define CSIH1 (*(volatile struct CSIH1_tag *) 0xffd82000)

struct CSIH2_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t MBS:1;
      uint64_t JOBE:1;
      uint64_t reservedSpace0:3;
      uint64_t RXE:1;
      uint64_t TXE:1;
      uint64_t PWR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL0;

  uint8_t res0[3];

  uint32_t STR0;
  uint16_t STCR0;
  uint8_t res1[6];

  uint32_t CTL1;
  uint16_t CTL2;
  uint8_t res2[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:7;
      uint64_t SVSDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) EMU;

  uint8_t res3[4071];

  uint32_t MCTL1;
  uint32_t MCTL2;
  uint32_t TX0W;
  uint16_t TX0H;
  uint8_t res4[2];

  uint32_t RX0W;
  uint16_t RX0H;
  uint8_t res5[2];

  uint32_t MRWP0;
  uint8_t res6[36];

  uint16_t MCTL0;
  uint8_t res7[2];

  uint32_t CFG0;
  uint32_t CFG1;
  uint32_t CFG2;
  uint32_t CFG3;
  uint32_t CFG4;
  uint32_t CFG5;
  uint8_t res8[12];

  uint16_t BRS0;
  uint8_t res9[2];

  uint16_t BRS1;
  uint8_t res10[2];

  uint16_t BRS2;
  uint8_t res11[2];

  uint16_t BRS3;
};

#define CSIH2 (*(volatile struct CSIH2_tag *) 0xffd84000)

struct CSIH3_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t MBS:1;
      uint64_t JOBE:1;
      uint64_t reservedSpace0:3;
      uint64_t RXE:1;
      uint64_t TXE:1;
      uint64_t PWR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL0;

  uint8_t res0[3];

  uint32_t STR0;
  uint16_t STCR0;
  uint8_t res1[6];

  uint32_t CTL1;
  uint16_t CTL2;
  uint8_t res2[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:7;
      uint64_t SVSDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) EMU;

  uint8_t res3[4071];

  uint32_t MCTL1;
  uint32_t MCTL2;
  uint32_t TX0W;
  uint16_t TX0H;
  uint8_t res4[2];

  uint32_t RX0W;
  uint16_t RX0H;
  uint8_t res5[2];

  uint32_t MRWP0;
  uint8_t res6[36];

  uint16_t MCTL0;
  uint8_t res7[2];

  uint32_t CFG0;
  uint32_t CFG1;
  uint32_t CFG2;
  uint32_t CFG3;
  uint8_t res8[20];

  uint16_t BRS0;
  uint8_t res9[2];

  uint16_t BRS1;
  uint8_t res10[2];

  uint16_t BRS2;
  uint8_t res11[2];

  uint16_t BRS3;
};

#define CSIH3 (*(volatile struct CSIH3_tag *) 0xffd86000)

struct CSIG0_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t RXE:1;
      uint64_t TXE:1;
      uint64_t PWR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL0;

  uint8_t res0[3];

  uint32_t STR0;
  uint16_t STCR0;
  uint8_t res1[6];

  uint32_t CTL1;
  uint16_t CTL2;
  uint8_t res2[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:7;
      uint64_t SVSDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) EMU;

  uint8_t res3[4071];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) BCTL0;

  uint8_t res4[3];

  uint32_t TX0W;
  uint16_t TX0H;
  uint8_t res5[2];

  uint16_t RX0;
  uint8_t res6[2];

  uint32_t CFG0;
};

#define CSIG0 (*(volatile struct CSIG0_tag *) 0xffdb0000)

struct CSIG1_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t RXE:1;
      uint64_t TXE:1;
      uint64_t PWR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL0;

  uint8_t res0[3];

  uint32_t STR0;
  uint16_t STCR0;
  uint8_t res1[6];

  uint32_t CTL1;
  uint16_t CTL2;
  uint8_t res2[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:7;
      uint64_t SVSDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) EMU;

  uint8_t res3[4071];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) BCTL0;

  uint8_t res4[3];

  uint32_t TX0W;
  uint16_t TX0H;
  uint8_t res5[2];

  uint16_t RX0;
  uint8_t res6[2];

  uint32_t CFG0;
};

#define CSIG1 (*(volatile struct CSIG1_tag *) 0xffdb2000)

struct PIC0_tag
{
  uint8_t SST;
  uint8_t res0[11];

  uint16_t SSER0;
  uint8_t res1[6];

  uint16_t SSER2;
  uint8_t res2[102];

  uint8_t HIZCEN0;
  uint8_t res3[15];

  uint16_t ADTEN400;
  uint8_t res4[2];

  uint16_t ADTEN401;
  uint8_t res5[2];

  uint16_t ADTEN402;
  uint8_t res6[38];

  uint32_t REG200;
  uint32_t REG201;
  uint32_t REG202;
  uint32_t REG203;
  uint8_t res7[24];

  uint32_t REG30;
  uint32_t REG31;
};

#define PIC0 (*(volatile struct PIC0_tag *) 0xffdd0004)

struct TAUD0_tag
{
  uint16_t CDR0;
  uint8_t res0[2];

  uint16_t CDR1;
  uint8_t res1[2];

  uint16_t CDR2;
  uint8_t res2[2];

  uint16_t CDR3;
  uint8_t res3[2];

  uint16_t CDR4;
  uint8_t res4[2];

  uint16_t CDR5;
  uint8_t res5[2];

  uint16_t CDR6;
  uint8_t res6[2];

  uint16_t CDR7;
  uint8_t res7[2];

  uint16_t CDR8;
  uint8_t res8[2];

  uint16_t CDR9;
  uint8_t res9[2];

  uint16_t CDR10;
  uint8_t res10[2];

  uint16_t CDR11;
  uint8_t res11[2];

  uint16_t CDR12;
  uint8_t res12[2];

  uint16_t CDR13;
  uint8_t res13[2];

  uint16_t CDR14;
  uint8_t res14[2];

  uint16_t CDR15;
  uint8_t res15[2];

  uint16_t TOL;
  uint8_t res16[2];

  uint16_t RDT;
  uint8_t res17[2];

  uint16_t RSF;
  uint8_t res18[2];

  uint16_t TRO;
  uint8_t res19[2];

  uint16_t TME;
  uint8_t res20[2];

  uint16_t TDL;
  uint8_t res21[2];

  uint16_t TO;
  uint8_t res22[2];

  uint16_t TOE;
  uint8_t res23[34];

  uint16_t CNT0;
  uint8_t res24[2];

  uint16_t CNT1;
  uint8_t res25[2];

  uint16_t CNT2;
  uint8_t res26[2];

  uint16_t CNT3;
  uint8_t res27[2];

  uint16_t CNT4;
  uint8_t res28[2];

  uint16_t CNT5;
  uint8_t res29[2];

  uint16_t CNT6;
  uint8_t res30[2];

  uint16_t CNT7;
  uint8_t res31[2];

  uint16_t CNT8;
  uint8_t res32[2];

  uint16_t CNT9;
  uint8_t res33[2];

  uint16_t CNT10;
  uint8_t res34[2];

  uint16_t CNT11;
  uint8_t res35[2];

  uint16_t CNT12;
  uint8_t res36[2];

  uint16_t CNT13;
  uint8_t res37[2];

  uint16_t CNT14;
  uint8_t res38[2];

  uint16_t CNT15;
  uint8_t res39[2];

  uint8_t CMUR0;
  uint8_t res40[3];

  uint8_t CMUR1;
  uint8_t res41[3];

  uint8_t CMUR2;
  uint8_t res42[3];

  uint8_t CMUR3;
  uint8_t res43[3];

  uint8_t CMUR4;
  uint8_t res44[3];

  uint8_t CMUR5;
  uint8_t res45[3];

  uint8_t CMUR6;
  uint8_t res46[3];

  uint8_t CMUR7;
  uint8_t res47[3];

  uint8_t CMUR8;
  uint8_t res48[3];

  uint8_t CMUR9;
  uint8_t res49[3];

  uint8_t CMUR10;
  uint8_t res50[3];

  uint8_t CMUR11;
  uint8_t res51[3];

  uint8_t CMUR12;
  uint8_t res52[3];

  uint8_t CMUR13;
  uint8_t res53[3];

  uint8_t CMUR14;
  uint8_t res54[3];

  uint8_t CMUR15;
  uint8_t res55[67];

  uint8_t CSR0;
  uint8_t res56[3];

  uint8_t CSR1;
  uint8_t res57[3];

  uint8_t CSR2;
  uint8_t res58[3];

  uint8_t CSR3;
  uint8_t res59[3];

  uint8_t CSR4;
  uint8_t res60[3];

  uint8_t CSR5;
  uint8_t res61[3];

  uint8_t CSR6;
  uint8_t res62[3];

  uint8_t CSR7;
  uint8_t res63[3];

  uint8_t CSR8;
  uint8_t res64[3];

  uint8_t CSR9;
  uint8_t res65[3];

  uint8_t CSR10;
  uint8_t res66[3];

  uint8_t CSR11;
  uint8_t res67[3];

  uint8_t CSR12;
  uint8_t res68[3];

  uint8_t CSR13;
  uint8_t res69[3];

  uint8_t CSR14;
  uint8_t res70[3];

  uint8_t CSR15;
  uint8_t res71[3];

  uint8_t CSC0;
  uint8_t res72[3];

  uint8_t CSC1;
  uint8_t res73[3];

  uint8_t CSC2;
  uint8_t res74[3];

  uint8_t CSC3;
  uint8_t res75[3];

  uint8_t CSC4;
  uint8_t res76[3];

  uint8_t CSC5;
  uint8_t res77[3];

  uint8_t CSC6;
  uint8_t res78[3];

  uint8_t CSC7;
  uint8_t res79[3];

  uint8_t CSC8;
  uint8_t res80[3];

  uint8_t CSC9;
  uint8_t res81[3];

  uint8_t CSC10;
  uint8_t res82[3];

  uint8_t CSC11;
  uint8_t res83[3];

  uint8_t CSC12;
  uint8_t res84[3];

  uint8_t CSC13;
  uint8_t res85[3];

  uint8_t CSC14;
  uint8_t res86[3];

  uint8_t CSC15;
  uint8_t res87[3];

  uint16_t TE;
  uint8_t res88[2];

  uint16_t TS;
  uint8_t res89[2];

  uint16_t TT;
  uint8_t res90[54];

  uint16_t CMOR0;
  uint8_t res91[2];

  uint16_t CMOR1;
  uint8_t res92[2];

  uint16_t CMOR2;
  uint8_t res93[2];

  uint16_t CMOR3;
  uint8_t res94[2];

  uint16_t CMOR4;
  uint8_t res95[2];

  uint16_t CMOR5;
  uint8_t res96[2];

  uint16_t CMOR6;
  uint8_t res97[2];

  uint16_t CMOR7;
  uint8_t res98[2];

  uint16_t CMOR8;
  uint8_t res99[2];

  uint16_t CMOR9;
  uint8_t res100[2];

  uint16_t CMOR10;
  uint8_t res101[2];

  uint16_t CMOR11;
  uint8_t res102[2];

  uint16_t CMOR12;
  uint8_t res103[2];

  uint16_t CMOR13;
  uint8_t res104[2];

  uint16_t CMOR14;
  uint8_t res105[2];

  uint16_t CMOR15;
  uint8_t res106[2];

  uint16_t TPS;
  uint8_t res107[2];

  uint8_t BRS;
  uint8_t res108[3];

  uint16_t TOM;
  uint8_t res109[2];

  uint16_t TOC;
  uint8_t res110[2];

  uint16_t TDE;
  uint8_t res111[2];

  uint16_t TDM;
  uint8_t res112[2];

  uint16_t TRE;
  uint8_t res113[2];

  uint16_t TRC;
  uint8_t res114[2];

  uint16_t RDE;
  uint8_t res115[2];

  uint16_t RDM;
  uint8_t res116[2];

  uint16_t RDS;
  uint8_t res117[2];

  uint16_t RDC;
  uint8_t res118[34];

  uint8_t EMU;
};

#define TAUD0 (*(volatile struct TAUD0_tag *) 0xffe20000)

struct TAUB0_tag
{
  uint16_t CDR0;
  uint8_t res0[2];

  uint16_t CDR1;
  uint8_t res1[2];

  uint16_t CDR2;
  uint8_t res2[2];

  uint16_t CDR3;
  uint8_t res3[2];

  uint16_t CDR4;
  uint8_t res4[2];

  uint16_t CDR5;
  uint8_t res5[2];

  uint16_t CDR6;
  uint8_t res6[2];

  uint16_t CDR7;
  uint8_t res7[2];

  uint16_t CDR8;
  uint8_t res8[2];

  uint16_t CDR9;
  uint8_t res9[2];

  uint16_t CDR10;
  uint8_t res10[2];

  uint16_t CDR11;
  uint8_t res11[2];

  uint16_t CDR12;
  uint8_t res12[2];

  uint16_t CDR13;
  uint8_t res13[2];

  uint16_t CDR14;
  uint8_t res14[2];

  uint16_t CDR15;
  uint8_t res15[2];

  uint16_t TOL;
  uint8_t res16[2];

  uint16_t RDT;
  uint8_t res17[2];

  uint16_t RSF;
  uint8_t res18[10];

  uint16_t TDL;
  uint8_t res19[2];

  uint16_t TO;
  uint8_t res20[2];

  uint16_t TOE;
  uint8_t res21[34];

  uint16_t CNT0;
  uint8_t res22[2];

  uint16_t CNT1;
  uint8_t res23[2];

  uint16_t CNT2;
  uint8_t res24[2];

  uint16_t CNT3;
  uint8_t res25[2];

  uint16_t CNT4;
  uint8_t res26[2];

  uint16_t CNT5;
  uint8_t res27[2];

  uint16_t CNT6;
  uint8_t res28[2];

  uint16_t CNT7;
  uint8_t res29[2];

  uint16_t CNT8;
  uint8_t res30[2];

  uint16_t CNT9;
  uint8_t res31[2];

  uint16_t CNT10;
  uint8_t res32[2];

  uint16_t CNT11;
  uint8_t res33[2];

  uint16_t CNT12;
  uint8_t res34[2];

  uint16_t CNT13;
  uint8_t res35[2];

  uint16_t CNT14;
  uint8_t res36[2];

  uint16_t CNT15;
  uint8_t res37[2];

  uint8_t CMUR0;
  uint8_t res38[3];

  uint8_t CMUR1;
  uint8_t res39[3];

  uint8_t CMUR2;
  uint8_t res40[3];

  uint8_t CMUR3;
  uint8_t res41[3];

  uint8_t CMUR4;
  uint8_t res42[3];

  uint8_t CMUR5;
  uint8_t res43[3];

  uint8_t CMUR6;
  uint8_t res44[3];

  uint8_t CMUR7;
  uint8_t res45[3];

  uint8_t CMUR8;
  uint8_t res46[3];

  uint8_t CMUR9;
  uint8_t res47[3];

  uint8_t CMUR10;
  uint8_t res48[3];

  uint8_t CMUR11;
  uint8_t res49[3];

  uint8_t CMUR12;
  uint8_t res50[3];

  uint8_t CMUR13;
  uint8_t res51[3];

  uint8_t CMUR14;
  uint8_t res52[3];

  uint8_t CMUR15;
  uint8_t res53[67];

  uint8_t CSR0;
  uint8_t res54[3];

  uint8_t CSR1;
  uint8_t res55[3];

  uint8_t CSR2;
  uint8_t res56[3];

  uint8_t CSR3;
  uint8_t res57[3];

  uint8_t CSR4;
  uint8_t res58[3];

  uint8_t CSR5;
  uint8_t res59[3];

  uint8_t CSR6;
  uint8_t res60[3];

  uint8_t CSR7;
  uint8_t res61[3];

  uint8_t CSR8;
  uint8_t res62[3];

  uint8_t CSR9;
  uint8_t res63[3];

  uint8_t CSR10;
  uint8_t res64[3];

  uint8_t CSR11;
  uint8_t res65[3];

  uint8_t CSR12;
  uint8_t res66[3];

  uint8_t CSR13;
  uint8_t res67[3];

  uint8_t CSR14;
  uint8_t res68[3];

  uint8_t CSR15;
  uint8_t res69[3];

  uint8_t CSC0;
  uint8_t res70[3];

  uint8_t CSC1;
  uint8_t res71[3];

  uint8_t CSC2;
  uint8_t res72[3];

  uint8_t CSC3;
  uint8_t res73[3];

  uint8_t CSC4;
  uint8_t res74[3];

  uint8_t CSC5;
  uint8_t res75[3];

  uint8_t CSC6;
  uint8_t res76[3];

  uint8_t CSC7;
  uint8_t res77[3];

  uint8_t CSC8;
  uint8_t res78[3];

  uint8_t CSC9;
  uint8_t res79[3];

  uint8_t CSC10;
  uint8_t res80[3];

  uint8_t CSC11;
  uint8_t res81[3];

  uint8_t CSC12;
  uint8_t res82[3];

  uint8_t CSC13;
  uint8_t res83[3];

  uint8_t CSC14;
  uint8_t res84[3];

  uint8_t CSC15;
  uint8_t res85[3];

  uint16_t TE;
  uint8_t res86[2];

  uint16_t TS;
  uint8_t res87[2];

  uint16_t TT;
  uint8_t res88[54];

  uint16_t CMOR0;
  uint8_t res89[2];

  uint16_t CMOR1;
  uint8_t res90[2];

  uint16_t CMOR2;
  uint8_t res91[2];

  uint16_t CMOR3;
  uint8_t res92[2];

  uint16_t CMOR4;
  uint8_t res93[2];

  uint16_t CMOR5;
  uint8_t res94[2];

  uint16_t CMOR6;
  uint8_t res95[2];

  uint16_t CMOR7;
  uint8_t res96[2];

  uint16_t CMOR8;
  uint8_t res97[2];

  uint16_t CMOR9;
  uint8_t res98[2];

  uint16_t CMOR10;
  uint8_t res99[2];

  uint16_t CMOR11;
  uint8_t res100[2];

  uint16_t CMOR12;
  uint8_t res101[2];

  uint16_t CMOR13;
  uint8_t res102[2];

  uint16_t CMOR14;
  uint8_t res103[2];

  uint16_t CMOR15;
  uint8_t res104[2];

  uint16_t TPS;
  uint8_t res105[6];

  uint16_t TOM;
  uint8_t res106[2];

  uint16_t TOC;
  uint8_t res107[2];

  uint16_t TDE;
  uint8_t res108[14];

  uint16_t RDE;
  uint8_t res109[2];

  uint16_t RDM;
  uint8_t res110[2];

  uint16_t RDS;
  uint8_t res111[2];

  uint16_t RDC;
  uint8_t res112[34];

  uint8_t EMU;
};

#define TAUB0 (*(volatile struct TAUB0_tag *) 0xffe30000)

struct TAUB1_tag
{
  uint16_t CDR0;
  uint8_t res0[2];

  uint16_t CDR1;
  uint8_t res1[2];

  uint16_t CDR2;
  uint8_t res2[2];

  uint16_t CDR3;
  uint8_t res3[2];

  uint16_t CDR4;
  uint8_t res4[2];

  uint16_t CDR5;
  uint8_t res5[2];

  uint16_t CDR6;
  uint8_t res6[2];

  uint16_t CDR7;
  uint8_t res7[2];

  uint16_t CDR8;
  uint8_t res8[2];

  uint16_t CDR9;
  uint8_t res9[2];

  uint16_t CDR10;
  uint8_t res10[2];

  uint16_t CDR11;
  uint8_t res11[2];

  uint16_t CDR12;
  uint8_t res12[2];

  uint16_t CDR13;
  uint8_t res13[2];

  uint16_t CDR14;
  uint8_t res14[2];

  uint16_t CDR15;
  uint8_t res15[2];

  uint16_t TOL;
  uint8_t res16[2];

  uint16_t RDT;
  uint8_t res17[2];

  uint16_t RSF;
  uint8_t res18[10];

  uint16_t TDL;
  uint8_t res19[2];

  uint16_t TO;
  uint8_t res20[2];

  uint16_t TOE;
  uint8_t res21[34];

  uint16_t CNT0;
  uint8_t res22[2];

  uint16_t CNT1;
  uint8_t res23[2];

  uint16_t CNT2;
  uint8_t res24[2];

  uint16_t CNT3;
  uint8_t res25[2];

  uint16_t CNT4;
  uint8_t res26[2];

  uint16_t CNT5;
  uint8_t res27[2];

  uint16_t CNT6;
  uint8_t res28[2];

  uint16_t CNT7;
  uint8_t res29[2];

  uint16_t CNT8;
  uint8_t res30[2];

  uint16_t CNT9;
  uint8_t res31[2];

  uint16_t CNT10;
  uint8_t res32[2];

  uint16_t CNT11;
  uint8_t res33[2];

  uint16_t CNT12;
  uint8_t res34[2];

  uint16_t CNT13;
  uint8_t res35[2];

  uint16_t CNT14;
  uint8_t res36[2];

  uint16_t CNT15;
  uint8_t res37[2];

  uint8_t CMUR0;
  uint8_t res38[3];

  uint8_t CMUR1;
  uint8_t res39[3];

  uint8_t CMUR2;
  uint8_t res40[3];

  uint8_t CMUR3;
  uint8_t res41[3];

  uint8_t CMUR4;
  uint8_t res42[3];

  uint8_t CMUR5;
  uint8_t res43[3];

  uint8_t CMUR6;
  uint8_t res44[3];

  uint8_t CMUR7;
  uint8_t res45[3];

  uint8_t CMUR8;
  uint8_t res46[3];

  uint8_t CMUR9;
  uint8_t res47[3];

  uint8_t CMUR10;
  uint8_t res48[3];

  uint8_t CMUR11;
  uint8_t res49[3];

  uint8_t CMUR12;
  uint8_t res50[3];

  uint8_t CMUR13;
  uint8_t res51[3];

  uint8_t CMUR14;
  uint8_t res52[3];

  uint8_t CMUR15;
  uint8_t res53[67];

  uint8_t CSR0;
  uint8_t res54[3];

  uint8_t CSR1;
  uint8_t res55[3];

  uint8_t CSR2;
  uint8_t res56[3];

  uint8_t CSR3;
  uint8_t res57[3];

  uint8_t CSR4;
  uint8_t res58[3];

  uint8_t CSR5;
  uint8_t res59[3];

  uint8_t CSR6;
  uint8_t res60[3];

  uint8_t CSR7;
  uint8_t res61[3];

  uint8_t CSR8;
  uint8_t res62[3];

  uint8_t CSR9;
  uint8_t res63[3];

  uint8_t CSR10;
  uint8_t res64[3];

  uint8_t CSR11;
  uint8_t res65[3];

  uint8_t CSR12;
  uint8_t res66[3];

  uint8_t CSR13;
  uint8_t res67[3];

  uint8_t CSR14;
  uint8_t res68[3];

  uint8_t CSR15;
  uint8_t res69[3];

  uint8_t CSC0;
  uint8_t res70[3];

  uint8_t CSC1;
  uint8_t res71[3];

  uint8_t CSC2;
  uint8_t res72[3];

  uint8_t CSC3;
  uint8_t res73[3];

  uint8_t CSC4;
  uint8_t res74[3];

  uint8_t CSC5;
  uint8_t res75[3];

  uint8_t CSC6;
  uint8_t res76[3];

  uint8_t CSC7;
  uint8_t res77[3];

  uint8_t CSC8;
  uint8_t res78[3];

  uint8_t CSC9;
  uint8_t res79[3];

  uint8_t CSC10;
  uint8_t res80[3];

  uint8_t CSC11;
  uint8_t res81[3];

  uint8_t CSC12;
  uint8_t res82[3];

  uint8_t CSC13;
  uint8_t res83[3];

  uint8_t CSC14;
  uint8_t res84[3];

  uint8_t CSC15;
  uint8_t res85[3];

  uint16_t TE;
  uint8_t res86[2];

  uint16_t TS;
  uint8_t res87[2];

  uint16_t TT;
  uint8_t res88[54];

  uint16_t CMOR0;
  uint8_t res89[2];

  uint16_t CMOR1;
  uint8_t res90[2];

  uint16_t CMOR2;
  uint8_t res91[2];

  uint16_t CMOR3;
  uint8_t res92[2];

  uint16_t CMOR4;
  uint8_t res93[2];

  uint16_t CMOR5;
  uint8_t res94[2];

  uint16_t CMOR6;
  uint8_t res95[2];

  uint16_t CMOR7;
  uint8_t res96[2];

  uint16_t CMOR8;
  uint8_t res97[2];

  uint16_t CMOR9;
  uint8_t res98[2];

  uint16_t CMOR10;
  uint8_t res99[2];

  uint16_t CMOR11;
  uint8_t res100[2];

  uint16_t CMOR12;
  uint8_t res101[2];

  uint16_t CMOR13;
  uint8_t res102[2];

  uint16_t CMOR14;
  uint8_t res103[2];

  uint16_t CMOR15;
  uint8_t res104[2];

  uint16_t TPS;
  uint8_t res105[6];

  uint16_t TOM;
  uint8_t res106[2];

  uint16_t TOC;
  uint8_t res107[2];

  uint16_t TDE;
  uint8_t res108[14];

  uint16_t RDE;
  uint8_t res109[2];

  uint16_t RDM;
  uint8_t res110[2];

  uint16_t RDS;
  uint8_t res111[2];

  uint16_t RDC;
  uint8_t res112[34];

  uint8_t EMU;
};

#define TAUB1 (*(volatile struct TAUB1_tag *) 0xffe31000)

struct TAUJ0_tag
{
  uint32_t CDR0;
  uint32_t CDR1;
  uint32_t CDR2;
  uint32_t CDR3;
  uint32_t CNT0;
  uint32_t CNT1;
  uint32_t CNT2;
  uint32_t CNT3;
  uint8_t CMUR0;
  uint8_t res0[3];

  uint8_t CMUR1;
  uint8_t res1[3];

  uint8_t CMUR2;
  uint8_t res2[3];

  uint8_t CMUR3;
  uint8_t res3[3];

  uint8_t CSR0;
  uint8_t res4[3];

  uint8_t CSR1;
  uint8_t res5[3];

  uint8_t CSR2;
  uint8_t res6[3];

  uint8_t CSR3;
  uint8_t res7[3];

  uint8_t CSC0;
  uint8_t res8[3];

  uint8_t CSC1;
  uint8_t res9[3];

  uint8_t CSC2;
  uint8_t res10[3];

  uint8_t CSC3;
  uint8_t res11[3];

  uint8_t TE;
  uint8_t res12[3];

  uint8_t TS;
  uint8_t res13[3];

  uint8_t TT;
  uint8_t res14[3];

  uint8_t TO;
  uint8_t res15[3];

  uint8_t TOE;
  uint8_t res16[3];

  uint8_t TOL;
  uint8_t res17[3];

  uint8_t RDT;
  uint8_t res18[3];

  uint8_t RSF;
  uint8_t res19[19];

  uint16_t CMOR0;
  uint8_t res20[2];

  uint16_t CMOR1;
  uint8_t res21[2];

  uint16_t CMOR2;
  uint8_t res22[2];

  uint16_t CMOR3;
  uint8_t res23[2];

  uint16_t TPS;
  uint8_t res24[2];

  uint8_t BRS;
  uint8_t res25[3];

  uint8_t TOM;
  uint8_t res26[3];

  uint8_t TOC;
  uint8_t res27[3];

  uint8_t RDE;
  uint8_t res28[3];

  uint8_t RDM;
  uint8_t res29[3];

  uint8_t EMU;
};

#define TAUJ0 (*(volatile struct TAUJ0_tag *) 0xffe50000)

struct TAUJ1_tag
{
  uint32_t CDR0;
  uint32_t CDR1;
  uint32_t CDR2;
  uint32_t CDR3;
  uint32_t CNT0;
  uint32_t CNT1;
  uint32_t CNT2;
  uint32_t CNT3;
  uint8_t CMUR0;
  uint8_t res0[3];

  uint8_t CMUR1;
  uint8_t res1[3];

  uint8_t CMUR2;
  uint8_t res2[3];

  uint8_t CMUR3;
  uint8_t res3[3];

  uint8_t CSR0;
  uint8_t res4[3];

  uint8_t CSR1;
  uint8_t res5[3];

  uint8_t CSR2;
  uint8_t res6[3];

  uint8_t CSR3;
  uint8_t res7[3];

  uint8_t CSC0;
  uint8_t res8[3];

  uint8_t CSC1;
  uint8_t res9[3];

  uint8_t CSC2;
  uint8_t res10[3];

  uint8_t CSC3;
  uint8_t res11[3];

  uint8_t TE;
  uint8_t res12[3];

  uint8_t TS;
  uint8_t res13[3];

  uint8_t TT;
  uint8_t res14[3];

  uint8_t TO;
  uint8_t res15[3];

  uint8_t TOE;
  uint8_t res16[3];

  uint8_t TOL;
  uint8_t res17[3];

  uint8_t RDT;
  uint8_t res18[3];

  uint8_t RSF;
  uint8_t res19[19];

  uint16_t CMOR0;
  uint8_t res20[2];

  uint16_t CMOR1;
  uint8_t res21[2];

  uint16_t CMOR2;
  uint8_t res22[2];

  uint16_t CMOR3;
  uint8_t res23[2];

  uint16_t TPS;
  uint8_t res24[2];

  uint8_t BRS;
  uint8_t res25[3];

  uint8_t TOM;
  uint8_t res26[3];

  uint8_t TOC;
  uint8_t res27[3];

  uint8_t RDE;
  uint8_t res28[3];

  uint8_t RDM;
  uint8_t res29[3];

  uint8_t EMU;
};

#define TAUJ1 (*(volatile struct TAUJ1_tag *) 0xffe51000)

struct PWSA0_tag
{
  uint8_t CTL;
  uint8_t res0[3];

  uint8_t STR;
  uint8_t res1[3];

  uint8_t STC;
  uint8_t res2[3];

  uint8_t EMU;
  uint8_t res3[19];

  uint8_t QUE0;
  uint8_t res4[3];

  uint8_t QUE1;
  uint8_t res5[3];

  uint8_t QUE2;
  uint8_t res6[3];

  uint8_t QUE3;
  uint8_t res7[3];

  uint8_t QUE4;
  uint8_t res8[3];

  uint8_t QUE5;
  uint8_t res9[3];

  uint8_t QUE6;
  uint8_t res10[3];

  uint8_t QUE7;
  uint8_t res11[3];

  uint32_t PVCR00_01;
  uint32_t PVCR02_03;
  uint32_t PVCR04_05;
  uint32_t PVCR06_07;
  uint32_t PVCR08_09;
  uint32_t PVCR10_11;
  uint32_t PVCR12_13;
  uint32_t PVCR14_15;
  uint32_t PVCR16_17;
  uint32_t PVCR18_19;
  uint32_t PVCR20_21;
  uint32_t PVCR22_23;
  uint32_t PVCR24_25;
  uint32_t PVCR26_27;
  uint32_t PVCR28_29;
  uint32_t PVCR30_31;
  uint32_t PVCR32_33;
  uint32_t PVCR34_35;
  uint32_t PVCR36_37;
  uint32_t PVCR38_39;
  uint32_t PVCR40_41;
  uint32_t PVCR42_43;
  uint32_t PVCR44_45;
  uint32_t PVCR46_47;
  uint32_t PVCR48_49;
  uint32_t PVCR50_51;
  uint32_t PVCR52_53;
  uint32_t PVCR54_55;
  uint32_t PVCR56_57;
  uint32_t PVCR58_59;
  uint32_t PVCR60_61;
  uint32_t PVCR62_63;
  uint32_t PVCR64_65;
  uint32_t PVCR66_67;
  uint32_t PVCR68_69;
  uint32_t PVCR70_71;
};

#define PWSA0 (*(volatile struct PWSA0_tag *) 0xffe70000)

struct PWGA0_tag
{
  uint16_t CSDR;
  uint8_t res0[2];

  uint16_t CRDR;
  uint8_t res1[2];

  uint16_t CTDR;
  uint8_t res2[2];

  uint8_t RDT;
  uint8_t res3[3];

  uint8_t RSF;
  uint8_t res4[3];

  uint16_t CNT;
  uint8_t res5[10];

  uint8_t CTL;
  uint8_t res6[3];

  uint16_t CSBR;
  uint8_t res7[2];

  uint16_t CRBR;
  uint8_t res8[2];

  uint16_t CTBR;
};

#define PWGA0 (*(volatile struct PWGA0_tag *) 0xffe71000)

struct PWGA1_tag
{
  uint16_t CSDR;
  uint8_t res0[2];

  uint16_t CRDR;
  uint8_t res1[2];

  uint16_t CTDR;
  uint8_t res2[2];

  uint8_t RDT;
  uint8_t res3[3];

  uint8_t RSF;
  uint8_t res4[3];

  uint16_t CNT;
  uint8_t res5[10];

  uint8_t CTL;
  uint8_t res6[3];

  uint16_t CSBR;
  uint8_t res7[2];

  uint16_t CRBR;
  uint8_t res8[2];

  uint16_t CTBR;
};

#define PWGA1 (*(volatile struct PWGA1_tag *) 0xffe71040)

struct PWGA2_tag
{
  uint16_t CSDR;
  uint8_t res0[2];

  uint16_t CRDR;
  uint8_t res1[2];

  uint16_t CTDR;
  uint8_t res2[2];

  uint8_t RDT;
  uint8_t res3[3];

  uint8_t RSF;
  uint8_t res4[3];

  uint16_t CNT;
  uint8_t res5[10];

  uint8_t CTL;
  uint8_t res6[3];

  uint16_t CSBR;
  uint8_t res7[2];

  uint16_t CRBR;
  uint8_t res8[2];

  uint16_t CTBR;
};

#define PWGA2 (*(volatile struct PWGA2_tag *) 0xffe71080)

struct PWGA3_tag
{
  uint16_t CSDR;
  uint8_t res0[2];

  uint16_t CRDR;
  uint8_t res1[2];

  uint16_t CTDR;
  uint8_t res2[2];

  uint8_t RDT;
  uint8_t res3[3];

  uint8_t RSF;
  uint8_t res4[3];

  uint16_t CNT;
  uint8_t res5[10];

  uint8_t CTL;
  uint8_t res6[3];

  uint16_t CSBR;
  uint8_t res7[2];

  uint16_t CRBR;
  uint8_t res8[2];

  uint16_t CTBR;
};

#define PWGA3 (*(volatile struct PWGA3_tag *) 0xffe710c0)

struct PWGA4_tag
{
  uint16_t CSDR;
  uint8_t res0[2];

  uint16_t CRDR;
  uint8_t res1[2];

  uint16_t CTDR;
  uint8_t res2[2];

  uint8_t RDT;
  uint8_t res3[3];

  uint8_t RSF;
  uint8_t res4[3];

  uint16_t CNT;
  uint8_t res5[10];

  uint8_t CTL;
  uint8_t res6[3];

  uint16_t CSBR;
  uint8_t res7[2];

  uint16_t CRBR;
  uint8_t res8[2];

  uint16_t CTBR;
};

#define PWGA4 (*(volatile struct PWGA4_tag *) 0xffe71100)

struct PWGA5_tag
{
  uint16_t CSDR;
  uint8_t res0[2];

  uint16_t CRDR;
  uint8_t res1[2];

  uint16_t CTDR;
  uint8_t res2[2];

  uint8_t RDT;
  uint8_t res3[3];

  uint8_t RSF;
  uint8_t res4[3];

  uint16_t CNT;
  uint8_t res5[10];

  uint8_t CTL;
  uint8_t res6[3];

  uint16_t CSBR;
  uint8_t res7[2];

  uint16_t CRBR;
  uint8_t res8[2];

  uint16_t CTBR;
};

#define PWGA5 (*(volatile struct PWGA5_tag *) 0xffe71140)

struct PWGA6_tag
{
  uint16_t CSDR;
  uint8_t res0[2];

  uint16_t CRDR;
  uint8_t res1[2];

  uint16_t CTDR;
  uint8_t res2[2];

  uint8_t RDT;
  uint8_t res3[3];

  uint8_t RSF;
  uint8_t res4[3];

  uint16_t CNT;
  uint8_t res5[10];

  uint8_t CTL;
  uint8_t res6[3];

  uint16_t CSBR;
  uint8_t res7[2];

  uint16_t CRBR;
  uint8_t res8[2];

  uint16_t CTBR;
};

#define PWGA6 (*(volatile struct PWGA6_tag *) 0xffe71180)

struct PWGA7_tag
{
  uint16_t CSDR;
  uint8_t res0[2];

  uint16_t CRDR;
  uint8_t res1[2];

  uint16_t CTDR;
  uint8_t res2[2];

  uint8_t RDT;
  uint8_t res3[3];

  uint8_t RSF;
  uint8_t res4[3];

  uint16_t CNT;
  uint8_t res5[10];

  uint8_t CTL;
  uint8_t res6[3];

  uint16_t CSBR;
  uint8_t res7[2];

  uint16_t CRBR;
  uint8_t res8[2];

  uint16_t CTBR;
};

#define PWGA7 (*(volatile struct PWGA7_tag *) 0xffe711c0)

struct PWGA8_tag
{
  uint16_t CSDR;
  uint8_t res0[2];

  uint16_t CRDR;
  uint8_t res1[2];

  uint16_t CTDR;
  uint8_t res2[2];

  uint8_t RDT;
  uint8_t res3[3];

  uint8_t RSF;
  uint8_t res4[3];

  uint16_t CNT;
  uint8_t res5[10];

  uint8_t CTL;
  uint8_t res6[3];

  uint16_t CSBR;
  uint8_t res7[2];

  uint16_t CRBR;
  uint8_t res8[2];

  uint16_t CTBR;
};

#define PWGA8 (*(volatile struct PWGA8_tag *) 0xffe71200)

struct PWGA9_tag
{
  uint16_t CSDR;
  uint8_t res0[2];

  uint16_t CRDR;
  uint8_t res1[2];

  uint16_t CTDR;
  uint8_t res2[2];

  uint8_t RDT;
  uint8_t res3[3];

  uint8_t RSF;
  uint8_t res4[3];

  uint16_t CNT;
  uint8_t res5[10];

  uint8_t CTL;
  uint8_t res6[3];

  uint16_t CSBR;
  uint8_t res7[2];

  uint16_t CRBR;
  uint8_t res8[2];

  uint16_t CTBR;
};

#define PWGA9 (*(volatile struct PWGA9_tag *) 0xffe71240)

struct PWGA10_tag
{
  uint16_t CSDR;
  uint8_t res0[2];

  uint16_t CRDR;
  uint8_t res1[2];

  uint16_t CTDR;
  uint8_t res2[2];

  uint8_t RDT;
  uint8_t res3[3];

  uint8_t RSF;
  uint8_t res4[3];

  uint16_t CNT;
  uint8_t res5[10];

  uint8_t CTL;
  uint8_t res6[3];

  uint16_t CSBR;
  uint8_t res7[2];

  uint16_t CRBR;
  uint8_t res8[2];

  uint16_t CTBR;
};

#define PWGA10 (*(volatile struct PWGA10_tag *) 0xffe71280)

struct PWGA11_tag
{
  uint16_t CSDR;
  uint8_t res0[2];

  uint16_t CRDR;
  uint8_t res1[2];

  uint16_t CTDR;
  uint8_t res2[2];

  uint8_t RDT;
  uint8_t res3[3];

  uint8_t RSF;
  uint8_t res4[3];

  uint16_t CNT;
  uint8_t res5[10];

  uint8_t CTL;
  uint8_t res6[3];

  uint16_t CSBR;
  uint8_t res7[2];

  uint16_t CRBR;
  uint8_t res8[2];

  uint16_t CTBR;
};

#define PWGA11 (*(volatile struct PWGA11_tag *) 0xffe712c0)

struct PWGA12_tag
{
  uint16_t CSDR;
  uint8_t res0[2];

  uint16_t CRDR;
  uint8_t res1[2];

  uint16_t CTDR;
  uint8_t res2[2];

  uint8_t RDT;
  uint8_t res3[3];

  uint8_t RSF;
  uint8_t res4[3];

  uint16_t CNT;
  uint8_t res5[10];

  uint8_t CTL;
  uint8_t res6[3];

  uint16_t CSBR;
  uint8_t res7[2];

  uint16_t CRBR;
  uint8_t res8[2];

  uint16_t CTBR;
};

#define PWGA12 (*(volatile struct PWGA12_tag *) 0xffe71300)

struct PWGA13_tag
{
  uint16_t CSDR;
  uint8_t res0[2];

  uint16_t CRDR;
  uint8_t res1[2];

  uint16_t CTDR;
  uint8_t res2[2];

  uint8_t RDT;
  uint8_t res3[3];

  uint8_t RSF;
  uint8_t res4[3];

  uint16_t CNT;
  uint8_t res5[10];

  uint8_t CTL;
  uint8_t res6[3];

  uint16_t CSBR;
  uint8_t res7[2];

  uint16_t CRBR;
  uint8_t res8[2];

  uint16_t CTBR;
};

#define PWGA13 (*(volatile struct PWGA13_tag *) 0xffe71340)

struct PWGA14_tag
{
  uint16_t CSDR;
  uint8_t res0[2];

  uint16_t CRDR;
  uint8_t res1[2];

  uint16_t CTDR;
  uint8_t res2[2];

  uint8_t RDT;
  uint8_t res3[3];

  uint8_t RSF;
  uint8_t res4[3];

  uint16_t CNT;
  uint8_t res5[10];

  uint8_t CTL;
  uint8_t res6[3];

  uint16_t CSBR;
  uint8_t res7[2];

  uint16_t CRBR;
  uint8_t res8[2];

  uint16_t CTBR;
};

#define PWGA14 (*(volatile struct PWGA14_tag *) 0xffe71380)

struct PWGA15_tag
{
  uint16_t CSDR;
  uint8_t res0[2];

  uint16_t CRDR;
  uint8_t res1[2];

  uint16_t CTDR;
  uint8_t res2[2];

  uint8_t RDT;
  uint8_t res3[3];

  uint8_t RSF;
  uint8_t res4[3];

  uint16_t CNT;
  uint8_t res5[10];

  uint8_t CTL;
  uint8_t res6[3];

  uint16_t CSBR;
  uint8_t res7[2];

  uint16_t CRBR;
  uint8_t res8[2];

  uint16_t CTBR;
};

#define PWGA15 (*(volatile struct PWGA15_tag *) 0xffe713c0)

struct PWGA16_tag
{
  uint16_t CSDR;
  uint8_t res0[2];

  uint16_t CRDR;
  uint8_t res1[2];

  uint16_t CTDR;
  uint8_t res2[2];

  uint8_t RDT;
  uint8_t res3[3];

  uint8_t RSF;
  uint8_t res4[3];

  uint16_t CNT;
  uint8_t res5[10];

  uint8_t CTL;
  uint8_t res6[3];

  uint16_t CSBR;
  uint8_t res7[2];

  uint16_t CRBR;
  uint8_t res8[2];

  uint16_t CTBR;
};

#define PWGA16 (*(volatile struct PWGA16_tag *) 0xffe71400)

struct PWGA17_tag
{
  uint16_t CSDR;
  uint8_t res0[2];

  uint16_t CRDR;
  uint8_t res1[2];

  uint16_t CTDR;
  uint8_t res2[2];

  uint8_t RDT;
  uint8_t res3[3];

  uint8_t RSF;
  uint8_t res4[3];

  uint16_t CNT;
  uint8_t res5[10];

  uint8_t CTL;
  uint8_t res6[3];

  uint16_t CSBR;
  uint8_t res7[2];

  uint16_t CRBR;
  uint8_t res8[2];

  uint16_t CTBR;
};

#define PWGA17 (*(volatile struct PWGA17_tag *) 0xffe71440)

struct PWGA18_tag
{
  uint16_t CSDR;
  uint8_t res0[2];

  uint16_t CRDR;
  uint8_t res1[2];

  uint16_t CTDR;
  uint8_t res2[2];

  uint8_t RDT;
  uint8_t res3[3];

  uint8_t RSF;
  uint8_t res4[3];

  uint16_t CNT;
  uint8_t res5[10];

  uint8_t CTL;
  uint8_t res6[3];

  uint16_t CSBR;
  uint8_t res7[2];

  uint16_t CRBR;
  uint8_t res8[2];

  uint16_t CTBR;
};

#define PWGA18 (*(volatile struct PWGA18_tag *) 0xffe71480)

struct PWGA19_tag
{
  uint16_t CSDR;
  uint8_t res0[2];

  uint16_t CRDR;
  uint8_t res1[2];

  uint16_t CTDR;
  uint8_t res2[2];

  uint8_t RDT;
  uint8_t res3[3];

  uint8_t RSF;
  uint8_t res4[3];

  uint16_t CNT;
  uint8_t res5[10];

  uint8_t CTL;
  uint8_t res6[3];

  uint16_t CSBR;
  uint8_t res7[2];

  uint16_t CRBR;
  uint8_t res8[2];

  uint16_t CTBR;
};

#define PWGA19 (*(volatile struct PWGA19_tag *) 0xffe714c0)

struct PWGA20_tag
{
  uint16_t CSDR;
  uint8_t res0[2];

  uint16_t CRDR;
  uint8_t res1[2];

  uint16_t CTDR;
  uint8_t res2[2];

  uint8_t RDT;
  uint8_t res3[3];

  uint8_t RSF;
  uint8_t res4[3];

  uint16_t CNT;
  uint8_t res5[10];

  uint8_t CTL;
  uint8_t res6[3];

  uint16_t CSBR;
  uint8_t res7[2];

  uint16_t CRBR;
  uint8_t res8[2];

  uint16_t CTBR;
};

#define PWGA20 (*(volatile struct PWGA20_tag *) 0xffe71500)

struct PWGA21_tag
{
  uint16_t CSDR;
  uint8_t res0[2];

  uint16_t CRDR;
  uint8_t res1[2];

  uint16_t CTDR;
  uint8_t res2[2];

  uint8_t RDT;
  uint8_t res3[3];

  uint8_t RSF;
  uint8_t res4[3];

  uint16_t CNT;
  uint8_t res5[10];

  uint8_t CTL;
  uint8_t res6[3];

  uint16_t CSBR;
  uint8_t res7[2];

  uint16_t CRBR;
  uint8_t res8[2];

  uint16_t CTBR;
};

#define PWGA21 (*(volatile struct PWGA21_tag *) 0xffe71540)

struct PWGA22_tag
{
  uint16_t CSDR;
  uint8_t res0[2];

  uint16_t CRDR;
  uint8_t res1[2];

  uint16_t CTDR;
  uint8_t res2[2];

  uint8_t RDT;
  uint8_t res3[3];

  uint8_t RSF;
  uint8_t res4[3];

  uint16_t CNT;
  uint8_t res5[10];

  uint8_t CTL;
  uint8_t res6[3];

  uint16_t CSBR;
  uint8_t res7[2];

  uint16_t CRBR;
  uint8_t res8[2];

  uint16_t CTBR;
};

#define PWGA22 (*(volatile struct PWGA22_tag *) 0xffe71580)

struct PWGA23_tag
{
  uint16_t CSDR;
  uint8_t res0[2];

  uint16_t CRDR;
  uint8_t res1[2];

  uint16_t CTDR;
  uint8_t res2[2];

  uint8_t RDT;
  uint8_t res3[3];

  uint8_t RSF;
  uint8_t res4[3];

  uint16_t CNT;
  uint8_t res5[10];

  uint8_t CTL;
  uint8_t res6[3];

  uint16_t CSBR;
  uint8_t res7[2];

  uint16_t CRBR;
  uint8_t res8[2];

  uint16_t CTBR;
};

#define PWGA23 (*(volatile struct PWGA23_tag *) 0xffe715c0)

struct PWGA24_tag
{
  uint16_t CSDR;
  uint8_t res0[2];

  uint16_t CRDR;
  uint8_t res1[2];

  uint16_t CTDR;
  uint8_t res2[2];

  uint8_t RDT;
  uint8_t res3[3];

  uint8_t RSF;
  uint8_t res4[3];

  uint16_t CNT;
  uint8_t res5[10];

  uint8_t CTL;
  uint8_t res6[3];

  uint16_t CSBR;
  uint8_t res7[2];

  uint16_t CRBR;
  uint8_t res8[2];

  uint16_t CTBR;
};

#define PWGA24 (*(volatile struct PWGA24_tag *) 0xffe71600)

struct PWGA25_tag
{
  uint16_t CSDR;
  uint8_t res0[2];

  uint16_t CRDR;
  uint8_t res1[2];

  uint16_t CTDR;
  uint8_t res2[2];

  uint8_t RDT;
  uint8_t res3[3];

  uint8_t RSF;
  uint8_t res4[3];

  uint16_t CNT;
  uint8_t res5[10];

  uint8_t CTL;
  uint8_t res6[3];

  uint16_t CSBR;
  uint8_t res7[2];

  uint16_t CRBR;
  uint8_t res8[2];

  uint16_t CTBR;
};

#define PWGA25 (*(volatile struct PWGA25_tag *) 0xffe71640)

struct PWGA26_tag
{
  uint16_t CSDR;
  uint8_t res0[2];

  uint16_t CRDR;
  uint8_t res1[2];

  uint16_t CTDR;
  uint8_t res2[2];

  uint8_t RDT;
  uint8_t res3[3];

  uint8_t RSF;
  uint8_t res4[3];

  uint16_t CNT;
  uint8_t res5[10];

  uint8_t CTL;
  uint8_t res6[3];

  uint16_t CSBR;
  uint8_t res7[2];

  uint16_t CRBR;
  uint8_t res8[2];

  uint16_t CTBR;
};

#define PWGA26 (*(volatile struct PWGA26_tag *) 0xffe71680)

struct PWGA27_tag
{
  uint16_t CSDR;
  uint8_t res0[2];

  uint16_t CRDR;
  uint8_t res1[2];

  uint16_t CTDR;
  uint8_t res2[2];

  uint8_t RDT;
  uint8_t res3[3];

  uint8_t RSF;
  uint8_t res4[3];

  uint16_t CNT;
  uint8_t res5[10];

  uint8_t CTL;
  uint8_t res6[3];

  uint16_t CSBR;
  uint8_t res7[2];

  uint16_t CRBR;
  uint8_t res8[2];

  uint16_t CTBR;
};

#define PWGA27 (*(volatile struct PWGA27_tag *) 0xffe716c0)

struct PWGA28_tag
{
  uint16_t CSDR;
  uint8_t res0[2];

  uint16_t CRDR;
  uint8_t res1[2];

  uint16_t CTDR;
  uint8_t res2[2];

  uint8_t RDT;
  uint8_t res3[3];

  uint8_t RSF;
  uint8_t res4[3];

  uint16_t CNT;
  uint8_t res5[10];

  uint8_t CTL;
  uint8_t res6[3];

  uint16_t CSBR;
  uint8_t res7[2];

  uint16_t CRBR;
  uint8_t res8[2];

  uint16_t CTBR;
};

#define PWGA28 (*(volatile struct PWGA28_tag *) 0xffe71700)

struct PWGA29_tag
{
  uint16_t CSDR;
  uint8_t res0[2];

  uint16_t CRDR;
  uint8_t res1[2];

  uint16_t CTDR;
  uint8_t res2[2];

  uint8_t RDT;
  uint8_t res3[3];

  uint8_t RSF;
  uint8_t res4[3];

  uint16_t CNT;
  uint8_t res5[10];

  uint8_t CTL;
  uint8_t res6[3];

  uint16_t CSBR;
  uint8_t res7[2];

  uint16_t CRBR;
  uint8_t res8[2];

  uint16_t CTBR;
};

#define PWGA29 (*(volatile struct PWGA29_tag *) 0xffe71740)

struct PWGA30_tag
{
  uint16_t CSDR;
  uint8_t res0[2];

  uint16_t CRDR;
  uint8_t res1[2];

  uint16_t CTDR;
  uint8_t res2[2];

  uint8_t RDT;
  uint8_t res3[3];

  uint8_t RSF;
  uint8_t res4[3];

  uint16_t CNT;
  uint8_t res5[10];

  uint8_t CTL;
  uint8_t res6[3];

  uint16_t CSBR;
  uint8_t res7[2];

  uint16_t CRBR;
  uint8_t res8[2];

  uint16_t CTBR;
};

#define PWGA30 (*(volatile struct PWGA30_tag *) 0xffe71780)

struct PWGA31_tag
{
  uint16_t CSDR;
  uint8_t res0[2];

  uint16_t CRDR;
  uint8_t res1[2];

  uint16_t CTDR;
  uint8_t res2[2];

  uint8_t RDT;
  uint8_t res3[3];

  uint8_t RSF;
  uint8_t res4[3];

  uint16_t CNT;
  uint8_t res5[10];

  uint8_t CTL;
  uint8_t res6[3];

  uint16_t CSBR;
  uint8_t res7[2];

  uint16_t CRBR;
  uint8_t res8[2];

  uint16_t CTBR;
};

#define PWGA31 (*(volatile struct PWGA31_tag *) 0xffe717c0)

struct PWGA32_tag
{
  uint16_t CSDR;
  uint8_t res0[2];

  uint16_t CRDR;
  uint8_t res1[2];

  uint16_t CTDR;
  uint8_t res2[2];

  uint8_t RDT;
  uint8_t res3[3];

  uint8_t RSF;
  uint8_t res4[3];

  uint16_t CNT;
  uint8_t res5[10];

  uint8_t CTL;
  uint8_t res6[3];

  uint16_t CSBR;
  uint8_t res7[2];

  uint16_t CRBR;
  uint8_t res8[2];

  uint16_t CTBR;
};

#define PWGA32 (*(volatile struct PWGA32_tag *) 0xffe71800)

struct PWGA33_tag
{
  uint16_t CSDR;
  uint8_t res0[2];

  uint16_t CRDR;
  uint8_t res1[2];

  uint16_t CTDR;
  uint8_t res2[2];

  uint8_t RDT;
  uint8_t res3[3];

  uint8_t RSF;
  uint8_t res4[3];

  uint16_t CNT;
  uint8_t res5[10];

  uint8_t CTL;
  uint8_t res6[3];

  uint16_t CSBR;
  uint8_t res7[2];

  uint16_t CRBR;
  uint8_t res8[2];

  uint16_t CTBR;
};

#define PWGA33 (*(volatile struct PWGA33_tag *) 0xffe71840)

struct PWGA34_tag
{
  uint16_t CSDR;
  uint8_t res0[2];

  uint16_t CRDR;
  uint8_t res1[2];

  uint16_t CTDR;
  uint8_t res2[2];

  uint8_t RDT;
  uint8_t res3[3];

  uint8_t RSF;
  uint8_t res4[3];

  uint16_t CNT;
  uint8_t res5[10];

  uint8_t CTL;
  uint8_t res6[3];

  uint16_t CSBR;
  uint8_t res7[2];

  uint16_t CRBR;
  uint8_t res8[2];

  uint16_t CTBR;
};

#define PWGA34 (*(volatile struct PWGA34_tag *) 0xffe71880)

struct PWGA35_tag
{
  uint16_t CSDR;
  uint8_t res0[2];

  uint16_t CRDR;
  uint8_t res1[2];

  uint16_t CTDR;
  uint8_t res2[2];

  uint8_t RDT;
  uint8_t res3[3];

  uint8_t RSF;
  uint8_t res4[3];

  uint16_t CNT;
  uint8_t res5[10];

  uint8_t CTL;
  uint8_t res6[3];

  uint16_t CSBR;
  uint8_t res7[2];

  uint16_t CRBR;
  uint8_t res8[2];

  uint16_t CTBR;
};

#define PWGA35 (*(volatile struct PWGA35_tag *) 0xffe718c0)

struct PWGA36_tag
{
  uint16_t CSDR;
  uint8_t res0[2];

  uint16_t CRDR;
  uint8_t res1[2];

  uint16_t CTDR;
  uint8_t res2[2];

  uint8_t RDT;
  uint8_t res3[3];

  uint8_t RSF;
  uint8_t res4[3];

  uint16_t CNT;
  uint8_t res5[10];

  uint8_t CTL;
  uint8_t res6[3];

  uint16_t CSBR;
  uint8_t res7[2];

  uint16_t CRBR;
  uint8_t res8[2];

  uint16_t CTBR;
};

#define PWGA36 (*(volatile struct PWGA36_tag *) 0xffe71900)

struct PWGA37_tag
{
  uint16_t CSDR;
  uint8_t res0[2];

  uint16_t CRDR;
  uint8_t res1[2];

  uint16_t CTDR;
  uint8_t res2[2];

  uint8_t RDT;
  uint8_t res3[3];

  uint8_t RSF;
  uint8_t res4[3];

  uint16_t CNT;
  uint8_t res5[10];

  uint8_t CTL;
  uint8_t res6[3];

  uint16_t CSBR;
  uint8_t res7[2];

  uint16_t CRBR;
  uint8_t res8[2];

  uint16_t CTBR;
};

#define PWGA37 (*(volatile struct PWGA37_tag *) 0xffe71940)

struct PWGA38_tag
{
  uint16_t CSDR;
  uint8_t res0[2];

  uint16_t CRDR;
  uint8_t res1[2];

  uint16_t CTDR;
  uint8_t res2[2];

  uint8_t RDT;
  uint8_t res3[3];

  uint8_t RSF;
  uint8_t res4[3];

  uint16_t CNT;
  uint8_t res5[10];

  uint8_t CTL;
  uint8_t res6[3];

  uint16_t CSBR;
  uint8_t res7[2];

  uint16_t CRBR;
  uint8_t res8[2];

  uint16_t CTBR;
};

#define PWGA38 (*(volatile struct PWGA38_tag *) 0xffe71980)

struct PWGA39_tag
{
  uint16_t CSDR;
  uint8_t res0[2];

  uint16_t CRDR;
  uint8_t res1[2];

  uint16_t CTDR;
  uint8_t res2[2];

  uint8_t RDT;
  uint8_t res3[3];

  uint8_t RSF;
  uint8_t res4[3];

  uint16_t CNT;
  uint8_t res5[10];

  uint8_t CTL;
  uint8_t res6[3];

  uint16_t CSBR;
  uint8_t res7[2];

  uint16_t CRBR;
  uint8_t res8[2];

  uint16_t CTBR;
};

#define PWGA39 (*(volatile struct PWGA39_tag *) 0xffe719c0)

struct PWGA40_tag
{
  uint16_t CSDR;
  uint8_t res0[2];

  uint16_t CRDR;
  uint8_t res1[2];

  uint16_t CTDR;
  uint8_t res2[2];

  uint8_t RDT;
  uint8_t res3[3];

  uint8_t RSF;
  uint8_t res4[3];

  uint16_t CNT;
  uint8_t res5[10];

  uint8_t CTL;
  uint8_t res6[3];

  uint16_t CSBR;
  uint8_t res7[2];

  uint16_t CRBR;
  uint8_t res8[2];

  uint16_t CTBR;
};

#define PWGA40 (*(volatile struct PWGA40_tag *) 0xffe71a00)

struct PWGA41_tag
{
  uint16_t CSDR;
  uint8_t res0[2];

  uint16_t CRDR;
  uint8_t res1[2];

  uint16_t CTDR;
  uint8_t res2[2];

  uint8_t RDT;
  uint8_t res3[3];

  uint8_t RSF;
  uint8_t res4[3];

  uint16_t CNT;
  uint8_t res5[10];

  uint8_t CTL;
  uint8_t res6[3];

  uint16_t CSBR;
  uint8_t res7[2];

  uint16_t CRBR;
  uint8_t res8[2];

  uint16_t CTBR;
};

#define PWGA41 (*(volatile struct PWGA41_tag *) 0xffe71a40)

struct PWGA42_tag
{
  uint16_t CSDR;
  uint8_t res0[2];

  uint16_t CRDR;
  uint8_t res1[2];

  uint16_t CTDR;
  uint8_t res2[2];

  uint8_t RDT;
  uint8_t res3[3];

  uint8_t RSF;
  uint8_t res4[3];

  uint16_t CNT;
  uint8_t res5[10];

  uint8_t CTL;
  uint8_t res6[3];

  uint16_t CSBR;
  uint8_t res7[2];

  uint16_t CRBR;
  uint8_t res8[2];

  uint16_t CTBR;
};

#define PWGA42 (*(volatile struct PWGA42_tag *) 0xffe71a80)

struct PWGA43_tag
{
  uint16_t CSDR;
  uint8_t res0[2];

  uint16_t CRDR;
  uint8_t res1[2];

  uint16_t CTDR;
  uint8_t res2[2];

  uint8_t RDT;
  uint8_t res3[3];

  uint8_t RSF;
  uint8_t res4[3];

  uint16_t CNT;
  uint8_t res5[10];

  uint8_t CTL;
  uint8_t res6[3];

  uint16_t CSBR;
  uint8_t res7[2];

  uint16_t CRBR;
  uint8_t res8[2];

  uint16_t CTBR;
};

#define PWGA43 (*(volatile struct PWGA43_tag *) 0xffe71ac0)

struct PWGA44_tag
{
  uint16_t CSDR;
  uint8_t res0[2];

  uint16_t CRDR;
  uint8_t res1[2];

  uint16_t CTDR;
  uint8_t res2[2];

  uint8_t RDT;
  uint8_t res3[3];

  uint8_t RSF;
  uint8_t res4[3];

  uint16_t CNT;
  uint8_t res5[10];

  uint8_t CTL;
  uint8_t res6[3];

  uint16_t CSBR;
  uint8_t res7[2];

  uint16_t CRBR;
  uint8_t res8[2];

  uint16_t CTBR;
};

#define PWGA44 (*(volatile struct PWGA44_tag *) 0xffe71b00)

struct PWGA45_tag
{
  uint16_t CSDR;
  uint8_t res0[2];

  uint16_t CRDR;
  uint8_t res1[2];

  uint16_t CTDR;
  uint8_t res2[2];

  uint8_t RDT;
  uint8_t res3[3];

  uint8_t RSF;
  uint8_t res4[3];

  uint16_t CNT;
  uint8_t res5[10];

  uint8_t CTL;
  uint8_t res6[3];

  uint16_t CSBR;
  uint8_t res7[2];

  uint16_t CRBR;
  uint8_t res8[2];

  uint16_t CTBR;
};

#define PWGA45 (*(volatile struct PWGA45_tag *) 0xffe71b40)

struct PWGA46_tag
{
  uint16_t CSDR;
  uint8_t res0[2];

  uint16_t CRDR;
  uint8_t res1[2];

  uint16_t CTDR;
  uint8_t res2[2];

  uint8_t RDT;
  uint8_t res3[3];

  uint8_t RSF;
  uint8_t res4[3];

  uint16_t CNT;
  uint8_t res5[10];

  uint8_t CTL;
  uint8_t res6[3];

  uint16_t CSBR;
  uint8_t res7[2];

  uint16_t CRBR;
  uint8_t res8[2];

  uint16_t CTBR;
};

#define PWGA46 (*(volatile struct PWGA46_tag *) 0xffe71b80)

struct PWGA47_tag
{
  uint16_t CSDR;
  uint8_t res0[2];

  uint16_t CRDR;
  uint8_t res1[2];

  uint16_t CTDR;
  uint8_t res2[2];

  uint8_t RDT;
  uint8_t res3[3];

  uint8_t RSF;
  uint8_t res4[3];

  uint16_t CNT;
  uint8_t res5[10];

  uint8_t CTL;
  uint8_t res6[3];

  uint16_t CSBR;
  uint8_t res7[2];

  uint16_t CRBR;
  uint8_t res8[2];

  uint16_t CTBR;
};

#define PWGA47 (*(volatile struct PWGA47_tag *) 0xffe71bc0)

struct PWGA48_tag
{
  uint16_t CSDR;
  uint8_t res0[2];

  uint16_t CRDR;
  uint8_t res1[2];

  uint16_t CTDR;
  uint8_t res2[2];

  uint8_t RDT;
  uint8_t res3[3];

  uint8_t RSF;
  uint8_t res4[3];

  uint16_t CNT;
  uint8_t res5[10];

  uint8_t CTL;
  uint8_t res6[3];

  uint16_t CSBR;
  uint8_t res7[2];

  uint16_t CRBR;
  uint8_t res8[2];

  uint16_t CTBR;
};

#define PWGA48 (*(volatile struct PWGA48_tag *) 0xffe71c00)

struct PWGA49_tag
{
  uint16_t CSDR;
  uint8_t res0[2];

  uint16_t CRDR;
  uint8_t res1[2];

  uint16_t CTDR;
  uint8_t res2[2];

  uint8_t RDT;
  uint8_t res3[3];

  uint8_t RSF;
  uint8_t res4[3];

  uint16_t CNT;
  uint8_t res5[10];

  uint8_t CTL;
  uint8_t res6[3];

  uint16_t CSBR;
  uint8_t res7[2];

  uint16_t CRBR;
  uint8_t res8[2];

  uint16_t CTBR;
};

#define PWGA49 (*(volatile struct PWGA49_tag *) 0xffe71c40)

struct PWGA50_tag
{
  uint16_t CSDR;
  uint8_t res0[2];

  uint16_t CRDR;
  uint8_t res1[2];

  uint16_t CTDR;
  uint8_t res2[2];

  uint8_t RDT;
  uint8_t res3[3];

  uint8_t RSF;
  uint8_t res4[3];

  uint16_t CNT;
  uint8_t res5[10];

  uint8_t CTL;
  uint8_t res6[3];

  uint16_t CSBR;
  uint8_t res7[2];

  uint16_t CRBR;
  uint8_t res8[2];

  uint16_t CTBR;
};

#define PWGA50 (*(volatile struct PWGA50_tag *) 0xffe71c80)

struct PWGA51_tag
{
  uint16_t CSDR;
  uint8_t res0[2];

  uint16_t CRDR;
  uint8_t res1[2];

  uint16_t CTDR;
  uint8_t res2[2];

  uint8_t RDT;
  uint8_t res3[3];

  uint8_t RSF;
  uint8_t res4[3];

  uint16_t CNT;
  uint8_t res5[10];

  uint8_t CTL;
  uint8_t res6[3];

  uint16_t CSBR;
  uint8_t res7[2];

  uint16_t CRBR;
  uint8_t res8[2];

  uint16_t CTBR;
};

#define PWGA51 (*(volatile struct PWGA51_tag *) 0xffe71cc0)

struct PWGA52_tag
{
  uint16_t CSDR;
  uint8_t res0[2];

  uint16_t CRDR;
  uint8_t res1[2];

  uint16_t CTDR;
  uint8_t res2[2];

  uint8_t RDT;
  uint8_t res3[3];

  uint8_t RSF;
  uint8_t res4[3];

  uint16_t CNT;
  uint8_t res5[10];

  uint8_t CTL;
  uint8_t res6[3];

  uint16_t CSBR;
  uint8_t res7[2];

  uint16_t CRBR;
  uint8_t res8[2];

  uint16_t CTBR;
};

#define PWGA52 (*(volatile struct PWGA52_tag *) 0xffe71d00)

struct PWGA53_tag
{
  uint16_t CSDR;
  uint8_t res0[2];

  uint16_t CRDR;
  uint8_t res1[2];

  uint16_t CTDR;
  uint8_t res2[2];

  uint8_t RDT;
  uint8_t res3[3];

  uint8_t RSF;
  uint8_t res4[3];

  uint16_t CNT;
  uint8_t res5[10];

  uint8_t CTL;
  uint8_t res6[3];

  uint16_t CSBR;
  uint8_t res7[2];

  uint16_t CRBR;
  uint8_t res8[2];

  uint16_t CTBR;
};

#define PWGA53 (*(volatile struct PWGA53_tag *) 0xffe71d40)

struct PWGA54_tag
{
  uint16_t CSDR;
  uint8_t res0[2];

  uint16_t CRDR;
  uint8_t res1[2];

  uint16_t CTDR;
  uint8_t res2[2];

  uint8_t RDT;
  uint8_t res3[3];

  uint8_t RSF;
  uint8_t res4[3];

  uint16_t CNT;
  uint8_t res5[10];

  uint8_t CTL;
  uint8_t res6[3];

  uint16_t CSBR;
  uint8_t res7[2];

  uint16_t CRBR;
  uint8_t res8[2];

  uint16_t CTBR;
};

#define PWGA54 (*(volatile struct PWGA54_tag *) 0xffe71d80)

struct PWGA55_tag
{
  uint16_t CSDR;
  uint8_t res0[2];

  uint16_t CRDR;
  uint8_t res1[2];

  uint16_t CTDR;
  uint8_t res2[2];

  uint8_t RDT;
  uint8_t res3[3];

  uint8_t RSF;
  uint8_t res4[3];

  uint16_t CNT;
  uint8_t res5[10];

  uint8_t CTL;
  uint8_t res6[3];

  uint16_t CSBR;
  uint8_t res7[2];

  uint16_t CRBR;
  uint8_t res8[2];

  uint16_t CTBR;
};

#define PWGA55 (*(volatile struct PWGA55_tag *) 0xffe71dc0)

struct PWGA56_tag
{
  uint16_t CSDR;
  uint8_t res0[2];

  uint16_t CRDR;
  uint8_t res1[2];

  uint16_t CTDR;
  uint8_t res2[2];

  uint8_t RDT;
  uint8_t res3[3];

  uint8_t RSF;
  uint8_t res4[3];

  uint16_t CNT;
  uint8_t res5[10];

  uint8_t CTL;
  uint8_t res6[3];

  uint16_t CSBR;
  uint8_t res7[2];

  uint16_t CRBR;
  uint8_t res8[2];

  uint16_t CTBR;
};

#define PWGA56 (*(volatile struct PWGA56_tag *) 0xffe71e00)

struct PWGA57_tag
{
  uint16_t CSDR;
  uint8_t res0[2];

  uint16_t CRDR;
  uint8_t res1[2];

  uint16_t CTDR;
  uint8_t res2[2];

  uint8_t RDT;
  uint8_t res3[3];

  uint8_t RSF;
  uint8_t res4[3];

  uint16_t CNT;
  uint8_t res5[10];

  uint8_t CTL;
  uint8_t res6[3];

  uint16_t CSBR;
  uint8_t res7[2];

  uint16_t CRBR;
  uint8_t res8[2];

  uint16_t CTBR;
};

#define PWGA57 (*(volatile struct PWGA57_tag *) 0xffe71e40)

struct PWGA58_tag
{
  uint16_t CSDR;
  uint8_t res0[2];

  uint16_t CRDR;
  uint8_t res1[2];

  uint16_t CTDR;
  uint8_t res2[2];

  uint8_t RDT;
  uint8_t res3[3];

  uint8_t RSF;
  uint8_t res4[3];

  uint16_t CNT;
  uint8_t res5[10];

  uint8_t CTL;
  uint8_t res6[3];

  uint16_t CSBR;
  uint8_t res7[2];

  uint16_t CRBR;
  uint8_t res8[2];

  uint16_t CTBR;
};

#define PWGA58 (*(volatile struct PWGA58_tag *) 0xffe71e80)

struct PWGA59_tag
{
  uint16_t CSDR;
  uint8_t res0[2];

  uint16_t CRDR;
  uint8_t res1[2];

  uint16_t CTDR;
  uint8_t res2[2];

  uint8_t RDT;
  uint8_t res3[3];

  uint8_t RSF;
  uint8_t res4[3];

  uint16_t CNT;
  uint8_t res5[10];

  uint8_t CTL;
  uint8_t res6[3];

  uint16_t CSBR;
  uint8_t res7[2];

  uint16_t CRBR;
  uint8_t res8[2];

  uint16_t CTBR;
};

#define PWGA59 (*(volatile struct PWGA59_tag *) 0xffe71ec0)

struct PWGA60_tag
{
  uint16_t CSDR;
  uint8_t res0[2];

  uint16_t CRDR;
  uint8_t res1[2];

  uint16_t CTDR;
  uint8_t res2[2];

  uint8_t RDT;
  uint8_t res3[3];

  uint8_t RSF;
  uint8_t res4[3];

  uint16_t CNT;
  uint8_t res5[10];

  uint8_t CTL;
  uint8_t res6[3];

  uint16_t CSBR;
  uint8_t res7[2];

  uint16_t CRBR;
  uint8_t res8[2];

  uint16_t CTBR;
};

#define PWGA60 (*(volatile struct PWGA60_tag *) 0xffe71f00)

struct PWGA61_tag
{
  uint16_t CSDR;
  uint8_t res0[2];

  uint16_t CRDR;
  uint8_t res1[2];

  uint16_t CTDR;
  uint8_t res2[2];

  uint8_t RDT;
  uint8_t res3[3];

  uint8_t RSF;
  uint8_t res4[3];

  uint16_t CNT;
  uint8_t res5[10];

  uint8_t CTL;
  uint8_t res6[3];

  uint16_t CSBR;
  uint8_t res7[2];

  uint16_t CRBR;
  uint8_t res8[2];

  uint16_t CTBR;
};

#define PWGA61 (*(volatile struct PWGA61_tag *) 0xffe71f40)

struct PWGA62_tag
{
  uint16_t CSDR;
  uint8_t res0[2];

  uint16_t CRDR;
  uint8_t res1[2];

  uint16_t CTDR;
  uint8_t res2[2];

  uint8_t RDT;
  uint8_t res3[3];

  uint8_t RSF;
  uint8_t res4[3];

  uint16_t CNT;
  uint8_t res5[10];

  uint8_t CTL;
  uint8_t res6[3];

  uint16_t CSBR;
  uint8_t res7[2];

  uint16_t CRBR;
  uint8_t res8[2];

  uint16_t CTBR;
};

#define PWGA62 (*(volatile struct PWGA62_tag *) 0xffe71f80)

struct PWGA63_tag
{
  uint16_t CSDR;
  uint8_t res0[2];

  uint16_t CRDR;
  uint8_t res1[2];

  uint16_t CTDR;
  uint8_t res2[2];

  uint8_t RDT;
  uint8_t res3[3];

  uint8_t RSF;
  uint8_t res4[3];

  uint16_t CNT;
  uint8_t res5[10];

  uint8_t CTL;
  uint8_t res6[3];

  uint16_t CSBR;
  uint8_t res7[2];

  uint16_t CRBR;
  uint8_t res8[2];

  uint16_t CTBR;
};

#define PWGA63 (*(volatile struct PWGA63_tag *) 0xffe71fc0)

struct PWGA64_tag
{
  uint16_t CSDR;
  uint8_t res0[2];

  uint16_t CRDR;
  uint8_t res1[2];

  uint16_t CTDR;
  uint8_t res2[2];

  uint8_t RDT;
  uint8_t res3[3];

  uint8_t RSF;
  uint8_t res4[3];

  uint16_t CNT;
  uint8_t res5[10];

  uint8_t CTL;
  uint8_t res6[3];

  uint16_t CSBR;
  uint8_t res7[2];

  uint16_t CRBR;
  uint8_t res8[2];

  uint16_t CTBR;
};

#define PWGA64 (*(volatile struct PWGA64_tag *) 0xffe72000)

struct PWGA65_tag
{
  uint16_t CSDR;
  uint8_t res0[2];

  uint16_t CRDR;
  uint8_t res1[2];

  uint16_t CTDR;
  uint8_t res2[2];

  uint8_t RDT;
  uint8_t res3[3];

  uint8_t RSF;
  uint8_t res4[3];

  uint16_t CNT;
  uint8_t res5[10];

  uint8_t CTL;
  uint8_t res6[3];

  uint16_t CSBR;
  uint8_t res7[2];

  uint16_t CRBR;
  uint8_t res8[2];

  uint16_t CTBR;
};

#define PWGA65 (*(volatile struct PWGA65_tag *) 0xffe72040)

struct PWGA66_tag
{
  uint16_t CSDR;
  uint8_t res0[2];

  uint16_t CRDR;
  uint8_t res1[2];

  uint16_t CTDR;
  uint8_t res2[2];

  uint8_t RDT;
  uint8_t res3[3];

  uint8_t RSF;
  uint8_t res4[3];

  uint16_t CNT;
  uint8_t res5[10];

  uint8_t CTL;
  uint8_t res6[3];

  uint16_t CSBR;
  uint8_t res7[2];

  uint16_t CRBR;
  uint8_t res8[2];

  uint16_t CTBR;
};

#define PWGA66 (*(volatile struct PWGA66_tag *) 0xffe72080)

struct PWGA67_tag
{
  uint16_t CSDR;
  uint8_t res0[2];

  uint16_t CRDR;
  uint8_t res1[2];

  uint16_t CTDR;
  uint8_t res2[2];

  uint8_t RDT;
  uint8_t res3[3];

  uint8_t RSF;
  uint8_t res4[3];

  uint16_t CNT;
  uint8_t res5[10];

  uint8_t CTL;
  uint8_t res6[3];

  uint16_t CSBR;
  uint8_t res7[2];

  uint16_t CRBR;
  uint8_t res8[2];

  uint16_t CTBR;
};

#define PWGA67 (*(volatile struct PWGA67_tag *) 0xffe720c0)

struct PWGA68_tag
{
  uint16_t CSDR;
  uint8_t res0[2];

  uint16_t CRDR;
  uint8_t res1[2];

  uint16_t CTDR;
  uint8_t res2[2];

  uint8_t RDT;
  uint8_t res3[3];

  uint8_t RSF;
  uint8_t res4[3];

  uint16_t CNT;
  uint8_t res5[10];

  uint8_t CTL;
  uint8_t res6[3];

  uint16_t CSBR;
  uint8_t res7[2];

  uint16_t CRBR;
  uint8_t res8[2];

  uint16_t CTBR;
};

#define PWGA68 (*(volatile struct PWGA68_tag *) 0xffe72100)

struct PWGA69_tag
{
  uint16_t CSDR;
  uint8_t res0[2];

  uint16_t CRDR;
  uint8_t res1[2];

  uint16_t CTDR;
  uint8_t res2[2];

  uint8_t RDT;
  uint8_t res3[3];

  uint8_t RSF;
  uint8_t res4[3];

  uint16_t CNT;
  uint8_t res5[10];

  uint8_t CTL;
  uint8_t res6[3];

  uint16_t CSBR;
  uint8_t res7[2];

  uint16_t CRBR;
  uint8_t res8[2];

  uint16_t CTBR;
};

#define PWGA69 (*(volatile struct PWGA69_tag *) 0xffe72140)

struct PWGA70_tag
{
  uint16_t CSDR;
  uint8_t res0[2];

  uint16_t CRDR;
  uint8_t res1[2];

  uint16_t CTDR;
  uint8_t res2[2];

  uint8_t RDT;
  uint8_t res3[3];

  uint8_t RSF;
  uint8_t res4[3];

  uint16_t CNT;
  uint8_t res5[10];

  uint8_t CTL;
  uint8_t res6[3];

  uint16_t CSBR;
  uint8_t res7[2];

  uint16_t CRBR;
  uint8_t res8[2];

  uint16_t CTBR;
};

#define PWGA70 (*(volatile struct PWGA70_tag *) 0xffe72180)

struct PWGA71_tag
{
  uint16_t CSDR;
  uint8_t res0[2];

  uint16_t CRDR;
  uint8_t res1[2];

  uint16_t CTDR;
  uint8_t res2[2];

  uint8_t RDT;
  uint8_t res3[3];

  uint8_t RSF;
  uint8_t res4[3];

  uint16_t CNT;
  uint8_t res5[10];

  uint8_t CTL;
  uint8_t res6[3];

  uint16_t CSBR;
  uint8_t res7[2];

  uint16_t CRBR;
  uint8_t res8[2];

  uint16_t CTBR;
};

#define PWGA71 (*(volatile struct PWGA71_tag *) 0xffe721c0)

struct PWBA0_tag
{
  uint16_t BRS0;
  uint8_t res0[2];

  uint16_t BRS1;
  uint8_t res1[2];

  uint16_t BRS2;
  uint8_t res2[2];

  uint16_t BRS3;
  uint8_t res3[2];

  uint8_t TE;
  uint8_t res4[3];

  uint8_t TS;
  uint8_t res5[3];

  uint8_t TT;
  uint8_t res6[3];

  uint8_t EMU;
};

#define PWBA0 (*(volatile struct PWBA0_tag *) 0xffe72800)

struct RTCA0_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SLSB:1;
      uint64_t AMPM:1;
      uint64_t CEST:1;
      uint64_t CE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL0;

  uint8_t res0[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CT0:1;
      uint64_t CT1:1;
      uint64_t CT2:1;
      uint64_t EN1S:1;
      uint64_t ENALM:1;
      uint64_t EN1HZ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL1;

  uint8_t res1[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t WAIT:1;
      uint64_t WST:1;
      uint64_t RSUB:1;
      uint64_t RSST:1;
      uint64_t WSST:1;
      uint64_t WUST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL2;

  uint8_t res2[3];

  uint32_t SUBC;
  uint32_t SRBU;
  uint8_t SEC;
  uint8_t res3[3];

  uint8_t MIN;
  uint8_t res4[3];

  uint8_t HOUR;
  uint8_t res5[3];

  uint8_t WEEK;
  uint8_t res6[3];

  uint8_t DAY;
  uint8_t res7[3];

  uint8_t MONTH;
  uint8_t res8[3];

  uint8_t YEAR;
  uint8_t res9[3];

  uint32_t TIME;
  uint32_t CAL;
  uint8_t SUBU;
  uint8_t res10[3];

  uint32_t SCMP;
  uint8_t ALM;
  uint8_t res11[3];

  uint8_t ALH;
  uint8_t res12[3];

  uint8_t ALW;
  uint8_t res13[3];

  uint8_t SECC;
  uint8_t res14[3];

  uint8_t MINC;
  uint8_t res15[3];

  uint8_t HOURC;
  uint8_t res16[3];

  uint8_t WEEKC;
  uint8_t res17[3];

  uint8_t DAYC;
  uint8_t res18[3];

  uint8_t MONC;
  uint8_t res19[3];

  uint8_t YEARC;
  uint8_t res20[3];

  uint32_t TIMEC;
  uint32_t CALC;
  uint8_t res21[4];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:7;
      uint64_t SVSDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) EMU;

};

#define RTCA0 (*(volatile struct RTCA0_tag *) 0xffe78000)

struct ENCA0_tag
{
  uint16_t CCR0;
  uint8_t res0[2];

  uint16_t CCR1;
  uint8_t res1[2];

  uint16_t CNT;
  uint8_t res2[2];

  uint8_t FLG;
  uint8_t res3[3];

  uint8_t FGC;
  uint8_t res4[3];

  uint8_t TE;
  uint8_t res5[3];

  uint8_t TS;
  uint8_t res6[3];

  uint8_t TT;
  uint8_t res7[3];

  uint8_t IOC0;
  uint8_t res8[31];

  uint16_t CTL;
  uint8_t res9[2];

  uint8_t IOC1;
  uint8_t res10[3];

  uint8_t EMU;
};

#define ENCA0 (*(volatile struct ENCA0_tag *) 0xffe80000)

struct TAPA0_tag
{
  uint16_t FLG;
  uint8_t res0[2];

  uint8_t ACWE;
  uint8_t res1[3];

  uint8_t ACTS;
  uint8_t res2[3];

  uint8_t ACTT;
  uint8_t res3[7];

  uint8_t OPHS;
  uint8_t res4[3];

  uint8_t OPHT;
  uint8_t res5[7];

  uint16_t CTL0;
  uint8_t res6[2];

  uint8_t CTL1;
  uint8_t res7[3];

  uint8_t EMU;
};

#define TAPA0 (*(volatile struct TAPA0_tag *) 0xffe90000)

struct OSTM0_tag
{
  uint32_t CMP;
  uint32_t CNT;
  uint8_t res0[8];

  uint8_t TE;
  uint8_t res1[3];

  uint8_t TS;
  uint8_t res2[3];

  uint8_t TT;
  uint8_t res3[7];

  uint8_t CTL;
  uint8_t res4[3];

  uint8_t EMU;
};

#define OSTM0 (*(volatile struct OSTM0_tag *) 0xffec0000)

struct WDTA0_tag
{
  uint8_t WDTE;
  uint8_t res0[3];

  uint8_t EVAC;
  uint8_t res1[3];

  uint8_t REF;
  uint8_t res2[3];

  uint8_t MD;
};

#define WDTA0 (*(volatile struct WDTA0_tag *) 0xffed0000)

struct WDTA1_tag
{
  uint8_t WDTE;
  uint8_t res0[3];

  uint8_t EVAC;
  uint8_t res1[3];

  uint8_t REF;
  uint8_t res2[3];

  uint8_t MD;
};

#define WDTA1 (*(volatile struct WDTA1_tag *) 0xffed1000)

struct ADCA0_tag
{
  uint32_t VCR00;
  uint32_t VCR01;
  uint32_t VCR02;
  uint32_t VCR03;
  uint32_t VCR04;
  uint32_t VCR05;
  uint32_t VCR06;
  uint32_t VCR07;
  uint32_t VCR08;
  uint32_t VCR09;
  uint32_t VCR10;
  uint32_t VCR11;
  uint32_t VCR12;
  uint32_t VCR13;
  uint32_t VCR14;
  uint32_t VCR15;
  uint32_t VCR16;
  uint32_t VCR17;
  uint32_t VCR18;
  uint32_t VCR19;
  uint32_t VCR20;
  uint32_t VCR21;
  uint32_t VCR22;
  uint32_t VCR23;
  uint32_t VCR24;
  uint32_t VCR25;
  uint32_t VCR26;
  uint32_t VCR27;
  uint32_t VCR28;
  uint32_t VCR29;
  uint32_t VCR30;
  uint32_t VCR31;
  uint32_t VCR32;
  uint32_t VCR33;
  uint32_t VCR34;
  uint32_t VCR35;
  uint32_t VCR36;
  uint32_t VCR37;
  uint32_t VCR38;
  uint32_t VCR39;
  uint32_t VCR40;
  uint32_t VCR41;
  uint32_t VCR42;
  uint32_t VCR43;
  uint32_t VCR44;
  uint32_t VCR45;
  uint32_t VCR46;
  uint32_t VCR47;
  uint32_t VCR48;
  uint32_t VCR49;
  uint8_t res0[44];

  uint32_t PWDVCR;
  uint8_t res1[8];

  uint32_t DR00;
  uint32_t DR02;
  uint32_t DR04;
  uint32_t DR06;
  uint32_t DR08;
  uint32_t DR10;
  uint32_t DR12;
  uint32_t DR14;
  uint32_t DR16;
  uint32_t DR18;
  uint32_t DR20;
  uint32_t DR22;
  uint32_t DR24;
  uint32_t DR26;
  uint32_t DR28;
  uint32_t DR30;
  uint32_t DR32;
  uint32_t DR34;
  uint32_t DR36;
  uint32_t DR38;
  uint32_t DR40;
  uint32_t DR42;
  uint32_t DR44;
  uint32_t DR46;
  uint32_t DR48;
  uint8_t res2[20];

  uint32_t PWDTSNDR;
  uint8_t res3[132];

  uint32_t DIR00;
  uint32_t DIR01;
  uint32_t DIR02;
  uint32_t DIR03;
  uint32_t DIR04;
  uint32_t DIR05;
  uint32_t DIR06;
  uint32_t DIR07;
  uint32_t DIR08;
  uint32_t DIR09;
  uint32_t DIR10;
  uint32_t DIR11;
  uint32_t DIR12;
  uint32_t DIR13;
  uint32_t DIR14;
  uint32_t DIR15;
  uint32_t DIR16;
  uint32_t DIR17;
  uint32_t DIR18;
  uint32_t DIR19;
  uint32_t DIR20;
  uint32_t DIR21;
  uint32_t DIR22;
  uint32_t DIR23;
  uint32_t DIR24;
  uint32_t DIR25;
  uint32_t DIR26;
  uint32_t DIR27;
  uint32_t DIR28;
  uint32_t DIR29;
  uint32_t DIR30;
  uint32_t DIR31;
  uint32_t DIR32;
  uint32_t DIR33;
  uint32_t DIR34;
  uint32_t DIR35;
  uint32_t DIR36;
  uint32_t DIR37;
  uint32_t DIR38;
  uint32_t DIR39;
  uint32_t DIR40;
  uint32_t DIR41;
  uint32_t DIR42;
  uint32_t DIR43;
  uint32_t DIR44;
  uint32_t DIR45;
  uint32_t DIR46;
  uint32_t DIR47;
  uint32_t DIR48;
  uint32_t DIR49;
  uint8_t res4[44];

  uint32_t PWDDIR;
  uint8_t res5[8];

  uint32_t ADHALTR;
  uint32_t ADCR;
  uint32_t SGSTR;
  uint32_t MPXCURR;
  uint8_t res6[4];

  uint32_t THSMPSTCR;
  uint32_t THCR;
  uint32_t THAHLDSTCR;
  uint32_t THBHLDSTCR;
  uint32_t THACR;
  uint32_t THBCR;
  uint32_t THER;
  uint32_t THGSR;
  uint32_t SFTCR;
  uint32_t ULLMTBR0;
  uint32_t ULLMTBR1;
  uint32_t ULLMTBR2;
  uint32_t ECR;
  uint32_t ULER;
  uint32_t OWER;
  uint32_t DGCTL0;
  uint32_t DGCTL1;
  uint32_t PDCTL1;
  uint32_t PDCTL2;
  uint8_t res7[32];

  uint32_t SMPCR;
  uint8_t res8[4];

  uint8_t EMU;
  uint8_t res9[183];

  uint32_t SGSTCR1;
  uint8_t res10[4];

  uint32_t SGCR1;
  uint32_t SGVCSP1;
  uint32_t SGVCEP1;
  uint32_t SGMCYCR1;
  uint32_t SGSEFCR1;
  uint32_t SGTSEL1;
  uint8_t res11[32];

  uint32_t SGSTCR2;
  uint8_t res12[4];

  uint32_t SGCR2;
  uint32_t SGVCSP2;
  uint32_t SGVCEP2;
  uint32_t SGMCYCR2;
  uint32_t SGSEFCR2;
  uint32_t SGTSEL2;
  uint8_t res13[32];

  uint32_t SGSTCR3;
  uint8_t res14[4];

  uint32_t SGCR3;
  uint32_t SGVCSP3;
  uint32_t SGVCEP3;
  uint32_t SGMCYCR3;
  uint32_t SGSEFCR3;
  uint32_t SGTSEL3;
  uint8_t res15[40];

  uint32_t PWDSGCR;
  uint8_t res16[12];

  uint32_t PWDSGSEFCR;
};

#define ADCA0 (*(volatile struct ADCA0_tag *) 0xfff20000)

struct ADCA1_tag
{
  uint32_t VCR00;
  uint32_t VCR01;
  uint32_t VCR02;
  uint32_t VCR03;
  uint32_t VCR04;
  uint32_t VCR05;
  uint32_t VCR06;
  uint32_t VCR07;
  uint32_t VCR08;
  uint32_t VCR09;
  uint32_t VCR10;
  uint32_t VCR11;
  uint32_t VCR12;
  uint32_t VCR13;
  uint32_t VCR14;
  uint32_t VCR15;
  uint32_t VCR16;
  uint32_t VCR17;
  uint32_t VCR18;
  uint32_t VCR19;
  uint32_t VCR20;
  uint32_t VCR21;
  uint32_t VCR22;
  uint32_t VCR23;
  uint8_t res0[148];

  uint32_t PWDVCR;
  uint8_t res1[8];

  uint32_t DR00;
  uint32_t DR02;
  uint32_t DR04;
  uint32_t DR06;
  uint32_t DR08;
  uint32_t DR10;
  uint32_t DR12;
  uint32_t DR14;
  uint32_t DR16;
  uint32_t DR18;
  uint32_t DR20;
  uint32_t DR22;
  uint8_t res2[72];

  uint32_t PWDTSNDR;
  uint8_t res3[132];

  uint32_t DIR00;
  uint32_t DIR01;
  uint32_t DIR02;
  uint32_t DIR03;
  uint32_t DIR04;
  uint32_t DIR05;
  uint32_t DIR06;
  uint32_t DIR07;
  uint32_t DIR08;
  uint32_t DIR09;
  uint32_t DIR10;
  uint32_t DIR11;
  uint32_t DIR12;
  uint32_t DIR13;
  uint32_t DIR14;
  uint32_t DIR15;
  uint32_t DIR16;
  uint32_t DIR17;
  uint32_t DIR18;
  uint32_t DIR19;
  uint32_t DIR20;
  uint32_t DIR21;
  uint32_t DIR22;
  uint32_t DIR23;
  uint8_t res4[148];

  uint32_t PWDDIR;
  uint8_t res5[8];

  uint32_t ADHALTR;
  uint32_t ADCR;
  uint32_t SGSTR;
  uint8_t res6[40];

  uint32_t SFTCR;
  uint32_t ULLMTBR0;
  uint32_t ULLMTBR1;
  uint32_t ULLMTBR2;
  uint32_t ECR;
  uint32_t ULER;
  uint32_t OWER;
  uint32_t DGCTL0;
  uint32_t DGCTL1;
  uint32_t PDCTL1;
  uint32_t PDCTL2;
  uint8_t res7[32];

  uint32_t SMPCR;
  uint8_t res8[4];

  uint8_t EMU;
  uint8_t res9[183];

  uint32_t SGSTCR1;
  uint8_t res10[4];

  uint32_t SGCR1;
  uint32_t SGVCSP1;
  uint32_t SGVCEP1;
  uint32_t SGMCYCR1;
  uint32_t SGSEFCR1;
  uint32_t SGTSEL1;
  uint8_t res11[32];

  uint32_t SGSTCR2;
  uint8_t res12[4];

  uint32_t SGCR2;
  uint32_t SGVCSP2;
  uint32_t SGVCEP2;
  uint32_t SGMCYCR2;
  uint32_t SGSEFCR2;
  uint32_t SGTSEL2;
  uint8_t res13[32];

  uint32_t SGSTCR3;
  uint8_t res14[4];

  uint32_t SGCR3;
  uint32_t SGVCSP3;
  uint32_t SGVCEP3;
  uint32_t SGMCYCR3;
  uint32_t SGSEFCR3;
  uint32_t SGTSEL3;
  uint8_t res15[40];

  uint32_t PWDSGCR;
  uint8_t res16[12];

  uint32_t PWDSGSEFCR;
};

#define ADCA1 (*(volatile struct ADCA1_tag *) 0xfff21000)

struct DCRA0_tag
{
  uint32_t CIN;
  uint32_t COUT;
  uint8_t res0[24];

  uint8_t CTL;
};

#define DCRA0 (*(volatile struct DCRA0_tag *) 0xfff70000)

struct DCRA1_tag
{
  uint32_t CIN;
  uint32_t COUT;
  uint8_t res0[24];

  uint8_t CTL;
};

#define DCRA1 (*(volatile struct DCRA1_tag *) 0xfff71000)

struct DCRA2_tag
{
  uint32_t CIN;
  uint32_t COUT;
  uint8_t res0[24];

  uint8_t CTL;
};

#define DCRA2 (*(volatile struct DCRA2_tag *) 0xfff72000)

struct DCRA3_tag
{
  uint32_t CIN;
  uint32_t COUT;
  uint8_t res0[24];

  uint8_t CTL;
};

#define DCRA3 (*(volatile struct DCRA3_tag *) 0xfff73000)

struct KR0_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t KRM0:1;
      uint64_t KRM1:1;
      uint64_t KRM2:1;
      uint64_t KRM3:1;
      uint64_t KRM4:1;
      uint64_t KRM5:1;
      uint64_t KRM6:1;
      uint64_t KRM7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) KRM;

};

#define KR0 (*(volatile struct KR0_tag *) 0xfff78000)

struct CLMA0_tag
{
  uint8_t CTL0;
  uint8_t res0[7];

  uint16_t CMPL;
  uint8_t res1[2];

  uint16_t CMPH;
  uint8_t res2[2];

  uint8_t PCMD;
  uint8_t res3[3];

  uint8_t PS;
  uint8_t res4[3];

  uint8_t EMU0;
};

#define CLMA0 (*(volatile struct CLMA0_tag *) 0xfff8c000)

struct CLMA_tag
{
  uint32_t TEST;
  uint32_t TESTS;
};

#define CLMA (*(volatile struct CLMA_tag *) 0xfff8c100)

struct CLMA1_tag
{
  uint8_t CTL0;
  uint8_t res0[7];

  uint16_t CMPL;
  uint8_t res1[2];

  uint16_t CMPH;
  uint8_t res2[2];

  uint8_t PCMD;
  uint8_t res3[3];

  uint8_t PS;
  uint8_t res4[3];

  uint8_t EMU0;
};

#define CLMA1 (*(volatile struct CLMA1_tag *) 0xfff8d000)

struct CLMA2_tag
{
  uint8_t CTL0;
  uint8_t res0[7];

  uint16_t CMPL;
  uint8_t res1[2];

  uint16_t CMPH;
  uint8_t res2[2];

  uint8_t PCMD;
  uint8_t res3[3];

  uint8_t PS;
  uint8_t res4[3];

  uint8_t EMU0;
};

#define CLMA2 (*(volatile struct CLMA2_tag *) 0xfff8e000)

