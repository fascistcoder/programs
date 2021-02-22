#include <stdio.h>

int main() 
{
	//code
	int t,i;
	scanf("%d", &t);
	for(i=0;i<t;i++)
	{
	    long n,m;
	    scanf("%ld%ld", &n,&m);
	    
	    int j;
	    for(j=0;j<m-1;j++)
	    {
	        //int k=2;
	        n = n/2;
	    }
	    printf("%ld\n", n);
	}
	return 0;
}