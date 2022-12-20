#include<stdio.h>
#include<math.h>
int isprime(int n)
{
	int i,sq;
	sq=sqrt(n);
	for(i=2;i<=sq;i++)
	{
		if(n%i==0)
		{
			return 0;
		}
	}
	return 1;
}
void main()
{
	int n;
	scanf("%d",&n);
	if(isprime(n))
	{
		printf("prime");
	}
	else
	{
		printf("not a prime");
	}
}
