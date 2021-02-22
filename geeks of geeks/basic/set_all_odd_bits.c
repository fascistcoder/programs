#include <stdio.h>
#include <math.h>

int main()
{
    int t,i;
    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
      int n;
      scanf("%d", &n);

      long l,j;

      l = floor(log2(n)) + 1;

      for(j=1;j<=l;j=j+2)
      {
         n = n | (1<<(j-1)); 
      }

      printf("%ld\n", n);
    }
    return 0;
}