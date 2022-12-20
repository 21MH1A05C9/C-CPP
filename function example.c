/*#include<stdio.h>
int add(int a,int b)
{
	return a+b;
}
void main()
{
	int a,b,c,d;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	int addtion=add(a,b)+add(c,d);
	printf("%d",addtion);
}*/

/*#include<stdio.h>
int fun(int n)
{
	if(n<=0)
	{
		return ;
	}
	return n+fun(n-1);
}
void main()
{
	int n;
	scanf("%d",&n);
	int c=fun(n);
	printf("%d",c);
}*/

#include<stdio.h>
int fun(int n)
{
	if(n<=0)
	{
		return;
	}
	fun(n-1);
	printf("%d ",n);
	fun(n-2);
}
void main()
{
	int n;
	scanf("%d",&n);
	int c=fun(n);
	printf("%d",c);
}


