#include<lpc214x.h>
void delay(int c)
{
	int i,j;
	for(i = 0;i<c;i++)
	for(j = 0;j<1000;j++);
}
int main()
{	 
						  
	int i = 16;
	while(i!=0)						//program to display decrement bcd counter on bit (20 19 18 17)
	{
		IODIR1 = i<<17;				
		IOSET1 = i<<17;       
		delay(1000);
		IOCLR1 = i<<17;
		delay(1000);
		i--;
	}	
}