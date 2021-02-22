#include <stdio.h>
#define n 500

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
	    
	    int alone=0;
	    for(j=0;j<N;j++)
	    {
	        alone = alone^a[j];
	    }
	    printf("%d\n", alone);
	}
	return 0;
}