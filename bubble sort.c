/*bubble_sort
55 66 22 11 77 23 43 56 --->org

55 22 11 66 23 43 56 77--->pass-1 sc=5

22 11 55 23 43 56 66 77--->pass-2 sc=5

11 22 23 43 55 56 66 77--->pass-3 sc=3

11 22 23 43 55 56 66 77--->pass-4 sc=0

i>j---->21>34 swap(i,j)i++,j++
i++,j++
*/
#include<stdio.h>
void bubble_sort(int *arr,int n)
{
	int i,j,p,sc,temp;
	for(p=1;p<n;p++)
	{
		sc=0;
		for(i=0;i<n-p;i++)
		{
			j=i+1;
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
				sc++;
			}
		}
		if(sc==0)
		{
			break;
		}
	}
}
int main()
{
	int n,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	bubble_sort(arr,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}


