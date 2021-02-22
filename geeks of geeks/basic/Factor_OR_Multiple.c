#include <stdio.h>

int main() {
	//code
	int t,i;
	scanf("%d", &t);
	for(i=0;i<t;i++)
	{
	    int n,x,j,a[100];
	    scanf("%d%d", &n, &x);
	    for(j=0;j<n;j++)
	    {
	        scanf("%d", &a[j]);
	    }
	    
	    int k,flag,c=0;
	    for(k=0;k<n;k++)
	    {
	        if(a[k]%x==0)
	        {
	            c = c|a[k];
	            flag = 1;
	        }
	        else
	        {
	            c;
	        }
	    }
	    if(flag==1)
	    {
	        printf("%d\n", c);
	    }
	    else
	    {
	        printf("0\n");
	    }
	}
	return 0;
}