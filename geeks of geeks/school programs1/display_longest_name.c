//display longest name

#include <stdio.h>
#include <string.h>

int main() {
	//code
	int t,i;
	scanf("%d", &t);
	for(i=0;i<t;i++)
	{
	    int n,j,max=0;
	    scanf("%d", &n);
	    char str1[1000],str2[1000];
	    for(j=0;j<n;j++)
	    {
	        scanf("%s", str1);
	        if(strlen(str1)>max)
	        {
	            max = strlen(str1);
	            strcpy(str2,str1);
	        }
	    }
	    
	    printf("%s\n", str2);
	}
	return 0;
}