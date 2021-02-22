#include <stdio.h>

int main() 
{
	//code
	int t,i;
	scanf("%d", &t);
	for(i=0;i<t;i++)
	{
	    int n,g;
	    scanf("%d%d", &n,&g);
	    
	    if(g<13&&g>0)
	    {
	        int g1,y;
	        n = ~n;
	        //g1 = g - 1;
	        
	        y = n + g;
	        
	        printf("%d\n", y);
	    }
	}
	return 0;
}