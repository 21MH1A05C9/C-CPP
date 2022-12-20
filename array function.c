#include<stdio.h>
void fun(int *arr,int n)
{
	arr[0]=100;
	n=100;
}
int main()
{
	int arr[100],i,n;
	scanf("%d",&n);
	   for(i=0;i<n;i++)
	  {
		scanf("%d",&arr[i]);
	  }
	  fun(arr,n);
	  printf("%d\n",n);
		for(i=0;i<n;i++)
		{
       		printf("%d ",arr[i]);			
		}
}
