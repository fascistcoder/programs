#include <stdio.h>
int main() {
	int t,flag=0;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
	    scanf("%d",&n);
	    int a[1000];
	    for(int i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	    }
	    int i,j=0;
	    int b[100];
	    int count =0;
	    for(i=n-1;i>=0;i--)
	    {
	        b[j]=a[i];
	        j++;
	    }
	   
	    for(i=0;i<n;i++)
	    {
	        if(a[i]==b[i])
	        {
	            count = count+1;
	        }
	    }
	    if(count == n)
	    {
	        printf("PERFECT");
	    }
	    else
	    {
	        printf("NOT PERFECT");
	    }
	    printf("\n");
	    
	}
	return 0;
}