#include <stdio.h>

void printPat(int n);

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        printPat(n);
        printf("\n");
    }
    return 0;
}

void printPat(int n)
{
    int i,j,k;
    for(i=n;i>0;i--)
    {
        for(j=n;j>0;j--)
        {
            {
              for(k=1;k<=i;k++)
              {
                printf("%d ",j);
               }
            }
        }
        printf("$");
    }
}