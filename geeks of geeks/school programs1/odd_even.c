#include <stdio.h>
#include<math.h>

int main()
{
    int t,i;
    scanf("%d", &t);

    for ( i = 0; i < t; i++)
    {
        int N;
        scanf("%d", &N);

        if(N%2==0)
        {
            printf("Even\n");
        }
        else
        {
            printf("Odd\n");
        }
        
    }
    return 0;
    
}


