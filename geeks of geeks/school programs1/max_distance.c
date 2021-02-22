#include <stdio.h>
#include <math.h>

int main() {
	//code
	int t,i;
	scanf("%d", &t);
	for(i=0;i<t;i++)
	{
	    int n;
	    scanf("%d", &n);
	    
	    int j;
	    float x,dis=0;
	    for(j=1;j<=n;j++)
	    {
	        x = 100.0/j;
	        dis = dis + x;
	    }
	    int dis1 = floor(dis);
	    printf("%d\n", dis1);
	}
	return 0;
}