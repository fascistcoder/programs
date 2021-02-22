#include <stdio.h>

int main() 
{
	//code
	int t,i ;
  //read the test cases
  scanf("%d", &t);
  
  // loop for test cases
  for(i=0; i<t; i++)
  {
      // Given input
      int N;
      scanf("%d", &N);
      
      // code for print astrick
      int k,j;
      for(j=1; j<=N ; j++)
      {
          for(k=1;k<=j;k++)
          {
              printf("*");
          }
          printf(" ");
      }
      printf("\n");
  }
	return 0;
}