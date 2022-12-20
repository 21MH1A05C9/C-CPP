//A function calling itself
#include<stdio.h>
int sum(int n)
{
	if(n==1)
	{
		return 1;
	}
	else
	{
		return n+sum(n-1);
	}
}
void main()
{
	int n;
	scanf("%d",&n);
	int s=sum (n);
	printf("sum of first %d natural numbers is %d",n,s);
	
}
