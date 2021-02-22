#include <stdio.h>
#include <math.h>
int main() 
{
	//code
	int t,i;
	scanf("%d", &t);
	for(i=0;i<t;i++)
	{
        unsigned long long n;
        scanf("%u", &n);

        unsigned long j,rev=0,x;

        for(j=0;j<32;j++)
        {
           x = (n&(1<<j));

           if(x)
           {
               rev = rev | (1<<((32-1)-j));
           }
        }
        printf("%u\n", rev);
    }

    return 0;

}