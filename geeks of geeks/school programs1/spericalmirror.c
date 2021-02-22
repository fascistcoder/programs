#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int t,i;
    scanf("%d", &t);
    for (i=0;i<t;i++)
    {
       char str[20],str1[20]="convex";
       scanf("%s\n", str);
       float r;
       int f;
       scanf("%f",&r);
       if(strcmp(str,str1)==0)
       {
           r = r/2;
           f = r+1;
           printf("-%d\n",f);
       }
       else
       {
           f = r/2;
           printf("%d\n",f);
       }
       
    }
   return 0; 
}