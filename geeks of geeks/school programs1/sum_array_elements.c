#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define n 100

int main()
{
    int t,i;
    //read testcases
    scanf("%d", &t);
    //loop for test cases
    for (i = 0; i < t; i++)
    {
        int N,arr[n],j;
        int sum=0;
        scanf("%d", &N);
        for(j=1;j<=N;j++)
        {
            scanf("%d", &arr[i]);
            sum = sum + arr[i];
        }


        printf("%d\n", sum);        
    }
    return 0;
}