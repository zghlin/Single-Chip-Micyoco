#include<REGX52.H>
#include<INTRINS.H>
void Delay1ms(unsigned int xms)		//@12.000MHz
{
	unsigned char i, j;
	while(xms)
	{
		i = 2;
	j = 239;
	do
	{
		while (--j);
	} while (--i);
		xms--;
	}
	
}
void main()
{
	while(1)
	{
		if(P3_1==0)
		{
			Delay1ms(20);
			while(P3_1==0);
			Delay1ms(20);
			P2_0=~P2_0;
		}
		else if(P3_0==0)
		{
			Delay1ms(20);
			while(P3_1==0);
			Delay1ms(20);
			P2_1=~P2_1;
		}
		else if(P3_2==0)
		{
			Delay1ms(20);
			while(P3_2==0);
			Delay1ms(20);
			P2_2=~P2_2;
		}
		else if(P3_3==0)
		{
			Delay1ms(20);
			while(P3_3==0);
			Delay1ms(20);
			P2_3=~P3_3;
		}
		else if((P3_1==0)&&(P3_0==0))
		{
			Delay1ms(20);
			while((P3_1==0)&&(P3_0==0));
			Delay1ms(20);
			P2_4=~P2_4;
		}
		else if((P3_0==0)&&(P3_2==0))
		{
			Delay1ms(20);
			while((P3_0==0)&&(P3_2==0));
			Delay1ms(20);
			P2_5=~P2_5;
		}
		else if((P3_2==0)&&(P3_3==0))
		{
			Delay1ms(20);
			while((P3_0==0)&&(P3_2==0));
			Delay1ms(20);
			P2_6=~P2_6;
		}
		else if((P3_1==0)&&(P3_3==0))
		{
			Delay1ms(20);
			while((P3_0==0)&&(P3_2==0));
			Delay1ms(20);
			P2_7=~P2_7;
		}
	}
}

