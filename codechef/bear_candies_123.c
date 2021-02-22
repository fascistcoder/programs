#include <stdio.h>
#include <math.h>

int main()
{
    int t,i;
    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
       int a,b;
       scanf("%d%d", &a,&b);

       int j,sum1=0,sum2=0;
       
       for(j=1;j<=a;j=j+2)
       {
           sum1 = sum1 + j;
       }

       for(j=0;j<=b;j=j+2)
       {
           sum2 = sum2 + j;
       }

       if(sum1>a)
       {
           printf("bob\n");
       }

       else 
       {
           printf("limak\n");
       }
       

     //  printf("%d %d\n", sum1, sum2);
    }
    return 0;
}