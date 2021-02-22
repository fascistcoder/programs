#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,i;
    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
        long long n,k,v;
        scanf("%lld%lld%lld", &n,&k,&v);
        long a[100000], j,sum=0;
        for(j=0;j<n;j++)
        {
            scanf("%d", &a[j]);
            sum = sum + a[j];
        }
        long x;
        x = v*(n+k) - sum;
        if(x>0)
        {
            if(x%k==0)
            {
                long y;
                y = x/k;
                printf("%ld\n", y);
            }
            else
            {
                printf("-1\n");
            }
            

        }
        else
        {
            printf("-1\n");
        }
        
    }
    return 0;
}