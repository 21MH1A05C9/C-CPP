#include<stdio.h>
void main()
{
	/*char str[14]="adityacollege";
	printf("%s",str);*/
	char str[100];
	scanf("%s",str);
	/*printf("enter string: is %s",str);
	printf("%c\n",str[0]);
	printf("%c\n",str[3]);
	printf("%c\n",str[4]);
	printf("%c\n",str[7]);*/
	int i;
	for  (i=0; str[i]!='\0' ;i++)
	{
		printf("%c\n",str[i]);
	}
	
}
