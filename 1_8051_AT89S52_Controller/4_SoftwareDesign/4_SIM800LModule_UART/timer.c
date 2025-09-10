#include <reg51.h>
#include "timer.h"

// Function to delay by given number of milliseconds
void delay_ms(unsigned int time_ms)
{
    unsigned int i;
    for (i = 0; i < time_ms; i++)
    {
        delay_1ms_timer();
    }
}



// 1ms delay usings Timer 0, Mode 1 (16-bits)
void delay_1ms_timer(void)
{
    TMOD = 0x01; // Timer 0, Mode 1 (16-bits)
    
    // Load TH0 and TL0 for 1ms delay
    // For 11.0592 MHz, 1 machine cycle = 1.085 µs
    // Timer counts = (1ms / 1.085µs) ≈ 921.6 → 922 (approx)
    // 65536 - 922 = 64614 → 0xFC66
    TH0 = 0xFC;  // High byte
    TL0 = 0x66;  // Low byte

    TR0 = 1;         // Start Timer 0
    while (TF0 == 0); // Wait for Timer Overflow
    TR0 = 0;         // Stop Timer
    TF0 = 0;         // Clear overflow flag
}


