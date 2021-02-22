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
        /* code */
        int N;
        //read the input values
        scanf("%d", &N);
        
        int j,k, l=1;
        //loop for how many lines printed
        for(j=1; j<=N; j++)
        {
            //loop for numbers printed in same line
            for(k=1; k<=j; k++)
            {
            //print the numbers
            printf("%d ", l);
            //increment the number
            l++;
            }
            //next line
            printf("\n");
        }   
    }
     return 0;
}