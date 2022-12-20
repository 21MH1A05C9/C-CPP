// output-->166 139 12 147 199
//487
#include<stdio.h>
void main()
{
	int a[5],i,sum=0;
	printf("enter the values: ");
	for (i=0;i<5;i++)
	    scanf("%d",&a[i]);
	for (i=0;i<5;i++)
	{
		if (a[i]%2==1)
		sum=sum+a[i];
	}
	printf("sum of odd values is : %d",sum);
}
