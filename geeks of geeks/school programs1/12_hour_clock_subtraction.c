//12 hour clock subtraction
#include <stdio.h>

int main() {
	//code
	int t,i;
	scanf("%d", &t);
	for(i=0;i<t;i++)
	{
	    int a,b;
	    scanf("%d%d", &a,&b);
	    
	    int x;
	    x = a-b;
	    if(x>=12||x<=-12)
	    {
	        int n = x%12;
	        printf("%d\n", n);
	    }
	    else
	    {
	        printf("%d\n", x);
	    }
	}
	return 0;
}