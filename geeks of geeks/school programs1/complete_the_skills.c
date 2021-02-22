#include <stdio.h>
#include <math.h>

int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int n=3;
        long a[3],b[3];
        int j;
        for (j=0;j<n;j++)
        {
            scanf("%ld", &a[j]);
        }
        for (j=0;j<n;j++)
        {
            scanf("%ld", &b[j]);
        }
        int sk1=0,sk2=0,k;
        for (k = 0; k < n; k++)
        {
            if(a[k]>b[k])
            {
                sk1 = sk1 + 1;
            }

            else if(a[k]<b[k])
            {
                sk2 = sk2 + 1;
            }

            else
            {
                sk1;
            }
            
        }

        printf("%d %d\n", sk1, sk2);
    }
}