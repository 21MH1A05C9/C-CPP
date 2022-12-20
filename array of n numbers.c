//output size-->5
        //1 2 3 4 5
        // 12345
#include<stdio.h>
void main()
{
	int n;
	printf("enter array size");
	scanf("%d",&n);
	 int a[n],i;
	 
	 for (i=0;i<n;i++)
	 {
	 	scanf("%d",&a[i]);
	 }
	 printf("enter the elements:\n");
	 for (i=0;i<n;i++)
	 {
	 	printf("%d\n",a[i]);
	 }
}
