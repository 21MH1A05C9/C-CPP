#include<stdio.h>
int main()
{
	int i,a,b,t;
	scanf("%d %d",&a,&b);
	printf("%d %d/n",a,b);
	if(a<b)
	{
		t=b;
		b=a;
		a=t;
	}
	for(i=b;i>=1;i--)
	{
			if(a%i == 0 && b%i == 0)
			{
				printf("GCD is %d",i);
	           break;
			}
	}
}
