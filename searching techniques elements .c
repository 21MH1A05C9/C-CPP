#include<stdio.h>
void main()
{
	int size;
	scanf("%d",&size);
	int a[size],se,i,flag=0;
	printf("enter the elements in the array");
	for (i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the search elements");
	scanf("%d",&se);
	for(i=0;i<size;i++)
	{
		if(a[i]==se)
		{
			flag=1;
			break;
		}
		if (flag==1)
		{
			printf("elements found");
		}
		else
		{
			printf("elements not found");
		}
	}
}
