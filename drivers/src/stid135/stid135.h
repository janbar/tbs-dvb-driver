/*
 * Driver for the STm STiD135 DVB-S/S2/S2X demodulator.
 *
 * Copyright (C) CrazyCat <crazycat69@narod.ru>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * version 2 only, as published by the Free Software Foundation.
 *
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301, USA
 * Or, point your browser to http://www.gnu.org/copyleft/gpl.html
 */

#ifndef _STID135_H_
#define _STID135_H_

#include <linux/types.h>
#include <linux/i2c.h>

struct stid135_cfg {
	u8  adr;
	u32 clk;
	u8  ts_mode;
#define TS_2PAR 0
#define TS_8SER 1
#define TS_STFE 2
	int (*set_voltage)(struct i2c_adapter *i2c,
		enum fe_sec_voltage voltage, u8 rf_in);
	void (*write_properties) (struct i2c_adapter *i2c,u8 reg, u32 buf);
	void (*read_properties) (struct i2c_adapter *i2c,u8 reg, u32 *buf);
	void (*write_eeprom) (struct i2c_adapter *i2c,u8 reg, u8 buf);
	void (*read_eeprom) (struct i2c_adapter *i2c,u8 reg, u8 *buf);
	//for tbs6912
	void (*set_TSsampling)(struct i2c_adapter *i2c,int tuner,int time);  
	u32  (*set_TSparam)(struct i2c_adapter *i2c,int tuner,int time,bool  flag);

	// for stvlna
	int vglna;
	
	//for tbs6916, because there are two stid135 (Demod 0 and Demod 1). 
	//if two Demod send 22k simultaneity, it will be affect the signal . so disable the Demod1 22k function on mode 0&1
	//keep Demod 1 send diseqc function on unicable mode.
	bool control_22k;
};

extern struct dvb_frontend *stid135_attach(struct i2c_adapter *i2c,
					   struct stid135_cfg *cfg,
					   int nr, int tuner_nr);

#endif
