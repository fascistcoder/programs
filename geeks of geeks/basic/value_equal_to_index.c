#include <stdio.h>
# define n 1000

int main() {
	//code
	int t,i;
	scanf("%d", &t);
	for(i=0;i<t;i++)
	{
	    int j,N,sum=0,arr[n];
	    scanf("%d", &N);
	    for(j=0;j<N;j++)
	    {
	        scanf("%d",&arr[j]);
	    }
	    int k,f=0;
	    for(k=0;k<N;k++)
	    {
	          if(arr[k]==k+1)
	          {
	             printf("%d ", arr[k]);
	             f++;
	          }
	          else
	          {
	              f;
	          }
	    }
	    if(f<1)
	    {
	        printf("Not Found");
	    }
	    printf("\n");
	}
	return 0;
}