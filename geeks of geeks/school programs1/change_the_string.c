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
	    int l,j;
	    l = strlen(str);
	    int k = 0;
	    if(str[k]>=65&&str[k]<=90)
	    {
	       // printf("%c", str[0]);
	        for(j=0;j<l;j++)
	        {
	              if(str[j]>=65&&str[j]<=90)
	              {
	                  printf("%c", str[j]);
	              }
	              else
	              {
	                  str[j] = str[j] - 32;
	                  printf("%c", str[j]);
	              }
	        }
	    }
	    else
	    {
	        for(j=0;j<l;j++)
	        {
	              if(str[j]>=97&&str[j]<=122)
	              {
	                  printf("%c", str[j]);
	              }
	              else
	              {
	                  str[j] = str[j] + 32;
	                  printf("%c", str[j]);
	              }
	        }
	    }
	    printf("\n");
	}
	return 0;
}