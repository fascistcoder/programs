#include <stdio.h>

int main() {
	//code
	int t,i;
	scanf("%d", &t);
    for(i=0; i<t; i++)
	  {
	   char c[1000];
	   int N;
	   int j;
	   scanf("%d", &N);
	   for(j=0; j<N; j++)
	   {
	      scanf("%s", &c[j]);
	     
	   }
	  c[N] = '\0';
	  printf("%s\n",c); 
	   
	 }
	return 0;
}
