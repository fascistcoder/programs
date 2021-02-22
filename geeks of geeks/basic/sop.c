#include <stdio.h>
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
	    
	    int k,sop=0;
	    for(j=0;j<N;j++)
	    {
	        for(k=0;k<j;k++)
	        {
	          sop = sop+(a[j]&a[k]);
	        }
	    }
	    printf("%d\n", sop);
	}
	return 0;
}