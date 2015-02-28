/*
 * Practica1.c
 *
 *	Created: 27/02/2015 19:54:48
 *  Author: Antonio
 */ 


#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	
	int a = 0;
    while(1)
    {
        if(!(a ^ 0x100))
			a = 0;
		PORTB = a++;
		_delay_ms(500);
    }
}