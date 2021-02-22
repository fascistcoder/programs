#include <stdio.h>

int main() {
	//code
	int t,i;
	scanf("%d", &t);
	for(i=0;i<t;i++)
	{
	    int N;
	    scanf("%d", &N);
	    int ones = 0, zeros = 0;
	    while(N!=0)
	    {
	       /* If LSB is set then increment ones otherwise zeros */
           if(N & 1)
                ones++;
           else
               zeros++;

          /* Right shift bits of num to one position */
           N >>= 1;
	    }
        //second appraoch
        /*  while(n)
       {
          if(n%2)
          a++;
          else
          b++;
           n = n / 2 ;
       }*/
	    
	    int x;
	    x = ones ^ zeros;
	    printf("%d\n", x);
	}
	return 0;
}