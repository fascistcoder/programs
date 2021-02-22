#include <stdio.h>
#include <math.h>
int main() 
{
	//code
	int t,i;
	scanf("%d", &t);
	for(i=0;i<t;i++)
	{
	   unsigned long n;
	    scanf("%ld", &n);
	    
		long x;
		//find no of bits
		x = floor(log2(n))+1;

		//xor the given integer with power of (2)
		n = ((1<<x)-1)^n;
	    printf("%ld\n", n);
	}
	return 0;
}