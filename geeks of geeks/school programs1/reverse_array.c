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
        scanf("%d\n", &N);
        for (j = 0; j < N; j++)
        {
            scanf("%d", &arr[j]);
        }

        for(j=N-1;j>=0;j--)
        {
            printf("%d ", arr[j]);
        }
        printf("\n");
    }
    return 0;
}