#include<stdio.h>
void main()
{
	/*int a;
	printf("%d bytes\n",sizeof(a));*/
	
	/*int arr[10];
	printf("%d bytes",sizeof(arr));*/
	
	/*int arr[5] = {10, 20, 30, 40, 50};
	printf("%d",arr[4]);*/
	
	
	/*int a[10],i;
	for(i=0; i<10; i++)
	{
		scanf("%d",&a[i]);
	}
	printf("%d\n",a[5]);
	printf("%d\n",a[2]);
	printf("%d\n",a[7]);
	printf("%d\n",a[3]);*/
	
	int a[5],i;
	for(i=0; i<5; i++)
	{
		scanf("%d",&a[i]);
	}
	/*printf("%d\n",a[4]-a[3]);
	printf("%d\n",a[2]*a[1]);
	printf("%d\n",a[0]*a[2]);
	printf("%d\n",a[3]/a[2]);*/
	//printf("array elements are:")
	for(i=0;i<5;i++)
	{
		printf("%d index --> %d\n",i,a[i]);
	}
}

