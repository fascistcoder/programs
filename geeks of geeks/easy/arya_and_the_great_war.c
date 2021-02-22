#include <stdio.h>
#include <stdlib.h>

int main()
{
    //input for testcases
    int t,i;
    scanf("%d", &t);
    //loop for testcases
    for(i=0;i<t;i++)
    {
        //input for whitewalkers
        int x;
        scanf("%d", &x);
        int c=0;
        //pattern which arya understands how many stabbing needs to kill whitewalkers
        while(x!=0)
        {
            //count of 1's in binary form
            x = x & (x-1);
            c++;
        }
        //print the no of stabbings
       printf("%d\n",c);
    }
    return 0;
}