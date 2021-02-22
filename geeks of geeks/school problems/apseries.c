#include <stdio.h>

int main() {
	//code
	int t,i;
	scanf("%d", &t);
	for(i=0; i<t; i++)
	{
	    int A, B, N, d, S;
	    scanf("%d", &A);
	    scanf("%d", &B);
	    scanf("%d", &N);
	    d = B-A;
	    S = A+(N-1)*d;
	    printf("%d\n", S);
	}
	return 0;
}