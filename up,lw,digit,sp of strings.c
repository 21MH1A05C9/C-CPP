//HelloNanda@123
//lowercase is 8
//upper case is 2
//digit is 3
//special char is 1

#include<stdio.h>
void main ()
{
	char str[100];
	scanf("%s",&str);
	int i,lower=0,upper=0,digit=0,special=0;
	for(i=0;str[i]!='\0';i++)
	{
		if (str[i]>='a'&&str[i]<='z')
		{
			lower++;
		}
	    else if (str[i]>='A' && str[i]<='Z')
	   {
		  upper++;
      	}
	    else if (str[i]>='0'&&str[i]<='9')
	    {
		    digit++;
       	}
	   else
	  {
		   special++;
	  } 
    }
    printf("lowercase is %d\n",lower++);
    printf("upper case is %d\n",upper++);
    printf("digit is %d\n",digit++);
    printf("special char is %d\n",special++);
  
}
