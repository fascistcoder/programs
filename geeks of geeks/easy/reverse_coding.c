#include <stdio.h>
#include <math.h>
int main() {
	//code
	int t,i;
	scanf("%d", &t);
	for(i=0;i<t;i++)
	{
	    int n,m;
	    scanf("%d%d", &n,&m);
	    
	    int x,y ;
	    
	    if(n%2==0)
	    {
	        x = n/2;
	        y = n*x + x;
	    }
	    
	    else
	    {
	        x = (n+1)/2;
	        y = n*x;
	    }
	    
	    if(y==m)
	    {
	        printf("1\n");
	    }
	    else
	    {
	        printf("0\n");
	    }
	    
	}
	return 0;
}