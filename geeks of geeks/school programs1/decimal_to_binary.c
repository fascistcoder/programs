#include<stdio.h>
#include<math.h>

int main()
{
    int t,i;
    scanf("%d", &t);
    for(i-0;i<t;i++)
    {
        long dec;
        scanf("%ld", &dec);

        long rem,bin=0,k=1;
        while (dec!=0)
        {
            rem = dec%2;
            bin = bin + rem*k;
            dec = dec/2;
            k = k*10; 
        }
        printf("%ld\n", bin);
    }
    return 0;
}