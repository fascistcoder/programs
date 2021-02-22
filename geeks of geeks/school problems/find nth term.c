#include <stdio.h>
int main()
{
  int t,i ;
  //read the test cases
  scanf("%d", &t);
  
  // loop for test cases
  for(i=0; i<t; i++)
  {
      int N;
      
      // Nth term read
      scanf("%d", &N);
      
      // loop for find nth term
      int j,n=0;
      
      for(j=1; j<=N; j++)
      { 
          n += j;
      }
        printf("%d\n", n);
  }
    return 0;
}