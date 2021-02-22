#include <stdio.h>

int main()
{
   int t,i;
   scanf("%d", &t);
   for(i=0;i<t;i++)
   {
      int n, a[1000], j;
      scanf("%d", &n);
      for(j=0;j<n;j++)
      {
          scanf("%d", &a[j]);
      }
      //O(n*n) complextity
     /* int k,x,l,c=0;
      for(k=0;k<n;k++)
      {
          for(l=k+1;l<n;l++)
          {
              x = a[k] ^ a[l];
            if(x%2!=0)
            {
              c++;
            }
            else
            {
              c;
            }
          }
      }*/
      //O(n) complexity
      int k,c,odd=0, even=0;
      for(k=0;k<n;k++)
      {
          if(a[k]%2==0)
          {
            even++ ; 
          }
          else
          {
              odd++ ;
          }
          
      }
      c = odd*even;
      printf("%d\n", c);

   }
   return 0;
}
