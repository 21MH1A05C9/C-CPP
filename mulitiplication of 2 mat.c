2
//2
//2
//2
//1
//2
//3
//4
//12
//34
//5
//6
//7
//8

//19 22
//43 50

#include<stdio.h>
int main()
{
	int r1,c1,r2,c2;
	int a[10][10],b[10][10],i,j,k,c[10][10];
	scanf("%d%d%d%d",&r1,&r2,&c1,&c2);
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			scanf("%d",&b[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			c[i][j]=0;
			for(k=0;k<c1;k++)
			{
				c[i][j]=c[i][j]+a[i][k]*b[k][j];
			}
		}
	}
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	
}

