#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    unsigned int x;
    scanf("%d", &x);

    float y;
    scanf("%f", &y);

    float rem,N;
    //sucessful transcation
    if(x%5==0&&x<y)
    {
         rem = y - x;
         N = rem - .5;
         printf("%.2f", N);
    }
    //Incorrect Withdrawal Amount 
    else if(x%5!=0&&x<y)
    {
        N = y;
        printf("%.2f", N);
    }
    //Insufficient funds
    else if(x>y)
    {
        N = y;
        printf("%.2f", N);
    }
    
    return 0;
}

