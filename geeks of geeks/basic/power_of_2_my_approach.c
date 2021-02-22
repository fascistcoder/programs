#include <stdio.h>
#include <math.h>

int main() 
{
	//code
	int t,i;
	scanf("%d", &t);
	for(i=0;i<t;i++)
	{
	    long long n,x;
	    scanf("%lld", &n);
	    int i,f=0;
	    x =  1000;
	    for(i=0;i<x;i++)
	    {
	      if(pow(2,i)==n)
	      {
	        f++;
	        break;
	      }
	      else
	      {
	          f;
	      }
	    }
	    if(f>0)
	    {
	        printf("YES\n");
	    }
	    else
	    {
	        printf("NO\n");
	    }
	}
	return 0;
}