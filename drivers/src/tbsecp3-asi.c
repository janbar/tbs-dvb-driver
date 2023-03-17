
#include "tbsecp3.h"

u8 asi_CheckFree(struct tbsecp3_dev *dev,int asi_base_addr, unsigned char OpbyteNum)
	{
		unsigned char tmpbuf[4];
		int i;
		int j=500;
		if(OpbyteNum==2)
			j=400;
		else if(OpbyteNum==1)
			j=200;	
		//pauseThread(OpbyteNum+1);
	
		tmpbuf[0] = 0;
		for(i=0;(i<j) && (tmpbuf[0] != 1);i++)
		{
			*(u32 *)tmpbuf = tbs_read(asi_base_addr, ASI_STATUS );  
		}
		//return (tmpbuf[0] == 1);
	
		if(tmpbuf[0] == 1)
			return true;
		else
		{
			printk("----------asi spi interface check error! %x\n",tmpbuf[0]);
			return false;
		} 
	}


bool asi_chip_reset(struct tbsecp3_dev *dev,int asi_base_addr)
{
	unsigned char tmpbuf[4];

	tmpbuf[0] = 0;
	tbs_write( asi_base_addr, ASI_CHIP_RST, *(u32 *)&tmpbuf[0]);

	msleep(20);

	tmpbuf[0] = 1;
	tbs_write( asi_base_addr, ASI_CHIP_RST, *(u32 *)&tmpbuf[0]);
	
	msleep(100);
	return true ;
}
int asi_read16bit(struct tbsecp3_dev *dev,int asi_base_addr,int reg_addr)
{
	unsigned char tmpbuf[4];
	int regData;

	tmpbuf[0] = (unsigned char) (reg_addr>>8)&0xff; //read_address, msb first;
	tmpbuf[1] = (unsigned char)(reg_addr&0xff);
	tmpbuf[0] += 0x80;  //read data;

	
	tbs_write( asi_base_addr, ASI_SPI_CMD, *(u32 *)&tmpbuf[0]);
	
	tmpbuf[0] = 0xf0;	//cs low,cs high, write, read;	
	tmpbuf[1] = 0x20;	// 2 bytes command for writing;
    tmpbuf[1] += 0x02;	 //read 2 bytes data;
	tbs_write( asi_base_addr, ASI_SPI_CONFIG, *(u32 *)&tmpbuf[0]);

	if(asi_CheckFree(dev,asi_base_addr,2)== false)
	{
		printk(" spi_read16bit error!\n");
		return false;	
	}                   

	*(u32 *)tmpbuf =  tbs_read(asi_base_addr, ASI_SPI_RD_32 ); 

	regData = ((tmpbuf[0]<<8) | tmpbuf[1]);

	return regData;
}

bool asi_write16bit(struct tbsecp3_dev *dev,int asi_base_addr, int reg_addr, int data16bit)
{
	unsigned char tmpbuf[4];
	int regData;

	tmpbuf[0] = (unsigned char) (reg_addr>>8)&0xff; //read_address, msb first;
	tmpbuf[1] = (unsigned char)(reg_addr&0xff);

	tmpbuf[2] = (unsigned char) (data16bit>>8)&0xff; //read_address, msb first;
	tmpbuf[3] = (unsigned char)(data16bit&0xff);

	tbs_write( asi_base_addr, ASI_SPI_CMD, *(u32 *)&tmpbuf[0]);
	
	tmpbuf[0] = 0xe0;	//cs low,cs high, write, no read;	
	tmpbuf[1] = 0x40;	// 4 bytes command for writing;
	tbs_write( asi_base_addr, ASI_SPI_CONFIG, *(u32 *)&tmpbuf[0]);

	if(asi_CheckFree(dev,asi_base_addr,2)== false)
	{
		printk(" spi_write16bit error!\n");
		return false;	
	}                   
	return true ;
}



