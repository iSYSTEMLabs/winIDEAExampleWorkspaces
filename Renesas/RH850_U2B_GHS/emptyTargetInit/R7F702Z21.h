#include <stdint.h>

struct PRDINFf_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DID_PN:16;
      uint64_t DID_RN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRDNUM;

  uint8_t res0[92];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRDNAME1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRDNAME1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRDNAME2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRDNAME2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRDNAME3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRDNAME3;

  uint8_t res1[3924];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Unique_Chip_ID0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UCID0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Unique_Chip_ID1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UCID1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Unique_Chip_ID2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UCID2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Unique_Chip_ID3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UCID3;

};

#define PRDINFf (*(volatile struct PRDINFf_tag *) 0x8030040)

struct PRDINFb_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DID_PN:16;
      uint64_t DID_RN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRDNUM;

  uint8_t res0[92];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRDNAME1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRDNAME1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRDNAME2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRDNAME2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRDNAME3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRDNAME3;

  uint8_t res1[3924];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Unique_Chip_ID0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UCID0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Unique_Chip_ID1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UCID1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Unique_Chip_ID2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UCID2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Unique_Chip_ID3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UCID3;

};

#define PRDINFb (*(volatile struct PRDINFb_tag *) 0x8330040)

struct RHSIF0_L2_tag
{
  uint32_t MMD;
  uint8_t res0[4];

  uint32_t MCT;
  uint8_t res1[4];

  uint32_t MST;
  uint8_t res2[4];

  uint32_t MIST;
  uint8_t res3[4];

  uint32_t MRT;
  uint8_t res4[28];

  uint32_t MWAA;
  uint8_t res5[4];

  uint32_t MWAS;
  uint8_t res6[4];

  uint32_t MWBA;
  uint8_t res7[4];

  uint32_t MWBS;
  uint8_t res8[4];

  uint32_t MWCA;
  uint8_t res9[4];

  uint32_t MWCS;
  uint8_t res10[4];

  uint32_t MWDA;
  uint8_t res11[4];

  uint32_t MWDS;
  uint8_t res12[388];

  uint32_t STMD;
  uint8_t res13[4];

  uint32_t STCT;
  uint8_t res14[4];

  uint32_t STST;
  uint8_t res15[4];

  uint32_t STSC;
  uint8_t res16[4];

  uint32_t STIE;
  uint8_t res17[4];

  uint32_t STSA;
  uint8_t res18[4];

  uint32_t STBC;
  uint8_t res19[76];

  uint32_t SRMD;
  uint8_t res20[4];

  uint32_t SRCT;
  uint8_t res21[4];

  uint32_t SRST;
  uint8_t res22[4];

  uint32_t SRSC;
  uint8_t res23[4];

  uint32_t SRIE;
  uint8_t res24[4];

  uint32_t SRDA;
  uint8_t res25[4];

  uint32_t SRDS;
  uint8_t res26[4];

  uint32_t SRBC;
  uint8_t res27[4];

  uint32_t SRWP;
  uint8_t res28[4];

  uint32_t SRRP;
  uint8_t res29[52];

  uint32_t AID0;
  uint8_t res30[4];

  uint32_t AID1;
  uint8_t res31[4];

  uint32_t AID2;
  uint8_t res32[4];

  uint32_t AID3;
  uint8_t res33[4];

  uint32_t AID4;
  uint8_t res34[4];

  uint32_t AID5;
  uint8_t res35[4];

  uint32_t AID6;
  uint8_t res36[4];

  uint32_t AID7;
  uint8_t res37[4];

  uint32_t AAD0;
  uint8_t res38[4];

  uint32_t AAD1;
  uint8_t res39[4];

  uint32_t AAD2;
  uint8_t res40[4];

  uint32_t AAD3;
  uint8_t res41[4];

  uint32_t ARD0;
  uint8_t res42[4];

  uint32_t ARD1;
  uint8_t res43[4];

  uint32_t ARD2;
  uint8_t res44[4];

  uint32_t ARD3;
  uint8_t res45[100];

  uint32_t AEST;
  uint8_t res46[4];

  uint32_t AESC;
  uint8_t res47[4];

  uint32_t AEIE;
  uint8_t res48[12];

  uint32_t CMD0;
  uint8_t res49[4];

  uint32_t CCT0;
  uint8_t res50[4];

  uint32_t CST0;
  uint8_t res51[4];

  uint32_t CSC0;
  uint8_t res52[4];

  uint32_t CIE0;
  uint8_t res53[4];

  uint32_t CAR0;
  uint8_t res54[4];

  uint32_t CWD0;
  uint8_t res55[4];

