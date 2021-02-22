//Identical matrices

#include <stdio.h>

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
	    int f=0;
	    for(j=0;j<n;j++)
	    {
	        for(k=0;k<n;k++)
	        {
	            if(a[j][k] != b[j][k])
	            {
	                f=1;
	                break;
	            }
	        }
	    }
	    if(f==1)
	    {
	        printf("No\n");
	    }
	    else
	    {
	        printf("Yes\n");
	    }
	}
	return 0;
}