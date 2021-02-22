#include <stdio.h>

int main() {
	//code
	
    int t,i;
    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
    // code here
    int N,j,ar[1000];
    scanf("%d", &N);
    for(j=0;j<N;j++)
    {
        scanf("%d", &ar[j]);
    }
    
    for(j=0;j<N;j+=2)
    {
        printf("%d ", ar[j]);
    }
    
    printf("\n");
    }
    
	return 0;
}