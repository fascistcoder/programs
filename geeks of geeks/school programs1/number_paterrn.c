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
        
        int j,k;
        //loop for printing pattern
        for(j=1;j<=N;j++)
        {
            //loop for straight pattern
            for (k=1;k<=j;k++)
            {
                printf("%d", k);
            }
            // loop for reverse pattern
            for (k=j-1;k>=1;k--)
            {
                printf("%d", k);
            }
            
           printf(" ");
        } 
        printf("\n");   
    }
    return 0;
}