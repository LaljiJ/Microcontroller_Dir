#include "ds1307.h"
#include "i2c_driver.h"


// Write Time to DS1307
void ds1307_write_time(unsigned char sec, unsigned char min, unsigned char hour)
{
    i2c_start();
    i2c_write(0xD0); // Write address
    i2c_write(0x00); // Seconds register
    i2c_write(sec);
    i2c_write(min);
    i2c_write(hour);
    i2c_stop();
}


// Read Time from DS1307
void ds1307_read_time(unsigned char *sec, unsigned char *min, unsigned char *hour) 
{
    i2c_start();
    i2c_write(0xD0); // Write mode
    i2c_write(0x00); // Point to seconds register
    i2c_stop();

    i2c_start();
    i2c_write(0xD1); // Read mode
    *sec = i2c_read(); 
		i2c_ack();
    *min = i2c_read(); 
		i2c_ack();
    *hour = i2c_read(); 
		i2c_nack();
    i2c_stop();
}