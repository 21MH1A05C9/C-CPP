/*#include<stdio.h>
void fun(int n)
{
	if(n==0)
	{
		return;
	}
	fun(n-1);
	printf("%d ",n);
	
}
int main()
{
	int arr[100],i,n;
	scanf("%d",&n);
	fun(n);
}*/

/*#include<stdio.h>
int fun(int n)
{
	if(n<=0)
	{
		return 1;
	}
	return n+fun(n-1);
}
int main()
{
	int n,res;
	scanf("%d",&n);
	res=fun(n);
	printf("%d",res);
}*/


/*#include<stdio.h>
int fun(int n)
{
	if(n<=0)
	{
		return 1;
	}
	return fun(n-1)+fun(n-2);
}
int main()
{
	int n,res;
	scanf("%d",&n);
	res=fun(n);
	printf("%d",res);
}*/

#include<stdio.h>
void fun(int n)
{
	if(n<=0)
	{
		return ;
	}
	fun(n-1);
	printf("%d ",n);
	fun(n-2);
}
int main()
{
	int n,res;
	scanf("%d",&n);
	fun(n);
}




