#include <stdio.h>
#include <stdlib.h>
#include <math.h>
long long fact(int x)
{
    if(x==1)
    {
        return 1;
    }
    else
    {
        return (x*fact(x-1));
    }
}
int main()
{
    int t,i;
    //read testcases
    scanf("%d", &t);
    //loop for test cases
    for (i = 0; i < t; i++)
    {
       int n,r;
       scanf("%d %d", &n,&r);
       if((n-r)==0)
       {
           printf("%d\n", fact(n));
       }

       else
       {
           
       long long a = fact(n);
       long long b = fact(n-r);

       long long c;
       c = a/b;
       printf("%lld\n", c);

       }
    
    }
    return 0;
}