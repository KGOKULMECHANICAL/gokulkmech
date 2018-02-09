#include <stdio.h>

int main(void)
{
	int g=2,b=6,i,n=0;
	for(i=g;i<=b;i++)
	{
		if((i%2)!=0)
		{
			n=i+1;
			printf("%d",i);
		}
	}
}
