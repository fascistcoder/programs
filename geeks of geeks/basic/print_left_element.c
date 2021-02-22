#include <stdio.h>
#include <math.h>
#define n 1000

int sorted_array(int a[], int x)
{
    int i,j;
    for(i=0;i<x;i++)
    {
        for(j=0;j<x;j++)
        {
            if(a[j]>a[i])
            {
            int temp;
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            }
        }
    }
}

int main()
{
    int t,i;
    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
        int N,arr[n],j;
        scanf("%d", &N);
        for(j=0;j<N;j++)
        {
            scanf("%d", &arr[j]);
        }

        sorted_array(arr, N);
        if(N%2!=0)
        {
            printf("%d\n", arr[(N/2)]);
        }
        else
        {
            printf("%d\n", arr[(N/2)-1]);
        }
        
    }
    return 0;
}