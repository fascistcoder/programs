#include <stdio.h>
#include <math.h>
//typedef long long ll;
int main() {
	//code
	int t,i;
	scanf("%d", &t);
	for(i=0;i<t;i++)
	{
	   long long n;
	   scanf("%lld", &n);
	   //if number is power of 2 return 1;
	   if((n&(n-1))==0)
	   {
	       printf("1\n");
	   }
       //otherwise
       else
      {
          long long x,y,z,l;
          //first we have to find power of 2 to closet number
           x = log(n)/log(2);
          // printf("%lld\n",x);
           //then we have to agin power of 2
           y=pow(2,x);
          // printf("%lld\n",y);
           //then subtract closet power of 2 from actual no 
           z = n - y;
         //  printf("%lld\n",z);
           //then find winning no
           l = 2*z + 1;
           printf("%lld\n",l);
      }
	}
	return 0;
}