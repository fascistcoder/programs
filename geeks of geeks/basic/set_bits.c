//Set Bits

#include <stdio.h>

int main() {
	//code
	int t,i;
	scanf("%d", &t);
	for(i=0;i<t;i++)
	{
	   int n;
	   scanf("%d", &n);
	   
	   int c=0;
	   //first method by only 'and' operator
	   while(n!=0)
	   {
	      n = n & (n-1);
	      c++;
	   }
	   
	   //second approach by right shift operator and 'and' operator
	   /*while(n!=0)
	   {
	       n = n & 1;
	       c++;
	       n>>=1;
	   }*/
	   printf("%d\n", c);
	}
	return 0;
}