#include <stdio.h>

int main() {
	//code
	int t,i;
	scanf("%d", &t);
	for(i=0;i<t;i++)
	{
	    long n;
	    scanf("%d", &n);
	    
	    long g;
	    g = n^(n>>1);
	    printf("%d\n", g);
	}
	return 0;
}