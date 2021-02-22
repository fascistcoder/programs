#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,i;
    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
        long n,j,a[10000];
        scanf("%ld", &n);

        for(j=0;j<n;j++)
        {
            scanf("%ld", &a[j]);
        }

        int k,l;
        long sum=0;
        for(k=0;k<n;k++)
        {
            for(l=k+1;l<n;l++)
            {
                if(a[k]!=a[l])
                {
                    sum = sum + a[k];
                }
            }
        }

        printf("%ld\n", sum);
    }
    return 0;
}