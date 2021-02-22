#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int t,i;
    //read testcases
    scanf("%d", &t);
    //loop for test cases
    for (i = 0; i < t; i++)
    {
        int N;
        scanf("%d", &N);

        int j,val1,val2, count=0,f;
        val1 = ceil(sqrt(N));
        val2 = N;

        for(j=2; j<=val1; j++)
        {
            if(val2%j==0)
            count=1;
        }

        if((count==0&&val2!=1)||val2==2||val2==3)
          {
              while(val2)
              {
                  int rem;
                  rem = val2%10;
                  if(rem==2||rem==3||rem==5||rem==7)
                    {
                      f=0;
                      
                    }
                  else
                    {
                      f=1;
                      break;
                    }
                  val2=val2/10;
              }

              if(f==0)
              {
                printf("Yes\n");
              }
              else
              {
                printf("No\n");
              }
              
              
          }
        else
        {
            printf("No\n");
        }
        
    }
    return 0;
}
