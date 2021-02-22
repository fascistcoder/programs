#include <stdio.h>
#include <math.h> 
#define v 100

int sorted_array(int a[], int x)
{
    int j,k,temp;
    for(j=0;j<x;j++)
    {
        for(k=0;k<x;k++)
        {
            if(a[j]<a[k])
            {
                temp = a[j];
                a[j] = a[k];
                a[k] = temp;
            }
        }
    }
}
int main() {
	//code
	int t,i;
	scanf("%d", &t);
	for(i=0;i<t;i++)
	{
	    int n,a[v],j;
	    scanf("%d", &n);
	    
	    for(j=0;j<n;j++)
	    {
	        scanf("%d", &a[j]);
	    }
	    sorted_array(a,n);   
	    for(j=0;j<n;j++)
	    {
	        printf("%d ",a[j]);
	    }
	    
	    printf("\n");
	}
	return 0;
}