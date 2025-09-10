#include "header.h"
#include "i2c_driver.h"

// Define I2C pins
sbit SDA = P1^0;
sbit SCL = P1^1;

// I2C start condition
void i2c_start() 
{
    SDA = 1; 
		SCL = 1;
    SDA = 0; // SDA low while SCL is high
    SCL = 0;
}


// I2C write data frame
void i2c_write(unsigned char dat) 
{
    unsigned char i;
    for(i=0; i<8; i++) 
		{
        SDA = (dat & 0x80) ? 1 : 0;
        SCL = 1; 
				SCL = 0;
        dat <<= 1;
    }
    // Check for ACK from slave
    SDA = 1; 
		SCL = 1;
    while(SDA); // Wait for SDA to go low (ACK)
    SCL = 0;
}


// I2C read data frame
unsigned char i2c_read() 
{
    unsigned char i, dat = 0;
    SDA = 1; // Release SDA for slave to drive
    for(i=0; i<8; i++) 
		{
        SCL = 1;
        dat <<= 1;
        if(SDA)
				{
					dat |= 0x01;
				}
        SCL = 0;
    }
    return dat;
}


// Send ACK
void i2c_ack() 
{
    SDA = 0;
    SCL = 1;
    SCL = 0;
}


// Send NACK
void i2c_nack() 
{
    SDA = 1;
    SCL = 1;
    SCL = 0;
}


// Check ACK from Slave
bit i2c_check_ack() 
{
    bit ack;
    SDA = 1;
    SCL = 1;
    ack = SDA; // 0 = ACK, 1 = NACK
    SCL = 0;
    return (ack == 0);
}


// I2C stop condition
void i2c_stop()
{
    SDA = 0; 
		SCL = 1;
    SDA = 1; // SDA high while SCL is high
}
