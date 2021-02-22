#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int t,i;
    scanf("%d", &t);
    for ( i = 0; i < t; i++)
    {
        /* code */
        int n,m;
        scanf("%d%d", &n,&m);

        int j,sum=0;
        for(j=1;j<=n;j=j+2)
        {
            sum = sum + m;
        }
        printf("%d\n", sum);
        
    }

    return 0;  
}