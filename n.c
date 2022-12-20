#include<stdio.h>
#include<string.h>
void main()
{
	char name[20];
	int i,count=0;
	printf("enter a string");
	gets(name);
	for(i=0;name[i]!='\0';i++)
	{
		count ++;
	}
	printf("length of the string %d",count);
		
}
