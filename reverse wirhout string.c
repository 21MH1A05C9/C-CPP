#include<stdio.h>
void main()
{
	char str[10]="aditya";
	int i,j,len,temp;
	for (i=0;str[i]!='\0';i++);
	len=i;
	i=0;
	j=len-1;
	while(i<j)
	{
		temp=str[j];
		str[j]=str[i];
		str[i]=temp;
		i++;
		j--;
	}
	printf("%s",str);
}
