//5
//10 20 30 40 50
//150
#include<stdio.h>
int add_elements (int arr[],int size)
{
	int i,sum=0;
	for (i=0;i<size;i++)
	{
		sum+=arr[i];
	}
	return sum;
}
void main()
{
	int n;
	scanf("%d",&n);
	int i,a[n];
	for(i=0;i<n;i++)
	  scanf("%d",&a[i]);
	  int res = add_elements(a,n);
	  printf("%d",res);
} 

