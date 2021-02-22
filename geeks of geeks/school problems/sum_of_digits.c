#include <stdio.h>

int main() {
	//code
	int t,i;
	//read the input of testcases
	scanf("%d", &t);
	//loop for test cases 
	for(i=0;i<t;i++)
	{
	   int N;
	   //read the input of number
	   scanf("%d", &N);
	   
	   int j,sum=0;
	   //loop for to add numbers
	   for(j=1;j<=N;j++)
	   {
	   //add values 
	   sum += j;
	   }
	   //print the value of sum
	   printf("%d\n", sum);
	}
	return 0;
}