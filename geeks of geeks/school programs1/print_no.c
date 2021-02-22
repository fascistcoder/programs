#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int print(int n)
{
    
    if(n==0)
    {
        return 0;
    }
    else
    {
        print(n-1);
        printf("%d ",n);
    }
    
}
int main()
{
    int t,i;
    //read testcases
    scanf("%d", &t);
    //loop for test cases
    for (i = 0; i < t; i++)
    {
        int N;
        scanf("%d", &N);

        print(N);
        printf("\n");
          
    }
    return 0;
}