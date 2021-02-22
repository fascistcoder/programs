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
        int k,sum=0;
        float mean;
        long mean1;
        for(k=0;k<N;k++)
        {
            sum = sum+C[k];
            mean = sum/N;  
        }
        mean1 = floor(mean);
        printf("%d\n", mean1);
    }
    return 0;
}