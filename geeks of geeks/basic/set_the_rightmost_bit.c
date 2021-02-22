#include <stdio.h>
#include <math.h>
int main()
{
    long long t,i;
    scanf("%lld", &t);
    for(i=0;i<t;i++)
    {
        long long n;
        scanf("%lld", &n);

        long long x,y;

        if(n==0)
        {
            printf("1\n");
        }

        else if((n&(n+1))==0)
        {
            printf("%lld\n", n);
        }

        else
        {
            y = n | n+1;
            printf("%lld\n", y);
        }
        
        
    }

    return 0;
}