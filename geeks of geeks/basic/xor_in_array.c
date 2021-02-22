#include <stdio.h>
#include <math.h>
#define n 1000

int main() {
	//code
	int t,i;
	scanf("%d", &t);
	for(i=0;i<t;i++)
	{
	    int N,j,a[n];
	    scanf("%d", &N);
	    for(j=0;j<N;j++)
	    {
	        scanf("%d", &a[j]);
	    }
	    //calculate xor of array
	    int k,xor=0;
	    for(k=0;k<N;k++)
	    {
	        xor ^= a[k];
	    }
	    //update array and print values of array
	    for(k=0;k<N;k++)
	    {
	        a[k] = xor^a[k];
	        printf("%d ", a[k]);
	    }
	    //next line
	    printf("\n");
	}
	return 0;
}