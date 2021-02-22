#include <stdio.h>
#include <string.h>

#include <stdio.h>
#include <string.h>

int main() {
	//code
	int t,i;
	scanf("%d ", &t);
	for(i=0;i<t;i++)
	{
	    char c;
	    scanf("%c ", &c);
	    
	    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
	    {
	        printf("YES\n");
	    }
	    else if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
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
