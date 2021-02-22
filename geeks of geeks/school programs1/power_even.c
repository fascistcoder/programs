#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int t,i;
    scanf("%d", &t);
    for ( i = 0; i < t; i++)
    {
        long N;
        scanf("%ld", &N);

        int j;
        long even=0;
        for(j=1;j<=2*N;j++)
        {
            if(j%2==0)
            {
                even += pow(j,2);
            }
        }
        printf("%ld\n", even);
        
    }
    return 0; 
}