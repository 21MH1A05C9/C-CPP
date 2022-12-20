//addition of two numbers using pointers
#include<stdio.h>
void main ()
{
	int a=100,b=43;
	add(&a,&b);
}
add(int *x,int *y)
{
	int p;
	p=*x+*y;
	printf("%d",p);
}

