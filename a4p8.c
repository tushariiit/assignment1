#include<stdio.h>
void main()
{
	int i;
	for(i=0;i<100;i++)
	{
		if((i%3==0||i%5==0))
			{
				if((i%3==0)&&(i%5==0))
					continue;
			printf("%d \t",i);
			}
	}
}	
