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

       int rem,sum=0;
       while(N>0)
       {
           rem = N%10;
           sum = sum+rem;
           N = N/10;
       } 
    
       int r,rev=0;
       r=sum;
       while(r>0)
       {
        rem = r%10;
        rev = rev*10 + rem;
        r = r/10;
       }


       if(sum==rev)
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
