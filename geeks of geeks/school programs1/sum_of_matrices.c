// addition of two matrices

#include <stdio.h>
#include <math.h>
//#define n 100

int main() {
	//code
	int t,i;
	scanf("%d", &t);
	for(i=0;i<t;i++)
	{
	    int n,a[100][100],j,k;
	    scanf("%d", &n);
	    for(j=0;j<n;j++)
	    {
	        for(k=0;k<n;k++)
	        {
	            scanf("%d", &a[j][k]);
	        }
	    }
	    int b[100][100];
	    for(j=0;j<n;j++)
	    {
	        for(k=0;k<n;k++)
	        {
	            scanf("%d", &b[j][k]);
	        }
	    }
	    
	    int l,p,sum[100][100];
	    for(j=0;j<n;j++)
	    {
	        for(k=0;k<n;k++)
	        {
	            sum[j][k] = a[j][k]+b[j][k];
	            printf("%d ", sum[j][k]);
	        }
	    }
	    /*for(j=0;j<n;j++)
	    {
	        for(k=0;k<n;k++)
	        {
	           
	        }
	    }*/
	    printf("\n");
	}
	return 0;
}