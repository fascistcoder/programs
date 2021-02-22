//sum_of_divisiors
#include <stdio.h>

int main() 
{
	//code
	int t,i;
	scanf("%d", &t);
	for(i=0;i<t;i++)
	{
	    long n;
	    scanf("%ld", &n);
	    
	    if(n==1)
	    {
	        printf("1\n");
	    }
	    else
	    {
	        int j,c=0;
	        for(j=1;j<n;j++)
				//for(i=1;i<=n/2;i++)
	        {
	            if(n%j==0)
	            {
	                c = c+j;
	            }
	        }
	        printf("%d\n", c);
	    }
	}
	return 0;
}