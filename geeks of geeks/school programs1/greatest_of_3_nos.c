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
        long a,b,c;
        scanf("%d %d %d", &a,&b,&c);

        if(a>b&&a>c)
        {
            printf("%d\n", a);
        }
        else if(b>a&&b>c)
        {
            printf("%d\n", b);
        }
        else
        {
            printf("%d\n", c);
        }
        

    }
    return 0;
}
