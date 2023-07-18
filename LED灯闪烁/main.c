#include<REGX52.H>
#include"DELAY.h"
void main()
{
	while(1)
	{
		P2=~P2;
		Delay(2000);
	}
}