//Number is sparse or not

#include <stdio.h>

int main() 
{
	//code
	int t,i;
	//input for testcases
	scanf("%d", &t);
	//loop for testcases 
	for(i=0;i<t;i++)
	{
	    int n;
	    //input for number
	    scanf("%d", &n);
	    
	    int s;
	    //operate right shift operator and then take and bit-wise opeartor
	    s = n&(n>>1);
	    if(s==0)
	    {
	        //number is sparse
	        printf("1\n");
	    }
	    else
	    {
	        //number is not sparse
	        printf("0\n");
	    }
	    
	}
	return 0;
}