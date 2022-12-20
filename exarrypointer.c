/*#include<stdio.h>
void main ()
{
	int arr[5]={10,20,30,40,50};
	printf("%d\n",arr);
	//array name can be represented as a pointer
	//to the base address of it's first element 
	printf("%d\n",&arr[0]);
}*/

#include<stdio.h>
void main()
{
	int arr[5];
	int i;
	for (i=0;i<5;i++)
	{
		scanf("%d",arr+i);// 4&arr[i] <--> arr+i
	}
	 for (i=0;i<5;i++)
	 {
	 	printf("%d ",*(arr+i)); // arr[i] <--> *(arr+i)
	 }
}
