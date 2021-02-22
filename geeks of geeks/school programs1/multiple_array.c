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

        long mul=1;
        int j,arr[n];
        for(j=0;j<N;j++)
        {
            scanf("%d", &arr[j]);
            mul = mul*arr[j];
        }
        printf("%ld\n", mul);
    }
    return 0;
}