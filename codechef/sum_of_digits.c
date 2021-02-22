#include <stdio.h>

int main(void) {
	// your code goes here
	int t,i;
	scanf("%d", &t);
	for(i=0;i<t;i++)
	{
	    int N;
	    scanf("%d", &N);
	    
	    int rem,sum=0;
	    while(N!=0)
	    {
	        rem = N % 10;
	        sum = sum + rem;
	        N = N/10;
	    }
	    
	    printf("%d ", sum);
	}
	return 0;
}

