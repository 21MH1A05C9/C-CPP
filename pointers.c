#include<stdio.h>
void main()
{
	/*int a=10;
	int *ptr;
	ptr=&a;
	printf("value:%d\n",a);
	printf("address:%d\n",&a);
	printf("address:%d\n",ptr);
	printf("value:%d\n",*ptr);*/
	
	int a=20,b=30;
	swap(&a,&b);
	printf("a=%d b=%d",a,b);
}
swap(int *x,int *y)
{
	int t;
	t=*x;
	*x=*y;
	*y=t;
	printf("x=%d y=%d\n",*x,*y);
}

