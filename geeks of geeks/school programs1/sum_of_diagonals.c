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
	    int sum=0;
	    for(j=0;j<n;j++)
	    {
	        sum += a[j][j];
	    }
	    printf("%d", sum);
	}
	return 0;
}