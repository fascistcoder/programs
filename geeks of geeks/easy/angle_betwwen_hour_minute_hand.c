#include <stdio.h>
#include <math.h>

int main() {
	//code
	int t,i;
	scanf("%d", &t);
	for(i=0;i<t;i++)
	{
	    float h,m;
	    scanf("%f%f", &h,&m);
	    
	    double a;
	    int a1;
	    if(h>=1&&h<=12)
	    {
	        if(m>=1&&m<=60)
	        {
	           a = abs((30*h)-((5.5)*m));
               printf("%lf\n", a); 
	        }
	        
	        a1 = floor(a);
	        if(a1<180)
	        {
	            printf("%d\n", a1);
	        }
	        else
	        {
	            printf("%d\n", (360-a1));
	        }
	    }
	}
	return 0;
}