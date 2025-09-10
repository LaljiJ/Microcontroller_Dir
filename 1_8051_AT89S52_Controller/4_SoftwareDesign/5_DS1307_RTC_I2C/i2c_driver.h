#include <reg51.h>
#include "timer.h"


// Function prototypes
void i2c_start();
void i2c_stop();
void i2c_write(unsigned char dat);
unsigned char i2c_read();
void i2c_ack();
void i2c_nack();
bit i2c_check_ack();