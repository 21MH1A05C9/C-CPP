/*#include<stdio.h>
#include<math.h>
int * isprime(int n)
{
	int static arr[3];
	arr[0]=10;
	arr[1]=5;
	arr[2]=100;
	return arr;
}
void main()
{
	int n,*res,i;
	scanf("%d",&n);
	res=isprime(n);
	for(i=0;i<3;i++)
	{
		printf("%d ",res[i]);
	}
}*/

/*#include<stdio.h>
#include<math.h>
int * isprime(int n)
{
	int static i=0;
	printf("%d ",i);
	if(i==n)
	{
		return;
	}
	i++;
	isprime(n);
}
void main()
{
	int n,*res,i;
	scanf("%d",&n);
	res=isprime(n);
	for(i=0;i<3;i++)
	{
		printf("%d ",res[i]);
	}
}*/

#include<stdio.h>
#include<math.h>
int isprime(int n)
{
	int static i=2;
	int sq=sqrt(n);
	if(i>sq)
	{
		return 1;
	}
	if(n%i==0)
	{
		return 0;
	}
	i++;
	return isprime(n);
}
void main()
{
	int n;
	scanf("%d",&n);
	if(isprime(n))
	{
		printf("%d is prime",n);
	}
	else
	{
		printf("%d is not a prime",n);
	}
}
