#include <stdio.h>
#include <math.h>
#define n 100000

int main() {
	//code
	int t,i;
	scanf("%d", &t);
	for(i=0;i<t;i++)
	{
	    int N,a[n],x,j;
	    scanf("%d", &N);
	    for(j=0;j<N;j++)
	    {
	        scanf("%d", &a[j]);
	    }
	    scanf("%d", &x);
	    int k,c=0;
	    for(k=0;k<N;k++)
	    {
	        if(x>=a[k])
	        {
	            c++;
	        }
	        else
	        {
	            c;
	        }
	    }
	    printf("%d\n",c);
	}
	return 0;
}
