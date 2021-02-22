//multiplication of two matrices

#include <stdio.h>
#include <math.h>


int main() {
	//code
	int t,i;
	scanf("%d", &t);
	for(i=0;i<t;i++)
	{
	    int j,k,a[3][3],b[3][3];
	    for(j=0;j<3;j++)
	    {
	        for(k=0;k<3;k++)
	        {
	            scanf("%d", &a[j][k]);
	        }
	    }
	    
	    for(j=0;j<3;j++)
	    {
	        for(k=0;k<3;k++)
	        {
	            scanf("%d", &b[j][k]);
	        }
	    }
	    
	    int r,mul[3][3];
	    for(j=0;j<3;j++)
	    {
	        for(k=0;k<3;k++)
	        {
	            mul[j][k] = 0;
	            for(r=0;r<3;r++)
	            {
	                mul[j][k] += a[j][r]*b[r][k];
	            }
	        }
	    }
	    
	    for(j=0;j<3;j++)
	    {
	        for(k=0;k<3;k++)
	        {
	            printf("%d ", mul[j][k]);
	        }
	        printf("\n");
	    }
	    
	}
	return 0;
}