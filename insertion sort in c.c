/*#include<stdio.h>
void insertion_sort(int arr[],int n)
{
	int i,j,temp;
	for(i=1;i<n;i++)
	{
	    temp=arr[i];
	    j=i-1;
	    while(temp<arr[j])
	    {
	    	arr[j+1]=arr[j];
	    	j--;
		}
		arr[j+1]=temp;
	}
}
void main()
{
	int a[100], i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	insertion_sort(a,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}*/

#include<stdio.h>
void insertion_sort(int *arr,int n)
{
	int i,j,temp;
	for(i=1;i<n;i++)
	{
	  temp=arr[i];
	  for(j=i-1;j>=0;j--)
	  {
	  	if(temp<arr[j])
	  	{
	  		arr[j+1]=arr[j];
		  }
		  else
		  {
		  	arr[j+1]=temp;
		  	break;
		  }
		}
		if(j==-1)
		{
			arr[0]=temp;
		}	
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


