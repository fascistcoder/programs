#include <stdio.h>

int main() {
	//code
	int t,i;
	scanf("%d", &t);
	for(i=0;i<t;i++)
	{
	    int N;
	    scanf("%d", &N);
	    
	    long j,k,sum=0,sum1=0;
	    for(j=1;j<=N;j++)
	    {
	            sum = sum + j;
	            sum1 = sum1 + sum;
	        
	    }
	    printf("%ld\n", sum1);
	}
	return 0;
}