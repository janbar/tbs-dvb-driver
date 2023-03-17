#ifndef STV6120_H
#define STV6120_H

#include <linux/i2c.h>
#include <media/dvb_frontend.h>

struct stv6120_cfg {
	u8 adr;

	u32 xtal;
	u8 Rdiv;
};

extern struct dvb_frontend *stv6120_attach(struct dvb_frontend *fe,
		    struct i2c_adapter *i2c, struct stv6120_cfg *cfg, int nr);

#endif /* STV6120_H */
