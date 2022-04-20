#define __IO volatile

/** DMA_TCD - Register Layout Typedef */
typedef struct {
  __IO unsigned long CH0_CSR;                           /**< Channel Control and Status, offset: 0x0 */
  __IO unsigned long CH0_ES;                            /**< Channel Error Status, offset: 0x4 */
  __IO unsigned long CH0_INT;                           /**< Channel Interrupt Status, offset: 0x8 */
  __IO unsigned long CH0_SBR;                           /**< Channel System Bus, offset: 0xC */
  __IO unsigned long CH0_PRI;                           /**< Channel Priority, offset: 0x10 */
  unsigned char RESERVED_0[12];
  __IO unsigned long TCD0_SADDR;                        /**< TCD Source Address, offset: 0x20 */
  __IO unsigned short TCD0_SOFF;                         /**< TCD Signed Source Address Offset, offset: 0x24 */
  __IO unsigned short TCD0_ATTR;                         /**< TCD Transfer Attributes, offset: 0x26 */
  union {                                          /* offset: 0x28 */
    __IO unsigned long TCD0_NBYTES_MLOFFNO;               /**< TCD Transfer Size Without Minor Loop Offsets, offset: 0x28 */
    __IO unsigned long TCD0_NBYTES_MLOFFYES;              /**< TCD Transfer Size with Minor Loop Offsets, offset: 0x28 */
  } NBYTES0;
  __IO unsigned long TCD0_SLAST_SDA;                    /**< TCD Last Source Address Adjustment / Store DADDR Address, offset: 0x2C */
  __IO unsigned long TCD0_DADDR;                        /**< TCD Destination Address, offset: 0x30 */
  __IO unsigned short TCD0_DOFF;                         /**< TCD Signed Destination Address Offset, offset: 0x34 */
  union {                                          /* offset: 0x36 */
    __IO unsigned short TCD0_CITER_ELINKNO;                /**< TCD Current Major Loop Count (Minor Loop Channel Linking Disabled), offset: 0x36 */
    __IO unsigned short TCD0_CITER_ELINKYES;               /**< TCD Current Major Loop Count (Minor Loop Channel Linking Enabled), offset: 0x36 */
  } CITER0;
  __IO unsigned long TCD0_DLAST_SGA;                    /**< TCD Last Destination Address Adjustment / Scatter Gather Address, offset: 0x38 */
  __IO unsigned short TCD0_CSR;                          /**< TCD Control and Status, offset: 0x3C */
  union {                                          /* offset: 0x3E */
    __IO unsigned short TCD0_BITER_ELINKNO;                /**< TCD Beginning Major Loop Count (Minor Loop Channel Linking Disabled), offset: 0x3E */
    __IO unsigned short TCD0_BITER_ELINKYES;               /**< TCD Beginning Major Loop Count (Minor Loop Channel Linking Enabled), offset: 0x3E */
  } BITER0;
  unsigned char RESERVED_1[16320];
  __IO unsigned long CH1_CSR;                           /**< Channel Control and Status, offset: 0x4000 */
  __IO unsigned long CH1_ES;                            /**< Channel Error Status, offset: 0x4004 */
  __IO unsigned long CH1_INT;                           /**< Channel Interrupt Status, offset: 0x4008 */
  __IO unsigned long CH1_SBR;                           /**< Channel System Bus, offset: 0x400C */
  __IO unsigned long CH1_PRI;                           /**< Channel Priority, offset: 0x4010 */
  unsigned char RESERVED_2[12];
  __IO unsigned long TCD1_SADDR;                        /**< TCD Source Address, offset: 0x4020 */
  __IO unsigned short TCD1_SOFF;                         /**< TCD Signed Source Address Offset, offset: 0x4024 */
  __IO unsigned short TCD1_ATTR;                         /**< TCD Transfer Attributes, offset: 0x4026 */
  union {                                          /* offset: 0x4028 */
    __IO unsigned long TCD1_NBYTES_MLOFFNO;               /**< TCD Transfer Size Without Minor Loop Offsets, offset: 0x4028 */
    __IO unsigned long TCD1_NBYTES_MLOFFYES;              /**< TCD Transfer Size with Minor Loop Offsets, offset: 0x4028 */
  } NBYTES1;
  __IO unsigned long TCD1_SLAST_SDA;                    /**< TCD Last Source Address Adjustment / Store DADDR Address, offset: 0x402C */
  __IO unsigned long TCD1_DADDR;                        /**< TCD Destination Address, offset: 0x4030 */
  __IO unsigned short TCD1_DOFF;                         /**< TCD Signed Destination Address Offset, offset: 0x4034 */
  union {                                          /* offset: 0x4036 */
    __IO unsigned short TCD1_CITER_ELINKNO;                /**< TCD Current Major Loop Count (Minor Loop Channel Linking Disabled), offset: 0x4036 */
    __IO unsigned short TCD1_CITER_ELINKYES;               /**< TCD Current Major Loop Count (Minor Loop Channel Linking Enabled), offset: 0x4036 */
  } CITER1;
  __IO unsigned long TCD1_DLAST_SGA;                    /**< TCD Last Destination Address Adjustment / Scatter Gather Address, offset: 0x4038 */
  __IO unsigned short TCD1_CSR;                          /**< TCD Control and Status, offset: 0x403C */
  union {                                          /* offset: 0x403E */
    __IO unsigned short TCD1_BITER_ELINKNO;                /**< TCD Beginning Major Loop Count (Minor Loop Channel Linking Disabled), offset: 0x403E */
    __IO unsigned short TCD1_BITER_ELINKYES;               /**< TCD Beginning Major Loop Count (Minor Loop Channel Linking Enabled), offset: 0x403E */
  } BITER1;
  unsigned char RESERVED_3[16320];
  __IO unsigned long CH2_CSR;                           /**< Channel Control and Status, offset: 0x8000 */
  __IO unsigned long CH2_ES;                            /**< Channel Error Status, offset: 0x8004 */
  __IO unsigned long CH2_INT;                           /**< Channel Interrupt Status, offset: 0x8008 */
  __IO unsigned long CH2_SBR;                           /**< Channel System Bus, offset: 0x800C */
  __IO unsigned long CH2_PRI;                           /**< Channel Priority, offset: 0x8010 */
  unsigned char RESERVED_4[12];
  __IO unsigned long TCD2_SADDR;                        /**< TCD Source Address, offset: 0x8020 */
  __IO unsigned short TCD2_SOFF;                         /**< TCD Signed Source Address Offset, offset: 0x8024 */
  __IO unsigned short TCD2_ATTR;                         /**< TCD Transfer Attributes, offset: 0x8026 */
  union {                                          /* offset: 0x8028 */
    __IO unsigned long TCD2_NBYTES_MLOFFNO;               /**< TCD Transfer Size Without Minor Loop Offsets, offset: 0x8028 */
    __IO unsigned long TCD2_NBYTES_MLOFFYES;              /**< TCD Transfer Size with Minor Loop Offsets, offset: 0x8028 */
  } NBYTES2;
  __IO unsigned long TCD2_SLAST_SDA;                    /**< TCD Last Source Address Adjustment / Store DADDR Address, offset: 0x802C */
  __IO unsigned long TCD2_DADDR;                        /**< TCD Destination Address, offset: 0x8030 */
  __IO unsigned short TCD2_DOFF;                         /**< TCD Signed Destination Address Offset, offset: 0x8034 */
  union {                                          /* offset: 0x8036 */
    __IO unsigned short TCD2_CITER_ELINKNO;                /**< TCD Current Major Loop Count (Minor Loop Channel Linking Disabled), offset: 0x8036 */
    __IO unsigned short TCD2_CITER_ELINKYES;               /**< TCD Current Major Loop Count (Minor Loop Channel Linking Enabled), offset: 0x8036 */
  } CITER2;
  __IO unsigned long TCD2_DLAST_SGA;                    /**< TCD Last Destination Address Adjustment / Scatter Gather Address, offset: 0x8038 */
  __IO unsigned short TCD2_CSR;                          /**< TCD Control and Status, offset: 0x803C */
  union {                                          /* offset: 0x803E */
    __IO unsigned short TCD2_BITER_ELINKNO;                /**< TCD Beginning Major Loop Count (Minor Loop Channel Linking Disabled), offset: 0x803E */
    __IO unsigned short TCD2_BITER_ELINKYES;               /**< TCD Beginning Major Loop Count (Minor Loop Channel Linking Enabled), offset: 0x803E */
  } BITER2;
  unsigned char RESERVED_5[16320];
  __IO unsigned long CH3_CSR;                           /**< Channel Control and Status, offset: 0xC000 */
  __IO unsigned long CH3_ES;                            /**< Channel Error Status, offset: 0xC004 */
  __IO unsigned long CH3_INT;                           /**< Channel Interrupt Status, offset: 0xC008 */
  __IO unsigned long CH3_SBR;                           /**< Channel System Bus, offset: 0xC00C */
  __IO unsigned long CH3_PRI;                           /**< Channel Priority, offset: 0xC010 */
  unsigned char RESERVED_6[12];
  __IO unsigned long TCD3_SADDR;                        /**< TCD Source Address, offset: 0xC020 */
  __IO unsigned short TCD3_SOFF;                         /**< TCD Signed Source Address Offset, offset: 0xC024 */
  __IO unsigned short TCD3_ATTR;                         /**< TCD Transfer Attributes, offset: 0xC026 */
  union {                                          /* offset: 0xC028 */
    __IO unsigned long TCD3_NBYTES_MLOFFNO;               /**< TCD Transfer Size Without Minor Loop Offsets, offset: 0xC028 */
    __IO unsigned long TCD3_NBYTES_MLOFFYES;              /**< TCD Transfer Size with Minor Loop Offsets, offset: 0xC028 */
  } NBYTES3;
  __IO unsigned long TCD3_SLAST_SDA;                    /**< TCD Last Source Address Adjustment / Store DADDR Address, offset: 0xC02C */
  __IO unsigned long TCD3_DADDR;                        /**< TCD Destination Address, offset: 0xC030 */
  __IO unsigned short TCD3_DOFF;                         /**< TCD Signed Destination Address Offset, offset: 0xC034 */
  union {                                          /* offset: 0xC036 */
    __IO unsigned short TCD3_CITER_ELINKNO;                /**< TCD Current Major Loop Count (Minor Loop Channel Linking Disabled), offset: 0xC036 */
    __IO unsigned short TCD3_CITER_ELINKYES;               /**< TCD Current Major Loop Count (Minor Loop Channel Linking Enabled), offset: 0xC036 */
  } CITER3;
  __IO unsigned long TCD3_DLAST_SGA;                    /**< TCD Last Destination Address Adjustment / Scatter Gather Address, offset: 0xC038 */
  __IO unsigned short TCD3_CSR;                          /**< TCD Control and Status, offset: 0xC03C */
  union {                                          /* offset: 0xC03E */
    __IO unsigned short TCD3_BITER_ELINKNO;                /**< TCD Beginning Major Loop Count (Minor Loop Channel Linking Disabled), offset: 0xC03E */
    __IO unsigned short TCD3_BITER_ELINKYES;               /**< TCD Beginning Major Loop Count (Minor Loop Channel Linking Enabled), offset: 0xC03E */
  } BITER3;
  unsigned char RESERVED_7[16320];
  __IO unsigned long CH4_CSR;                           /**< Channel Control and Status, offset: 0x10000 */
  __IO unsigned long CH4_ES;                            /**< Channel Error Status, offset: 0x10004 */
  __IO unsigned long CH4_INT;                           /**< Channel Interrupt Status, offset: 0x10008 */
  __IO unsigned long CH4_SBR;                           /**< Channel System Bus, offset: 0x1000C */
  __IO unsigned long CH4_PRI;                           /**< Channel Priority, offset: 0x10010 */
  unsigned char RESERVED_8[12];
  __IO unsigned long TCD4_SADDR;                        /**< TCD Source Address, offset: 0x10020 */
  __IO unsigned short TCD4_SOFF;                         /**< TCD Signed Source Address Offset, offset: 0x10024 */
  __IO unsigned short TCD4_ATTR;                         /**< TCD Transfer Attributes, offset: 0x10026 */
  union {                                          /* offset: 0x10028 */
    __IO unsigned long TCD4_NBYTES_MLOFFNO;               /**< TCD Transfer Size Without Minor Loop Offsets, offset: 0x10028 */
    __IO unsigned long TCD4_NBYTES_MLOFFYES;              /**< TCD Transfer Size with Minor Loop Offsets, offset: 0x10028 */
  } NBYTES4;
  __IO unsigned long TCD4_SLAST_SDA;                    /**< TCD Last Source Address Adjustment / Store DADDR Address, offset: 0x1002C */
  __IO unsigned long TCD4_DADDR;                        /**< TCD Destination Address, offset: 0x10030 */
  __IO unsigned short TCD4_DOFF;                         /**< TCD Signed Destination Address Offset, offset: 0x10034 */
  union {                                          /* offset: 0x10036 */
    __IO unsigned short TCD4_CITER_ELINKNO;                /**< TCD Current Major Loop Count (Minor Loop Channel Linking Disabled), offset: 0x10036 */
    __IO unsigned short TCD4_CITER_ELINKYES;               /**< TCD Current Major Loop Count (Minor Loop Channel Linking Enabled), offset: 0x10036 */
  } CITER4;
  __IO unsigned long TCD4_DLAST_SGA;                    /**< TCD Last Destination Address Adjustment / Scatter Gather Address, offset: 0x10038 */
  __IO unsigned short TCD4_CSR;                          /**< TCD Control and Status, offset: 0x1003C */
  union {                                          /* offset: 0x1003E */
    __IO unsigned short TCD4_BITER_ELINKNO;                /**< TCD Beginning Major Loop Count (Minor Loop Channel Linking Disabled), offset: 0x1003E */
    __IO unsigned short TCD4_BITER_ELINKYES;               /**< TCD Beginning Major Loop Count (Minor Loop Channel Linking Enabled), offset: 0x1003E */
  } BITER4;
  unsigned char RESERVED_9[16320];
  __IO unsigned long CH5_CSR;                           /**< Channel Control and Status, offset: 0x14000 */
  __IO unsigned long CH5_ES;                            /**< Channel Error Status, offset: 0x14004 */
  __IO unsigned long CH5_INT;                           /**< Channel Interrupt Status, offset: 0x14008 */
  __IO unsigned long CH5_SBR;                           /**< Channel System Bus, offset: 0x1400C */
  __IO unsigned long CH5_PRI;                           /**< Channel Priority, offset: 0x14010 */
  unsigned char RESERVED_10[12];
  __IO unsigned long TCD5_SADDR;                        /**< TCD Source Address, offset: 0x14020 */
  __IO unsigned short TCD5_SOFF;                         /**< TCD Signed Source Address Offset, offset: 0x14024 */
  __IO unsigned short TCD5_ATTR;                         /**< TCD Transfer Attributes, offset: 0x14026 */
  union {                                          /* offset: 0x14028 */
    __IO unsigned long TCD5_NBYTES_MLOFFNO;               /**< TCD Transfer Size Without Minor Loop Offsets, offset: 0x14028 */
    __IO unsigned long TCD5_NBYTES_MLOFFYES;              /**< TCD Transfer Size with Minor Loop Offsets, offset: 0x14028 */
  } NBYTES5;
  __IO unsigned long TCD5_SLAST_SDA;                    /**< TCD Last Source Address Adjustment / Store DADDR Address, offset: 0x1402C */
  __IO unsigned long TCD5_DADDR;                        /**< TCD Destination Address, offset: 0x14030 */
  __IO unsigned short TCD5_DOFF;                         /**< TCD Signed Destination Address Offset, offset: 0x14034 */
  union {                                          /* offset: 0x14036 */
    __IO unsigned short TCD5_CITER_ELINKNO;                /**< TCD Current Major Loop Count (Minor Loop Channel Linking Disabled), offset: 0x14036 */
    __IO unsigned short TCD5_CITER_ELINKYES;               /**< TCD Current Major Loop Count (Minor Loop Channel Linking Enabled), offset: 0x14036 */
  } CITER5;
  __IO unsigned long TCD5_DLAST_SGA;                    /**< TCD Last Destination Address Adjustment / Scatter Gather Address, offset: 0x14038 */
  __IO unsigned short TCD5_CSR;                          /**< TCD Control and Status, offset: 0x1403C */
  union {                                          /* offset: 0x1403E */
    __IO unsigned short TCD5_BITER_ELINKNO;                /**< TCD Beginning Major Loop Count (Minor Loop Channel Linking Disabled), offset: 0x1403E */
    __IO unsigned short TCD5_BITER_ELINKYES;               /**< TCD Beginning Major Loop Count (Minor Loop Channel Linking Enabled), offset: 0x1403E */
  } BITER5;
  unsigned char RESERVED_11[16320];
  __IO unsigned long CH6_CSR;                           /**< Channel Control and Status, offset: 0x18000 */
  __IO unsigned long CH6_ES;                            /**< Channel Error Status, offset: 0x18004 */
  __IO unsigned long CH6_INT;                           /**< Channel Interrupt Status, offset: 0x18008 */
  __IO unsigned long CH6_SBR;                           /**< Channel System Bus, offset: 0x1800C */
  __IO unsigned long CH6_PRI;                           /**< Channel Priority, offset: 0x18010 */
  unsigned char RESERVED_12[12];
  __IO unsigned long TCD6_SADDR;                        /**< TCD Source Address, offset: 0x18020 */
  __IO unsigned short TCD6_SOFF;                         /**< TCD Signed Source Address Offset, offset: 0x18024 */
  __IO unsigned short TCD6_ATTR;                         /**< TCD Transfer Attributes, offset: 0x18026 */
  union {                                          /* offset: 0x18028 */
    __IO unsigned long TCD6_NBYTES_MLOFFNO;               /**< TCD Transfer Size Without Minor Loop Offsets, offset: 0x18028 */
    __IO unsigned long TCD6_NBYTES_MLOFFYES;              /**< TCD Transfer Size with Minor Loop Offsets, offset: 0x18028 */
  } NBYTES6;
  __IO unsigned long TCD6_SLAST_SDA;                    /**< TCD Last Source Address Adjustment / Store DADDR Address, offset: 0x1802C */
  __IO unsigned long TCD6_DADDR;                        /**< TCD Destination Address, offset: 0x18030 */
  __IO unsigned short TCD6_DOFF;                         /**< TCD Signed Destination Address Offset, offset: 0x18034 */
  union {                                          /* offset: 0x18036 */
    __IO unsigned short TCD6_CITER_ELINKNO;                /**< TCD Current Major Loop Count (Minor Loop Channel Linking Disabled), offset: 0x18036 */
    __IO unsigned short TCD6_CITER_ELINKYES;               /**< TCD Current Major Loop Count (Minor Loop Channel Linking Enabled), offset: 0x18036 */
  } CITER6;
  __IO unsigned long TCD6_DLAST_SGA;                    /**< TCD Last Destination Address Adjustment / Scatter Gather Address, offset: 0x18038 */
  __IO unsigned short TCD6_CSR;                          /**< TCD Control and Status, offset: 0x1803C */
  union {                                          /* offset: 0x1803E */
    __IO unsigned short TCD6_BITER_ELINKNO;                /**< TCD Beginning Major Loop Count (Minor Loop Channel Linking Disabled), offset: 0x1803E */
    __IO unsigned short TCD6_BITER_ELINKYES;               /**< TCD Beginning Major Loop Count (Minor Loop Channel Linking Enabled), offset: 0x1803E */
  } BITER6;
  unsigned char RESERVED_13[16320];
  __IO unsigned long CH7_CSR;                           /**< Channel Control and Status, offset: 0x1C000 */
  __IO unsigned long CH7_ES;                            /**< Channel Error Status, offset: 0x1C004 */
  __IO unsigned long CH7_INT;                           /**< Channel Interrupt Status, offset: 0x1C008 */
  __IO unsigned long CH7_SBR;                           /**< Channel System Bus, offset: 0x1C00C */
  __IO unsigned long CH7_PRI;                           /**< Channel Priority, offset: 0x1C010 */
  unsigned char RESERVED_14[12];
  __IO unsigned long TCD7_SADDR;                        /**< TCD Source Address, offset: 0x1C020 */
  __IO unsigned short TCD7_SOFF;                         /**< TCD Signed Source Address Offset, offset: 0x1C024 */
  __IO unsigned short TCD7_ATTR;                         /**< TCD Transfer Attributes, offset: 0x1C026 */
  union {                                          /* offset: 0x1C028 */
    __IO unsigned long TCD7_NBYTES_MLOFFNO;               /**< TCD Transfer Size Without Minor Loop Offsets, offset: 0x1C028 */
    __IO unsigned long TCD7_NBYTES_MLOFFYES;              /**< TCD Transfer Size with Minor Loop Offsets, offset: 0x1C028 */
  } NBYTES7;
  __IO unsigned long TCD7_SLAST_SDA;                    /**< TCD Last Source Address Adjustment / Store DADDR Address, offset: 0x1C02C */
  __IO unsigned long TCD7_DADDR;                        /**< TCD Destination Address, offset: 0x1C030 */
  __IO unsigned short TCD7_DOFF;                         /**< TCD Signed Destination Address Offset, offset: 0x1C034 */
  union {                                          /* offset: 0x1C036 */
    __IO unsigned short TCD7_CITER_ELINKNO;                /**< TCD Current Major Loop Count (Minor Loop Channel Linking Disabled), offset: 0x1C036 */
    __IO unsigned short TCD7_CITER_ELINKYES;               /**< TCD Current Major Loop Count (Minor Loop Channel Linking Enabled), offset: 0x1C036 */
  } CITER7;
  __IO unsigned long TCD7_DLAST_SGA;                    /**< TCD Last Destination Address Adjustment / Scatter Gather Address, offset: 0x1C038 */
  __IO unsigned short TCD7_CSR;                          /**< TCD Control and Status, offset: 0x1C03C */
  union {                                          /* offset: 0x1C03E */
    __IO unsigned short TCD7_BITER_ELINKNO;                /**< TCD Beginning Major Loop Count (Minor Loop Channel Linking Disabled), offset: 0x1C03E */
    __IO unsigned short TCD7_BITER_ELINKYES;               /**< TCD Beginning Major Loop Count (Minor Loop Channel Linking Enabled), offset: 0x1C03E */
  } BITER7;
  unsigned char RESERVED_15[16320];
  __IO unsigned long CH8_CSR;                           /**< Channel Control and Status, offset: 0x20000 */
  __IO unsigned long CH8_ES;                            /**< Channel Error Status, offset: 0x20004 */
  __IO unsigned long CH8_INT;                           /**< Channel Interrupt Status, offset: 0x20008 */
  __IO unsigned long CH8_SBR;                           /**< Channel System Bus, offset: 0x2000C */
  __IO unsigned long CH8_PRI;                           /**< Channel Priority, offset: 0x20010 */
  unsigned char RESERVED_16[12];
  __IO unsigned long TCD8_SADDR;                        /**< TCD Source Address, offset: 0x20020 */
  __IO unsigned short TCD8_SOFF;                         /**< TCD Signed Source Address Offset, offset: 0x20024 */
  __IO unsigned short TCD8_ATTR;                         /**< TCD Transfer Attributes, offset: 0x20026 */
  union {                                          /* offset: 0x20028 */
    __IO unsigned long TCD8_NBYTES_MLOFFNO;               /**< TCD Transfer Size Without Minor Loop Offsets, offset: 0x20028 */
    __IO unsigned long TCD8_NBYTES_MLOFFYES;              /**< TCD Transfer Size with Minor Loop Offsets, offset: 0x20028 */
  } NBYTES8;
  __IO unsigned long TCD8_SLAST_SDA;                    /**< TCD Last Source Address Adjustment / Store DADDR Address, offset: 0x2002C */
  __IO unsigned long TCD8_DADDR;                        /**< TCD Destination Address, offset: 0x20030 */
  __IO unsigned short TCD8_DOFF;                         /**< TCD Signed Destination Address Offset, offset: 0x20034 */
  union {                                          /* offset: 0x20036 */
    __IO unsigned short TCD8_CITER_ELINKNO;                /**< TCD Current Major Loop Count (Minor Loop Channel Linking Disabled), offset: 0x20036 */
    __IO unsigned short TCD8_CITER_ELINKYES;               /**< TCD Current Major Loop Count (Minor Loop Channel Linking Enabled), offset: 0x20036 */
  } CITER8;
  __IO unsigned long TCD8_DLAST_SGA;                    /**< TCD Last Destination Address Adjustment / Scatter Gather Address, offset: 0x20038 */
  __IO unsigned short TCD8_CSR;                          /**< TCD Control and Status, offset: 0x2003C */
  union {                                          /* offset: 0x2003E */
    __IO unsigned short TCD8_BITER_ELINKNO;                /**< TCD Beginning Major Loop Count (Minor Loop Channel Linking Disabled), offset: 0x2003E */
    __IO unsigned short TCD8_BITER_ELINKYES;               /**< TCD Beginning Major Loop Count (Minor Loop Channel Linking Enabled), offset: 0x2003E */
  } BITER8;
  unsigned char RESERVED_17[16320];
  __IO unsigned long CH9_CSR;                           /**< Channel Control and Status, offset: 0x24000 */
  __IO unsigned long CH9_ES;                            /**< Channel Error Status, offset: 0x24004 */
  __IO unsigned long CH9_INT;                           /**< Channel Interrupt Status, offset: 0x24008 */
  __IO unsigned long CH9_SBR;                           /**< Channel System Bus, offset: 0x2400C */
  __IO unsigned long CH9_PRI;                           /**< Channel Priority, offset: 0x24010 */
  unsigned char RESERVED_18[12];
  __IO unsigned long TCD9_SADDR;                        /**< TCD Source Address, offset: 0x24020 */
  __IO unsigned short TCD9_SOFF;                         /**< TCD Signed Source Address Offset, offset: 0x24024 */
  __IO unsigned short TCD9_ATTR;                         /**< TCD Transfer Attributes, offset: 0x24026 */
  union {                                          /* offset: 0x24028 */
    __IO unsigned long TCD9_NBYTES_MLOFFNO;               /**< TCD Transfer Size Without Minor Loop Offsets, offset: 0x24028 */
    __IO unsigned long TCD9_NBYTES_MLOFFYES;              /**< TCD Transfer Size with Minor Loop Offsets, offset: 0x24028 */
  } NBYTES9;
  __IO unsigned long TCD9_SLAST_SDA;                    /**< TCD Last Source Address Adjustment / Store DADDR Address, offset: 0x2402C */
  __IO unsigned long TCD9_DADDR;                        /**< TCD Destination Address, offset: 0x24030 */
  __IO unsigned short TCD9_DOFF;                         /**< TCD Signed Destination Address Offset, offset: 0x24034 */
  union {                                          /* offset: 0x24036 */
    __IO unsigned short TCD9_CITER_ELINKNO;                /**< TCD Current Major Loop Count (Minor Loop Channel Linking Disabled), offset: 0x24036 */
    __IO unsigned short TCD9_CITER_ELINKYES;               /**< TCD Current Major Loop Count (Minor Loop Channel Linking Enabled), offset: 0x24036 */
  } CITER9;
  __IO unsigned long TCD9_DLAST_SGA;                    /**< TCD Last Destination Address Adjustment / Scatter Gather Address, offset: 0x24038 */
  __IO unsigned short TCD9_CSR;                          /**< TCD Control and Status, offset: 0x2403C */
  union {                                          /* offset: 0x2403E */
    __IO unsigned short TCD9_BITER_ELINKNO;                /**< TCD Beginning Major Loop Count (Minor Loop Channel Linking Disabled), offset: 0x2403E */
    __IO unsigned short TCD9_BITER_ELINKYES;               /**< TCD Beginning Major Loop Count (Minor Loop Channel Linking Enabled), offset: 0x2403E */
  } BITER9;
  unsigned char RESERVED_19[16320];
  __IO unsigned long CH10_CSR;                          /**< Channel Control and Status, offset: 0x28000 */
  __IO unsigned long CH10_ES;                           /**< Channel Error Status, offset: 0x28004 */
  __IO unsigned long CH10_INT;                          /**< Channel Interrupt Status, offset: 0x28008 */
  __IO unsigned long CH10_SBR;                          /**< Channel System Bus, offset: 0x2800C */
  __IO unsigned long CH10_PRI;                          /**< Channel Priority, offset: 0x28010 */
  unsigned char RESERVED_20[12];
  __IO unsigned long TCD10_SADDR;                       /**< TCD Source Address, offset: 0x28020 */
  __IO unsigned short TCD10_SOFF;                        /**< TCD Signed Source Address Offset, offset: 0x28024 */
  __IO unsigned short TCD10_ATTR;                        /**< TCD Transfer Attributes, offset: 0x28026 */
  union {                                          /* offset: 0x28028 */
    __IO unsigned long TCD10_NBYTES_MLOFFNO;              /**< TCD Transfer Size Without Minor Loop Offsets, offset: 0x28028 */
    __IO unsigned long TCD10_NBYTES_MLOFFYES;             /**< TCD Transfer Size with Minor Loop Offsets, offset: 0x28028 */
  } NBYTES10;
  __IO unsigned long TCD10_SLAST_SDA;                   /**< TCD Last Source Address Adjustment / Store DADDR Address, offset: 0x2802C */
  __IO unsigned long TCD10_DADDR;                       /**< TCD Destination Address, offset: 0x28030 */
  __IO unsigned short TCD10_DOFF;                        /**< TCD Signed Destination Address Offset, offset: 0x28034 */
  union {                                          /* offset: 0x28036 */
    __IO unsigned short TCD10_CITER_ELINKNO;               /**< TCD Current Major Loop Count (Minor Loop Channel Linking Disabled), offset: 0x28036 */
    __IO unsigned short TCD10_CITER_ELINKYES;              /**< TCD Current Major Loop Count (Minor Loop Channel Linking Enabled), offset: 0x28036 */
  } CITER10;
  __IO unsigned long TCD10_DLAST_SGA;                   /**< TCD Last Destination Address Adjustment / Scatter Gather Address, offset: 0x28038 */
  __IO unsigned short TCD10_CSR;                         /**< TCD Control and Status, offset: 0x2803C */
  union {                                          /* offset: 0x2803E */
    __IO unsigned short TCD10_BITER_ELINKNO;               /**< TCD Beginning Major Loop Count (Minor Loop Channel Linking Disabled), offset: 0x2803E */
    __IO unsigned short TCD10_BITER_ELINKYES;              /**< TCD Beginning Major Loop Count (Minor Loop Channel Linking Enabled), offset: 0x2803E */
  } BITER10;
  unsigned char RESERVED_21[16320];
  __IO unsigned long CH11_CSR;                          /**< Channel Control and Status, offset: 0x2C000 */
  __IO unsigned long CH11_ES;                           /**< Channel Error Status, offset: 0x2C004 */
  __IO unsigned long CH11_INT;                          /**< Channel Interrupt Status, offset: 0x2C008 */
  __IO unsigned long CH11_SBR;                          /**< Channel System Bus, offset: 0x2C00C */
  __IO unsigned long CH11_PRI;                          /**< Channel Priority, offset: 0x2C010 */
  unsigned char RESERVED_22[12];
  __IO unsigned long TCD11_SADDR;                       /**< TCD Source Address, offset: 0x2C020 */
  __IO unsigned short TCD11_SOFF;                        /**< TCD Signed Source Address Offset, offset: 0x2C024 */
  __IO unsigned short TCD11_ATTR;                        /**< TCD Transfer Attributes, offset: 0x2C026 */
  union {                                          /* offset: 0x2C028 */
    __IO unsigned long TCD11_NBYTES_MLOFFNO;              /**< TCD Transfer Size Without Minor Loop Offsets, offset: 0x2C028 */
    __IO unsigned long TCD11_NBYTES_MLOFFYES;             /**< TCD Transfer Size with Minor Loop Offsets, offset: 0x2C028 */
  } NBYTES11;
  __IO unsigned long TCD11_SLAST_SDA;                   /**< TCD Last Source Address Adjustment / Store DADDR Address, offset: 0x2C02C */
  __IO unsigned long TCD11_DADDR;                       /**< TCD Destination Address, offset: 0x2C030 */
  __IO unsigned short TCD11_DOFF;                        /**< TCD Signed Destination Address Offset, offset: 0x2C034 */
  union {                                          /* offset: 0x2C036 */
    __IO unsigned short TCD11_CITER_ELINKNO;               /**< TCD Current Major Loop Count (Minor Loop Channel Linking Disabled), offset: 0x2C036 */
    __IO unsigned short TCD11_CITER_ELINKYES;              /**< TCD Current Major Loop Count (Minor Loop Channel Linking Enabled), offset: 0x2C036 */
  } CITER11;
  __IO unsigned long TCD11_DLAST_SGA;                   /**< TCD Last Destination Address Adjustment / Scatter Gather Address, offset: 0x2C038 */
  __IO unsigned short TCD11_CSR;                         /**< TCD Control and Status, offset: 0x2C03C */
  union {                                          /* offset: 0x2C03E */
    __IO unsigned short TCD11_BITER_ELINKNO;               /**< TCD Beginning Major Loop Count (Minor Loop Channel Linking Disabled), offset: 0x2C03E */
    __IO unsigned short TCD11_BITER_ELINKYES;              /**< TCD Beginning Major Loop Count (Minor Loop Channel Linking Enabled), offset: 0x2C03E */
  } BITER11;
  unsigned char RESERVED_23[1916864];
  __IO unsigned long CH12_CSR;                          /**< Channel Control and Status, offset: 0x200000 */
  __IO unsigned long CH12_ES;                           /**< Channel Error Status, offset: 0x200004 */
  __IO unsigned long CH12_INT;                          /**< Channel Interrupt Status, offset: 0x200008 */
  __IO unsigned long CH12_SBR;                          /**< Channel System Bus, offset: 0x20000C */
  __IO unsigned long CH12_PRI;                          /**< Channel Priority, offset: 0x200010 */
  unsigned char RESERVED_24[12];
  __IO unsigned long TCD12_SADDR;                       /**< TCD Source Address, offset: 0x200020 */
  __IO unsigned short TCD12_SOFF;                        /**< TCD Signed Source Address Offset, offset: 0x200024 */
  __IO unsigned short TCD12_ATTR;                        /**< TCD Transfer Attributes, offset: 0x200026 */
  union {                                          /* offset: 0x200028 */
    __IO unsigned long TCD12_NBYTES_MLOFFNO;              /**< TCD Transfer Size Without Minor Loop Offsets, offset: 0x200028 */
    __IO unsigned long TCD12_NBYTES_MLOFFYES;             /**< TCD Transfer Size with Minor Loop Offsets, offset: 0x200028 */
  } NBYTES12;
  __IO unsigned long TCD12_SLAST_SDA;                   /**< TCD Last Source Address Adjustment / Store DADDR Address, offset: 0x20002C */
  __IO unsigned long TCD12_DADDR;                       /**< TCD Destination Address, offset: 0x200030 */
  __IO unsigned short TCD12_DOFF;                        /**< TCD Signed Destination Address Offset, offset: 0x200034 */
  union {                                          /* offset: 0x200036 */
    __IO unsigned short TCD12_CITER_ELINKNO;               /**< TCD Current Major Loop Count (Minor Loop Channel Linking Disabled), offset: 0x200036 */
    __IO unsigned short TCD12_CITER_ELINKYES;              /**< TCD Current Major Loop Count (Minor Loop Channel Linking Enabled), offset: 0x200036 */
  } CITER12;
  __IO unsigned long TCD12_DLAST_SGA;                   /**< TCD Last Destination Address Adjustment / Scatter Gather Address, offset: 0x200038 */
  __IO unsigned short TCD12_CSR;                         /**< TCD Control and Status, offset: 0x20003C */
  union {                                          /* offset: 0x20003E */
    __IO unsigned short TCD12_BITER_ELINKNO;               /**< TCD Beginning Major Loop Count (Minor Loop Channel Linking Disabled), offset: 0x20003E */
    __IO unsigned short TCD12_BITER_ELINKYES;              /**< TCD Beginning Major Loop Count (Minor Loop Channel Linking Enabled), offset: 0x20003E */
  } BITER12;
  unsigned char RESERVED_25[16320];
  __IO unsigned long CH13_CSR;                          /**< Channel Control and Status, offset: 0x204000 */
  __IO unsigned long CH13_ES;                           /**< Channel Error Status, offset: 0x204004 */
  __IO unsigned long CH13_INT;                          /**< Channel Interrupt Status, offset: 0x204008 */
  __IO unsigned long CH13_SBR;                          /**< Channel System Bus, offset: 0x20400C */
  __IO unsigned long CH13_PRI;                          /**< Channel Priority, offset: 0x204010 */
  unsigned char RESERVED_26[12];
  __IO unsigned long TCD13_SADDR;                       /**< TCD Source Address, offset: 0x204020 */
  __IO unsigned short TCD13_SOFF;                        /**< TCD Signed Source Address Offset, offset: 0x204024 */
  __IO unsigned short TCD13_ATTR;                        /**< TCD Transfer Attributes, offset: 0x204026 */
  union {                                          /* offset: 0x204028 */
    __IO unsigned long TCD13_NBYTES_MLOFFNO;              /**< TCD Transfer Size Without Minor Loop Offsets, offset: 0x204028 */
    __IO unsigned long TCD13_NBYTES_MLOFFYES;             /**< TCD Transfer Size with Minor Loop Offsets, offset: 0x204028 */
  } NBYTES13;
  __IO unsigned long TCD13_SLAST_SDA;                   /**< TCD Last Source Address Adjustment / Store DADDR Address, offset: 0x20402C */
  __IO unsigned long TCD13_DADDR;                       /**< TCD Destination Address, offset: 0x204030 */
  __IO unsigned short TCD13_DOFF;                        /**< TCD Signed Destination Address Offset, offset: 0x204034 */
  union {                                          /* offset: 0x204036 */
    __IO unsigned short TCD13_CITER_ELINKNO;               /**< TCD Current Major Loop Count (Minor Loop Channel Linking Disabled), offset: 0x204036 */
    __IO unsigned short TCD13_CITER_ELINKYES;              /**< TCD Current Major Loop Count (Minor Loop Channel Linking Enabled), offset: 0x204036 */
  } CITER13;
  __IO unsigned long TCD13_DLAST_SGA;                   /**< TCD Last Destination Address Adjustment / Scatter Gather Address, offset: 0x204038 */
  __IO unsigned short TCD13_CSR;                         /**< TCD Control and Status, offset: 0x20403C */
  union {                                          /* offset: 0x20403E */
    __IO unsigned short TCD13_BITER_ELINKNO;               /**< TCD Beginning Major Loop Count (Minor Loop Channel Linking Disabled), offset: 0x20403E */
    __IO unsigned short TCD13_BITER_ELINKYES;              /**< TCD Beginning Major Loop Count (Minor Loop Channel Linking Enabled), offset: 0x20403E */
  } BITER13;
  unsigned char RESERVED_27[16320];
  __IO unsigned long CH14_CSR;                          /**< Channel Control and Status, offset: 0x208000 */
  __IO unsigned long CH14_ES;                           /**< Channel Error Status, offset: 0x208004 */
  __IO unsigned long CH14_INT;                          /**< Channel Interrupt Status, offset: 0x208008 */
  __IO unsigned long CH14_SBR;                          /**< Channel System Bus, offset: 0x20800C */
  __IO unsigned long CH14_PRI;                          /**< Channel Priority, offset: 0x208010 */
  unsigned char RESERVED_28[12];
  __IO unsigned long TCD14_SADDR;                       /**< TCD Source Address, offset: 0x208020 */
  __IO unsigned short TCD14_SOFF;                        /**< TCD Signed Source Address Offset, offset: 0x208024 */
  __IO unsigned short TCD14_ATTR;                        /**< TCD Transfer Attributes, offset: 0x208026 */
  union {                                          /* offset: 0x208028 */
    __IO unsigned long TCD14_NBYTES_MLOFFNO;              /**< TCD Transfer Size Without Minor Loop Offsets, offset: 0x208028 */
    __IO unsigned long TCD14_NBYTES_MLOFFYES;             /**< TCD Transfer Size with Minor Loop Offsets, offset: 0x208028 */
  } NBYTES14;
  __IO unsigned long TCD14_SLAST_SDA;                   /**< TCD Last Source Address Adjustment / Store DADDR Address, offset: 0x20802C */
  __IO unsigned long TCD14_DADDR;                       /**< TCD Destination Address, offset: 0x208030 */
  __IO unsigned short TCD14_DOFF;                        /**< TCD Signed Destination Address Offset, offset: 0x208034 */
  union {                                          /* offset: 0x208036 */
    __IO unsigned short TCD14_CITER_ELINKNO;               /**< TCD Current Major Loop Count (Minor Loop Channel Linking Disabled), offset: 0x208036 */
    __IO unsigned short TCD14_CITER_ELINKYES;              /**< TCD Current Major Loop Count (Minor Loop Channel Linking Enabled), offset: 0x208036 */
  } CITER14;
  __IO unsigned long TCD14_DLAST_SGA;                   /**< TCD Last Destination Address Adjustment / Scatter Gather Address, offset: 0x208038 */
  __IO unsigned short TCD14_CSR;                         /**< TCD Control and Status, offset: 0x20803C */
  union {                                          /* offset: 0x20803E */
    __IO unsigned short TCD14_BITER_ELINKNO;               /**< TCD Beginning Major Loop Count (Minor Loop Channel Linking Disabled), offset: 0x20803E */
    __IO unsigned short TCD14_BITER_ELINKYES;              /**< TCD Beginning Major Loop Count (Minor Loop Channel Linking Enabled), offset: 0x20803E */
  } BITER14;
  unsigned char RESERVED_29[16320];
  __IO unsigned long CH15_CSR;                          /**< Channel Control and Status, offset: 0x20C000 */
  __IO unsigned long CH15_ES;                           /**< Channel Error Status, offset: 0x20C004 */
  __IO unsigned long CH15_INT;                          /**< Channel Interrupt Status, offset: 0x20C008 */
  __IO unsigned long CH15_SBR;                          /**< Channel System Bus, offset: 0x20C00C */
  __IO unsigned long CH15_PRI;                          /**< Channel Priority, offset: 0x20C010 */
  unsigned char RESERVED_30[12];
  __IO unsigned long TCD15_SADDR;                       /**< TCD Source Address, offset: 0x20C020 */
  __IO unsigned short TCD15_SOFF;                        /**< TCD Signed Source Address Offset, offset: 0x20C024 */
  __IO unsigned short TCD15_ATTR;                        /**< TCD Transfer Attributes, offset: 0x20C026 */
  union {                                          /* offset: 0x20C028 */
    __IO unsigned long TCD15_NBYTES_MLOFFNO;              /**< TCD Transfer Size Without Minor Loop Offsets, offset: 0x20C028 */
    __IO unsigned long TCD15_NBYTES_MLOFFYES;             /**< TCD Transfer Size with Minor Loop Offsets, offset: 0x20C028 */
  } NBYTES15;
  __IO unsigned long TCD15_SLAST_SDA;                   /**< TCD Last Source Address Adjustment / Store DADDR Address, offset: 0x20C02C */
  __IO unsigned long TCD15_DADDR;                       /**< TCD Destination Address, offset: 0x20C030 */
  __IO unsigned short TCD15_DOFF;                        /**< TCD Signed Destination Address Offset, offset: 0x20C034 */
  union {                                          /* offset: 0x20C036 */
    __IO unsigned short TCD15_CITER_ELINKNO;               /**< TCD Current Major Loop Count (Minor Loop Channel Linking Disabled), offset: 0x20C036 */
    __IO unsigned short TCD15_CITER_ELINKYES;              /**< TCD Current Major Loop Count (Minor Loop Channel Linking Enabled), offset: 0x20C036 */
  } CITER15;
  __IO unsigned long TCD15_DLAST_SGA;                   /**< TCD Last Destination Address Adjustment / Scatter Gather Address, offset: 0x20C038 */
  __IO unsigned short TCD15_CSR;                         /**< TCD Control and Status, offset: 0x20C03C */
  union {                                          /* offset: 0x20C03E */
    __IO unsigned short TCD15_BITER_ELINKNO;               /**< TCD Beginning Major Loop Count (Minor Loop Channel Linking Disabled), offset: 0x20C03E */
    __IO unsigned short TCD15_BITER_ELINKYES;              /**< TCD Beginning Major Loop Count (Minor Loop Channel Linking Enabled), offset: 0x20C03E */
  } BITER15;
  unsigned char RESERVED_31[16320];
  __IO unsigned long CH16_CSR;                          /**< Channel Control and Status, offset: 0x210000 */
  __IO unsigned long CH16_ES;                           /**< Channel Error Status, offset: 0x210004 */
  __IO unsigned long CH16_INT;                          /**< Channel Interrupt Status, offset: 0x210008 */
  __IO unsigned long CH16_SBR;                          /**< Channel System Bus, offset: 0x21000C */
  __IO unsigned long CH16_PRI;                          /**< Channel Priority, offset: 0x210010 */
  unsigned char RESERVED_32[12];
  __IO unsigned long TCD16_SADDR;                       /**< TCD Source Address, offset: 0x210020 */
  __IO unsigned short TCD16_SOFF;                        /**< TCD Signed Source Address Offset, offset: 0x210024 */
  __IO unsigned short TCD16_ATTR;                        /**< TCD Transfer Attributes, offset: 0x210026 */
  union {                                          /* offset: 0x210028 */
    __IO unsigned long TCD16_NBYTES_MLOFFNO;              /**< TCD Transfer Size Without Minor Loop Offsets, offset: 0x210028 */
    __IO unsigned long TCD16_NBYTES_MLOFFYES;             /**< TCD Transfer Size with Minor Loop Offsets, offset: 0x210028 */
  } NBYTES16;
  __IO unsigned long TCD16_SLAST_SDA;                   /**< TCD Last Source Address Adjustment / Store DADDR Address, offset: 0x21002C */
  __IO unsigned long TCD16_DADDR;                       /**< TCD Destination Address, offset: 0x210030 */
  __IO unsigned short TCD16_DOFF;                        /**< TCD Signed Destination Address Offset, offset: 0x210034 */
  union {                                          /* offset: 0x210036 */
    __IO unsigned short TCD16_CITER_ELINKNO;               /**< TCD Current Major Loop Count (Minor Loop Channel Linking Disabled), offset: 0x210036 */
    __IO unsigned short TCD16_CITER_ELINKYES;              /**< TCD Current Major Loop Count (Minor Loop Channel Linking Enabled), offset: 0x210036 */
  } CITER16;
  __IO unsigned long TCD16_DLAST_SGA;                   /**< TCD Last Destination Address Adjustment / Scatter Gather Address, offset: 0x210038 */
  __IO unsigned short TCD16_CSR;                         /**< TCD Control and Status, offset: 0x21003C */
  union {                                          /* offset: 0x21003E */
    __IO unsigned short TCD16_BITER_ELINKNO;               /**< TCD Beginning Major Loop Count (Minor Loop Channel Linking Disabled), offset: 0x21003E */
    __IO unsigned short TCD16_BITER_ELINKYES;              /**< TCD Beginning Major Loop Count (Minor Loop Channel Linking Enabled), offset: 0x21003E */
  } BITER16;
  unsigned char RESERVED_33[16320];
  __IO unsigned long CH17_CSR;                          /**< Channel Control and Status, offset: 0x214000 */
  __IO unsigned long CH17_ES;                           /**< Channel Error Status, offset: 0x214004 */
  __IO unsigned long CH17_INT;                          /**< Channel Interrupt Status, offset: 0x214008 */
  __IO unsigned long CH17_SBR;                          /**< Channel System Bus, offset: 0x21400C */
  __IO unsigned long CH17_PRI;                          /**< Channel Priority, offset: 0x214010 */
  unsigned char RESERVED_34[12];
  __IO unsigned long TCD17_SADDR;                       /**< TCD Source Address, offset: 0x214020 */
  __IO unsigned short TCD17_SOFF;                        /**< TCD Signed Source Address Offset, offset: 0x214024 */
  __IO unsigned short TCD17_ATTR;                        /**< TCD Transfer Attributes, offset: 0x214026 */
  union {                                          /* offset: 0x214028 */
    __IO unsigned long TCD17_NBYTES_MLOFFNO;              /**< TCD Transfer Size Without Minor Loop Offsets, offset: 0x214028 */
    __IO unsigned long TCD17_NBYTES_MLOFFYES;             /**< TCD Transfer Size with Minor Loop Offsets, offset: 0x214028 */
  } NBYTES17;
  __IO unsigned long TCD17_SLAST_SDA;                   /**< TCD Last Source Address Adjustment / Store DADDR Address, offset: 0x21402C */
  __IO unsigned long TCD17_DADDR;                       /**< TCD Destination Address, offset: 0x214030 */
  __IO unsigned short TCD17_DOFF;                        /**< TCD Signed Destination Address Offset, offset: 0x214034 */
  union {                                          /* offset: 0x214036 */
    __IO unsigned short TCD17_CITER_ELINKNO;               /**< TCD Current Major Loop Count (Minor Loop Channel Linking Disabled), offset: 0x214036 */
    __IO unsigned short TCD17_CITER_ELINKYES;              /**< TCD Current Major Loop Count (Minor Loop Channel Linking Enabled), offset: 0x214036 */
  } CITER17;
  __IO unsigned long TCD17_DLAST_SGA;                   /**< TCD Last Destination Address Adjustment / Scatter Gather Address, offset: 0x214038 */
  __IO unsigned short TCD17_CSR;                         /**< TCD Control and Status, offset: 0x21403C */
  union {                                          /* offset: 0x21403E */
    __IO unsigned short TCD17_BITER_ELINKNO;               /**< TCD Beginning Major Loop Count (Minor Loop Channel Linking Disabled), offset: 0x21403E */
    __IO unsigned short TCD17_BITER_ELINKYES;              /**< TCD Beginning Major Loop Count (Minor Loop Channel Linking Enabled), offset: 0x21403E */
  } BITER17;
  unsigned char RESERVED_35[16320];
  __IO unsigned long CH18_CSR;                          /**< Channel Control and Status, offset: 0x218000 */
  __IO unsigned long CH18_ES;                           /**< Channel Error Status, offset: 0x218004 */
  __IO unsigned long CH18_INT;                          /**< Channel Interrupt Status, offset: 0x218008 */
  __IO unsigned long CH18_SBR;                          /**< Channel System Bus, offset: 0x21800C */
  __IO unsigned long CH18_PRI;                          /**< Channel Priority, offset: 0x218010 */
  unsigned char RESERVED_36[12];
  __IO unsigned long TCD18_SADDR;                       /**< TCD Source Address, offset: 0x218020 */
  __IO unsigned short TCD18_SOFF;                        /**< TCD Signed Source Address Offset, offset: 0x218024 */
  __IO unsigned short TCD18_ATTR;                        /**< TCD Transfer Attributes, offset: 0x218026 */
  union {                                          /* offset: 0x218028 */
    __IO unsigned long TCD18_NBYTES_MLOFFNO;              /**< TCD Transfer Size Without Minor Loop Offsets, offset: 0x218028 */
    __IO unsigned long TCD18_NBYTES_MLOFFYES;             /**< TCD Transfer Size with Minor Loop Offsets, offset: 0x218028 */
  } NBYTES18;
  __IO unsigned long TCD18_SLAST_SDA;                   /**< TCD Last Source Address Adjustment / Store DADDR Address, offset: 0x21802C */
  __IO unsigned long TCD18_DADDR;                       /**< TCD Destination Address, offset: 0x218030 */
  __IO unsigned short TCD18_DOFF;                        /**< TCD Signed Destination Address Offset, offset: 0x218034 */
  union {                                          /* offset: 0x218036 */
    __IO unsigned short TCD18_CITER_ELINKNO;               /**< TCD Current Major Loop Count (Minor Loop Channel Linking Disabled), offset: 0x218036 */
    __IO unsigned short TCD18_CITER_ELINKYES;              /**< TCD Current Major Loop Count (Minor Loop Channel Linking Enabled), offset: 0x218036 */
  } CITER18;
  __IO unsigned long TCD18_DLAST_SGA;                   /**< TCD Last Destination Address Adjustment / Scatter Gather Address, offset: 0x218038 */
  __IO unsigned short TCD18_CSR;                         /**< TCD Control and Status, offset: 0x21803C */
  union {                                          /* offset: 0x21803E */
    __IO unsigned short TCD18_BITER_ELINKNO;               /**< TCD Beginning Major Loop Count (Minor Loop Channel Linking Disabled), offset: 0x21803E */
    __IO unsigned short TCD18_BITER_ELINKYES;              /**< TCD Beginning Major Loop Count (Minor Loop Channel Linking Enabled), offset: 0x21803E */
  } BITER18;
  unsigned char RESERVED_37[16320];
  __IO unsigned long CH19_CSR;                          /**< Channel Control and Status, offset: 0x21C000 */
  __IO unsigned long CH19_ES;                           /**< Channel Error Status, offset: 0x21C004 */
  __IO unsigned long CH19_INT;                          /**< Channel Interrupt Status, offset: 0x21C008 */
  __IO unsigned long CH19_SBR;                          /**< Channel System Bus, offset: 0x21C00C */
  __IO unsigned long CH19_PRI;                          /**< Channel Priority, offset: 0x21C010 */
  unsigned char RESERVED_38[12];
  __IO unsigned long TCD19_SADDR;                       /**< TCD Source Address, offset: 0x21C020 */
  __IO unsigned short TCD19_SOFF;                        /**< TCD Signed Source Address Offset, offset: 0x21C024 */
  __IO unsigned short TCD19_ATTR;                        /**< TCD Transfer Attributes, offset: 0x21C026 */
  union {                                          /* offset: 0x21C028 */
    __IO unsigned long TCD19_NBYTES_MLOFFNO;              /**< TCD Transfer Size Without Minor Loop Offsets, offset: 0x21C028 */
    __IO unsigned long TCD19_NBYTES_MLOFFYES;             /**< TCD Transfer Size with Minor Loop Offsets, offset: 0x21C028 */
  } NBYTES19;
  __IO unsigned long TCD19_SLAST_SDA;                   /**< TCD Last Source Address Adjustment / Store DADDR Address, offset: 0x21C02C */
  __IO unsigned long TCD19_DADDR;                       /**< TCD Destination Address, offset: 0x21C030 */
  __IO unsigned short TCD19_DOFF;                        /**< TCD Signed Destination Address Offset, offset: 0x21C034 */
  union {                                          /* offset: 0x21C036 */
    __IO unsigned short TCD19_CITER_ELINKNO;               /**< TCD Current Major Loop Count (Minor Loop Channel Linking Disabled), offset: 0x21C036 */
    __IO unsigned short TCD19_CITER_ELINKYES;              /**< TCD Current Major Loop Count (Minor Loop Channel Linking Enabled), offset: 0x21C036 */
  } CITER19;
  __IO unsigned long TCD19_DLAST_SGA;                   /**< TCD Last Destination Address Adjustment / Scatter Gather Address, offset: 0x21C038 */
  __IO unsigned short TCD19_CSR;                         /**< TCD Control and Status, offset: 0x21C03C */
  union {                                          /* offset: 0x21C03E */
    __IO unsigned short TCD19_BITER_ELINKNO;               /**< TCD Beginning Major Loop Count (Minor Loop Channel Linking Disabled), offset: 0x21C03E */
    __IO unsigned short TCD19_BITER_ELINKYES;              /**< TCD Beginning Major Loop Count (Minor Loop Channel Linking Enabled), offset: 0x21C03E */
  } BITER19;
  unsigned char RESERVED_39[16320];
  __IO unsigned long CH20_CSR;                          /**< Channel Control and Status, offset: 0x220000 */
  __IO unsigned long CH20_ES;                           /**< Channel Error Status, offset: 0x220004 */
  __IO unsigned long CH20_INT;                          /**< Channel Interrupt Status, offset: 0x220008 */
  __IO unsigned long CH20_SBR;                          /**< Channel System Bus, offset: 0x22000C */
  __IO unsigned long CH20_PRI;                          /**< Channel Priority, offset: 0x220010 */
  unsigned char RESERVED_40[12];
  __IO unsigned long TCD20_SADDR;                       /**< TCD Source Address, offset: 0x220020 */
  __IO unsigned short TCD20_SOFF;                        /**< TCD Signed Source Address Offset, offset: 0x220024 */
  __IO unsigned short TCD20_ATTR;                        /**< TCD Transfer Attributes, offset: 0x220026 */
  union {                                          /* offset: 0x220028 */
    __IO unsigned long TCD20_NBYTES_MLOFFNO;              /**< TCD Transfer Size Without Minor Loop Offsets, offset: 0x220028 */
    __IO unsigned long TCD20_NBYTES_MLOFFYES;             /**< TCD Transfer Size with Minor Loop Offsets, offset: 0x220028 */
  } NBYTES20;
  __IO unsigned long TCD20_SLAST_SDA;                   /**< TCD Last Source Address Adjustment / Store DADDR Address, offset: 0x22002C */
  __IO unsigned long TCD20_DADDR;                       /**< TCD Destination Address, offset: 0x220030 */
  __IO unsigned short TCD20_DOFF;                        /**< TCD Signed Destination Address Offset, offset: 0x220034 */
  union {                                          /* offset: 0x220036 */
    __IO unsigned short TCD20_CITER_ELINKNO;               /**< TCD Current Major Loop Count (Minor Loop Channel Linking Disabled), offset: 0x220036 */
    __IO unsigned short TCD20_CITER_ELINKYES;              /**< TCD Current Major Loop Count (Minor Loop Channel Linking Enabled), offset: 0x220036 */
  } CITER20;
  __IO unsigned long TCD20_DLAST_SGA;                   /**< TCD Last Destination Address Adjustment / Scatter Gather Address, offset: 0x220038 */
  __IO unsigned short TCD20_CSR;                         /**< TCD Control and Status, offset: 0x22003C */
  union {                                          /* offset: 0x22003E */
    __IO unsigned short TCD20_BITER_ELINKNO;               /**< TCD Beginning Major Loop Count (Minor Loop Channel Linking Disabled), offset: 0x22003E */
    __IO unsigned short TCD20_BITER_ELINKYES;              /**< TCD Beginning Major Loop Count (Minor Loop Channel Linking Enabled), offset: 0x22003E */
  } BITER20;
  unsigned char RESERVED_41[16320];
  __IO unsigned long CH21_CSR;                          /**< Channel Control and Status, offset: 0x224000 */
  __IO unsigned long CH21_ES;                           /**< Channel Error Status, offset: 0x224004 */
  __IO unsigned long CH21_INT;                          /**< Channel Interrupt Status, offset: 0x224008 */
  __IO unsigned long CH21_SBR;                          /**< Channel System Bus, offset: 0x22400C */
  __IO unsigned long CH21_PRI;                          /**< Channel Priority, offset: 0x224010 */
  unsigned char RESERVED_42[12];
  __IO unsigned long TCD21_SADDR;                       /**< TCD Source Address, offset: 0x224020 */
  __IO unsigned short TCD21_SOFF;                        /**< TCD Signed Source Address Offset, offset: 0x224024 */
  __IO unsigned short TCD21_ATTR;                        /**< TCD Transfer Attributes, offset: 0x224026 */
  union {                                          /* offset: 0x224028 */
    __IO unsigned long TCD21_NBYTES_MLOFFNO;              /**< TCD Transfer Size Without Minor Loop Offsets, offset: 0x224028 */
    __IO unsigned long TCD21_NBYTES_MLOFFYES;             /**< TCD Transfer Size with Minor Loop Offsets, offset: 0x224028 */
  } NBYTES21;
  __IO unsigned long TCD21_SLAST_SDA;                   /**< TCD Last Source Address Adjustment / Store DADDR Address, offset: 0x22402C */
  __IO unsigned long TCD21_DADDR;                       /**< TCD Destination Address, offset: 0x224030 */
  __IO unsigned short TCD21_DOFF;                        /**< TCD Signed Destination Address Offset, offset: 0x224034 */
  union {                                          /* offset: 0x224036 */
    __IO unsigned short TCD21_CITER_ELINKNO;               /**< TCD Current Major Loop Count (Minor Loop Channel Linking Disabled), offset: 0x224036 */
    __IO unsigned short TCD21_CITER_ELINKYES;              /**< TCD Current Major Loop Count (Minor Loop Channel Linking Enabled), offset: 0x224036 */
  } CITER21;
  __IO unsigned long TCD21_DLAST_SGA;                   /**< TCD Last Destination Address Adjustment / Scatter Gather Address, offset: 0x224038 */
  __IO unsigned short TCD21_CSR;                         /**< TCD Control and Status, offset: 0x22403C */
  union {                                          /* offset: 0x22403E */
    __IO unsigned short TCD21_BITER_ELINKNO;               /**< TCD Beginning Major Loop Count (Minor Loop Channel Linking Disabled), offset: 0x22403E */
    __IO unsigned short TCD21_BITER_ELINKYES;              /**< TCD Beginning Major Loop Count (Minor Loop Channel Linking Enabled), offset: 0x22403E */
  } BITER21;
  unsigned char RESERVED_43[16320];
  __IO unsigned long CH22_CSR;                          /**< Channel Control and Status, offset: 0x228000 */
  __IO unsigned long CH22_ES;                           /**< Channel Error Status, offset: 0x228004 */
  __IO unsigned long CH22_INT;                          /**< Channel Interrupt Status, offset: 0x228008 */
  __IO unsigned long CH22_SBR;                          /**< Channel System Bus, offset: 0x22800C */
  __IO unsigned long CH22_PRI;                          /**< Channel Priority, offset: 0x228010 */
  unsigned char RESERVED_44[12];
  __IO unsigned long TCD22_SADDR;                       /**< TCD Source Address, offset: 0x228020 */
  __IO unsigned short TCD22_SOFF;                        /**< TCD Signed Source Address Offset, offset: 0x228024 */
  __IO unsigned short TCD22_ATTR;                        /**< TCD Transfer Attributes, offset: 0x228026 */
  union {                                          /* offset: 0x228028 */
    __IO unsigned long TCD22_NBYTES_MLOFFNO;              /**< TCD Transfer Size Without Minor Loop Offsets, offset: 0x228028 */
    __IO unsigned long TCD22_NBYTES_MLOFFYES;             /**< TCD Transfer Size with Minor Loop Offsets, offset: 0x228028 */
  } NBYTES22;
  __IO unsigned long TCD22_SLAST_SDA;                   /**< TCD Last Source Address Adjustment / Store DADDR Address, offset: 0x22802C */
  __IO unsigned long TCD22_DADDR;                       /**< TCD Destination Address, offset: 0x228030 */
  __IO unsigned short TCD22_DOFF;                        /**< TCD Signed Destination Address Offset, offset: 0x228034 */
  union {                                          /* offset: 0x228036 */
    __IO unsigned short TCD22_CITER_ELINKNO;               /**< TCD Current Major Loop Count (Minor Loop Channel Linking Disabled), offset: 0x228036 */
    __IO unsigned short TCD22_CITER_ELINKYES;              /**< TCD Current Major Loop Count (Minor Loop Channel Linking Enabled), offset: 0x228036 */
  } CITER22;
  __IO unsigned long TCD22_DLAST_SGA;                   /**< TCD Last Destination Address Adjustment / Scatter Gather Address, offset: 0x228038 */
  __IO unsigned short TCD22_CSR;                         /**< TCD Control and Status, offset: 0x22803C */
  union {                                          /* offset: 0x22803E */
    __IO unsigned short TCD22_BITER_ELINKNO;               /**< TCD Beginning Major Loop Count (Minor Loop Channel Linking Disabled), offset: 0x22803E */
    __IO unsigned short TCD22_BITER_ELINKYES;              /**< TCD Beginning Major Loop Count (Minor Loop Channel Linking Enabled), offset: 0x22803E */
  } BITER22;
  unsigned char RESERVED_45[16320];
  __IO unsigned long CH23_CSR;                          /**< Channel Control and Status, offset: 0x22C000 */
  __IO unsigned long CH23_ES;                           /**< Channel Error Status, offset: 0x22C004 */
  __IO unsigned long CH23_INT;                          /**< Channel Interrupt Status, offset: 0x22C008 */
  __IO unsigned long CH23_SBR;                          /**< Channel System Bus, offset: 0x22C00C */
  __IO unsigned long CH23_PRI;                          /**< Channel Priority, offset: 0x22C010 */
  unsigned char RESERVED_46[12];
  __IO unsigned long TCD23_SADDR;                       /**< TCD Source Address, offset: 0x22C020 */
  __IO unsigned short TCD23_SOFF;                        /**< TCD Signed Source Address Offset, offset: 0x22C024 */
  __IO unsigned short TCD23_ATTR;                        /**< TCD Transfer Attributes, offset: 0x22C026 */
  union {                                          /* offset: 0x22C028 */
    __IO unsigned long TCD23_NBYTES_MLOFFNO;              /**< TCD Transfer Size Without Minor Loop Offsets, offset: 0x22C028 */
    __IO unsigned long TCD23_NBYTES_MLOFFYES;             /**< TCD Transfer Size with Minor Loop Offsets, offset: 0x22C028 */
  } NBYTES23;
  __IO unsigned long TCD23_SLAST_SDA;                   /**< TCD Last Source Address Adjustment / Store DADDR Address, offset: 0x22C02C */
  __IO unsigned long TCD23_DADDR;                       /**< TCD Destination Address, offset: 0x22C030 */
  __IO unsigned short TCD23_DOFF;                        /**< TCD Signed Destination Address Offset, offset: 0x22C034 */
  union {                                          /* offset: 0x22C036 */
    __IO unsigned short TCD23_CITER_ELINKNO;               /**< TCD Current Major Loop Count (Minor Loop Channel Linking Disabled), offset: 0x22C036 */
    __IO unsigned short TCD23_CITER_ELINKYES;              /**< TCD Current Major Loop Count (Minor Loop Channel Linking Enabled), offset: 0x22C036 */
  } CITER23;
  __IO unsigned long TCD23_DLAST_SGA;                   /**< TCD Last Destination Address Adjustment / Scatter Gather Address, offset: 0x22C038 */
  __IO unsigned short TCD23_CSR;                         /**< TCD Control and Status, offset: 0x22C03C */
  union {                                          /* offset: 0x22C03E */
    __IO unsigned short TCD23_BITER_ELINKNO;               /**< TCD Beginning Major Loop Count (Minor Loop Channel Linking Disabled), offset: 0x22C03E */
    __IO unsigned short TCD23_BITER_ELINKYES;              /**< TCD Beginning Major Loop Count (Minor Loop Channel Linking Enabled), offset: 0x22C03E */
  } BITER23;
  unsigned char RESERVED_47[16320];
  __IO unsigned long CH24_CSR;                          /**< Channel Control and Status, offset: 0x230000 */
  __IO unsigned long CH24_ES;                           /**< Channel Error Status, offset: 0x230004 */
  __IO unsigned long CH24_INT;                          /**< Channel Interrupt Status, offset: 0x230008 */
  __IO unsigned long CH24_SBR;                          /**< Channel System Bus, offset: 0x23000C */
  __IO unsigned long CH24_PRI;                          /**< Channel Priority, offset: 0x230010 */
  unsigned char RESERVED_48[12];
  __IO unsigned long TCD24_SADDR;                       /**< TCD Source Address, offset: 0x230020 */
  __IO unsigned short TCD24_SOFF;                        /**< TCD Signed Source Address Offset, offset: 0x230024 */
  __IO unsigned short TCD24_ATTR;                        /**< TCD Transfer Attributes, offset: 0x230026 */
  union {                                          /* offset: 0x230028 */
    __IO unsigned long TCD24_NBYTES_MLOFFNO;              /**< TCD Transfer Size Without Minor Loop Offsets, offset: 0x230028 */
    __IO unsigned long TCD24_NBYTES_MLOFFYES;             /**< TCD Transfer Size with Minor Loop Offsets, offset: 0x230028 */
  } NBYTES24;
  __IO unsigned long TCD24_SLAST_SDA;                   /**< TCD Last Source Address Adjustment / Store DADDR Address, offset: 0x23002C */
  __IO unsigned long TCD24_DADDR;                       /**< TCD Destination Address, offset: 0x230030 */
  __IO unsigned short TCD24_DOFF;                        /**< TCD Signed Destination Address Offset, offset: 0x230034 */
  union {                                          /* offset: 0x230036 */
    __IO unsigned short TCD24_CITER_ELINKNO;               /**< TCD Current Major Loop Count (Minor Loop Channel Linking Disabled), offset: 0x230036 */
    __IO unsigned short TCD24_CITER_ELINKYES;              /**< TCD Current Major Loop Count (Minor Loop Channel Linking Enabled), offset: 0x230036 */
  } CITER24;
  __IO unsigned long TCD24_DLAST_SGA;                   /**< TCD Last Destination Address Adjustment / Scatter Gather Address, offset: 0x230038 */
  __IO unsigned short TCD24_CSR;                         /**< TCD Control and Status, offset: 0x23003C */
  union {                                          /* offset: 0x23003E */
    __IO unsigned short TCD24_BITER_ELINKNO;               /**< TCD Beginning Major Loop Count (Minor Loop Channel Linking Disabled), offset: 0x23003E */
    __IO unsigned short TCD24_BITER_ELINKYES;              /**< TCD Beginning Major Loop Count (Minor Loop Channel Linking Enabled), offset: 0x23003E */
  } BITER24;
  unsigned char RESERVED_49[16320];
  __IO unsigned long CH25_CSR;                          /**< Channel Control and Status, offset: 0x234000 */
  __IO unsigned long CH25_ES;                           /**< Channel Error Status, offset: 0x234004 */
  __IO unsigned long CH25_INT;                          /**< Channel Interrupt Status, offset: 0x234008 */
  __IO unsigned long CH25_SBR;                          /**< Channel System Bus, offset: 0x23400C */
  __IO unsigned long CH25_PRI;                          /**< Channel Priority, offset: 0x234010 */
  unsigned char RESERVED_50[12];
  __IO unsigned long TCD25_SADDR;                       /**< TCD Source Address, offset: 0x234020 */
  __IO unsigned short TCD25_SOFF;                        /**< TCD Signed Source Address Offset, offset: 0x234024 */
  __IO unsigned short TCD25_ATTR;                        /**< TCD Transfer Attributes, offset: 0x234026 */
  union {                                          /* offset: 0x234028 */
    __IO unsigned long TCD25_NBYTES_MLOFFNO;              /**< TCD Transfer Size Without Minor Loop Offsets, offset: 0x234028 */
    __IO unsigned long TCD25_NBYTES_MLOFFYES;             /**< TCD Transfer Size with Minor Loop Offsets, offset: 0x234028 */
  } NBYTES25;
  __IO unsigned long TCD25_SLAST_SDA;                   /**< TCD Last Source Address Adjustment / Store DADDR Address, offset: 0x23402C */
  __IO unsigned long TCD25_DADDR;                       /**< TCD Destination Address, offset: 0x234030 */
  __IO unsigned short TCD25_DOFF;                        /**< TCD Signed Destination Address Offset, offset: 0x234034 */
  union {                                          /* offset: 0x234036 */
    __IO unsigned short TCD25_CITER_ELINKNO;               /**< TCD Current Major Loop Count (Minor Loop Channel Linking Disabled), offset: 0x234036 */
    __IO unsigned short TCD25_CITER_ELINKYES;              /**< TCD Current Major Loop Count (Minor Loop Channel Linking Enabled), offset: 0x234036 */
  } CITER25;
  __IO unsigned long TCD25_DLAST_SGA;                   /**< TCD Last Destination Address Adjustment / Scatter Gather Address, offset: 0x234038 */
  __IO unsigned short TCD25_CSR;                         /**< TCD Control and Status, offset: 0x23403C */
  union {                                          /* offset: 0x23403E */
    __IO unsigned short TCD25_BITER_ELINKNO;               /**< TCD Beginning Major Loop Count (Minor Loop Channel Linking Disabled), offset: 0x23403E */
    __IO unsigned short TCD25_BITER_ELINKYES;              /**< TCD Beginning Major Loop Count (Minor Loop Channel Linking Enabled), offset: 0x23403E */
  } BITER25;
  unsigned char RESERVED_51[16320];
  __IO unsigned long CH26_CSR;                          /**< Channel Control and Status, offset: 0x238000 */
  __IO unsigned long CH26_ES;                           /**< Channel Error Status, offset: 0x238004 */
  __IO unsigned long CH26_INT;                          /**< Channel Interrupt Status, offset: 0x238008 */
  __IO unsigned long CH26_SBR;                          /**< Channel System Bus, offset: 0x23800C */
  __IO unsigned long CH26_PRI;                          /**< Channel Priority, offset: 0x238010 */
  unsigned char RESERVED_52[12];
  __IO unsigned long TCD26_SADDR;                       /**< TCD Source Address, offset: 0x238020 */
  __IO unsigned short TCD26_SOFF;                        /**< TCD Signed Source Address Offset, offset: 0x238024 */
  __IO unsigned short TCD26_ATTR;                        /**< TCD Transfer Attributes, offset: 0x238026 */
  union {                                          /* offset: 0x238028 */
    __IO unsigned long TCD26_NBYTES_MLOFFNO;              /**< TCD Transfer Size Without Minor Loop Offsets, offset: 0x238028 */
    __IO unsigned long TCD26_NBYTES_MLOFFYES;             /**< TCD Transfer Size with Minor Loop Offsets, offset: 0x238028 */
  } NBYTES26;
  __IO unsigned long TCD26_SLAST_SDA;                   /**< TCD Last Source Address Adjustment / Store DADDR Address, offset: 0x23802C */
  __IO unsigned long TCD26_DADDR;                       /**< TCD Destination Address, offset: 0x238030 */
  __IO unsigned short TCD26_DOFF;                        /**< TCD Signed Destination Address Offset, offset: 0x238034 */
  union {                                          /* offset: 0x238036 */
    __IO unsigned short TCD26_CITER_ELINKNO;               /**< TCD Current Major Loop Count (Minor Loop Channel Linking Disabled), offset: 0x238036 */
    __IO unsigned short TCD26_CITER_ELINKYES;              /**< TCD Current Major Loop Count (Minor Loop Channel Linking Enabled), offset: 0x238036 */
  } CITER26;
  __IO unsigned long TCD26_DLAST_SGA;                   /**< TCD Last Destination Address Adjustment / Scatter Gather Address, offset: 0x238038 */
  __IO unsigned short TCD26_CSR;                         /**< TCD Control and Status, offset: 0x23803C */
  union {                                          /* offset: 0x23803E */
    __IO unsigned short TCD26_BITER_ELINKNO;               /**< TCD Beginning Major Loop Count (Minor Loop Channel Linking Disabled), offset: 0x23803E */
    __IO unsigned short TCD26_BITER_ELINKYES;              /**< TCD Beginning Major Loop Count (Minor Loop Channel Linking Enabled), offset: 0x23803E */
  } BITER26;
  unsigned char RESERVED_53[16320];
  __IO unsigned long CH27_CSR;                          /**< Channel Control and Status, offset: 0x23C000 */
  __IO unsigned long CH27_ES;                           /**< Channel Error Status, offset: 0x23C004 */
  __IO unsigned long CH27_INT;                          /**< Channel Interrupt Status, offset: 0x23C008 */
  __IO unsigned long CH27_SBR;                          /**< Channel System Bus, offset: 0x23C00C */
  __IO unsigned long CH27_PRI;                          /**< Channel Priority, offset: 0x23C010 */
  unsigned char RESERVED_54[12];
  __IO unsigned long TCD27_SADDR;                       /**< TCD Source Address, offset: 0x23C020 */
  __IO unsigned short TCD27_SOFF;                        /**< TCD Signed Source Address Offset, offset: 0x23C024 */
  __IO unsigned short TCD27_ATTR;                        /**< TCD Transfer Attributes, offset: 0x23C026 */
  union {                                          /* offset: 0x23C028 */
    __IO unsigned long TCD27_NBYTES_MLOFFNO;              /**< TCD Transfer Size Without Minor Loop Offsets, offset: 0x23C028 */
    __IO unsigned long TCD27_NBYTES_MLOFFYES;             /**< TCD Transfer Size with Minor Loop Offsets, offset: 0x23C028 */
  } NBYTES27;
  __IO unsigned long TCD27_SLAST_SDA;                   /**< TCD Last Source Address Adjustment / Store DADDR Address, offset: 0x23C02C */
  __IO unsigned long TCD27_DADDR;                       /**< TCD Destination Address, offset: 0x23C030 */
  __IO unsigned short TCD27_DOFF;                        /**< TCD Signed Destination Address Offset, offset: 0x23C034 */
  union {                                          /* offset: 0x23C036 */
    __IO unsigned short TCD27_CITER_ELINKNO;               /**< TCD Current Major Loop Count (Minor Loop Channel Linking Disabled), offset: 0x23C036 */
    __IO unsigned short TCD27_CITER_ELINKYES;              /**< TCD Current Major Loop Count (Minor Loop Channel Linking Enabled), offset: 0x23C036 */
  } CITER27;
  __IO unsigned long TCD27_DLAST_SGA;                   /**< TCD Last Destination Address Adjustment / Scatter Gather Address, offset: 0x23C038 */
  __IO unsigned short TCD27_CSR;                         /**< TCD Control and Status, offset: 0x23C03C */
  union {                                          /* offset: 0x23C03E */
    __IO unsigned short TCD27_BITER_ELINKNO;               /**< TCD Beginning Major Loop Count (Minor Loop Channel Linking Disabled), offset: 0x23C03E */
    __IO unsigned short TCD27_BITER_ELINKYES;              /**< TCD Beginning Major Loop Count (Minor Loop Channel Linking Enabled), offset: 0x23C03E */
  } BITER27;
  unsigned char RESERVED_55[16320];
  __IO unsigned long CH28_CSR;                          /**< Channel Control and Status, offset: 0x240000 */
  __IO unsigned long CH28_ES;                           /**< Channel Error Status, offset: 0x240004 */
  __IO unsigned long CH28_INT;                          /**< Channel Interrupt Status, offset: 0x240008 */
  __IO unsigned long CH28_SBR;                          /**< Channel System Bus, offset: 0x24000C */
  __IO unsigned long CH28_PRI;                          /**< Channel Priority, offset: 0x240010 */
  unsigned char RESERVED_56[12];
  __IO unsigned long TCD28_SADDR;                       /**< TCD Source Address, offset: 0x240020 */
  __IO unsigned short TCD28_SOFF;                        /**< TCD Signed Source Address Offset, offset: 0x240024 */
  __IO unsigned short TCD28_ATTR;                        /**< TCD Transfer Attributes, offset: 0x240026 */
  union {                                          /* offset: 0x240028 */
    __IO unsigned long TCD28_NBYTES_MLOFFNO;              /**< TCD Transfer Size Without Minor Loop Offsets, offset: 0x240028 */
    __IO unsigned long TCD28_NBYTES_MLOFFYES;             /**< TCD Transfer Size with Minor Loop Offsets, offset: 0x240028 */
  } NBYTES28;
  __IO unsigned long TCD28_SLAST_SDA;                   /**< TCD Last Source Address Adjustment / Store DADDR Address, offset: 0x24002C */
  __IO unsigned long TCD28_DADDR;                       /**< TCD Destination Address, offset: 0x240030 */
  __IO unsigned short TCD28_DOFF;                        /**< TCD Signed Destination Address Offset, offset: 0x240034 */
  union {                                          /* offset: 0x240036 */
    __IO unsigned short TCD28_CITER_ELINKNO;               /**< TCD Current Major Loop Count (Minor Loop Channel Linking Disabled), offset: 0x240036 */
    __IO unsigned short TCD28_CITER_ELINKYES;              /**< TCD Current Major Loop Count (Minor Loop Channel Linking Enabled), offset: 0x240036 */
  } CITER28;
  __IO unsigned long TCD28_DLAST_SGA;                   /**< TCD Last Destination Address Adjustment / Scatter Gather Address, offset: 0x240038 */
  __IO unsigned short TCD28_CSR;                         /**< TCD Control and Status, offset: 0x24003C */
  union {                                          /* offset: 0x24003E */
    __IO unsigned short TCD28_BITER_ELINKNO;               /**< TCD Beginning Major Loop Count (Minor Loop Channel Linking Disabled), offset: 0x24003E */
    __IO unsigned short TCD28_BITER_ELINKYES;              /**< TCD Beginning Major Loop Count (Minor Loop Channel Linking Enabled), offset: 0x24003E */
  } BITER28;
  unsigned char RESERVED_57[16320];
  __IO unsigned long CH29_CSR;                          /**< Channel Control and Status, offset: 0x244000 */
  __IO unsigned long CH29_ES;                           /**< Channel Error Status, offset: 0x244004 */
  __IO unsigned long CH29_INT;                          /**< Channel Interrupt Status, offset: 0x244008 */
  __IO unsigned long CH29_SBR;                          /**< Channel System Bus, offset: 0x24400C */
  __IO unsigned long CH29_PRI;                          /**< Channel Priority, offset: 0x244010 */
  unsigned char RESERVED_58[12];
  __IO unsigned long TCD29_SADDR;                       /**< TCD Source Address, offset: 0x244020 */
  __IO unsigned short TCD29_SOFF;                        /**< TCD Signed Source Address Offset, offset: 0x244024 */
  __IO unsigned short TCD29_ATTR;                        /**< TCD Transfer Attributes, offset: 0x244026 */
  union {                                          /* offset: 0x244028 */
    __IO unsigned long TCD29_NBYTES_MLOFFNO;              /**< TCD Transfer Size Without Minor Loop Offsets, offset: 0x244028 */
    __IO unsigned long TCD29_NBYTES_MLOFFYES;             /**< TCD Transfer Size with Minor Loop Offsets, offset: 0x244028 */
  } NBYTES29;
  __IO unsigned long TCD29_SLAST_SDA;                   /**< TCD Last Source Address Adjustment / Store DADDR Address, offset: 0x24402C */
  __IO unsigned long TCD29_DADDR;                       /**< TCD Destination Address, offset: 0x244030 */
  __IO unsigned short TCD29_DOFF;                        /**< TCD Signed Destination Address Offset, offset: 0x244034 */
  union {                                          /* offset: 0x244036 */
    __IO unsigned short TCD29_CITER_ELINKNO;               /**< TCD Current Major Loop Count (Minor Loop Channel Linking Disabled), offset: 0x244036 */
    __IO unsigned short TCD29_CITER_ELINKYES;              /**< TCD Current Major Loop Count (Minor Loop Channel Linking Enabled), offset: 0x244036 */
  } CITER29;
  __IO unsigned long TCD29_DLAST_SGA;                   /**< TCD Last Destination Address Adjustment / Scatter Gather Address, offset: 0x244038 */
  __IO unsigned short TCD29_CSR;                         /**< TCD Control and Status, offset: 0x24403C */
  union {                                          /* offset: 0x24403E */
    __IO unsigned short TCD29_BITER_ELINKNO;               /**< TCD Beginning Major Loop Count (Minor Loop Channel Linking Disabled), offset: 0x24403E */
    __IO unsigned short TCD29_BITER_ELINKYES;              /**< TCD Beginning Major Loop Count (Minor Loop Channel Linking Enabled), offset: 0x24403E */
  } BITER29;
  unsigned char RESERVED_59[16320];
  __IO unsigned long CH30_CSR;                          /**< Channel Control and Status, offset: 0x248000 */
  __IO unsigned long CH30_ES;                           /**< Channel Error Status, offset: 0x248004 */
  __IO unsigned long CH30_INT;                          /**< Channel Interrupt Status, offset: 0x248008 */
  __IO unsigned long CH30_SBR;                          /**< Channel System Bus, offset: 0x24800C */
  __IO unsigned long CH30_PRI;                          /**< Channel Priority, offset: 0x248010 */
  unsigned char RESERVED_60[12];
  __IO unsigned long TCD30_SADDR;                       /**< TCD Source Address, offset: 0x248020 */
  __IO unsigned short TCD30_SOFF;                        /**< TCD Signed Source Address Offset, offset: 0x248024 */
  __IO unsigned short TCD30_ATTR;                        /**< TCD Transfer Attributes, offset: 0x248026 */
  union {                                          /* offset: 0x248028 */
    __IO unsigned long TCD30_NBYTES_MLOFFNO;              /**< TCD Transfer Size Without Minor Loop Offsets, offset: 0x248028 */
    __IO unsigned long TCD30_NBYTES_MLOFFYES;             /**< TCD Transfer Size with Minor Loop Offsets, offset: 0x248028 */
  } NBYTES30;
  __IO unsigned long TCD30_SLAST_SDA;                   /**< TCD Last Source Address Adjustment / Store DADDR Address, offset: 0x24802C */
  __IO unsigned long TCD30_DADDR;                       /**< TCD Destination Address, offset: 0x248030 */
  __IO unsigned short TCD30_DOFF;                        /**< TCD Signed Destination Address Offset, offset: 0x248034 */
  union {                                          /* offset: 0x248036 */
    __IO unsigned short TCD30_CITER_ELINKNO;               /**< TCD Current Major Loop Count (Minor Loop Channel Linking Disabled), offset: 0x248036 */
    __IO unsigned short TCD30_CITER_ELINKYES;              /**< TCD Current Major Loop Count (Minor Loop Channel Linking Enabled), offset: 0x248036 */
  } CITER30;
  __IO unsigned long TCD30_DLAST_SGA;                   /**< TCD Last Destination Address Adjustment / Scatter Gather Address, offset: 0x248038 */
  __IO unsigned short TCD30_CSR;                         /**< TCD Control and Status, offset: 0x24803C */
  union {                                          /* offset: 0x24803E */
    __IO unsigned short TCD30_BITER_ELINKNO;               /**< TCD Beginning Major Loop Count (Minor Loop Channel Linking Disabled), offset: 0x24803E */
    __IO unsigned short TCD30_BITER_ELINKYES;              /**< TCD Beginning Major Loop Count (Minor Loop Channel Linking Enabled), offset: 0x24803E */
  } BITER30;
  unsigned char RESERVED_61[16320];
  __IO unsigned long CH31_CSR;                          /**< Channel Control and Status, offset: 0x24C000 */
  __IO unsigned long CH31_ES;                           /**< Channel Error Status, offset: 0x24C004 */
  __IO unsigned long CH31_INT;                          /**< Channel Interrupt Status, offset: 0x24C008 */
  __IO unsigned long CH31_SBR;                          /**< Channel System Bus, offset: 0x24C00C */
  __IO unsigned long CH31_PRI;                          /**< Channel Priority, offset: 0x24C010 */
  unsigned char RESERVED_62[12];
  __IO unsigned long TCD31_SADDR;                       /**< TCD Source Address, offset: 0x24C020 */
  __IO unsigned short TCD31_SOFF;                        /**< TCD Signed Source Address Offset, offset: 0x24C024 */
  __IO unsigned short TCD31_ATTR;                        /**< TCD Transfer Attributes, offset: 0x24C026 */
  union {                                          /* offset: 0x24C028 */
    __IO unsigned long TCD31_NBYTES_MLOFFNO;              /**< TCD Transfer Size Without Minor Loop Offsets, offset: 0x24C028 */
    __IO unsigned long TCD31_NBYTES_MLOFFYES;             /**< TCD Transfer Size with Minor Loop Offsets, offset: 0x24C028 */
  } NBYTES31;
  __IO unsigned long TCD31_SLAST_SDA;                   /**< TCD Last Source Address Adjustment / Store DADDR Address, offset: 0x24C02C */
  __IO unsigned long TCD31_DADDR;                       /**< TCD Destination Address, offset: 0x24C030 */
  __IO unsigned short TCD31_DOFF;                        /**< TCD Signed Destination Address Offset, offset: 0x24C034 */
  union {                                          /* offset: 0x24C036 */
    __IO unsigned short TCD31_CITER_ELINKNO;               /**< TCD Current Major Loop Count (Minor Loop Channel Linking Disabled), offset: 0x24C036 */
    __IO unsigned short TCD31_CITER_ELINKYES;              /**< TCD Current Major Loop Count (Minor Loop Channel Linking Enabled), offset: 0x24C036 */
  } CITER31;
  __IO unsigned long TCD31_DLAST_SGA;                   /**< TCD Last Destination Address Adjustment / Scatter Gather Address, offset: 0x24C038 */
  __IO unsigned short TCD31_CSR;                         /**< TCD Control and Status, offset: 0x24C03C */
  union {                                          /* offset: 0x24C03E */
    __IO unsigned short TCD31_BITER_ELINKNO;               /**< TCD Beginning Major Loop Count (Minor Loop Channel Linking Disabled), offset: 0x24C03E */
    __IO unsigned short TCD31_BITER_ELINKYES;              /**< TCD Beginning Major Loop Count (Minor Loop Channel Linking Enabled), offset: 0x24C03E */
  } BITER31;
} DMA_TCD_Type, *DMA_TCD_MemMapPtr;