  uint32_t CRD0;
  uint8_t res56[68];

  uint32_t CMD1;
  uint8_t res57[4];

  uint32_t CCT1;
  uint8_t res58[4];

  uint32_t CST1;
  uint8_t res59[4];

  uint32_t CSC1;
  uint8_t res60[4];

  uint32_t CIE1;
  uint8_t res61[4];

  uint32_t CAR1;
  uint8_t res62[4];

  uint32_t CWD1;
  uint8_t res63[4];

  uint32_t CRD1;
  uint8_t res64[68];

  uint32_t CMD2;
  uint8_t res65[4];

  uint32_t CCT2;
  uint8_t res66[4];

  uint32_t CST2;
  uint8_t res67[4];

  uint32_t CSC2;
  uint8_t res68[4];

  uint32_t CIE2;
  uint8_t res69[4];

  uint32_t CAR2;
  uint8_t res70[4];

  uint32_t CWD2;
  uint8_t res71[4];

  uint32_t CRD2;
  uint8_t res72[68];

  uint32_t CMD3;
  uint8_t res73[4];

  uint32_t CCT3;
  uint8_t res74[4];

  uint32_t CST3;
  uint8_t res75[4];

  uint32_t CSC3;
  uint8_t res76[4];

  uint32_t CIE3;
  uint8_t res77[4];

  uint32_t CAR3;
  uint8_t res78[4];

  uint32_t CWD3;
  uint8_t res79[4];

  uint32_t CRD3;
};

#define RHSIF0_L2 (*(volatile struct RHSIF0_L2_tag *) 0x10000000)

struct FLXA0_tag
{
  uint32_t FROC;
  uint8_t res0[4];

  uint32_t FROS;
  uint8_t res1[12];

  uint32_t FRLCK;
  uint32_t FREIR;
  uint32_t FRSIR;
  uint32_t FREILS;
  uint32_t FRSILS;
  uint32_t FREIES;
  uint32_t FREIER;
  uint32_t FRSIES;
  uint32_t FRSIER;
  uint32_t FRILE;
  uint32_t FRT0C;
  uint32_t FRT1C;
  uint32_t FRSTPW1;
  uint32_t FRSTPW2;
  uint8_t res2[44];

  uint32_t FRSUCC1;
  uint32_t FRSUCC2;
  uint32_t FRSUCC3;
  uint32_t FRNEMC;
  uint32_t FRPRTC1;
  uint32_t FRPRTC2;
  uint32_t FRMHDC;
  uint8_t res3[4];

  uint32_t FRGTUC1;
  uint32_t FRGTUC2;
  uint32_t FRGTUC3;
  uint32_t FRGTUC4;
  uint32_t FRGTUC5;
  uint32_t FRGTUC6;
  uint32_t FRGTUC7;
  uint32_t FRGTUC8;
  uint32_t FRGTUC9;
  uint32_t FRGTUC10;
  uint32_t FRGTUC11;
  uint8_t res4[52];

  uint32_t FRCCSV;
  uint32_t FRCCEV;
  uint8_t res5[8];

  uint32_t FRSCV;
  uint32_t FRMTCCV;
  uint32_t FRRCV;
  uint32_t FROCV;
  uint32_t FRSFS;
  uint32_t FRSWNIT;
  uint32_t FRACS;
  uint8_t res6[4];

  uint32_t FRESID1;
  uint32_t FRESID2;
  uint32_t FRESID3;
  uint32_t FRESID4;
  uint32_t FRESID5;
  uint32_t FRESID6;
  uint32_t FRESID7;
  uint32_t FRESID8;
  uint32_t FRESID9;
  uint32_t FRESID10;
  uint32_t FRESID11;
  uint32_t FRESID12;
  uint32_t FRESID13;
  uint32_t FRESID14;
  uint32_t FRESID15;
  uint8_t res7[4];

  uint32_t FROSID1;
  uint32_t FROSID2;
  uint32_t FROSID3;
  uint32_t FROSID4;
  uint32_t FROSID5;
  uint32_t FROSID6;
  uint32_t FROSID7;
  uint32_t FROSID8;
  uint32_t FROSID9;
  uint32_t FROSID10;
  uint32_t FROSID11;
  uint32_t FROSID12;
  uint32_t FROSID13;
  uint32_t FROSID14;
  uint32_t FROSID15;
  uint8_t res8[4];

  uint32_t FRNMV1;
  uint32_t FRNMV2;
  uint32_t FRNMV3;
  uint8_t res9[324];

