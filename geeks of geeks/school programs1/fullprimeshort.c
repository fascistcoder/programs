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
        scanf("%d", &N);

        int j,rem,f=0;
        for(j=2;j<=N/2;j++)
        {
            if(N%j==0)
            {
                f=1;
                break;
            }
        }

        while (N!=0&&f==0)
        {
            rem = N%10;
            if(rem==2||rem==3||rem==5||rem==7)
            {

            }

            else
            {
                f=1;
                break;
            }
            N= N/10;
        }
        if(f==0)
        {
        printf("Yes\n");
        }

        else
        {
            printf("No\n");

        }
        
           
    }
    return 0;
}