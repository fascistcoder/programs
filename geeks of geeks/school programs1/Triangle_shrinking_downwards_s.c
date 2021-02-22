//Triangle shrinking downwards
//School

#include <stdio.h>
#include <string.h>
int main() 
{
	//code
	int t,i;
	scanf("%d\n", &t);
	for(i=0;i<t;i++)
	{
	    char str[6];
	    scanf("%s", str);
	    
	    int j,l,k;
	    l = strlen(str);
	    for(j=0;j<l;j++)
	    {
	        for(k=0;k<j;k++)
	        {
	            str[k]='.';
	           
	        }
	         printf("%s\n", str);
	    }
	}
	return 0;
}