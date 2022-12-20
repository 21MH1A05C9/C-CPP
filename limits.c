#include<stdio.h>
#include<limits.h>
void main()
{
	printf("%hd to %hi\n", SHRT_MIN, SHRT_MAX);
	printf("%d to %i\n", INT_MIN, INT_MAX);
	printf("%ld to %li\n", LONG_MIN, LONG_MAX);
	printf("%lld to %lli", LLONG_MIN, LLONG_MAX);
	//out put is -32768 to 32767//
    //           -2147483648 to 2147483647//
    //           -2147483648 to 2147483647//
    //           -9223372036854775808 to 9223372036854775807//
	
}
