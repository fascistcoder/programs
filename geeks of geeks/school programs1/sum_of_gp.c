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
        float n,a,r;
        scanf("%f\n", &n);
        scanf("%f %f", &a, &r);
        //formula for sum of gp = a*((1-(r^n)/1-r))
        double sum;
        double a1,r1,n1,n2;
        if(r!=1)
        {
        r1 = pow(r,n);
        n1 = 1 - r1;
        n2 = 1 - r;
        a1 = n1/n2;
        sum = a*a1;
        printf("%lf\n", sum);
        }
        else
        {
            sum = n*a;
            printf("%lf\n", sum);
        }
        

    }
    return 0;
}
