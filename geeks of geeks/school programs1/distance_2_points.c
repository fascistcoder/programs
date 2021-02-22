#include <stdio.h>
#include <math.h>

int main()
{
    int t,i;
    scanf("%d", &t);
    for (i=0;i<t;i++)
    {
        /* code */
        long x1,y1,x2,y2;
        scanf("%ld %ld %ld %ld", &x1, &y1, &x2, &y2);

        double a,b,c,d,e,dis;
        a = x1 - x2;
        b = y1 - y2;
        c = pow(a,2);
        d = pow(b,2);
        e = c + d;
        dis = sqrt(e);
        
        long dis1;
        dis1 = roundf(dis);
        printf("%ld\n", dis1); 
    }
    return 0;
    
}