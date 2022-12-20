//2.2
//3.2
//7.04
#include<stdio.h>
float product(float a, float b)
{
	float c;
	c=a*b;
	return c;
}
void main()
{
	float x,y;
	scanf("%f%f",&x,&y);
	float res;
	res = product(x, y);
	printf("%.2f ",res); 
}
