//3 3
//1 2 3
//4 5 6
//7 8 9
//9 8 7
//6 5 4
//3 2 1
//10 10 10 10 10 10 10 10 
#include<stdio.h>
void main()
{
	int r,c;
	scanf("%d%d",&r,&c);
	int mat1[r][c],i,j;
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
			scanf("%d",&mat1[i][j]);
		}
	}
	int mat2[r][c],res[i][j];
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
			scanf("%d",&mat2[i][j]);
		}
	}
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
			res[i][j]=mat1[i][j]+mat2[i][j];		
		}
	}
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
			printf("%d ",res[i][j]);
		}
	}
	printf("\n");

}
