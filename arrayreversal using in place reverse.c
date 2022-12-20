//out put-->6
//10 20 30 40 50 60
//Array elements before reversing
//10 20 30 40 50 60
//Array after reversal
//60 50 40 30 20 10
#include<stdio.h>
void main()
{
	int n;
	scanf("%d", &n); 	
	int arr[n], i, j, temp;
	for(i=0; i<n; i++)
	{
		scanf("%d", &arr[i]); // -1 14 167 -16
	}
	printf("Array elements before reversing\n");
	for(i=0; i<n; i++)
	{
		printf("%d ", arr[i]);
	}
	for(i=0, j=n-1; i<j; i++, j--)
	{
		temp = arr[i]; 
		arr[i] = arr[j]; 
		arr[j] = temp; 
	}
	printf("\n Array after reversal\n");
	for(i=0; i<n; i++)
	{
		printf("%d ", arr[i]);
	}
}

















