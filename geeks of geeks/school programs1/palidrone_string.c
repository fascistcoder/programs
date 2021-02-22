//palidrone string

#include <stdio.h>
#include <string.h>

int main() {
	//code
	int t,i;
	scanf("%d\n", &t);
	for(i=0;i<t;i++)
	{
	    int n,j,f;
	    char str1[100];
	    scanf("%d", &n);
	    scanf("%s", str1);
	    n = strlen(str1);
	    for(j=0;j<n;j++)
	    {
	        if(str1[j]!=str1[n-j-1])
	        {
	            f=1;
	            break;
	        }
	        else
	        {
	            f=0;
	        }
	    }
	    if(f==0)
	    {
	        printf("Yes\n");
	    }
	    else
	    {
	        printf("No\n");
	    }
	    
	}
	return 0;
}