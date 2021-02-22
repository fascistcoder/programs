
int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    long int n,m,r;
	    scanf("%ld",&n);
	    if(n==0){
	    printf("NO\n");
	    break;}
	    m=n-1;
	    r=m&n;
	    if(r==0)
	    printf("YES\n");
	    else
	    printf("NO\n");
	}
	return 0;
}