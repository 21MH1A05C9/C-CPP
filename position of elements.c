#include<stdio.h>
void main ()
{
	char i,I,ch;
	scanf("%c",& ch);
	if (ch>='a' && ch<='z')// 97==122
	{
		printf("%d",ch-96);
	 } 
	 else if (ch>='A'&& ch<='Z')//65==90
	 {
	 	printf("%d",ch-64);
	 }
	
}
