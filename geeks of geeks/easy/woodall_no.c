#include <stdio.h>
#include <math.h>
int main() 
{
	//code
	int t,i;
	scanf("%d", &t);
	for(i=0;i<t;i++)
	{
	    long n;
	    scanf("%ld", &n);
	    
	    long j,x=1,l;
	    l = floor(log2(n))+1;
	    for(j=0;j<l;j+2)
	    {
			n = n|x;
			x <<=2;
	    }
	    printf("%ld\n", n);
	}
	return 0;
}