#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,i;
    scanf("%d", &t);
    for ( i = 0; i < t; i++)
    {
        /* code */
        int a,b,m;
        scanf("%d%d%d", &a,&b,&m);
        if(b>a)
        {
            int j,c=0;
            for(j=a;j<=b;j++)
            {
                if(j%m==0)
                {
                    c++;
                }
            }

            printf("%d\n",c);
        }
    }
   return 0; 
}