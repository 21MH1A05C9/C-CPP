//even number
#include<stdio.h>
void main()
{
	int size;
	scanf("%d",&size);
	int nums[size], i;
	for (i=0; i<size; i++)
	{
		scanf("%d", &nums[i]);
	}
	for (i=0; i<size; i++)
	{
		if(nums[i]%2 == 0)
		{
			printf("%d ",nums[i]);
		}
	}
}
//odd number
#include<stdio.h>
void main()
{
	int size;
	scanf("%d",&size);
	int nums[size], i;
	for (i=0; i<size; i++)
	{
		scanf("%d", &nums[i]);
	}
	for (i=0; i<size; i++)
	{
		if(nums[i]%2 != 0)
		{
			printf("%d ",nums[i]);
		}
	}
}

