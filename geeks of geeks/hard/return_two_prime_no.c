#include <stdio.h>
#include <math.h>

int prime(int n)
{
	int j;
	for(j=2;j*j<=n;j++)
	{
		if(n%j==0)
		{
			return 0;
		}
	}

	return 1;
}
int main() {
	//code
	int t,i;
	scanf("%d", &t);
	for(i=0;i<t;i++)
	{
	   long n;
	   scanf("%d", &n);
       
	   int j,k;
	   for(j=2;j<n;j++)
	   {
		   if(prime(j)==1 && prime(n-j)==1)
		   {
			   printf("%d %d", j, n-j);
			   break;
		   }
	   }

	   printf("\n");
	}
	return 0;
}