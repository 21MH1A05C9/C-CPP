#include<stdio.h>
void main()
{
	int n;
	scanf("%d",&n);
	int arr[n],i,max;
	for (i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	 max = arr[0];
	for (i=1;i<n;i++)
	{
		if (arr[i]>max)
		{
			max=arr[i];
		}
	}
     printf("%d",max);
}
