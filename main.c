/*
 * File:   main.c
 * Author: robda
 *
 * Created on 03 December 2017, 16:44
 */

#include <pic.h> 
__CONFIG( FOSC_HS & WDTE_OFF & PWRTE_ON & BOREN_OFF & LVP_OFF ); 

void delay()
{
    for(unsigned i = 0; i < 5000; ++i);
}

void init()
{    
    TRISB = 0x00;
    TRISC = 0x00; //Set all pins to output

}

void main()
{
    init();
    while(1)
    {
        for(int i = 0; i < 8; ++i)
        {
            PORTC = 1 << i;
            delay();
        }
        for(int j = 8; j > 0; j--)
        {         
            delay();
            PORTB = 1 << j;

        }
    }
}