#include <stdio.h>
#include <stdlib.h>
#include <math.h>
long long fact(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return (n*fact(n-1));
    }
}
int main()
{
    int t,i;
    //read testcases
    scanf("%d", &t);
    //loop for test cases
    for (i = 0; i < t; i++)
    {
        int N;
        scanf("%d", &N);

        long long z = fact(N);
        printf("%lld\n", z);
    }
    return 0;
}