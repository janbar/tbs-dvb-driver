#ifndef TBS_PRIV_H_
#define TBS_PRIV_H_

#include <linux/i2c.h>
#include <media/dvb_frontend.h>

struct tbs_cfg{

	u8 adr;

	u8 flag;
	
	u8 rf;

	void (*TS_switch)(struct i2c_adapter * i2c,u8 flag);
	void (*LED_switch)(struct i2c_adapter * i2c,u8 flag);
	
	void (*write_properties) (struct i2c_adapter *i2c,u8 reg, u32 buf);  
	void (*read_properties) (struct i2c_adapter *i2c,u8 reg, u32 *buf);

};

extern struct dvb_frontend *tbs_attach(struct i2c_adapter * i2c,
											struct tbs_cfg * cfg,u32 demod);

#endif
