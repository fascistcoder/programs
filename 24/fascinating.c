#include <stdio.h>
#include <math.h>
#define n 1200
int convert(int a[9], int N, int x, int y)
{
    int j,rem;
    while (N!=0)
    {
        
    }
    
}
int main()
{
    int t,i;
    scanf("%d", &t);
    for ( i = 0; i < t; i++)
    {
        int N;
        scanf("%d", &N);

        if(N<100)
        {
            printf("0\n");
        }

        else
        {
            int a[9],b[9],x,y;
            x = N*2;
            y = N*3;
            
            convert(a,x,y,N);
            
        }
    }
    return 0;
}