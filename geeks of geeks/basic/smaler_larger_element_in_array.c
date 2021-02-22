// larger and smaller elements

#include <stdio.h>

int main() 
{
	//code
	int t,i;
	scanf("%d", &t);
	for(i=0;i<t;i++)
	{
	    int n, j;
	    long long a[1000];
	    scanf("%d", &n);
	    for(j=0;j<n;j++)
	    {
	        scanf("%lld", &a[j]);
	    }
	    
	    long max=0, min=a[0],k;
	    for(k=0;k<n;k++)
	    {
	        if(a[k]>max)
	        {
	            max = a[k];
	        }
	    }
	    for(k=0;k<n;k++)
	    {
	        if(a[k]<min)
	        {
	            min = a[k];
	        }
	    }
	    printf("%ld %ld\n", min, max);
	}
	return 0;
}	