#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int t,i;
    scanf("%d", &t);
    for ( i = 0; i < t; i++)
    {
        int base;
        scanf("%d\n", &base);
        long N;
        scanf("%ld", &N);

        long rem, con=0, k=1;
        while (N!=0)
        {
            rem = N%base;
            con = con + rem*k;
            N = N/10;
            k = k*base;
        }
        printf("%d\n", con);

        
    }
    
}