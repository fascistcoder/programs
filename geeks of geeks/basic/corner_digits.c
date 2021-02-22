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
	    int n2,n1,rem,rev=0;
	    x = n;
	    while(n!=0)
	    {
	        rem = n % 10;
	        rev = rev*10+rem;
	        n =   n/10;
	    }
	    
	    n1 = rev%10;
	    n2 = x%10;
	    
	    printf("%d %d\n",n1,n2);
	}
	return 0;
}