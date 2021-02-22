#include <stdio.h>
#include <stdlib.h>
#include <math.h>
long long fact(long n)
{
    long i,sum1=1;
    for (i=n; i>=1; i--)
    {
        sum1 = sum1*i;
    }
    return sum1;
}
 
int main()
{
    int t,i;
    //read testcases
    scanf("%d", &t);
    //loop for test cases
    for (i = 0; i < t; i++)
    {
        long long N;
        scanf("%lld", &N);

        long rem,temp,sum=0;
        temp = N;
        while (temp!=0)
        {
           rem = temp%10;
           sum = sum + fact(rem);
           temp = temp/10; 
        }
        if(sum==N)
        {
            printf("Perfect\n");
        }
        else
        {
            printf("Not Perfect\n");
        }   
    }
    return 0;
}