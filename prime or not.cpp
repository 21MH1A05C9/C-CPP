#include<stdio.h>
int FindFactorCount (int n)
{
	int cnt=0;
	for(int i=1;i<sqrt(n);i++)
	{
		if (n%i==0)
		{
			if(n/i!=i)
			{
			  cnt+=2;
		    }
		}
	}
	return cnt;
}
int main()
{
	int n;
	scanf("%d",&n);
	if(Isprime(n))
	printf("FindFactorCount %d",n);
}
