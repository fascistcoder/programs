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
        long x1,y1,x2,y2,r1,r2,r;
        scanf("%ld %ld %ld %ld %ld %ld", &x1, &y1, &x2, &y2, &r1, &r2);
        r = r1+r2;
        double a,b,c,d,e,dis;
        a = x1 - x2;
        b = y1 - y2;
        c = pow(a,2);
        d = pow(b,2);
        e = c + d;
        dis = sqrt(e);

        if(r>dis)
        {
            printf("1\n");
        }

        else
        {
            printf("0\n");
        }
        
          
    }
    return 0;
}