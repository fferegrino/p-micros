/*
 * Practica2.c
 *
 * Created: 27/02/2015 22:07:38
 *  Author: Antonio
 */ 




#include <avr/io.h>

int main(void)
{
	// set all pins on PORTB for output
	DDRB = 0xFF;
	DDRD = 0xFF;
	DDRC = 0xFF;    
	
	int nums[10] = { 0x7E, 0x30, 0x6D, 0x79, 0x33, 0x5B, 0x5F, 0x70, 0x7F, 0x7B };
		int nums2[10] = { 0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x07, 0x7F, 0x6F };
	
    while(1)		
    {				
		int r =  PINC & 0xFF;
		PORTB = nums[r];
		PORTD = r;
    }
}