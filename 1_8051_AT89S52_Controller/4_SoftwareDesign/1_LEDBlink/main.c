/*----- Standard  header file include -----*/
#include <reg51.h>
#include <stdio.h>


/*----- Global variables -----*/
sbit LED1 = P0^0;


/*----- Function definations -----*/
void delay_ms(unsigned int);
void delay_1ms(void) ;


/*----- Start execution -----*/
void main(void)
{
	P0 = 0x00;
	while(1)
	{
		LED1 = 1;
		delay_ms(1000);
		LED1 = 0;
		delay_ms(1000);
	}

}


/*----- Function declaration -----*/


// Delay for ms 
void delay_ms(unsigned int ms)
{
	while(ms--)
	{
		delay_1ms();
	}
}


void delay_1ms(void) 
{
	
    TMOD &= 0xF0;  // Clear lower 4 bits for Timer0 mode
    TMOD |= 0x01;  // Timer0 mode 1 (16-bit)

    // For 11.0592 MHz, 1ms = 1000us
    // Timer counts = 1000us / (1.085us per count) ˜ 921
    // 65536 - 921 = 64615 = 0xFC67

    TH0 = 0xFC;
    TL0 = 0x67;

    TR0 = 1;          // Start Timer0
    while(TF0 == 0);  // Wait for overflow
    TR0 = 0;          // Stop Timer0
    TF0 = 0;          // Clear overflow flag
		
}