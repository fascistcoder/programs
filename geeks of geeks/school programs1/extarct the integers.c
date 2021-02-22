// Extarct the integers

#include <stdio.h>
#include <string.h>

int main() {
	//code
	int t,i;
	scanf("%d\n", &t);
	for(i=0;i<t;i++)
	{
	    char str[100000];
	    gets(str);
	    
	    int j,l,f=0;
	    l = strlen(str);
	    for(j=0;j<l;j++)
	    {
	        if(str[j]>=48&&str[j]<=57)
	        {
	            printf("%c", str[j]);
	            f++;
	        }
	       else if(str[j-1]>=48&&str[j-1]<=57)
	       {
	           printf(" ");
	       }
	    }
	    if(f==0)
	    {
	        printf("No Integers");
	    }
	    printf("\n");
	}
	return 0;
}