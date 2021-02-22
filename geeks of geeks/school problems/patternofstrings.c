#include <stdio.h>

int main() {
    //code
    int t, i;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        char str[5];
        int j, k;
        scanf("%s", str);
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 5 - j; k++)
            {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }
    return 0;
}


