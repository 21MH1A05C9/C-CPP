#include<stdio.h>
struct STD
{
	int a;
	char name[9];
	float c;
};
typedef struct STD S;
void main()
{
	S s1;
	printf("%d",sizeof(s1));
}
