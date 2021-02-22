#include <stdio.h>
#include <math.h>

int main() {
	//code
	int t,i;
	scanf("%d", &t);
	for(i=0;i<t;i++)
	{
	    int N,X;
	    scanf("%d %d", &N,&X);
	    
	    int last;
	    last = (10 - X)*(N-1);
	    printf("%d\n", last);
	}
	return 0;
}