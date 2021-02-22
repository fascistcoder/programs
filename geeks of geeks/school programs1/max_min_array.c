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

        int k,max,min;
        max = arr[0];
        for(k=0;k<N;k++)
        if(max<arr[k])
        {
            max = arr[k];
        }

        min = arr[0];
        for(k=0;k<N;k++)
        {
            if(min>arr[k])
            {
                min = arr[k];
            }
        }
    printf("%d %d\n", max, min);
   }
   return 0;
}