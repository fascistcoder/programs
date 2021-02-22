#include <stdio.h>
#include <math.h>
int main() {
	//code
	int t,i;
	scanf("%d", &t);
	for(i=0;i<t;i++)
	{
	    int n;
	    scanf("%d", &n);
	    
	    int x,y;
	    y = pow(n,3);
	    x = y + n;
	    
	    printf("%d\n", x);
	}
	return 0;
}