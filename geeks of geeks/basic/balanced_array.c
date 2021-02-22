#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,i;
    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
       long long n, j, a[100000];
       scanf("%lld", &n);

       for(j=0;j<n;j++)
       {
           scanf("%lld", &a[j]);
       }

       if(n%2==0)
       {
           long sum=0, sum1=0, k;
           for(k=0;k<n/2;k++)
           {
               sum = sum + a[k];
           } 
           for(k=n/2;k<n;k++)
           {
               sum1 = sum1 + a[k];
           }

           long d = abs(sum-sum1);
           printf("%ld\n", d);
       }
       else
       {
           printf("0\n");
       }
       
    }
    return 0;
}