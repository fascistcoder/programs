#include <stdio.h>

int main()
{
    int t,i;
    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
        int n;
        scanf("%d", &n);

        int x;
        x = n | (n+1);

        printf("%d\n", x);
    }

    return 0;
}