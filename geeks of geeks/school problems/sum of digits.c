#include <stdio.h>
#include <math.h>

int main() {
	//code
	int t,i;
	//read the input of testcases
	scanf("%d", &t);
	for(i=0;i<t;i++)
	{
	    int N;
	    //read the input of number
	    scanf("%d", &N);
	    
	    int rem,sum=0;
	    //loop for executing sum
	    while(N>0)
	    {
	        //first we have to find remainder
	        rem = N%10;
	        //then store the value 
	        sum = sum+rem;
	        //again find value of new number
	        N = N/10;
	    }
	    printf("%d\n", sum);
	}
	return 0;
}