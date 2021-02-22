#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int t,i;
    //read testcases
    scanf("%d", &t);
    //loop for test cases
    for (i = 0; i < t; i++)
    {
        int N;
        scanf("%d", &N);

        long sq;
        sq = pow(N,2);

        long quo=1,n,rem;
        n = N;
        while(n!=0)
        {
            n = n/10;
            quo = quo*10; 
        }

        rem = sq%quo;
        if(N == rem)
        {
            printf("Automorphic\n");
        }
        else
        {
            printf("Not Automorphic\n");
        }
        
          
    }
    return 0;
}