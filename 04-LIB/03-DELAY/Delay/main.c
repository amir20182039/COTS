/*
 * main.c
 *
 *  Created on: Feb 4, 2019
 *      Author: EL-YaMaMa
 */

typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;

void delay_ms(u32 time_ms);
void delay_us(u32 time_us);

void main(void)
{
	*((u8*)0x31)=0xFF;
	while(1){
		*((u8*)0x32)=0xFF;
		delay_us(500);
		*((u8*)0x32)=0x00;
		delay_us(500);
	}
}




void delay_ms(u32 time_ms)
{
	u32 counter;
	u32 n;
	n=((8000*time_ms)-168)/64;//(time_ms*191)-4;

	for(counter=0;counter<n;counter++)
	{
		asm("NOP");
		asm("NOP");
		asm("NOP");
		asm("NOP");
		asm("NOP");
		asm("NOP");
		asm("NOP");
		asm("NOP");
		asm("NOP");
		asm("NOP");
		asm("NOP");
		asm("NOP");
		asm("NOP");
		asm("NOP");
		asm("NOP");
		asm("NOP");
		asm("NOP");
		asm("NOP");
		asm("NOP");
		asm("NOP");
		asm("NOP");
		//asm("NOP");
	}
}

void delay_us(u32 time_us)
{
	u32 counter;
	u32 n;
	n=((8*time_us)-123)/64;

	for(counter=0;counter<n;counter++)
	{
		asm("NOP");
		asm("NOP");
		asm("NOP");
		asm("NOP");
		asm("NOP");
		asm("NOP");
		asm("NOP");
		asm("NOP");
		asm("NOP");
		asm("NOP");
		asm("NOP");
		asm("NOP");
		asm("NOP");
		asm("NOP");
		asm("NOP");
		asm("NOP");
		asm("NOP");
		asm("NOP");
		asm("NOP");
		asm("NOP");
		asm("NOP");
		//asm("NOP");
	}
}
