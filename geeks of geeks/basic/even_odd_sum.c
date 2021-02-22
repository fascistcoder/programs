#include <stdio.h>
#include <math.h>
#define n 100

int main() {
	//code
	int t,i;
	scanf("%d", &t);
	for(i=0;i<t;i++)
	{
	    int N,a[n],j;
	    scanf("%d", &N);
	    for(j=0;j<N;j++)
	    {
	        scanf("%d", &a[j]);
	    }
	    int even=0,odd=0;
	    for(j=0;j<N;j++)
	    {
	        if(j%2==0)
	        {
	            even = even + a[j];
	        }
	        else
	        {
	            odd = odd + a[j];
	        }
	    }
	    
	    printf("%d\n", odd);
	    printf("%d\n", even);
	}
	return 0;
}