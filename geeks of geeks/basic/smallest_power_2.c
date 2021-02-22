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
	    
	    int j,c,x;
	    x = n;
	    
	    for(j=0;j<n;j++)
	    {
	        c=pow(2,j);
	        if(x<=c)
	        {
	            printf("%d ", c);
	            break;
	        }
	    }
	    printf("\n");
	}
	return 0;
}