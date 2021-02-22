#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef long long ll;

ll findlastdigit(/*ll f[],*/ ll n)
{
    ll i,f[100000];
    f[0] = 0;
    f[1] = 1;

    for(i=2;i<=n;i++)
    {
        f[i] = (f[i-1] + f[i-2])%1000000007;
    }
    return f[n];
}
/*int findlastdigit(int n)
{
    ll f[60]= {0};
    fib(f,60);
    return f[n%60];
}*/
int main()
{
    int t,i;
    scanf("%d", &t);
    for(i=0;i<t;i++){
    ll n;
    scanf("%lld", &n);

    printf("%lld\n", findlastdigit(n));}
    return 0;
}