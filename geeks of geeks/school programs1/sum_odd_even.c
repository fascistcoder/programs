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
      long n;
      //read input 
      scanf("%ld", &n);

      int j;
      long odd=0,even=0;
      //loop for odd or even sum.
      for ( j = 1; j <= n; j++)
      {
          if(j%2==0)
          {
              even+=j;
          }
          else
          {
              odd+=j;
          }
          
      }

      printf("%ld %ld\n", odd,even);
      
    }
    return 0;
}
