#include<stdio.h>
int max(int *arr,int n)
{
	int i,ind=0,me=arr[0];
	for(i=0;i<=n;i++)
	{
		if(arr[i]>me)
		{
			me=arr[i];
			ind=i;
		}
	}
	return ind;
}
void insertion_sort(int *arr,int n)
{
	int i,temp,maxind;
	for(i=n-1;i>=0;i--)
	{
		maxind=max(arr,i);
		temp=arr[i];
		arr[i]=arr[maxind];
		arr[maxind]=temp;
	}
}
void main()
{
	int n,arr[100],i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	insertion_sort(arr,n);//fun call
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}


