#include <stdio.h>
#include <math.h>
int call(int j)
{
   int c=0;
   while (j!=0)
   {
       j = j & (j-1);
       c++;
   }
    return c;  
}
int main()
{
    int t,i;
    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
       int n;
       scanf("%d", &n);

       int j,sum=0,b;
       for(j=1;j<=n;j++)
       {
           b = call(j);
           sum = sum + b ;
       }

       printf("%d\n", sum);
       
    } 
    return 0;
}