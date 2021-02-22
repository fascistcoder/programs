#include <stdio.h>
#include <math.h>

int main()
{
    int t,i;
    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
        float a,b,c;
        scanf("%f %f %f", &a, &b, &c);
        double s,ar;
        if(a+b>c&&a+c>b&&b+c>a)
        {
           s = (a+b+c)/2;
           ar = sqrt(s*(s-a)*(s-b)*(s-c));
           printf("%.6f\n", ar);
       }
       
       else
       {
          printf("0.000000\n");
       }
    }
    return 0;
}