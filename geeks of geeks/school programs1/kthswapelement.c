#include <stdio.h>
#define n 1000

int main() {
	//code
	int t,i;
	scanf("%d", &t);
	for(i=0;i<t;i++)
	{
	    int N,x,a[n],j;
	    scanf("%d%d", &N,&x);
	    for(j=0;j<N;j++)
	    {
	        scanf("%d", &a[j]);
	    }
	    int k;
	        int temp = a[x-1];
	        a[x-1] = a[N-x];
	        a[N-x] = temp;
	    for(k=0;k<N;k++)
	    {
	      printf("%d ", a[k]);
	    }
	}
	return 0;
}