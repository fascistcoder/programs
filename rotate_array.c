#include <stdio.h>
#define n 100000
int rotate_array(int a[], int x, int d)
{
    int j,k,temp;
    //loop for number of roatations
    for(j=1;j<=d;j++)
    {
        //first value stored in temp variable
        temp = a[0];
        //loop for shift array
        for(k=0;k<=x-2;k++)
        { 
            a[k] = a[k+1];
        }
        a[x-1] = temp;
        
    }
}
int main() {
	//code
	int t,i;
	scanf("%d", &t);
	for(i=0;i<t;i++)
	{
	    int N,a[n],d,j;
	    scanf("%d%d", &N, &d);
	    for(j=0;j<N;j++)
	    {
	        scanf("%d", &a[j]);
	    }
	    //fuction call to rotate array clockwise or right.
	    rotate_array(a,N,d);
	    
	    int k;
	    for(k=0;k<N;k++)
	    {
	        printf("%d ", a[k]);
	    }
	    printf("\n");
	}
	return 0;
}