#include <stdio.h>
#define n 1000
int check_sorted(int a[],int x)
{
    int j;
    for(j=0;j<x-1;j++)
    {
        if(a[j]>a[j+1])
        return 0; 
    }
    return 1;
}

int main() {
	//code
	int t,i;
	scanf("%d", &t);
	for(i=0;i<t;i++)
	{
	    int c[n], N, j;
	    scanf("%d", &N);
	    for(j=0;j<N;j++)
	    {
	        scanf("%d", &c[j]);
	    }
	    //check_sorted(c,N);
	    
	    printf("%d\n", check_sorted(c,N));
	}
	return 0;
}