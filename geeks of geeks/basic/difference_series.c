#include <stdio.h>

int main() {
	//code
	int t,i;
	scanf("%d", &t);
	for(i=0;i<t;i++)
	{
	    int n;
	    scanf("%d", &n);
	    
	    int x;
	    x = n*(2*n+1);
	    
	    printf("%d\n", x);
	}
	return 0;
}