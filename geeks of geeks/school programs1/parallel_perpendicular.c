#include<stdio.h>
#include<math.h>

int main()
{
    int t,i;
    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
        int a1,a2,a3;
        scanf("%d %d %d\n", &a1,&a2,&a3);
        int b1,b2,b3;
        scanf("%d %d %d", &b1,&b2,&b3);

        int ab, abc;
        ab = (a1*b1)+(a2*b2)+(a3*b3);

        int c1,c2,c3;
        c1 = (a2*b3)-(a3*b2);
        c2 = (a1*b3)-(b1*a3);
        c3 = (a1*b2)-(a2*b1);
        abc = pow(c1,2)+pow(c2,2)+pow(c3,2);

        if(ab==0)
        {
            printf("2\n");
        }
        else if(abc==0)
        {
            printf("1\n");
        }
        else if(ab!=0&&abc!=0)
        {
            printf("0\n");
        }
        
    }
    return 0;
}