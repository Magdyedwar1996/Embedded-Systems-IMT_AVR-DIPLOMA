/*
 * main.c
 *
 *  Created on: Apr 6, 2021
 *      Author: magdy
 */


#include<avr/io.h>
#include "util/delay.h"


int main (void)
{
	/*************/
	/****  1  ****/
	/*************/
	// assignment one flashing every 500 ms

	DDRB= 0x01 ;
	while (1)
	{
		PORTB = 0X01 ;
		_delay_ms(500);
		PORTB = 0X00 ;
		_delay_ms(500);
	}



	/************/
	/****  2  ****/
	/*************/

	// assignment two shifting left every 250 ms


	/*DDRC = 0xff ;
	while (1)
	{
		PORTC = 0b00000001 ;
		_delay_ms(1000);


		PORTC = 0b00000010 ;
		_delay_ms(1000);

		PORTC = 0b00000100 ;
		_delay_ms(1000);

		PORTC = 0b00001000 ;
		_delay_ms(1000);

		PORTC = 0b00010000 ;
		_delay_ms(250);

		PORTC = 0b00100000 ;
		_delay_ms(1000);

		PORTC = 0b01000000 ;
		_delay_ms(1000);

		PORTC = 0b10000000 ;
		_delay_ms(1000);


	}*/

}