/** Number of instances of the DMA_TCD module. */
#define DMA_TCD_INSTANCE_COUNT                   (1u)

/* DMA_TCD - Peripheral instance base addresses */
/** Peripheral TCD base address */
#define TCD_BASE                                 (0x40210000u)
/** Peripheral TCD base pointer */
#define TCD                                      ((DMA_TCD_Type *)TCD_BASE)
/** Array initializer of DMA_TCD peripheral base addresses */
#define DMA_TCD_BASE_ADDRS                       { TCD_BASE }
/** Array initializer of DMA_TCD peripheral base pointers */
#define DMA_TCD_BASE_PTRS                        { TCD }


#define DMA_TCD_TCD0_CSR_START_MASK              (0x1U)
#define DMA_TCD_TCD0_CSR_START_SHIFT             (0U)
#define DMA_TCD_TCD0_CSR_START_WIDTH             (1U)
#define DMA_TCD_TCD0_CSR_START(x)                (((unsigned short)(((unsigned short)(x)) << DMA_TCD_TCD0_CSR_START_SHIFT)) & DMA_TCD_TCD0_CSR_START_MASK)
#define DMA_TCD_TCD0_CSR_INTMAJOR_MASK           (0x2U)
#define DMA_TCD_TCD0_CSR_INTMAJOR_SHIFT          (1U)
#define DMA_TCD_TCD0_CSR_INTMAJOR_WIDTH          (1U)
#define DMA_TCD_TCD0_CSR_INTMAJOR(x)             (((unsigned short)(((unsigned short)(x)) << DMA_TCD_TCD0_CSR_INTMAJOR_SHIFT)) & DMA_TCD_TCD0_CSR_INTMAJOR_MASK)
#define DMA_TCD_TCD0_CSR_INTHALF_MASK            (0x4U)
#define DMA_TCD_TCD0_CSR_INTHALF_SHIFT           (2U)
#define DMA_TCD_TCD0_CSR_INTHALF_WIDTH           (1U)
#define DMA_TCD_TCD0_CSR_INTHALF(x)              (((unsigned short)(((unsigned short)(x)) << DMA_TCD_TCD0_CSR_INTHALF_SHIFT)) & DMA_TCD_TCD0_CSR_INTHALF_MASK)
#define DMA_TCD_TCD0_CSR_DREQ_MASK               (0x8U)
#define DMA_TCD_TCD0_CSR_DREQ_SHIFT              (3U)
#define DMA_TCD_TCD0_CSR_DREQ_WIDTH              (1U)
#define DMA_TCD_TCD0_CSR_DREQ(x)                 (((unsigned short)(((unsigned short)(x)) << DMA_TCD_TCD0_CSR_DREQ_SHIFT)) & DMA_TCD_TCD0_CSR_DREQ_MASK)
#define DMA_TCD_TCD0_CSR_ESG_MASK                (0x10U)
#define DMA_TCD_TCD0_CSR_ESG_SHIFT               (4U)
#define DMA_TCD_TCD0_CSR_ESG_WIDTH               (1U)
#define DMA_TCD_TCD0_CSR_ESG(x)                  (((unsigned short)(((unsigned short)(x)) << DMA_TCD_TCD0_CSR_ESG_SHIFT)) & DMA_TCD_TCD0_CSR_ESG_MASK)
#define DMA_TCD_TCD0_CSR_MAJORELINK_MASK         (0x20U)
#define DMA_TCD_TCD0_CSR_MAJORELINK_SHIFT        (5U)
#define DMA_TCD_TCD0_CSR_MAJORELINK_WIDTH        (1U)
#define DMA_TCD_TCD0_CSR_MAJORELINK(x)           (((unsigned short)(((unsigned short)(x)) << DMA_TCD_TCD0_CSR_MAJORELINK_SHIFT)) & DMA_TCD_TCD0_CSR_MAJORELINK_MASK)
#define DMA_TCD_TCD0_CSR_EEOP_MASK               (0x40U)
#define DMA_TCD_TCD0_CSR_EEOP_SHIFT              (6U)
#define DMA_TCD_TCD0_CSR_EEOP_WIDTH              (1U)
#define DMA_TCD_TCD0_CSR_EEOP(x)                 (((unsigned short)(((unsigned short)(x)) << DMA_TCD_TCD0_CSR_EEOP_SHIFT)) & DMA_TCD_TCD0_CSR_EEOP_MASK)
#define DMA_TCD_TCD0_CSR_ESDA_MASK               (0x80U)
#define DMA_TCD_TCD0_CSR_ESDA_SHIFT              (7U)
#define DMA_TCD_TCD0_CSR_ESDA_WIDTH              (1U)
#define DMA_TCD_TCD0_CSR_ESDA(x)                 (((unsigned short)(((unsigned short)(x)) << DMA_TCD_TCD0_CSR_ESDA_SHIFT)) & DMA_TCD_TCD0_CSR_ESDA_MASK)
#define DMA_TCD_TCD0_CSR_MAJORLINKCH_MASK        (0x1F00U)
#define DMA_TCD_TCD0_CSR_MAJORLINKCH_SHIFT       (8U)
#define DMA_TCD_TCD0_CSR_MAJORLINKCH_WIDTH       (5U)
#define DMA_TCD_TCD0_CSR_MAJORLINKCH(x)          (((unsigned short)(((unsigned short)(x)) << DMA_TCD_TCD0_CSR_MAJORLINKCH_SHIFT)) & DMA_TCD_TCD0_CSR_MAJORLINKCH_MASK)
#define DMA_TCD_TCD0_CSR_BWC_MASK                (0xC000U)
#define DMA_TCD_TCD0_CSR_BWC_SHIFT               (14U)
#define DMA_TCD_TCD0_CSR_BWC_WIDTH               (2U)
#define DMA_TCD_TCD0_CSR_BWC(x)                  (((unsigned short)(((unsigned short)(x)) << DMA_TCD_TCD0_CSR_BWC_SHIFT)) & DMA_TCD_TCD0_CSR_BWC_MASK)

