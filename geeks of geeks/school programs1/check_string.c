//Check String

#include <stdio.h>
#include <string.h>

int main() {
	//code
	int t,i;
	scanf("%d", &t);
	for(i=0;i<t;i++)
	{
	    char str[10000];
	    scanf("%s", str);
	    
	    int c=0,j,l;
	    l = strlen(str);
	    for(j=1;j<=l;j++)
	    {
	        if(str[j]==str[j+1]&&str[j]==str[j])
	        {
	            c++;
	        }
	        else
	        {
	            c;
	            break;
	        }
	    }
	    if(c>0)
	    {
	        printf("YES\n");
	    }
	    else
	    {
	        printf("NO\n");
	    }
	}
	return 0;
}