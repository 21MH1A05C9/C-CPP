//Hello
//Original: Hello
//Modified: hello
#include<stdio.h>
void main()
{
	char str[100];
	scanf("%s", str);
	printf("Original: %s\n",str);
	str[0]=str[0]+32;
	printf("Modified: %s\n",str);
}