#define DMA_TCD_TCD0_DOFF_DOFF_MASK              (0xFFFFU)
#define DMA_TCD_TCD0_DOFF_DOFF_SHIFT             (0U)
#define DMA_TCD_TCD0_DOFF_DOFF_WIDTH             (16U)
#define DMA_TCD_TCD0_DOFF_DOFF(x)                (((unsigned short)(((unsigned short)(x)) << DMA_TCD_TCD0_DOFF_DOFF_SHIFT)) & DMA_TCD_TCD0_DOFF_DOFF_MASK)

#define DMA_TCD_TCD0_DLAST_SGA_DLAST_SGA_MASK    (0xFFFFFFFFU)
#define DMA_TCD_TCD0_DLAST_SGA_DLAST_SGA_SHIFT   (0U)
#define DMA_TCD_TCD0_DLAST_SGA_DLAST_SGA_WIDTH   (32U)
#define DMA_TCD_TCD0_DLAST_SGA_DLAST_SGA(x)      (((unsigned long)(((unsigned long)(x)) << DMA_TCD_TCD0_DLAST_SGA_DLAST_SGA_SHIFT)) & DMA_TCD_TCD0_DLAST_SGA_DLAST_SGA_MASK)

#define DMA_TCD_TCD0_CITER_ELINKNO_CITER_MASK    (0x7FFFU)
#define DMA_TCD_TCD0_CITER_ELINKNO_CITER_SHIFT   (0U)
#define DMA_TCD_TCD0_CITER_ELINKNO_CITER_WIDTH   (15U)
#define DMA_TCD_TCD0_CITER_ELINKNO_CITER(x)      (((unsigned short)(((unsigned short)(x)) << DMA_TCD_TCD0_CITER_ELINKNO_CITER_SHIFT)) & DMA_TCD_TCD0_CITER_ELINKNO_CITER_MASK)
#define DMA_TCD_TCD0_CITER_ELINKNO_ELINK_MASK    (0x8000U)
#define DMA_TCD_TCD0_CITER_ELINKNO_ELINK_SHIFT   (15U)
#define DMA_TCD_TCD0_CITER_ELINKNO_ELINK_WIDTH   (1U)
#define DMA_TCD_TCD0_CITER_ELINKNO_ELINK(x)      (((unsigned short)(((unsigned short)(x)) << DMA_TCD_TCD0_CITER_ELINKNO_ELINK_SHIFT)) & DMA_TCD_TCD0_CITER_ELINKNO_ELINK_MASK)

