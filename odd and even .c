#include <stdio.h>
void main()
{
 int arr[100],even[100],odd[100],i,size,es=0,os=0;
 printf("Enter Array Size:");
 scanf("%d",&size);
 printf("Enter array Values:");
 for(i=0;i<size;i++)
 {
 scanf("%d",&arr[i]);
}
for(i=0;i<size;i++)
{
if(arr[i]%2==0)
{
even[es++]=arr[i];
}
else
{
odd[os++]=arr[i];
}
}
 if(es!=0)
 {
 printf("Even Array values are:");
 for(i=0;i<es;i++)
 {
 printf("%d ",even[i]);
}
}
else
{
printf("\nNo Even values in the array");
}
if(os!=0)
{
printf("\nOdd Array values are:");
for(i=0;i<os;i++)
{
printf("%d ",odd[i]);
}
}
else
{
printf("\nNo Odd values in the array");
}
}
