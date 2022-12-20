//3 3
// 1 2 3 4 5 6 7 8 9
// out put-->// 1 2 3
             // 4 5 6
             // 7 8 9
#include<stdio.h>
void main()
{
	/*int r,c;
	printf("enter the row size and colum size");
	scanf("%d%d",&r,&c);
	int a[r][c],i,j;
	for (i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
			printf("a[%d][%d] value:%d\t",i,j,a[i][j]);
			//printf("%d",a[i][j]);
		}
	     printf("\n");
	}*/
	//enter the row size and colum size3
//3
//10 20 30
//40 50 60
//70 80 90
//rowwisesum=60
//rowwisesum=150
//rowwisesum=240
	int rs,cs;
	printf("enter the row size and colum size");
	scanf("%d%d",&rs,&cs);
	int a[rs][cs],r,c,rowwisesum=0;
	for (r=0;r<rs;r++)
	{
		for(c=0;c<cs;c++)
		{
			scanf("%d",&a[r][c]);
		}
	}
	for (r=0;r<rs;r++)
	{
		rowwisesum=0;
		for (c=0;c<cs;c++)
		{
			rowwisesum=rowwisesum+a[r][c];
		}
			printf("rowwisesum=%d",rowwisesum);
			//printf("%d",a[i][j]);
        	printf("\n");
	}
}
