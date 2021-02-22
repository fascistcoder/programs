#include <stdio.h>

int main() 
{
	//code
	int t,i;
	scanf("%d", &t);
	for(i=0;i<t;i++)
	{
	    int n,j,a[1000];
	    scanf("%d", &n);
	    for(j=0;j<n;j++)
	    {
	        scanf("%d", &a[j]);
	    }
	    int k, sum=0, sum1=0;
	    long m;
	    for(k=0;k<n/2;k++)
	    {
	        sum = sum + a[k];
           // printf("%d ", sum);
	    }
        //printf("\n");
	    for(k=n/2;k<n;k++)
	    {
	        sum1 = sum1 + a[k];
            //printf("%d ", sum1);
	    }
       // printf("\n");
	   // printf("%d %d\n", sum,sum1);
	    m = sum * sum1;
	    printf("%ld\n", m);
	}
	return 0;
}