#include <reg51.h>
#include <stdio.h>
#include "uart_driver.h"
#include "timer.h"

// Send AT command to SIM800
void SIM800_SendATCommand(char *);

// Initialize SIM800
void SIM800_Init();

// Send SMS
void SIM800_SendSMS(char *, char *);