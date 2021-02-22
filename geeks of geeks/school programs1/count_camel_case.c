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
	 
	 int j,c=0,k;
	 j = strlen(str);
	 for(k=0;k<j;k++)
	 {
	     if(str[k]>=65&&str[k]<=90)
	     {
	         c++;
	     }
	 }
	 printf("%d\n", c);
	}
	return 0;
}