


#define F_CPU 8000000

#include <util/delay.h>
#define DDRA  (*(volatile unsigned char*)(0x3A))
#define PORTA  (*(volatile unsigned char*)(0x3B))



int main(void)
{
    DDRA =0xff ; 
	unsigned char x  = 1; 
    while (1) 
    {
			PORTA = x ;
			_delay_ms(300);
			x *=2 ; 
			if(x == 0 )
				{
					x = 1 ; 
				}
			
    }
}

