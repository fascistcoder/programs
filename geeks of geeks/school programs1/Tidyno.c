#include <stdio.h>

int main() {
	//code
	int t,i;
	scanf("%d", &t);
	for(i=0;i<t;i++)
	{
	    long long n;
	    scanf("%lld", &n);
	    
	    int rem, prev,f;
	    prev = 10;
	    while(n)
	    {
	      rem =  n%10;
	      n = n/10;
	      if(rem>prev)
	      {
	          f=0;
	          break;
	      }
          else
          {
              f=1;
          }
          
	      prev = rem;
	    }
        if(f==0)
        {
            printf("0\n");
        }
        else if(f==1)
        {
            printf("1\n");
        }
	    
	}
	return 0;
}