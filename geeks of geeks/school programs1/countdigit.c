#include <stdio.h>

int main() {
    int t,i;
    scanf("%d", &t);
    for (i=0;i<t;i++) 
    {
	 int N,n,rem,c=0;
	 scanf("%d", &n);
	 N = n;
	 while(n!=0)
	 {
	    rem = n%10;
	    {
	      if(rem!=0)
	      {
	      if(N%rem==0)
	      {
	         c=c+1; 
	      }
	      else
	      {
	          c;
	      }
	      }
	    }
	    n = n/10;
	 }
	 printf("%d\n", c);
    }
	return 0;
}