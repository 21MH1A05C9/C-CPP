//enter the row size and column size3
//3
//enter the elements in the matrix1 2 3
//4 5 6
//7 8 9
//123
//456
//789
//sum of all elements in the given matrix 45
#include<stdio.h>
int main()
{
	int rs,cs,sum=0;
	printf("enter the row size and column size");
	scanf("%d%d",&rs,&cs);
	int a[rs][cs],i,j;
	printf("enter the elements in the matrix");
	for (i=0;i<rs;i++)
	{
		for (j=0;j<cs;j++)
		{
			scanf("%d",&a[i][j]);
		}
	  }
	  for (i=0;i<rs;i++)
	  {
	  	for (j=0;j<cs;j++)
	  	{
	  		printf("%d ",a[i][j]);
		  }
		  printf("\n");
	  } 
	  printf("\nsum of all elements in the given matrix ");
	 for (i=0;i<rs;i++)
	{
		for (j=0;j<cs;j++)
		{
			sum=sum+a[i][j];
		}
	  }
	  printf("%d",sum);
}
