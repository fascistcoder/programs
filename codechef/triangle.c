#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,i;
    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
       int a,b,c;
       scanf("%d%d%d",&a,&b,&c);
       
       int r;
       r = a+b+c;
       if(r==180)
       {
           printf("YES\n");
       }
       else
       {
           printf("NO\n");
       }
       
    }
    return 0;
}