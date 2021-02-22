#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,i;
    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
        long long n;
        scanf("%lld", &n);

        int rem,sum=0;
        while(n!=0)
        {
            rem = n % 10;
            sum = sum + rem;

            /*if(sum<10)
            {
                printf("%d", sum);
                break;
            }*/

            n = n/10;
        }

        if(sum%9==0)
        {
            printf("9\n");
        }
        
        else
        {
            /* code */
            printf("%d\n", sum%9);
        }
        
        
    }

    return 0;

}