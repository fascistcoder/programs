#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int reverse(int n)
{
    int rem, rev=0;
    while (n!=0)
    {
        rem = n%10;
        rev = rev*10 + rem;
        n = n/10;
    }
    return rev;
}
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

       int j;
       //call for reverse number function
       int a = reverse(N);
       //reverse number is equal to givan input then print same number
       if(N==a)
       {
           printf("%d\n", N);
       }
       //otherwise take another condition and loop for number to add same number to make palindrone
       else
       {
           for(j=1;j<=5;j++)
           {
               N = N+a;
               a = reverse(N);
               if(N==a)
               {
                   printf("%d\n", N);
                   break;
               }
           }
           if(j>5)
           {
               printf("-1\n");
           }
       }
       
    }
       return 0;
}
