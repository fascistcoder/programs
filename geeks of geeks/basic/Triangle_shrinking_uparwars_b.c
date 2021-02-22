//Triangle shrinking upwards
//basic

#include <stdio.h>
#include <string.h>

int main() 
{
	//code
	int t,i;
	//input for testcases
	scanf("%d", &t);
	//loop for test cases
	for(i=0;i<t;i++)
	{
	   char str[6];
	   //input for string
	   scanf("%s", str);
	   
	   int j,k,l;
	   //calculate length of string
	   l = strlen(str);
	   //first loop in reverse order
	   for(j=l-1;j>=0;j--)
	   {
	       //second loop 
	      for(k=0;k<l;k++)
	       {
	           //condition for print pattern
               if(k>=j)
               {
                    printf("%c", str[k-j]);
               }
               else
               {
                  printf(".");
               }
	       }
	        printf("\n");
       }
	}
	return 0;
}