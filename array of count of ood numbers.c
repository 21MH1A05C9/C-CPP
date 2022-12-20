//out put-->5 
//166 139 12 147 199
//3
#include<stdio.h>
void main()
{
	int size;
	scanf("%d",&size);
	int nums[size], i, count=0;
	for (i=0; i<size; i++)
	{
		scanf("%d", &nums[i]);
	}
	for (i=0; i<size; i++)
	{
		if(nums[i]%2 != 0)
		{
			count++;
		}
	}
	printf("%d", count);
}
