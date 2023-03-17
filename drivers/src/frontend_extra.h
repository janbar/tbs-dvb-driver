
struct ecp3_info
{
	__u8 reg;
	__u32 data;
};

struct mcu24cxx_info
{
	__u32 bassaddr;
	__u8 reg;
	__u32 data;
};

struct usbi2c_access
{
	__u8 chip_addr;
	__u8 reg;
	__u8 num;
	__u8 buf[8];
};

struct eeprom_info
{
	__u8 reg;
	__u8 data;
};

enum fe_modulation_extra {
        _QPSK,
        _QAM_16,
        _QAM_32,
        _QAM_64,
        _QAM_128,
        _QAM_256,
        _QAM_AUTO,
        _VSB_8,
        _VSB_16,
        _PSK_8,
        _APSK_16,
        _APSK_32,
        _DQPSK,
        _QAM_4_NR,

/* extra */
        QAM_512,
        QAM_1024,
        QAM_4096,
        APSK_64,
        APSK_128,
        APSK_256,
        APSK_8L,
        APSK_16L,
        APSK_32L,
        APSK_64L,
        APSK_128L,
        APSK_256L,
        APSK_1024,
};

enum fe_code_rate_extra {
        _FEC_NONE = 0,
        _FEC_1_2,
        _FEC_2_3,
        _FEC_3_4,
        _FEC_4_5,
        _FEC_5_6,
        _FEC_6_7,
        _FEC_7_8,
        _FEC_8_9,
        _FEC_AUTO,
        _FEC_3_5,
        _FEC_9_10,
        _FEC_2_5,

/* extra */
        FEC_1_4,
        FEC_1_3,
        FEC_5_9,
        FEC_7_9,
        FEC_4_15,
        FEC_7_15,
        FEC_8_15,
        FEC_11_15,
        FEC_13_18,
        FEC_9_20,
        FEC_11_20,
        FEC_23_36,
        FEC_25_36,
        FEC_11_45,
        FEC_13_45,
        FEC_14_45,
        FEC_26_45,
        FEC_28_45,
        FEC_29_45,
        FEC_31_45,
        FEC_32_45,
        FEC_77_90, 
        FEC_R_58,
        FEC_R_60,
        FEC_R_62,
        FEC_R_5E,
};

enum fe_rolloff_extra {
        _ROLLOFF_35,
        _ROLLOFF_20,
        _ROLLOFF_25,
        _ROLLOFF_AUTO,

/* extra */
        ROLLOFF_15,
        ROLLOFF_10,
        ROLLOFF_5,
};

