#include<stdio.h>
 #include<stdlib.h>
 struct course
 {
 int marks;
 char subject[30]; 
};
 int main() 
{ 
struct course *std; 
int noOfRecords,i; 
printf("Enter the number of records: "); 
scanf("%d", &noOfRecords); 
std = (struct course *)malloc(noOfRecords * sizeof(struct course)); 
for (i = 0; i < noOfRecords; i++) 
{
 printf("Enter subject and marks:\n");
 scanf("%s%d",&std[i].subject,&std[i].marks); 
} 
printf("Displaying Information:\n"); 
for (i = 0; i < noOfRecords; i++) 
{
 printf("%s\t%d\n", std[i].subject,std[i].marks); 
}
 free(std); 
return 0; 
}

