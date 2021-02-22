#include <stdio.h>
#include <stdlib.h>
int main()
{
    int t,i;
    scanf("%d", &t);
    
    for(i=0;i<t;i++)
    {
        int n;
        scanf("%d", &n);

        if(n%5==0)
        {
            printf("YES\n");
        }

        else
        {
            printf("NO\n");
        }
        
    }

    return 0;
}