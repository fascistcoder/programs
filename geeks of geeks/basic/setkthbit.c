#include <stdio.h>
#include <math.h>
int main() {
	//code
	int t,i;
	scanf("%d", &t);
	for(i=0;i<t;i++)
	{
	   int n,k;
	   scanf("%d%d", &n, &k);
	   
	   int x,set;
	   x = pow(2,k);
	   set = x|n;
	   printf("%d\n", set);
	}
	return 0;
}