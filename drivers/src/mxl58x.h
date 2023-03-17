#ifndef _MXL58X_H_
#define _MXL58X_H_

#include <linux/types.h>
#include <linux/i2c.h>

#include <media/dvb_frontend.h>

struct mxl58x_cfg {
	u8   adr;
	u8   type;
	u32  cap;
	u32  clk;

	u8  *fw;
	u32  fw_len;

	int (*fw_read)(void *priv, u8 *buf, u32 len);
	void *fw_priv;

	int (*set_voltage)(struct i2c_adapter *i2c,
		enum fe_sec_voltage voltage, u8 rf_in);

	//update the FW.
	void (*write_properties) (struct i2c_adapter *i2c,u8 reg, u32 buf);
	void (*read_properties) (struct i2c_adapter *i2c,u8 reg, u32 *buf);
	// EEPROM access
	void (*write_eeprom) (struct i2c_adapter *i2c,u8 reg, u8 buf);
	void (*read_eeprom) (struct i2c_adapter *i2c,u8 reg, u8 *buf);
};

extern struct dvb_frontend *mxl58x_attach(struct i2c_adapter *i2c,
					  struct mxl58x_cfg *cfg,
					  u32 demod);

#endif
