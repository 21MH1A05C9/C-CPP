//output is -->//arr[0] before change 10
               //arr[0] after change 123
#include<stdio.h>
void change (int *arr)
{
	arr[0]=123;
}
void main ()
{
	int arr[5]={10,20,30,40,50};
	printf("arr[0] before change %d\n",arr[0]);
	change (arr); // call by refrence
	printf("arr[0] after change %d\n",arr[0]);
}
