/*----- Standard headerfile -----*/
#include <reg51.h>


/*----- User define headerfiles -----*/
#include "main.h"
#include "timer.h"
#include "led.h"



/*----- Main function -----*/
void main(void)
{
    init_all_port();
	
    while(1)
    {
			blink_port0_leds();
			// blink_port1_leds();
			// blink_port2_leds();
			// blink_port3_leds();
    }
}



/*----- Function declaration -----*/
/* 
Initialize all ports for output
If we write on 1 on this port then it will on the LED.
*/
void init_all_port(void)
{
    init_port0();
    init_port1();
    init_port2();
    init_port3();
}

/* 
Initialize port0 for output
If we write on 1 on this port then it will on the LED.
*/
void init_port0(void)
{
    P0 = 0x00;
}

/*
Initialize port1 for output
If we write on 1 on this port then it will on the LED.
*/
void init_port1(void)
{
    P1 = 0x00;
}


/*
Initialize port2 for output
If we write on 1 on this port then it will on the LED.
*/
void init_port2(void)
{
    P2 = 0x00;
}


/*
Initialize port3 for output
If we write on 1 on this port then it will on the LED.
*/
void init_port3(void)
{
    P3 = 0x00;
}
