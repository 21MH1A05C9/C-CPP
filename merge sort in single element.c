#include<stdio.h>
void merge(int *arr,int n)
{
	int i,j,l,m,h,k,res;
	int a[100],b[100];
	l=0;
	h=n-1;
	m=(l+h)/2;
	for(i=l;i<=m;i++)
	{
		a[k++]=arr[i];
	}
	k=0;
	for(i=m+1;i<=h;i++)
	{
		b[k++]=arr[i];
		k++;
	}
	k=0;
	i=0;
	j=0;
	while(i<n/2 && j<n/2)
	{
		if(a[i]<b[j])
		{
			arr[k++]=a[i++];
		}
		else
		{
			arr[k++]=b[j++];
		}
	}
	while(i<n/2)
	{
		arr[k++]=a[i++];
	}
	while(j<m/2)
	{
		arr[k++]=b[j++];
	}
	return arr;
}
void main()
{
	int arr[100],i,n,*res;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	merge(arr,n);// fun call merge
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