  uint32_t FRMRC;
  uint32_t FRFRF;
  uint32_t FRFRFM;
  uint32_t FRFCL;
  uint32_t FRMHDS;
  uint32_t FRLDTS;
  uint32_t FRFSR;
  uint32_t FRMHDF;
  uint32_t FRTXRQ1;
  uint32_t FRTXRQ2;
  uint32_t FRTXRQ3;
  uint32_t FRTXRQ4;
  uint32_t FRNDAT1;
  uint32_t FRNDAT2;
  uint32_t FRNDAT3;
  uint32_t FRNDAT4;
  uint32_t FRMBSC1;
  uint32_t FRMBSC2;
  uint32_t FRMBSC3;
  uint32_t FRMBSC4;
  uint8_t res10[176];

  uint32_t FRWRDS1;
  uint32_t FRWRDS2;
  uint32_t FRWRDS3;
  uint32_t FRWRDS4;
  uint32_t FRWRDS5;
  uint32_t FRWRDS6;
  uint32_t FRWRDS7;
  uint32_t FRWRDS8;
  uint32_t FRWRDS9;
  uint32_t FRWRDS10;
  uint32_t FRWRDS11;
  uint32_t FRWRDS12;
  uint32_t FRWRDS13;
  uint32_t FRWRDS14;
  uint32_t FRWRDS15;
  uint32_t FRWRDS16;
  uint32_t FRWRDS17;
  uint32_t FRWRDS18;
  uint32_t FRWRDS19;
  uint32_t FRWRDS20;
  uint32_t FRWRDS21;
  uint32_t FRWRDS22;
  uint32_t FRWRDS23;
  uint32_t FRWRDS24;
  uint32_t FRWRDS25;
  uint32_t FRWRDS26;
  uint32_t FRWRDS27;
  uint32_t FRWRDS28;
  uint32_t FRWRDS29;
  uint32_t FRWRDS30;
  uint32_t FRWRDS31;
  uint32_t FRWRDS32;
  uint32_t FRWRDS33;
  uint32_t FRWRDS34;
  uint32_t FRWRDS35;
  uint32_t FRWRDS36;
  uint32_t FRWRDS37;
  uint32_t FRWRDS38;
  uint32_t FRWRDS39;
  uint32_t FRWRDS40;
  uint32_t FRWRDS41;
  uint32_t FRWRDS42;
  uint32_t FRWRDS43;
  uint32_t FRWRDS44;
  uint32_t FRWRDS45;
  uint32_t FRWRDS46;
  uint32_t FRWRDS47;
  uint32_t FRWRDS48;
  uint32_t FRWRDS49;
  uint32_t FRWRDS50;
  uint32_t FRWRDS51;
  uint32_t FRWRDS52;
  uint32_t FRWRDS53;
  uint32_t FRWRDS54;
  uint32_t FRWRDS55;
  uint32_t FRWRDS56;
  uint32_t FRWRDS57;
  uint32_t FRWRDS58;
  uint32_t FRWRDS59;
  uint32_t FRWRDS60;
  uint32_t FRWRDS61;
  uint32_t FRWRDS62;
  uint32_t FRWRDS63;
  uint32_t FRWRDS64;
  uint32_t FRWRHS1;
  uint32_t FRWRHS2;
  uint32_t FRWRHS3;
  uint8_t res11[4];

  uint32_t FRIBCM;
  uint32_t FRIBCR;
  uint8_t res12[232];

  uint32_t FRRDDS1;
  uint32_t FRRDDS2;
  uint32_t FRRDDS3;
  uint32_t FRRDDS4;
  uint32_t FRRDDS5;
  uint32_t FRRDDS6;
  uint32_t FRRDDS7;
  uint32_t FRRDDS8;
  uint32_t FRRDDS9;
  uint32_t FRRDDS10;
  uint32_t FRRDDS11;
  uint32_t FRRDDS12;
  uint32_t FRRDDS13;
  uint32_t FRRDDS14;
  uint32_t FRRDDS15;
  uint32_t FRRDDS16;
  uint32_t FRRDDS17;
  uint32_t FRRDDS18;
  uint32_t FRRDDS19;
  uint32_t FRRDDS20;
  uint32_t FRRDDS21;
  uint32_t FRRDDS22;
  uint32_t FRRDDS23;
  uint32_t FRRDDS24;
  uint32_t FRRDDS25;
  uint32_t FRRDDS26;
  uint32_t FRRDDS27;
  uint32_t FRRDDS28;
  uint32_t FRRDDS29;
  uint32_t FRRDDS30;
  uint32_t FRRDDS31;
  uint32_t FRRDDS32;
  uint32_t FRRDDS33;
  uint32_t FRRDDS34;
  uint32_t FRRDDS35;
  uint32_t FRRDDS36;
  uint32_t FRRDDS37;
  uint32_t FRRDDS38;
  uint32_t FRRDDS39;
  uint32_t FRRDDS40;
  uint32_t FRRDDS41;
  uint32_t FRRDDS42;
  uint32_t FRRDDS43;
  uint32_t FRRDDS44;
  uint32_t FRRDDS45;
  uint32_t FRRDDS46;
  uint32_t FRRDDS47;
  uint32_t FRRDDS48;
  uint32_t FRRDDS49;
  uint32_t FRRDDS50;
  uint32_t FRRDDS51;
  uint32_t FRRDDS52;
  uint32_t FRRDDS53;
  uint32_t FRRDDS54;
  uint32_t FRRDDS55;
  uint32_t FRRDDS56;
  uint32_t FRRDDS57;
  uint32_t FRRDDS58;
  uint32_t FRRDDS59;
  uint32_t FRRDDS60;
  uint32_t FRRDDS61;
  uint32_t FRRDDS62;
  uint32_t FRRDDS63;
  uint32_t FRRDDS64;
  uint32_t FRRDHS1;
  uint32_t FRRDHS2;
  uint32_t FRRDHS3;
  uint32_t FRMBS;
  uint32_t FROBCM;
  uint32_t FROBCR;
  uint8_t res13[232];

