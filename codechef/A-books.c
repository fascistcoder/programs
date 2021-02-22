#include <stdio.h>

int main() {
	//code
	int t,i;
	scanf("%d", &t);
	for(i=0;i<t;i++)
	{
	    int N,j,a[100000];
	    scanf("%d", &N);
	    for(j=0;j<N;j++)
	    {
	        scanf("%d", &a[j]);
	    }

        int l,k,c;
        for(k=0;k<N;k++)
        {
          c=0;
         for(l=0;l<N;l++)
         {
          if(a[k]<a[l])
	      { 
	        c++;
          } 
        }
        printf("%d ", c);
        }
        printf("\n");
    }
    return 0;
}