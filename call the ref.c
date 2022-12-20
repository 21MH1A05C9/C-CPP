// call by reference 
#include<stdio.h>
void increment (int *p)
{
	*p=*p+1;
}
void main ()
{
	int a=10;
	int *p=&a;
	printf("a value before increment %d\n", a);
	increment(p);//2000 call by reference
	printf("a value after increment %d\n", a);
}
