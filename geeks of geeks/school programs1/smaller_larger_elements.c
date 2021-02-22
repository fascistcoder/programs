#include <stdio.h>
#define n 200

int main() {
	//code
	int t,i;
	scanf("%d", &t);
	for(i=0;i<t;i++)
	{
	    int N,j,a[n],x;
	    scanf("%d%d", &N, &x);
	    for(j=0;j<N;j++)
	    {
	        scanf("%d", &a[j]);
	    }
	    
	    int l,k,c=0,f=0;
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
	    for(k=0;k<N;k++)
	    {
	        if(x<=a[k])
	        {
	            f++;
	        }
	        else
	        {
	            f;
	        }
	    }
	    printf("%d %d\n", c,f);
	   
	}
	return 0;
}