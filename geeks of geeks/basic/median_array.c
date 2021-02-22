#include <stdio.h>
#include <math.h>
#define n 100
int sorted_array(int a[], int y)
{
    int k,j;
    for(j=0;j<y;j++)
    {
        for(k=0;k<y;k++)
        {
            if(a[k]>a[j])
            {
                int temp;
                temp = a[j];
                a[j] = a[k];
                a[k] = temp;
            }
        }
    }
}
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int N,j,m[n];
        scanf("%d", &N);
        for(j=0;j<N;j++)
        {
            scanf("%d", &m[j]);
        }

        sorted_array(m,N);
        int x;

        if (N%2==1)
        {
            x = m[N/2];
            printf("%d\n", x);
        }
        else
        {
            x = (m[N/2]+m[N/2-1]);
            printf("%d\n", x/2);
        }
        
    }
    return 0;
}