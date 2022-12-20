//HELlo
//Modified: hello
#include<stdio.h>
void main()
{
	char str[100];
	scanf("%s", str);
	int i;
	for (i=0; str[i]!='\0' ;i++)
	{
	if (str[i] >= 'A' && str[i] <= 'Z')//a&&z  A&&Z
	{
		str[i]=str[i]+32;//+32&&-32
	}
  }
      printf("Modified: %s\n",str);
}
