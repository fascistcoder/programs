//Upper case inversion

#include <stdio.h>
#include <string.h>

int main() {
	//code
	int t,i;
	scanf("%d\n", &t);
	for(i=0;i<t;i++)
	{
	    char str[1000];
	    gets(str);
	    
	    int j,l,f;
	    l = strlen(str);
	    
	    for(j=0;j<l;j++)
	    {
	        if (str[0]>=97&&str[0]<=122)
	        {
	            str[j] = str[0] - 32;
	        }
	        else if (str[j] == ' ')
	        {
	           if (str[j+1]>=97&&str[j+1]<=122)
	           {
	            str[j+1] = str[j+1] - 32;
	            
	           }
	        }
	    }
	    printf("%s\n", str);
	}
	return 0;
}