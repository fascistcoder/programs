#include <stdio.h>
#include <math.h>
#define n 1200

int main()
{
    int t,i;
    scanf("%d", &t);
    for ( i = 0; i < t; i++)
    {
        int N;
        scanf("%d", &N);

        int j,arr[n];
        for(j=0;j<N;j++)
        {
            scanf("%d", &arr[j]);
        }

        int k,max1,max2;
        max1=0;
        max2=0;
        for(k=0;k<N;k++)
        {
           if(arr[k]>max1)
           {
           max1 = arr[k];
           }
        }

        for (k=0;k<N;k++)
        {
            if(arr[k]>max2&&arr[k]!=max1)
            {
                max2 = arr[k];
            }

        }
        printf("%d\n", max2);
    }
    return 0;
}