//out put-->//10 20 30 40 50
//1075304010
//1075304420
//1075304830
//1075305240
//1075305650
#include<stdio.h>
#include<stdio.h>
void main ()
{
	//static memory allocarion
	/*int arr[5];
	printf("%d\n",arr);*/
	//Dynamic memory allocation using malloc
	int n=5;
	int *arr;
	arr=(int*)malloc(n*sizeof(int));
	int i;
	for (i=0;i<5;i++)
	{
		scanf("%d",arr+i);
	}
	for (i=0;i<5;i++)
	{
		printf("%d%d\n",arr+i,*(arr+i));
	}
}

