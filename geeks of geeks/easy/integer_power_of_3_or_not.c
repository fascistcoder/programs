#include <stdio.h>
#include <math.h>
int main() {
	//code
	int t,i;
	scanf("%d", &t);
	for(i=0;i<t;i++)
	{
	    long long int n;
	    scanf("%lld", &n);
	    
	     float x;
	     x = log (n)/log (3);
	     int y = x;
	     if(y==x)
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