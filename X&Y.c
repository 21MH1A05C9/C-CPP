#include<stdio.h>
int main()
{
	int X,Y,i;
	scanf("%d %d",&X,&Y);
	if(X<Y)
	{
		for(i=1;i<=X/2;i++)
		{
			if(X%i==0 && Y%i==0)
			{
				printf("%d",i);
			}
		}
	}
	else
	{
		for(i=1;i<=Y/2;i++)
		{
			if(X%i==0 && Y%i==0)
			{
				printf("%d",i);
			}
    	}
    }
}
