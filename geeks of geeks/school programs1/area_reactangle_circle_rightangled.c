#include<stdio.h>
#include<math.h>
#define pi 3.14

int main()
{
    int t,i;
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        int lr,br,base,per,rad;
        scanf("%d %d %d %d %d", &lr, &br,&base,&per,&rad);

        long rect,tri,cir;

        rect = lr*br;

        tri = (base*per)/2;

        cir = pi*rad*rad;

        printf("%ld %ld %ld\n", rect, tri, cir);
    }
    return 0;
}