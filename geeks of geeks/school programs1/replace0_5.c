#include <stdio.h>
int convertFive(int n)
{
    int c=1,x,rem;
    x=n;
    while(x>0)
    {
        rem = x%10;
        if(rem==0)
        {
            n = n+(c*5);
        }
        x = x/10;
        c = c*10; 
    }
    return n;
}
int main() {
	//code
	int t,i;
	scanf("%d", &t);
	for(i=0;i<t;i++)
	{
	    int N;
	    scanf("%d", &N);
	    convertFive(N);
	    int a = convertFive(N);
	    printf("%d\n",a);
	}
	return 0;
}