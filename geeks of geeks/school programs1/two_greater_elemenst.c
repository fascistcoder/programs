#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define n 1000
int main()
{
    int t,i;
    //input testcases
    scanf("%d", &t);
    //loop for testcases
    for(i=0;i<t;i++)
    {
        int N;
        int j, a[n];
        //input for size of array
        scanf("%d", &N);
        // loop for array number
        for (j = 0; j < N; j++)
        {
            scanf("%d", &a[j]);
        }
        int k;
        //Loop for ascending ordering
        for(j=0;j<N;j++)
        {
            //Loop for comparing other values
            for(k=0;k<N;k++)
            {
                //Loop for comparing other values
                if(a[k]>a[j])
                {
                    //Using temporary variable for storing last value
                    int temp = a[j];
                    //replacing value
                    a[j] = a[k];
                     //storing last value
                    a[k] = temp;
                }
            }
        }
        //Loop for printing array data after sorting
        for(j=0;j<N-2;j++)
        {
            //Printing data
            printf("%d ", a[j]);
        }
        printf("\n");
    }
    return 0;
}