#include<stdio.h>
int isprime(int n)
{
 int i=2;
 while(i<=n/2)
 {
 if(n%i==0)
 {
 return 0;
} 
 i++;
 }
 return 1;
}
int main()
{
 int num,prime;
 printf(" Enter a Number: ");
 scanf("%d",&num);
 if(isprime(num))
 {
 printf(" The number %d is a prime number.\n",num);
}
 else
 {
 printf(" The number %d is not a prime number.\n",num);
 }
 
 return 0;
}
