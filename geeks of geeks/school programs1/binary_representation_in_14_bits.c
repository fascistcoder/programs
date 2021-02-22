//Binary representation in 14 bits

#include <stdio.h>
#include <math.h>
int main()
{
int t,i;
scanf("%d",&t);
for(i=0;i<t;i++)
{
    int N;
    scanf("%d", &N);
    
    int j,a[14];
    for(j=0;j<14;j++)
    {
      a[j]=0;   
    }
    int k;
    for(k=13;k>=1;k--)
    {
        a[k] = N%2;
        N = N/2;
        if(N==0)
        {
            break;
        }
    }
     for(j=0;j<14;j++)
    {
      printf("%d", a[j]);   
    }
    printf("\n");
}
return 0;
}