#define DMA_TCD_TCD0_BITER_ELINKNO_BITER_MASK    (0x7FFFU)
#define DMA_TCD_TCD0_BITER_ELINKNO_BITER_SHIFT   (0U)
#define DMA_TCD_TCD0_BITER_ELINKNO_BITER_WIDTH   (15U)
#define DMA_TCD_TCD0_BITER_ELINKNO_BITER(x)      (((unsigned short)(((unsigned short)(x)) << DMA_TCD_TCD0_BITER_ELINKNO_BITER_SHIFT)) & DMA_TCD_TCD0_BITER_ELINKNO_BITER_MASK)
#define DMA_TCD_TCD0_BITER_ELINKNO_ELINK_MASK    (0x8000U)
#define DMA_TCD_TCD0_BITER_ELINKNO_ELINK_SHIFT   (15U)
#define DMA_TCD_TCD0_BITER_ELINKNO_ELINK_WIDTH   (1U)
#define DMA_TCD_TCD0_BITER_ELINKNO_ELINK(x)      (((unsigned short)(((unsigned short)(x)) << DMA_TCD_TCD0_BITER_ELINKNO_ELINK_SHIFT)) & DMA_TCD_TCD0_BITER_ELINKNO_ELINK_MASK)

#define DMA_TCD_TCD0_NBYTES_MLOFFNO_NBYTES_MASK  (0x3FFFFFFFU)
#define DMA_TCD_TCD0_NBYTES_MLOFFNO_NBYTES_SHIFT (0U)
#define DMA_TCD_TCD0_NBYTES_MLOFFNO_NBYTES_WIDTH (30U)
#define DMA_TCD_TCD0_NBYTES_MLOFFNO_NBYTES(x)    (((unsigned long)(((unsigned long)(x)) << DMA_TCD_TCD0_NBYTES_MLOFFNO_NBYTES_SHIFT)) & DMA_TCD_TCD0_NBYTES_MLOFFNO_NBYTES_MASK)
#define DMA_TCD_TCD0_NBYTES_MLOFFNO_DMLOE_MASK   (0x40000000U)
#define DMA_TCD_TCD0_NBYTES_MLOFFNO_DMLOE_SHIFT  (30U)
#define DMA_TCD_TCD0_NBYTES_MLOFFNO_DMLOE_WIDTH  (1U)
#define DMA_TCD_TCD0_NBYTES_MLOFFNO_DMLOE(x)     (((unsigned long)(((unsigned long)(x)) << DMA_TCD_TCD0_NBYTES_MLOFFNO_DMLOE_SHIFT)) & DMA_TCD_TCD0_NBYTES_MLOFFNO_DMLOE_MASK)
#define DMA_TCD_TCD0_NBYTES_MLOFFNO_SMLOE_MASK   (0x80000000U)
#define DMA_TCD_TCD0_NBYTES_MLOFFNO_SMLOE_SHIFT  (31U)
#define DMA_TCD_TCD0_NBYTES_MLOFFNO_SMLOE_WIDTH  (1U)
#define DMA_TCD_TCD0_NBYTES_MLOFFNO_SMLOE(x)     (((unsigned long)(((unsigned long)(x)) << DMA_TCD_TCD0_NBYTES_MLOFFNO_SMLOE_SHIFT)) & DMA_TCD_TCD0_NBYTES_MLOFFNO_SMLOE_MASK)

