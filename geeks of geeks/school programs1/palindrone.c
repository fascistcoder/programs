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
        //input from user
        long N;
        //read input
        scanf("%ld", &N);

        long rev=0,rem,q;
        q=N;
        //loop for reverse the digit
        while(q!=0)
        {
            rem = q%10;
            rev = rev*10 + rem;
            q = q/10; 
        }
        
        //reverse digit is equal to original number
       if (N==rev)
       {
           printf("YES\n");
       }
       //otherwise
       else
       {
           printf("NO\n");
       }
    }
    return 0;
}
