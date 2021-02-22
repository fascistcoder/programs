#include <stdio.h>
#include <math.h>
int main() 
{
	//code
	int t,i;
	scanf("%d", &t);
	for(i=0;i<t;i++)
	{
	   unsigned long long n;
	    scanf("%u", &n);
	    

		//by bitwise operator
		long j;
		//find no of bits
		/*for(j=0;j<32;j++)
        {
		  //xor the given integer with power of (2)
          n = ((1<<j))^n;
        }*/

		//printf("%u\n", n);
        

		//by simple mathematics
        unsigned long x,y ;
        x = pow(2,32) - 1;
        y = x - n;
	    printf("%u\n", y);
	}
	return 0;
}