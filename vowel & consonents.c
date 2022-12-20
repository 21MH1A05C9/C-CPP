/*Input a stringThis is C Programming class
     Number of vowels:6
     Number of Consonants:20*/

#include<stdio.h>
int main()
{
	char str[100],*pt;
	int ctrV,ctrC;
	printf("Input a string");
	scanf("%[^\n]s",&str);
	pt=str;
	ctrV=ctrC=0;
	while (*pt!='\0')
	{
		if (*pt=='A'||*pt=='E'||*pt=='I'||*pt=='O'||*pt=='U'||*pt=='a'||*pt=='e'||*pt=='i'||*pt=='o'||*pt=='u')
		{
			ctrV++;
		}
		else
		{
			ctrC++;
		}
		pt ++;
	}
	printf("Number of vowels:%d\n Number of Consonants:%d\n",ctrV,ctrC-1);
	return 0;
}
