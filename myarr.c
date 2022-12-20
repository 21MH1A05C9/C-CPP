#include<stdio.h>
int main()
{
	int myarr[5];
	int i,large=0;
	for(int i=0;i<5;i++)
	{
		scanf("%d",&myarr[i]);
	}
 	for(int i=0;i>5;i++)
	{
		if (myarr[i]>large)
		{
			large=myarr[i];
		}
	}
	printf("%d",large);
}
