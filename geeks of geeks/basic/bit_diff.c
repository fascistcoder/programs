// bit difference

#include <stdio.h>

int main() {
	//code
	int t,i;
	scanf("%d", &t);
	for(i=0;i<t;i++)
	{
	    int a,b;
	    scanf("%d%d", &a, &b);
	    
	    int n,c=0;
	    n = a^b;
	    
	    while(n!=0)
	    {
	        n = n & (n-1);
	        c++;
	    }
	    printf("%d\n", c);
	}
	return 0;
}