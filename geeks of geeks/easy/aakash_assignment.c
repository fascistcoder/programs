#include <stdio.h>
#include <math.h>
int main() 
{
	//code
	int t,i;
	scanf("%d", &t);
	for(i=0;i<t;i++)
	{
	    int n,k;
	    scanf("%d%d", &n,&k);
	    
	    if(k>=2&&k<=8)
	    {
	        long long x,y;
            long long c;
	        x = pow(n,k);
	        y = pow(n+1,k);
	        c = y - x;
	        
	        printf("%lld\n", c);
	    }

        else
        {
            printf("1\n");
        }
        
	}
	return 0;
}