  uint32_t FRITC;
  uint32_t FROTC;
  uint32_t FRIBA;
  uint32_t FRFBA;
  uint32_t FROBA;
  uint32_t FRIQC;
  uint32_t FRUIR;
  uint32_t FRUOR;
  uint32_t FRITS;
  uint32_t FROTS;
  uint32_t FRAES;
  uint32_t FRAEA;
  uint32_t FRDA0;
  uint32_t FRDA1;
  uint32_t FRDA2;
  uint32_t FRDA3;
  uint32_t FRAHBC;
  uint32_t FRT2C;
};

#define FLXA0 (*(volatile struct FLXA0_tag *) 0x10020004)

struct SFMA0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t CPOL:1;
      uint64_t SSLP:1;
      uint64_t CPHAR:1;
      uint64_t CPHAT:1;
      uint64_t reservedSpace1:1;
      uint64_t IO0FV:2;
      uint64_t reservedSpace2:2;
      uint64_t IO2FV:2;
      uint64_t IO3FV:2;
      uint64_t MOIIO0:2;
      uint64_t MOIIO1:2;
      uint64_t MOIIO2:2;
      uint64_t MOIIO3:2;
      uint64_t reservedSpace3:7;
      uint64_t MD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMNCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCKDL:3;
      uint64_t reservedSpace0:5;
      uint64_t SLNDL:3;
      uint64_t reservedSpace1:5;
      uint64_t SPNDL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSLDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BRDV:2;
      uint64_t reservedSpace0:6;
      uint64_t SPBR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPBCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSLE:1;
      uint64_t reservedSpace0:7;
      uint64_t RBE:1;
      uint64_t RCF:1;
      uint64_t reservedSpace1:6;
      uint64_t RBURST:4;
      uint64_t reservedSpace2:4;
      uint64_t SSLN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DRCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OCMD:8;
      uint64_t reservedSpace0:8;
      uint64_t CMD:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DRCMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:17;
      uint64_t EAV:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DREAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPD0:8;
      uint64_t OPD1:8;
      uint64_t OPD2:8;
      uint64_t OPD3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DROPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t OPDE:4;
      uint64_t ADE:4;
      uint64_t OCDE:1;
      uint64_t reservedSpace1:1;
      uint64_t CDE:1;
      uint64_t DME:1;
      uint64_t DRDB:2;
      uint64_t reservedSpace2:2;
      uint64_t OPDB:2;
      uint64_t reservedSpace3:2;
      uint64_t ADB:2;
      uint64_t reservedSpace4:2;
      uint64_t OCDB:2;
      uint64_t CDB:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DRENR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPIE:1;
      uint64_t SPIWE:1;
      uint64_t SPIRE:1;
      uint64_t reservedSpace0:5;
      uint64_t SSLKP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OCMD:8;
      uint64_t reservedSpace0:8;
      uint64_t CMD:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMCMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADR230:24;
      uint64_t ADR3124:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMADR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPD0:8;
      uint64_t OPD1:8;
      uint64_t OPD2:8;
      uint64_t OPD3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMOPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPIDE:4;
      uint64_t OPDE:4;
      uint64_t ADE:4;
      uint64_t OCDE:1;
      uint64_t reservedSpace0:1;
      uint64_t CDE:1;
      uint64_t DME:1;
      uint64_t SPIDB:2;
      uint64_t reservedSpace1:2;
      uint64_t OPDB:2;
      uint64_t reservedSpace2:2;
      uint64_t ADB:2;
      uint64_t reservedSpace3:2;
      uint64_t OCDB:2;
      uint64_t CDB:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMENR;

  uint8_t res0[4];

  uint32_t SMRDR;
  uint8_t res1[4];

  uint32_t SMWDR;
  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEND:1;
      uint64_t SSLF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMNSR;

  uint8_t res3[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMCYC:3;
      uint64_t reservedSpace0:13;
      uint64_t DMDB:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DRDMCR;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMCYC:3;
      uint64_t reservedSpace0:13;
      uint64_t DMDB:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMDMCR;

};

