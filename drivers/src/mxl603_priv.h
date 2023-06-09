#ifndef MXL603_PRIV_H
#define MXL603_PRIV_H

#include "mxl603.h"
#include <media/dvb_frontend.h>

struct mxl603_dev{
	struct i2c_client *client;

	u8 xtalFreqSel;
	u8 xtalCap;
	u8 ifOutFreq;
	u8 gainLevel;
	u8 agcType;
	u8 setagcPoint;
	u32 ifOutFreqinKHz;
	
	bool manualIFFreqSet; /*enable and disable*/
	u32 manualIFOutFreqInKHz;

	struct dvb_frontend *fe;
	bool active ;
};

typedef struct
{
  u8 regAddr;
  u8 mask;
  u8 data;
} MXL603_REG_CTRL_INFO_T, *PMXL603_REG_CTRL_INFO_T;

typedef enum
{
  MXL603_DIG_DVB_C = 0,     /* DVB-C mode */
  MXL603_DIG_ISDBT_ATSC,    /* ATSC/ISDB-T mode */
  MXL603_DIG_DVB_T_DTMB,    /* DVB-T/DVB-T2 and DTMB mode */
  MXL603_DIG_J83B           /* J.83B mode */
} MXL603_SIGNAL_MODE_E;     /* MxL603 Application mode */


#define AIC_RESET_REG                  0xFF // For MxL603 Tuner

#define PAGE_CHANGE_REG                0x00 // Page change, can configured as page 0 or page 1 
#define XTAL_CAP_CTRL_REG              0x01 // Xtal frequency and CAP register 
#define XTAL_ENABLE_DIV_REG            0x02 // Xtal enable and frequency div 4 register 
#define XTAL_CALI_SET_REG              0x03 // Xtal calibration enable register enable register 
#define IF_FREQ_SEL_REG                0x04 // IF frequency selection and manual set bypass register  
#define IF_PATH_GAIN_REG               0x05 // IF gain level and path selection register  
#define IF_FCW_LOW_REG                 0x06 // Low register of IF FCW set when manual program IF frequency   
#define IF_FCW_HIGH_REG                0x07 // High register of IF FCW set when manual program IF frequency 
#define AGC_CONFIG_REG                 0x08 // AGC configuration, include AGC select and AGC type  
#define AGC_SET_POINT_REG              0x09
#define AGC_FLIP_REG                   0x5E
#define AGC_SLOPE_REG                  0xB5
#define AGC_OFFSET_REG                 0xB4
#define GPO_SETTING_REG                0x0A // GPO set and inquiring register 
#define TUNER_ENABLE_REG               0x0B // Power up register, bit<0>
#define TUNE_MODE_REG                  0x0D
#define MAIN_REG_AMP                   0x0E
#define CHAN_TUNE_BW_REG               0x0F // Band width register 
#define CHAN_TUNE_LOW_REG              0x10 // Tune frequency set low byte 
#define CHAN_TUNE_HI_REG               0x11 // Tune frequency set high byte 
#define START_TUNE_REG                 0x12 // sequencer setting register 
#define FINE_TUNE_SET_REG              0x13 // Fine tune operation register 
#define FINE_TUNE_CTRL_REG_0           0x13 // Fine tune operation register 
#define FINE_TUNE_CTRL_REG_1           0x14 // Fine tune operation register 

#define FINE_TUNE_OFFSET_LOW_REG       0x14 // Fine tune frequency offset low byte 
#define FINE_TUNE_OFFSET_HIGH_REG      0x15 // Fine tune frequency offset high byte
#define CHIP_ID_REQ_REG                0x18 // Tuner Chip ID register 
#define CHIP_VERSION_REQ_REG           0x1A // Tuner Chip Revision register 

#define RFPIN_RB_LOW_REG               0x1D // RF power low 8 bit register 
#define RFPIN_RB_HIGH_REG              0x1E // RF power high 8 bit register 
#define SIGNAL_TYPE_REG                0x1E // Signal type

#define DFE_CTRL_ACCUM_LOW_REG         0x24 // Bit<7:0> 
#define DFE_CTRL_ACCUM_MID_REG         0x25 // Bit<7:0>
#define DFE_CTRL_ACCUM_HI_REG          0x26 // Bit<1:0>

#define DFE_CTRL_TRIG_REG              0xA0 // Bit<3>
#define DFE_CTRL_RB_HI_REG             0x7B // Bit<7:0>
#define DFE_CTRL_RB_LOW_REG            0x7A // Bit<1:0>

#define RF_REF_STATUS_REG              0x2B // RF/REF lock status register 

#define AGC_SAGCLOCK_STATUS_REG        0x2C 

#define DFE_DACIF_BYP_GAIN_REG         0x43 
#define DIG_ANA_RFRSSI_REG             0x57 

#define RSSI_RESET_REG                 0x78
#define DIG_ANA_GINJO_LT_REG           0x96 
#define FINE_TUNE_INIT1_REG            0xA9 
#define FINE_TUNE_INIT2_REG            0xAA

#define DFE_AGC_CEIL1_REG              0xB0 

#define DFE_RFLUT_BYP_REG              0xDB  // Dec: 220, bit<7>
#define DFE_RFLUT_DIV_MOD_REG          0xDB  // Dec: 221 

#define DFE_RFLUT_SWP1_REG             0x49 

#define DFE_RFSX_FRAC_MOD1_REG         0xDF
#define DFE_RFSX_FRAC_MOD2_REG         0xE0
#define DFE_RFSX_FRAC_MOD3_REG         0xE1
#define DFE_RFSX_FRAC_MOD4_REG         0xE2

#define DFE_REFLUT_BYP_REG             0xEA  // Dec: 240, bit<6>
#define DFE_REFSX_INT_MOD_REG          0xEB  // Dec: 241

#define APP_MODE_FREQ_HZ_THRESHOLD_1   358000000
#define APP_MODE_FREQ_HZ_THRESHOLD_2   625000000

#define IF_GAIN_SET_POINT1             10 
#define IF_GAIN_SET_POINT2             11 
#define IF_GAIN_SET_POINT3             12 

#define DIG_ANA_IF_CFG_0              0x5A
#define DIG_ANA_IF_CFG_1              0x5B
#define DIG_ANA_IF_PWR                0x5C

#define DFE_CSF_SS_SEL                0xEA
#define DFE_DACIF_GAIN                0xDC

#define FINE_TUNE_FREQ_INCREASE       0x01
#define FINE_TUNE_FREQ_DECREASE       0x02

#define RF_SX_FRAC_N_RANGE            0xDD

#define HIGH_IF_35250_KHZ             35250
#endif
