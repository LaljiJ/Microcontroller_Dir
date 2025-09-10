#include <reg51.h>
#include "timer.h"
#include "i2c_driver.h"
#include "ds1307.h"

// Main start
void main() 
{
    unsigned char seconds, minutes, hours;

    // Initialize time (e.g., to 00:00:00)
    // ds1307_write_time(0x00, 0x00, 0x00); 

    while(1) 
		{
        ds1307_read_time(&seconds, &minutes, &hours);
				delay_ms(10);
        // Display time on LCD or serial port (implementation not shown here)
        // For example: printf("%02x:%02x:%02x\n", hours, minutes, seconds);
    }
}