#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define n 1000
int main()
{
    int t,i;
    scanf("%d", &t);

    for(i=0;i<t;i++)
    {
        int N;
        int j, arr[n];
        scanf("%d", &N);
        for (j = 0; j < N; j++)
        {
            scanf("%d", &arr[j]);
        }

        int k,max;
        max = arr[0];

        for(k=0;k<N;k++)
        {
          if (arr[k]>max)
          {
            max = arr[k];
          }
        }
        printf("%d\n", max);
    }
    return 0;
}