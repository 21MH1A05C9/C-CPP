#include<stdio.h>
void main()
{
	char ch;
	scanf("%c",&ch);
	if (ch>='a' && ch<='z')// 97==122
	{
		printf("lower case");
	 } 
	 else if (ch>='A'&& ch<='Z')//65==90
	 {
	 	printf("upper case");
	 }
	 else if (ch>='0'&& ch<='9')//48==57
	 {
	 	printf("digit");
	  } 
	  else
	  {
	  	printf("symbols");
	  }
}
