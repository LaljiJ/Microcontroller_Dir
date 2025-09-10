#include <reg51.h>
#include "timer.h"
#include "i2c_driver.h"


// DS1307 specific functions
void ds1307_write_time(unsigned char sec, unsigned char min, unsigned char hour);
void ds1307_read_time(unsigned char *sec, unsigned char *min, unsigned char *hour);
