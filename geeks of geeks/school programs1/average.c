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

        int j,C[n];
        for(j=0;j<N;j++)
        {
            scanf("%d", &C[j]);
        }
        int k,sum=0,avg;
        for(k=0;k<N;k++)
        {
            sum = sum+C[k];
            avg = sum/(k+1);
            printf("%d ", avg);
        }
        printf("\n");
    }
    return 0;
}