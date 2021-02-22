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
        long N;
        scanf("%ld", &N);

       long sum=0,j;
       for(j=3;j<N;j++)
       {
           if(j%3==0||j%7==0)
           {
               sum = sum + j;
           }
       } 
       printf("%ld\n", sum);
    }
    return 0;
}