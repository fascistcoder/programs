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
        long bin;
        //read input 
        scanf("%ld", &bin);
        
        long rem, dec=0, k=1;
        //loop for decimal number
        while(bin!=0)
        {
            rem = bin%10;
            dec = dec + rem*k;
            bin = bin/10;
            k = k*2;
        }
        printf("%ld\n", dec);

    }
    return 0;
}