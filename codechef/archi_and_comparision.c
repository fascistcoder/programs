#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int t,i;
    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
        long long a,b,n;
        scanf("%lld%lld%lld", &a,&b,&n);
        if(n==0)
        {
            printf()
        }
        long long x,y;
        x = pow(a,n);
        y = pow(b,n);

        if(x>y)
        {
            printf("1\n");
        }
        else if(y>x)
        {
            printf("2\n");
        }
        else
        {
            printf("0\n");
        }
        
    }
    return 0;
}