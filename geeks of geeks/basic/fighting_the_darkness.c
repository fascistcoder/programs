#include <stdio.h>

int main()
{
    int t,i;
    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
       long n,j,a[100000];
       scanf("%ld", &n);
       for(j=0;j<n;j++)
       {
           scanf("%ld", &a[j]);
       }

       long max=0,k;
       for(k=0;k<n;k++)
       {
           if(a[k]>max)
           {
               max = a[k];
           }
       }

       printf("%ld\n", max);
    }
    return 0;
}