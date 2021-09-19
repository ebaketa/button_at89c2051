// ********************************************************
// Program:     Button example
// Author:      Elvis Baketa
// Processor:   AT89C2051
// Oscillator:  12 MHz
// Compiler:    SDCC (Linux)
// Version:     0.1
// Comment:     
// ********************************************************

#include "at89x051.h"

// declare function
void delayms(void);
void delay(int data);

// main function
void main (void)
{
    // run once
    P3 = 0xFF;
    P1 = 0xFF;
    
    // loop forever
    while(1)
    {
        // check if the button is pressed
        if (P3_2 == 0)
        {
            // wait a little more
            delay(200);
            // check if the button is pressed
            if (P3_2 == 0)
            {
                P1_0 = !P1_0;
            }
        }
    }
}

// delay one milisecond
void delayms(void)
{
    int i;
    // count to 33 for 1 ms delay
    for (i = 0; i < 34; i++);
}

// amount of milisecond to delay
void delay(int data)
{
    int i;
    for (i = 0; i < data; i++)
    {
        delayms();
    }
}

