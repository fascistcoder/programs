#include <stdio.h>

int main()
{
    int t,i;
    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
      int n;
      scanf("%d", &n);
      
      int c=0;
      while (n!=0)
      {
          /* code */
          n = n&(n-1);
          c++;
      }

      if(c%2==0)
      {
          printf("even\n");
      }

      else
      {
          printf("odd\n");
      }
      
      
    }
    return 0;
}