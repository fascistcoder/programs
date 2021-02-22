#include <stdio.h>
#include <math.h>
int digSum(int x)
{
    if(x<10)
    {
        return x;
    }
    else
    {
        return digSum(x%10+x/10);
    }
}
int main()
{
    int t,i;
    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
        int N;
        scanf("%d", &N);
        
        int a = digSum(N);
        printf("%d\n", a);
    }
    return 0;
}