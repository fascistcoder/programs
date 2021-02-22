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
        
        int j,k,value=1;
        for(j=0;j<n;j++)
        {
            if(j == n-1)
            {
                for(k=0;k<=j;k++)
                {
                    if(j==0||k==0)
                    {
                        value = 1;
                    }
                    else
                    {
                        value = value * (j-k+1)/k;
                    }
                    printf("%d ", value);
                }
            }
        }
        printf("\n");
    }
    return 0;
}