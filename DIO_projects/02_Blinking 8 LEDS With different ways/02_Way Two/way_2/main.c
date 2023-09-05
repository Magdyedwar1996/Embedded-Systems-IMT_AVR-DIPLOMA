


#define F_CPU 8000000

#include <util/delay.h>

#define DDRA  (*(volatile unsigned char*)(0x3A))
#define PORTA  (*(volatile unsigned char*)(0x3B))

unsigned int array[8] = {1 , 2 , 4 , 8 , 16 , 32, 64, 128 };

int main(void)
{
    DDRA =0xff ; 
	unsigned char x  = 0; 
    while (1) 
    {
			PORTA =array[x] ;
			_delay_ms(300);
			x++ ; 
			if(x == 8 )
				{
					x = 0 ; 
				}
			
    }
}

