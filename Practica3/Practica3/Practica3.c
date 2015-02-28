/*
 * Practica3.c
 *
 * Created: 28/02/2015 5:47:15
 *  Author: Antonio
 */ 


#include <avr/io.h>

int main(void)
{
	
	DDRB = 0xFF;
	DDRC = 0xFF;
	DDRD = 0xFF;
	PORTD |= 0x00;
	int nums[10] = { 0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x07, 0x7F, 0x6F };
	int selectedN = 0;
	PORTB = nums[(selectedN / 10 )& (0xF)];
	PORTC = nums[selectedN & (0xF)];
    while(1)
    {
        
        selectedN =  PIND;
        PORTB = nums[(selectedN / 10)& (0xF)];
        PORTC = nums[selectedN & (0xF)];
    }
}