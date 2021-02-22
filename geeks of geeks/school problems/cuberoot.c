#include <stdio.h>
#include <math.h>

int main() {
	//code
	int t,i;
	scanf("%d", &t);
	for(i=0;i<t;i++)
	{
	    int cr, n;
	    scanf("%d", &n);
	    
	    cr  = pow(n, (1.0/3.0));
	    printf("%d\n", cr);
	}
	return 0;
}