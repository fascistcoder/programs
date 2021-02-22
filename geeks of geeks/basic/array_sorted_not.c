#include <stdio.h>
#include <math.h>
#define n 1200
int sorted_array (int a[], int x)
{
   int i,f;
   for(i=0;i<n-1;i++)
   {
          if(a[i]>a[i+1])
           {
               f=f+1;
           }
           else
           {
               f=0;
               break;
           }
           
   }
   if(f>0)
   {
       return 1;
   }
   else
   {
       return 0;
   }
   
}
int main()
{
    int i,t;
    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
       int N,j,C[n];
       scanf("%d", &N);
       for(j=0;j<N;j++)
       {
           scanf("%d", &C[j]);
       }

      // sorted_array(C,N);
       printf("%d\n", sorted_array(C,N));
    }
    return 0;
}