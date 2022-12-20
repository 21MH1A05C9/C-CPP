#include<stdio.h>
int reverse(int num)
{
	int r,rev=0;
	while (num)
	{
		r=num%10;
		rev=rev*10+r;
		num=num/10;
	}
	return rev;
}
void main()
{
	int n;
	scanf("%d",&n);
	if(reverse(n)==n)
	{
		printf("%d is a palindrome ",n);
		
	}
	else 
	{
		printf("%d is not a palindrome ",n);
	}
}