#define SFMA0 (*(volatile struct SFMA0_tag *) 0x10040000)

struct DFP_tag
{
  uint32_t BCCX_SMU_STATSYS;
  uint8_t res0[12];

  uint32_t BCCX_SMU_STATCORE;
  uint8_t res1[236];

  uint32_t BCCX_SMU_STATHTRUN;
  uint32_t BCCX_SMU_STATHTDBG;
  uint32_t BCCX_SMU_STATHTDIS;
  uint8_t res2[4];

  uint32_t BCCX_SMU_HARTRUN;
  uint8_t res3[12];

  uint32_t BCCX_SMU_HARTDIS;
  uint8_t res4[220];

  uint32_t BCCX_SMU_STATCCLR;
  uint8_t res5[12];

  uint32_t BCCX_SMU_CTRLCCLR;
  uint8_t res6[492];

  uint32_t BCCX_SMU_BCCXFCTL;
  uint8_t res7[252];

  uint32_t BCCX_SMU_SSCRATCH0;
  uint32_t BCCX_SMU_SSCRATCH1;
  uint32_t BCCX_SMU_SSCRATCH2;
  uint32_t BCCX_SMU_SSCRATCH3;
  uint32_t BCCX_SMU_SSCRATCH4;
  uint32_t BCCX_SMU_SSCRATCH5;
  uint32_t BCCX_SMU_SSCRATCH6;
  uint32_t BCCX_SMU_SSCRATCH7;
  uint8_t res8[224];

  uint32_t BCCX_SMU_MONDBG;
  uint32_t BCCX_SMU_MONRST;
  uint32_t BCCX_SMU_MONSYS;
  uint32_t BCCX_SMU_MONINT;
  uint32_t BCCX_SMU_MONCLKSTOP;
  uint8_t res9[236];

  uint32_t BCCX_SMU_BOOTHART;
  uint32_t BCCX_SMU_INITMTVEC;
  uint32_t BCCX_SMU_INITRSTVEC;
  uint8_t res10[4];

  uint32_t BCCX_SMU_INITNMIVCCU;
  uint8_t res11[12];

  uint32_t BCCX_SMU_INITNMIVSPU0;
  uint32_t BCCX_SMU_INITNMIVSPU1;
  uint32_t BCCX_SMU_INITNMIVSPU2;
  uint32_t BCCX_SMU_INITNMIVSPU3;
  uint8_t res12[736];

  uint32_t BCCX_SMU_PMIDCCU;
  uint8_t res13[12];

  uint32_t BCCX_SMU_PMIDSPU0;
  uint32_t BCCX_SMU_PMIDSPU1;
  uint32_t BCCX_SMU_PMIDSPU2;
  uint32_t BCCX_SMU_PMIDSPU3;
  uint32_t BCCX_SMU_PMIDDTU0;
  uint32_t BCCX_SMU_PMIDDTU1;
  uint8_t res14[8];

  uint32_t BCCX_SMU_PMIDDBG;
  uint8_t res15[188];

  uint32_t BCCX_SMU_LMIDLST;
  uint32_t BCCX_SMU_LMIDLSTDBG;
  uint8_t res16[8];

  uint32_t BCCX_SMU_LMIDCCU;
  uint8_t res17[12];

  uint32_t BCCX_SMU_LMIDSPU0;
  uint32_t BCCX_SMU_LMIDSPU1;
  uint32_t BCCX_SMU_LMIDSPU2;
  uint32_t BCCX_SMU_LMIDSPU3;
  uint32_t BCCX_SMU_LMIDDTU0;
  uint32_t BCCX_SMU_LMIDDTU1;
  uint8_t res18[8];

  uint32_t BCCX_SMU_LMIDDBG;
  uint8_t res19[184];

  uint32_t BCCX_SMU_LMIDPROT;
  uint8_t res20[496];

  uint32_t BCCX_SMU_MARCHID;
  uint32_t BCCX_SMU_MIMPID;
  uint8_t res21[61448];

