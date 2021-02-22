#include <stdio.h>

int main() {
	//code
	int t,i;
	scanf("%d", &t);
	for(i=0;i<t;i++)
	{
	    int N;
	    scanf("%d", &N);
	    
	    int j,sum=0,sum1=0;
	    for(j=1;j<=N*2;j=j+2)
	    {
	        sum = sum + j;
	        sum1 = sum + sum1;
	    }
	    printf("%d\n", sum1);
	}
	return 0;
}