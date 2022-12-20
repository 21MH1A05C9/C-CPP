//output is-->//6487572
              //27
              //6487560
              //6487572
              //27
#include<stdio.h>
void main()
{
	int a=27;
	int *p;// p is a pointer to integer
	p=&a;
	printf("%d\n",p);
	printf("%d\n",*p);
	int **q;// q is a pointer to pointer
	q=&p;
	printf("%d\n",q);
	printf("%d\n",*q);
	printf("%d\n",*(*q));
}
