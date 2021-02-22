#include <stdio.h>
#include <string.h> 
int main()
{
    int i, t;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        long n, j, r = 0;
        scanf("%ld", &n);
        for (j = 1; j <= n; j++)
        {
            if (n % j == 0)
            {
                if(j%3==0)
                {
                    r++;
                }
                
            }
        }
        printf("%ld\n", r);
        
    }
    return 0;
}


