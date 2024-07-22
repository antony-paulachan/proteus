#include<LPC214X.h>
int main()
{
while(1)
{
	IODIR0|=(0x01<<1);
	IODIR0|=(0x01<<2);
	IODIR0|=(0x01<<3);
	IODIR0|=(0x01<<4);
	IODIR0|=(0x01<<5);
	IODIR0|=(0x01<<6);
	IODIR0|=(0x01<<7);
	
		IOSET0|=(0x01<<1);
		IOSET0|=(0x01<<2);
		IOSET0|=(0x01<<3);
		IOSET0|=(0x01<<4);
		IOSET0|=(0x01<<5);
		IOSET0|=(0x01<<6);
}
}