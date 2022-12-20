/*#include <stdio.h> 
int main() 
{
  int n, i, c = 0;
  printf("Enter any number n:");
  scanf("%d", &n);
  for (i = 1; i <= n; i++) 
  {
      if (n % i == 0) 
	  {
         c++;
      }
  }
  if (c == 2) 
  {
  printf("n is a Prime number");
  }
  else
   {
  printf("n is not a Prime number");
  }
  return 0;    
}*/

















#include <stdio.h> 
int main() 
{
  int n,i,count=0;
  scanf("%d", &n);
  for(i=1;i<=n;i++) 
  {
      if(n%i==0) 
      {
         count+=1;
      }
  }
  if(count==1) 
  {
  printf("prime");
  }
  else 
  {
  printf("not a prime");
  }
  return 0;    
}
