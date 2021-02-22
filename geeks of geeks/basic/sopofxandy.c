#include <stdio.h>

int main() {
	//code
	int t,i;
	scanf("%d", &t);
	for(i=0;i<t;i++)
	{
	    int n;
	    scanf("%d", &n);
	    
	    long j,sum1=0;
	    double x,y,z,sum=0;
	    for(j=1;j<=n;j++)
	    {
	       z = j*(n/j);
	       sum = sum + z;
	    }
	    sum1 = floor(sum);
	    printf("%ld\n", sum1);
	}
	return 0;
}