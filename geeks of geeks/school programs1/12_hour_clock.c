#include<stdio.h>
#include<math.h>

int main()
{
    int t,i;
    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
        int num1,num2;
        scanf("%d %d", &num1,&num2);

        int sum;
        sum = (num1+num2)%12;
         printf("%d\n", sum);
  
    }
    return 0;
}