  uint32_t BCCX_ROCCEN;
  uint32_t BCCX_ROCCCLR;
  uint8_t res22[120];

  uint32_t BCCX_ROCERRSTS;
  uint8_t res23[124];

  uint32_t BCCX_ROCRACTRL;
  uint32_t BCCX_ROCRATGT;
  uint32_t BCCX_ROCRADATA0;
  uint32_t BCCX_ROCRADATA1;
  uint8_t res24[240];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECCDIS:1;
      uint64_t SECDIS:1;
      uint64_t reservedSpace0:5;
      uint64_t ECTHM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_ROC_IC_E_ECCCTL;

  uint8_t res25[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATSEL:1;
      uint64_t ECCTST:1;
      uint64_t reservedSpace0:6;
      uint64_t ECCSEL:4;
      uint64_t BANKSEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_ROC_IC_E_ECCTSTCTL;

  uint8_t res26[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BFDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_ROC_IC_E_TDATBFDATAF0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BFDATA1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_ROC_IC_E_TDATBFDATAF1;

  uint8_t res27[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BFECC0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_ROC_IC_E_ECCRDBUF;

  uint8_t res28[156];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEDIE:1;
      uint64_t DEDIE:1;
      uint64_t reservedSpace0:5;
      uint64_t SEOVFIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_ROC_IC_E_ERRINT;

  uint8_t res29[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSTCLR00:1;
      uint64_t reservedSpace0:15;
      uint64_t SEADRCLR00:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_ROC_IC_E_SSTCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSTCLR00:1;
      uint64_t reservedSpace0:15;
      uint64_t DEADRCLR00:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_ROC_IC_E_DSTCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SERROVFCLR0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_ROC_IC_E_OVFCLR;

  uint8_t res30[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEDF00:1;
      uint64_t reservedSpace0:23;
      uint64_t SELINF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_ROC_IC_E_SERSTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t DEDF00:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_ROC_IC_E_DERSTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SERROVF0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_ROC_IC_E_OVFSTR;

  uint8_t res31[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SELMID0:5;
      uint64_t reservedSpace0:3;
      uint64_t SEPMID0:5;
      uint64_t reservedSpace1:18;
      uint64_t DBG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_ROC_IC_E_SEMID00;

  uint8_t res32[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DELMID0:5;
      uint64_t reservedSpace0:3;
      uint64_t DEPMID0:5;
      uint64_t reservedSpace1:18;
      uint64_t DBG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_ROC_IC_E_DEMID00;

  uint8_t res33[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEADR0:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_ROC_IC_E_SEADR00;

  uint8_t res34[124];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DEADR0:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_ROC_IC_E_DEADR00;

  uint8_t res35[1548];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECCDIS:1;
      uint64_t SECDIS:1;
      uint64_t reservedSpace0:5;
      uint64_t ECTHM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_ROC_IC_O_ECCCTL;

  uint8_t res36[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATSEL:1;
      uint64_t ECCTST:1;
      uint64_t reservedSpace0:6;
      uint64_t ECCSEL:4;
      uint64_t BANKSEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_ROC_IC_O_ECCTSTCTL;

  uint8_t res37[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BFDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_ROC_IC_O_TDATBFDATAF0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BFDATA1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_ROC_IC_O_TDATBFDATAF1;

  uint8_t res38[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BFECC0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_ROC_IC_O_ECCRDBUF;

  uint8_t res39[156];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEDIE:1;
      uint64_t DEDIE:1;
      uint64_t reservedSpace0:5;
      uint64_t SEOVFIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_ROC_IC_O_ERRINT;

  uint8_t res40[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSTCLR00:1;
      uint64_t reservedSpace0:15;
      uint64_t SEADRCLR00:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_ROC_IC_O_SSTCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSTCLR00:1;
      uint64_t reservedSpace0:15;
      uint64_t DEADRCLR00:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_ROC_IC_O_DSTCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SERROVFCLR0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_ROC_IC_O_OVFCLR;

  uint8_t res41[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEDF00:1;
      uint64_t reservedSpace0:23;
      uint64_t SELINF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_ROC_IC_O_SERSTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t DEDF00:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_ROC_IC_O_DERSTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SERROVF0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_ROC_IC_O_OVFSTR;

  uint8_t res42[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SELMID0:5;
      uint64_t reservedSpace0:3;
      uint64_t SEPMID0:5;
      uint64_t reservedSpace1:18;
      uint64_t DBG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_ROC_IC_O_SEMID00;

  uint8_t res43[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DELMID0:5;
      uint64_t reservedSpace0:3;
      uint64_t DEPMID0:5;
      uint64_t reservedSpace1:18;
      uint64_t DBG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_ROC_IC_O_DEMID00;

  uint8_t res44[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEADR0:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_ROC_IC_O_SEADR00;

  uint8_t res45[124];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DEADR0:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_ROC_IC_O_DEADR00;

  uint8_t res46[33804];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECCDIS:1;
      uint64_t SECDIS:1;
      uint64_t reservedSpace0:5;
      uint64_t ECTHM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_VLM_SB0_ECCCTL;

  uint8_t res47[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATSEL:1;
      uint64_t ECCTST:1;
      uint64_t reservedSpace0:6;
      uint64_t ECCSEL:4;
      uint64_t BANKSEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_VLM_SB0_ECCTSTCTL;

  uint8_t res48[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BFDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_VLM_SB0_TDATBFDATAF0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BFDATA1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_VLM_SB0_TDATBFDATAF1;

  uint8_t res49[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BFECC0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_VLM_SB0_ECCRDBUF;

  uint8_t res50[156];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEDIE:1;
      uint64_t DEDIE:1;
      uint64_t reservedSpace0:5;
      uint64_t SEOVFIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_VLM_SB0_ERRINT;

  uint8_t res51[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSTCLR00:1;
      uint64_t reservedSpace0:15;
      uint64_t SEADRCLR00:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_VLM_SB0_SSTCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSTCLR00:1;
      uint64_t reservedSpace0:15;
      uint64_t DEADRCLR00:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_VLM_SB0_DSTCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SERROVFCLR0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_VLM_SB0_OVFCLR;

  uint8_t res52[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEDF00:1;
      uint64_t reservedSpace0:23;
      uint64_t SELINF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_VLM_SB0_SERSTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t DEDF00:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_VLM_SB0_DERSTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SERROVF0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_VLM_SB0_OVFSTR;

  uint8_t res53[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SELMID0:5;
      uint64_t reservedSpace0:3;
      uint64_t SEPMID0:5;
      uint64_t reservedSpace1:18;
      uint64_t DBG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_VLM_SB0_SEMID00;

  uint8_t res54[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DELMID0:5;
      uint64_t reservedSpace0:3;
      uint64_t DEPMID0:5;
      uint64_t reservedSpace1:18;
      uint64_t DBG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_VLM_SB0_DEMID00;

  uint8_t res55[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEADR0:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_VLM_SB0_SEADR00;

  uint8_t res56[124];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DEADR0:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_VLM_SB0_DEADR00;

  uint8_t res57[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECCDIS:1;
      uint64_t SECDIS:1;
      uint64_t reservedSpace0:5;
      uint64_t ECTHM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_VLM_SB1_ECCCTL;

  uint8_t res58[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATSEL:1;
      uint64_t ECCTST:1;
      uint64_t reservedSpace0:6;
      uint64_t ECCSEL:4;
      uint64_t BANKSEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_VLM_SB1_ECCTSTCTL;

  uint8_t res59[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BFDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_VLM_SB1_TDATBFDATAF0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BFDATA1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_VLM_SB1_TDATBFDATAF1;

  uint8_t res60[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BFECC0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_VLM_SB1_ECCRDBUF;

  uint8_t res61[156];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEDIE:1;
      uint64_t DEDIE:1;
      uint64_t reservedSpace0:5;
      uint64_t SEOVFIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_VLM_SB1_ERRINT;

  uint8_t res62[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSTCLR00:1;
      uint64_t reservedSpace0:15;
      uint64_t SEADRCLR00:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_VLM_SB1_SSTCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSTCLR00:1;
      uint64_t reservedSpace0:15;
      uint64_t DEADRCLR00:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_VLM_SB1_DSTCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SERROVFCLR0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_VLM_SB1_OVFCLR;

  uint8_t res63[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEDF00:1;
      uint64_t reservedSpace0:23;
      uint64_t SELINF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_VLM_SB1_SERSTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t DEDF00:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_VLM_SB1_DERSTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SERROVF0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_VLM_SB1_OVFSTR;

  uint8_t res64[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SELMID0:5;
      uint64_t reservedSpace0:3;
      uint64_t SEPMID0:5;
      uint64_t reservedSpace1:18;
      uint64_t DBG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_VLM_SB1_SEMID00;

  uint8_t res65[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DELMID0:5;
      uint64_t reservedSpace0:3;
      uint64_t DEPMID0:5;
      uint64_t reservedSpace1:18;
      uint64_t DBG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_VLM_SB1_DEMID00;

  uint8_t res66[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEADR0:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_VLM_SB1_SEADR00;

  uint8_t res67[124];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DEADR0:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_VLM_SB1_DEADR00;

  uint8_t res68[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECCDIS:1;
      uint64_t SECDIS:1;
      uint64_t reservedSpace0:5;
      uint64_t ECTHM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_VLM_SB2_ECCCTL;

  uint8_t res69[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATSEL:1;
      uint64_t ECCTST:1;
      uint64_t reservedSpace0:6;
      uint64_t ECCSEL:4;
      uint64_t BANKSEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_VLM_SB2_ECCTSTCTL;

  uint8_t res70[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BFDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_VLM_SB2_TDATBFDATAF0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BFDATA1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_VLM_SB2_TDATBFDATAF1;

  uint8_t res71[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BFECC0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_VLM_SB2_ECCRDBUF;

  uint8_t res72[156];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEDIE:1;
      uint64_t DEDIE:1;
      uint64_t reservedSpace0:5;
      uint64_t SEOVFIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_VLM_SB2_ERRINT;

  uint8_t res73[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSTCLR00:1;
      uint64_t reservedSpace0:15;
      uint64_t SEADRCLR00:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_VLM_SB2_SSTCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSTCLR00:1;
      uint64_t reservedSpace0:15;
      uint64_t DEADRCLR00:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_VLM_SB2_DSTCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SERROVFCLR0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_VLM_SB2_OVFCLR;

  uint8_t res74[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEDF00:1;
      uint64_t reservedSpace0:23;
      uint64_t SELINF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_VLM_SB2_SERSTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t DEDF00:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_VLM_SB2_DERSTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SERROVF0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_VLM_SB2_OVFSTR;

  uint8_t res75[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SELMID0:5;
      uint64_t reservedSpace0:3;
      uint64_t SEPMID0:5;
      uint64_t reservedSpace1:18;
      uint64_t DBG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_VLM_SB2_SEMID00;

  uint8_t res76[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DELMID0:5;
      uint64_t reservedSpace0:3;
      uint64_t DEPMID0:5;
      uint64_t reservedSpace1:18;
      uint64_t DBG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_VLM_SB2_DEMID00;

  uint8_t res77[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEADR0:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_VLM_SB2_SEADR00;

  uint8_t res78[124];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DEADR0:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_VLM_SB2_DEADR00;

  uint8_t res79[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECCDIS:1;
      uint64_t SECDIS:1;
      uint64_t reservedSpace0:5;
      uint64_t ECTHM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_VLM_SB3_ECCCTL;

  uint8_t res80[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATSEL:1;
      uint64_t ECCTST:1;
      uint64_t reservedSpace0:6;
      uint64_t ECCSEL:4;
      uint64_t BANKSEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_VLM_SB3_ECCTSTCTL;

  uint8_t res81[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BFDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_VLM_SB3_TDATBFDATAF0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BFDATA1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_VLM_SB3_TDATBFDATAF1;

  uint8_t res82[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BFECC0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_VLM_SB3_ECCRDBUF;

  uint8_t res83[156];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEDIE:1;
      uint64_t DEDIE:1;
      uint64_t reservedSpace0:5;
      uint64_t SEOVFIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_VLM_SB3_ERRINT;

  uint8_t res84[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSTCLR00:1;
      uint64_t reservedSpace0:15;
      uint64_t SEADRCLR00:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_VLM_SB3_SSTCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSTCLR00:1;
      uint64_t reservedSpace0:15;
      uint64_t DEADRCLR00:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_VLM_SB3_DSTCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SERROVFCLR0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_VLM_SB3_OVFCLR;

  uint8_t res85[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEDF00:1;
      uint64_t reservedSpace0:23;
      uint64_t SELINF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_VLM_SB3_SERSTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t DEDF00:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_VLM_SB3_DERSTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SERROVF0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_VLM_SB3_OVFSTR;

  uint8_t res86[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SELMID0:5;
      uint64_t reservedSpace0:3;
      uint64_t SEPMID0:5;
      uint64_t reservedSpace1:18;
      uint64_t DBG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_VLM_SB3_SEMID00;

  uint8_t res87[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DELMID0:5;
      uint64_t reservedSpace0:3;
      uint64_t DEPMID0:5;
      uint64_t reservedSpace1:18;
      uint64_t DBG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_VLM_SB3_DEMID00;

  uint8_t res88[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEADR0:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_VLM_SB3_SEADR00;

  uint8_t res89[124];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DEADR0:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_ECC_VLM_SB3_DEADR00;

  uint8_t res90[2060];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Valid:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_VLM_EXCLMONVALIDBITENTRY0_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t address:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCCX_VLM_EXCLMONADDRESSENTRY0_0;

};

#define DFP (*(volatile struct DFP_tag *) 0xf0800200)

