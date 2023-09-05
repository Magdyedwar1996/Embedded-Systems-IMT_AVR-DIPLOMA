
#define F_CPU 8000000
#define  TIME   5000 
#include <util/delay.h>


//=========================================================================
// this is the prototypes of the functions

void Blink8Leds(void);
void Blink4Leds(void);
void Blink2ON_2Off_2ON_2OFF(void);
void Blink1ON_1Off(void);

//===========================================================================

#define DDRA  (*(volatile unsigned char*)(0x3A))
#define PORTA  (*(volatile unsigned char*)(0x3B))

unsigned int array[8] = {1 , 2 , 4 , 8 , 16 , 32, 64, 128 };
unsigned char x  = 0; 




int main(void)
{
    DDRA =0xff ; 

    while (1) 
    {
		Blink8Leds();
		Blink4Leds();
		Blink2ON_2Off_2ON_2OFF();
		Blink1ON_1Off();
		

			
    }
}


// this function is to blink all the 8 leds at once
void Blink8Leds(void)
  {	
	  for (int i = 0 ; i < 5000 ; i+=600 )
		  {
			  PORTA =0xff ;
			  _delay_ms(300);
			  PORTA = 0x00; 
			  _delay_ms(300);
		  }
		  

  }
  
// this function is to blink   ==== >>>>   Four ON / Four OFF
void Blink4Leds(void)
{
	for (int i = 0 ; i < TIME ; i+=600 )
	{
		PORTA =0x0f ;
		_delay_ms(300);
		PORTA =0xf0 ;
		_delay_ms(300);
	}
	

}  


// this function is to blink    ==== >>>>   Two ON / Two OFF  / Two ON / Two OFF
void Blink2ON_2Off_2ON_2OFF(void)
{
	for (int i = 0 ; i < TIME ; i+=600 )
	{
		PORTA =0b00110011 ;
		_delay_ms(300);
		PORTA =0b11001100 ;
		_delay_ms(300);
	}


}



// this function is to blink    ==== >>>>   Two ON / Two OFF  / Two ON / Two OFF
void Blink1ON_1Off(void)
{
	for (int i = 0 ; i < TIME ; i+=600 )
	{
		PORTA =0b10101010 ;
		_delay_ms(300);
		PORTA =0b01010101 ;
		_delay_ms(300);
	}


}
