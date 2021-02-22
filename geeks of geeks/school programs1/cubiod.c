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
        int l,b,h;
        scanf("%d %d %d", &l,&b,&h);

        int ar, vol;

        vol = l*b*h;
        ar = 2*l*b + 2*b*h + 2*h*l;

        printf("%d %d\n", ar,vol);

    }
    return 0;
}
