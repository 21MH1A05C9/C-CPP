/*how to compare two strings without using strcmp function*/
#include<stdio.h>
#include<string.h>
void main ()
{
	/*char str[100];
	int len;
	scanf("%[^\n]s",str);
	len=strlen(str);
	printf("%d",len);*/
	
	/*char str[100];
	int i;
	scanf("%[^\n]s",str);
	for (i=0;str[i]!='\0';i++);
	printf("%d",i);*/
	
	/*char str1[100],str2[100];
	int len1,len2,i;
	scanf("%[^\n]s",str1);
	scanf(" %[^\n]s",str2);
	for (i=0;str1[i]!='\0';i++);
	len1=i;
	for (i=0;str2[i]!='\0';i++);
	len2=i;
	printf("%d %d",len1,len2);*/
	
	char str1[100],str2[100];
	int len1,len2,i,flag=0;
	scanf("%[^\n]s",str1);
	scanf(" %[^\n]s",str2);
	for (i=0;str1[i]!='\0';i++);
	len1=i;
	for (i=0;str2[i]!='\0';i++);
	len2=i;
	//printf("%d %d",len1,len2);
	i=0;
	if (len1==len2)
	{
		while(i<len1 || i<len2)
		{
			if (str1[i]==str2[i])
			{
				i++;
			}
			else
			{
				break;
			}
		}
		if(i==len1)
		{
			flag=1;
			printf("both the strings are same");
		}
	}
	if(flag==0)
	{
		if (str1[i]>str2[i])
		{
			printf("str1 is bigger\n");
		}
		else if (str1[i]>str2[i])
		{
			printf("str2 is bigger\n");
		}
	}
	if(len1!=len2)
	{
		printf("not equal");
	}	
}
