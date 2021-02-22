#include <stdio.h>
#define n 100

int main() {
	//code
	int t,i;
	scanf("%d", &t);
	for(i=0; i<t; i++)
	{
	   int N, sizeofarr[n];
	   int j,sum=0;
	   scanf("%d", &N);
	   for(j=0; j<N; j++)
	   {
	      scanf("%d", &sizeofarr[j]);
	      sum += sizeofarr[j];
	   }
	   
	  printf("%d\n", sum); 
	   
	}
	return 0;
}