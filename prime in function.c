#include<stdio.h>
int prime(int n)
{
	int x=2;
	while(x<=n/2)
	{
		if(n%x==0)
		{
			return 0;
		}
		x++;
	}
	return 1;
}
void main()
{
	int n;
	scanf("%d",&n);
	if(prime(n))
	{
		printf("%d is prime",n);
		
	}
	else
	{
		printf("%d is not a prime",n);
	}
}


/*#include<stdio.h>
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
}*/

