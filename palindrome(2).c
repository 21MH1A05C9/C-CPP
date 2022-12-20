#include<stdio.h>
int main()
{
	int n,r,rev=0;
	scanf("%d",&n);
	int t=n;
	while(n);
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	if(rev==t)
	{
		printf("%d is a palindrome ",t);
	}
	else
	{
		printf("%d is not a palidrome ",t);
	}
}
