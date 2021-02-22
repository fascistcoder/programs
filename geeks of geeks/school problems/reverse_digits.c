#include <stdio.h>

int main() {
	//code
	int t,i;
	//read the input of testcases
	scanf("%d", &t);
	//loop for test cases 
	for(i=0;i<t;i++)
	{
	    // read the input number
	    long N;
	    scanf("%ld", &N);
	    
	    long rem,rev=0;
	    //loop for rev
	    while(N>0)
	    {
	        
	        rem = N%10;
	        rev = rev*10 + rem;
	        N = N/10;
	    }
	    printf("%ld\n", rev);
	}
	return 0;
}