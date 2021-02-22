#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int t,i;
    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
      int n;
      scanf("%d", &n);

      int x;
      if((n&(n-1))==0)
      {
          printf("True\n");
      }

      else
      {
          printf("False\n");
      }
      
    }
    return 0;
}