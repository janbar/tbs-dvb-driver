#ifndef _FRONTENT_EXTRA_H_
#define _FRONTENT_EXTRA_H_

#include <linux/version.h>

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

#define FE_ECP3FW_READ    _IOR('o', 90, struct ecp3_info)
#define FE_ECP3FW_WRITE   _IOW('o', 91, struct ecp3_info)

#define FE_24CXX_READ     _IOR('o', 92, struct mcu24cxx_info)
#define FE_24CXX_WRITE    _IOW('o', 93, struct mcu24cxx_info)

#define FE_REGI2C_READ    _IOR('o', 94, struct usbi2c_access)
#define FE_REGI2C_WRITE   _IOW('o', 95, struct usbi2c_access)

#define FE_EEPROM_READ    _IOR('o', 96, struct eeprom_info)
#define FE_EEPROM_WRITE   _IOW('o', 97, struct eeprom_info)

#define FE_READ_TEMP      _IOR('o', 98, __s16)

#define MODCODE_ALL       (~0U)

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
	_QAM_1024,
	_QAM_4096,
	_APSK_8_L,
	_APSK_16_L,
	_APSK_32_L,
	_APSK_64,
	_APSK_64_L,

	QAM_512,
	APSK_128,
	APSK_128_L,
	APSK_256,
	APSK_256_L,
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
	_FEC_1_3,
	_FEC_1_4,
	_FEC_5_9,
	_FEC_7_9,
	_FEC_8_15,
	_FEC_11_15,
	_FEC_13_18,
	_FEC_9_20,
	_FEC_11_20,
	_FEC_23_36,
	_FEC_25_36,
	_FEC_13_45,
	_FEC_26_45,
	_FEC_28_45,
	_FEC_32_45,
	_FEC_77_90,
	_FEC_11_45,
	_FEC_4_15,
	_FEC_14_45,
	_FEC_7_15,

	FEC_29_45,
	FEC_31_45,
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
	_ROLLOFF_15,
	_ROLLOFF_10,
	_ROLLOFF_5,
};

#endif
