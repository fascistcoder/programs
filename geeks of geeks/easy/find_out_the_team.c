#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int t,i;
    //input from the testscases
    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
       int x;
       //input for roll no of students
       scanf("%d", &x);
       //team formation
       int n;
       if(x==1)
       {
           printf("1\n");
       }
       else
       {
         n = ceil(x/2);
         printf("%d\n", n);
       }
    }
    return 0;
}