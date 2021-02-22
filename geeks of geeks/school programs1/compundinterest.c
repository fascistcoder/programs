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
       double P,t,n,r;
       double t1,n1,r1,r2;
       double A;
       long A1;
       scanf("%lf", &P);
       scanf("%lf", &t);
       scanf("%lf", &n);
       scanf("%lf", &r);

       //formula of CI = P*(pow(1+(n/(r*100))),n*t)
       r1 = r/n;
       // printf("%lf\n",r1);
       r2 = 1 + r1/100;
        //printf("%lf\n",r2);
       t1 = t*n;
        //printf("%lf\n",t1);
       n1 = pow(r2,t1);
        //printf("%lf\n",n1);
       //use the fuction floor for round up.
       A = floor(P*n1);
        //printf("%lf\n",A);
       //store the float value in int type
       A1 = A;
         printf("%ld\n",A1);
    }
    return 0;
}

    
