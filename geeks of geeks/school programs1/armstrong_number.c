#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int t,i;
    //read testcases
    scanf("%d", &t);
    //loop for test cases
    for (i = 0; i < t; i++)
    {
      long N;
      scanf("%d", &N);

      long sum=0,rem,q;
      q=N;
      while(q!=0)
      {
          rem = q%10;
          sum = sum + rem*rem*rem;
          q = q/10;
      } 

      if(sum==N)
      {
          printf("Yes\n");
      }
      else
      {
          printf("No\n");
      }
        
    }
    return 0;
}