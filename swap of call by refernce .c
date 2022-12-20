/*Input the value of 1* element:2
  Input the value of 2* element:3

 The Value before swapping are:
         element 1=2
         element 2=3

 The Value after swapping are:
         element 1=3
         element 2=2*/
 
#include<stdio.h>
void swap (int *x,int*y)
{
	int tmp;
	tmp=*x;
	*x=*y;
	*y=tmp;
}
int main()
{
	int e1,e2;
	printf("Input the value of 1* element:");
	scanf("%d",&e1);
	printf("Input the value of 2* element:");
	scanf("%d",&e2);
	printf("\n The Value before swapping are:\n");
	printf("element 1=%d\n element 2=%d\n",e1,e2);
	swap(&e1,&e2);
	printf("\n The Value after swapping are:\n");
	printf("element 1=%d\n element 2=%d\n",e1,e2);
	return 0;
}
