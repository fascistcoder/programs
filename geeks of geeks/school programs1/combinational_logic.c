#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int t,i;
    scanf("%d", &t);
    for ( i = 0; i < t; i++)
    {
        int a,b,c,d,e,f;
        scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);

        int out;
        out = (~a&b) | (c&d) | (e&~f);
        printf("%d\n", out);
    }
    return 0;
}