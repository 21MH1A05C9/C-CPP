#include<stdio.h>
void mergeArray(int a[], int n1, int b[], int n2, int mer[]);
 
int main()
{
 	int n1, n2, n3, i, j, k;     //Array Size Declaration 
 	scanf("%d", &n1);
    int a[n1];       //Array Declaration
 	for(i = 0; i < n1; i++)
  	{
      	scanf("%d", &a[i]);
  	}
 	scanf("%d", &n2);
    int b[n2];       //Array Declaration
 	for(i = 0; i < n2; i++)
  	{
      	scanf("%d", &b[i]);
  	}	
  	n3 = n1 + n2;     //Array Size Declaration
	int mer[n3];     //Array Declaration
  	mergeArray(a, n1, b, n2, mer);      //Function Call
  	
 	for(i = 0; i < n3; i++)
  	{
    	printf("%d ",mer[i]);
  	} 
  	return 0;
} 
void mergeArray(int a[], int n1, int b[], int n2, int mer[])    //Function Definition
{
	int i, j, k, n3;
	j = k = 0;
	n3 = n1 + n2;	
	for(i = 0; i < n3;)
	{
		if(j < n1 && k < n2)
		{
			if(a[j] < b[k])
			{
				mer[i] = a[j];
				j++;
			}
			else
			{
				mer[i] = b[k];
				k++;
			}
			i++;
		}
		else if(j == n1)
		{
			while(i < n3)
			{
				mer[i] = b[k];
				k++;
				i++;
			}
		}
		else
		{
			while(i < n3)
			{
				mer[i] = a[j];
				j++;
				i++;
			}
		}
	}
}
