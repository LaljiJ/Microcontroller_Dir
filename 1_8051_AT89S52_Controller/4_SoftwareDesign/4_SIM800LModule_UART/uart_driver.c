#include "uart_driver.h"
#include "timer.h"


// Function to initialize serial port for GSM communication
void UART_init(void) 
{
    TMOD = 0x20; // Timer 1, Mode 2
    TH1 = 0xFD;  // 9600 baud rate
    SCON = 0x50; // Mode 1, enable receiving
    TR1 = 1;     // Start Timer 1
}


// Function to send commands to GSM module
void UART_write(unsigned char ch) 
{
    SBUF = ch;
    while (TI == 0); // Wait for transmission complete
    TI = 0;
}


// Function to read data from GSM module
unsigned char UART_read(void) 
{
    while (RI == 0); // Wait for recive complete
    RI = 0;
    return SBUF;
}


// Function to send a string (command or data)
void UART_send_string(const char *str) 
{
    while (*str){
        UART_write(*str++);
    }
}
