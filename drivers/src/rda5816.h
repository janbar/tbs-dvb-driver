#ifndef _RDA5816_H_
#define _RDA5816_H_

#include <linux/kconfig.h>
#include <media/dvb_frontend.h>

struct rda5816_config{
	u8 i2c_adr;
	u8 xtal;//1=27M 0=24M
};

extern struct dvb_frontend *rda5816_attach(struct dvb_frontend *fe,
		struct rda5816_config *cfg, struct i2c_adapter *i2c);

#endif
