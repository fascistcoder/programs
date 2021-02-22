#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int l,b;
    scanf("%d\n", &l);
    scanf("%d", &b);

    int ar,p;

    ar = l*b;

    p = 2*(l+b);

    if(ar>p)
    {
        printf("Area\n");
        printf("%d", ar);
    }

    else if(p>ar)
    {
        printf("Peri\n");
        printf("%d", p);
    }

    else
    {
        printf("Eq\n");
        printf("%d", p);
    }
    

    return 0;
}

