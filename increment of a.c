//call by value//
// out put is--> a before is 10// a after is 10
#include<stdio.h>
void increment (int a)
{
	a=a+1;
}
void main ()
{
	int a=10;
	printf("a value before increment %d\n",a);
	increment(a);
	printf("a value after increment %d\n",a);
}
