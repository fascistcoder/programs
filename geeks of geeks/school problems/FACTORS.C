#include <stdio.h>
#include <string.h> 
int main()
{
    int i, t;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        int n, j, r = 0;
        scanf("%d", &n);
        for (j = 1; j <= n; j++)
        {
            if (n % j == 0)
            {
                r++;
            }
        }
        printf("%d\n", r);
        r = 0;
    }
    return 0;
}

