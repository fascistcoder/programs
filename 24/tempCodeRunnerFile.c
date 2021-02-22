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
            int k;
	        for(k=N-1;k>=0;k--)
	        {
                a[k];
            }
            if(a[j]==a[k])
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
