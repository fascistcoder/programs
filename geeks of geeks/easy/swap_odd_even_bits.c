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

      int l,j;
      l = floor(log2(n)+1);

      for(j=1;j<=l;j++)
      {
          n = (n<<j)^(n>>j+1);
      }

      printf("%d\n", n);
    }
    return 0;
}