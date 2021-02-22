#include <stdio.h>

int main() 
{
	//code
	int t,i;
	scanf("%d", &t);
	for(i=0;i<t;i++)
	{
	    int a[100],n,j;
	    scanf("%d", &n);
	    for(j=0;j<n;j++)
	    {
	        scanf("%d", &a[j]);
	    }
	    int k,c;
	    for(k=0;k<n;k++)
	    {
            if(a[k]==a[n-k-1])
            {
                c=1;
            }
            else
            {
                c=0;
                break;
            }
	    }
        if(c==1)
        {
            printf("PERFECT\n");
        }
        else
        {
            printf("NOT PERFECT\n");
        }
	}
	return 0;
}