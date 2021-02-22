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
        //read the input for year
        scanf("%d", &N);

        //condition check for number which is divisble by 4
        if(N%4==0) 
        {
            if(N%100==0)
            {
                if(N%400==0)
               {
                printf("Yes\n");
               }

               else
               {
                   printf("No\n");
               }
              
            }
             else
               {
                   printf("Yes\n");
               }
               
        }

        else
        {
            printf("No\n");
        }
        
    }
    return 0;
}