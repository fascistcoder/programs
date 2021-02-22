#include <stdio.h>
#include <math.h>
#define n 1000

int main() {
	//code
	int t,i;
	scanf("%d", &t);
	for(i=0;i<t;i++)
	{
	    int N,j,arr[n];
	    scanf("%d",&N);
	    for(j=0;j<N;j++)
	    {
	        scanf("%d", &arr[j]);
	    }
	    int f;
	    for(j=0;j<N;j++)
	    {
	       if(arr[j]==0)
	       {
	         f=0;
	         break;
	       }
	       else
	       {
	         f=1;
	       }
	    }
	    
	    if(f==0)
	    {
	        printf("0\n");
	    }
	    
	    else
	    {
	        printf("1\n");
	    }
	}
	return 0;
}