#define DMA_TCD_TCD0_SOFF_SOFF_MASK              (0xFFFFU)
#define DMA_TCD_TCD0_SOFF_SOFF_SHIFT             (0U)
#define DMA_TCD_TCD0_SOFF_SOFF_WIDTH             (16U)
#define DMA_TCD_TCD0_SOFF_SOFF(x)                (((unsigned short)(((unsigned short)(x)) << DMA_TCD_TCD0_SOFF_SOFF_SHIFT)) & DMA_TCD_TCD0_SOFF_SOFF_MASK)

#define DMA_TCD_TCD0_ATTR_DSIZE_MASK             (0x7U)
#define DMA_TCD_TCD0_ATTR_DSIZE_SHIFT            (0U)
#define DMA_TCD_TCD0_ATTR_DSIZE_WIDTH            (3U)
#define DMA_TCD_TCD0_ATTR_DSIZE(x)               (((unsigned short)(((unsigned short)(x)) << DMA_TCD_TCD0_ATTR_DSIZE_SHIFT)) & DMA_TCD_TCD0_ATTR_DSIZE_MASK)
#define DMA_TCD_TCD0_ATTR_DMOD_MASK              (0xF8U)
#define DMA_TCD_TCD0_ATTR_DMOD_SHIFT             (3U)
#define DMA_TCD_TCD0_ATTR_DMOD_WIDTH             (5U)
#define DMA_TCD_TCD0_ATTR_DMOD(x)                (((unsigned short)(((unsigned short)(x)) << DMA_TCD_TCD0_ATTR_DMOD_SHIFT)) & DMA_TCD_TCD0_ATTR_DMOD_MASK)
#define DMA_TCD_TCD0_ATTR_SSIZE_MASK             (0x700U)
#define DMA_TCD_TCD0_ATTR_SSIZE_SHIFT            (8U)
#define DMA_TCD_TCD0_ATTR_SSIZE_WIDTH            (3U)
#define DMA_TCD_TCD0_ATTR_SSIZE(x)               (((unsigned short)(((unsigned short)(x)) << DMA_TCD_TCD0_ATTR_SSIZE_SHIFT)) & DMA_TCD_TCD0_ATTR_SSIZE_MASK)
#define DMA_TCD_TCD0_ATTR_SMOD_MASK              (0xF800U)
#define DMA_TCD_TCD0_ATTR_SMOD_SHIFT             (11U)
#define DMA_TCD_TCD0_ATTR_SMOD_WIDTH             (5U)
#define DMA_TCD_TCD0_ATTR_SMOD(x)                (((unsigned short)(((unsigned short)(x)) << DMA_TCD_TCD0_ATTR_SMOD_SHIFT)) & DMA_TCD_TCD0_ATTR_SMOD_MASK)

#define DMA_TCD_TCD0_SLAST_SDA_SLAST_SDA_MASK    (0xFFFFFFFFU)
#define DMA_TCD_TCD0_SLAST_SDA_SLAST_SDA_SHIFT   (0U)
#define DMA_TCD_TCD0_SLAST_SDA_SLAST_SDA_WIDTH   (32U)
#define DMA_TCD_TCD0_SLAST_SDA_SLAST_SDA(x)      (((unsigned long)(((unsigned long)(x)) << DMA_TCD_TCD0_SLAST_SDA_SLAST_SDA_SHIFT)) & DMA_TCD_TCD0_SLAST_SDA_SLAST_SDA_MASK)