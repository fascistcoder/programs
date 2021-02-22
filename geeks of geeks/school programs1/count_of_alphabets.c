#include <stdio.h>
#include <string.h>

int main() {
	//code
	int t,i;
	scanf("%d", &t);
	for(i=0;i<t;i++)
	{
	    char str[100];
	    scanf("%s", str);
	    
	    int l,j,c=0;
	    l = strlen(str);
	    
	    for(j=0;j<l;j++)
	    {
	        if(str[j]>=65&&str[j]<=90||str[j]>=97&&str[j]<=122)
	        {
	            c++;
	        }
	    }
	    printf("%d\n",c);
	}
	return 0;
}