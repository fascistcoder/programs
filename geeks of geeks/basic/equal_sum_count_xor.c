#include <stdio.h>

int countvalues(int n)
{
    int c=0,j;
    for(j=0;j<n;j++)
    {
        int x,y;
        x= n+j;
        y = n^j;
        if(x==y)
        {
            c++;
        }
    }
    return c;
}
int main()
{
    int t,i;
    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
        int num;
        scanf("%d", &num);

        printf("%d\n", countvalues(num));
    }
    return 0;
}