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
       int a,b;
       scanf("%d %d", &a,&b);

       a = a+b;
       b = a-b;
       a = a-b;

       printf("%d %d\n", a,b);
    }
    return 0;
}
