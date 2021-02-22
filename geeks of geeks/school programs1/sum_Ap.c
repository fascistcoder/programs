#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int t,i;
    //read testcases
    scanf("%d", &t);
    //loop for test cases
    for (i = 0; i < t; i++)
    {
        int a,d,n;
        scanf("%d\n", &n);
        scanf("%d %d", &a,&d);

        int sum, l;

        l = a+(n-1)*d;
        printf("%d\n", l);
        sum = (n*(a+l))/2;

        printf("%d\n", sum);
    }
    return 0;
}
