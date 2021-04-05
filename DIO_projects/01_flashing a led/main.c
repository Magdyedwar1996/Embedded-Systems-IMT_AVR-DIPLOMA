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





}

