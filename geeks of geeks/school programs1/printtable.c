#include<stdio.h>
#include<math.h>

int main()
{
    int t,i;
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        int N;
        scanf("%d", &N);

        int j,tab;
        for(j=1; j<=10; j++)
        {
            tab = N*j;
            printf("%d ", tab);
        }
        printf("\n");
    }
    return 0;
}