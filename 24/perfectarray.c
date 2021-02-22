  #include <stdio.h>

    int main()
    { 
        int t,i;
	    scanf("%d",&t);
	    for(i=0;i<t;i++)
	    {
            int N,j,a[1000];
	        scanf("%d",&N);
	        for(j=0;j<N;j++)
            {
	          scanf("%d",&a[i]);
            } 
            int k=0,flag=0;
            int b[1000];
	        for(j=N-1;j>=0;j--)
	        {
                a[j] = b[k];
                k++;
            }

            for(j=0;j<N;j++)
            {
                if(a[j]=b[j])
                {
                    flag = flag+1;
                }
            }
            if(flag==N)
            {
                printf("Perfect\n");
            }
            else
            {
                printf("Not perfect\n");
            }
            
	    } 
        return 0;
	}
