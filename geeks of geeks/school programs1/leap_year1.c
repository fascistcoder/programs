#include<stdio.h>
#include<stdlib.h>

int main()
{
    int t,i;
    //read the input for testcases
    scanf("%d", &t);
    //loop for test cases
    for(i=0;i<t;i++)
    {
        int n;
        //read the input for year
        scanf("%d", &n);
        if(n%4==0 && n%100!=0) 
	    {
	        printf("Yes\n");
	    }
	    else if(n%400==0) 
	    {
	        printf("Yes\n");
	    }
	    else
	    {
	        printf("No\n");
	    }
    }
    return 0;
}