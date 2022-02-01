
#include <bits/stdc++.h>
using namespace std;
#define LL          long long
#define ULL         unsigned long long
#define LD          long double
#define PII         pair<int,int>
#define PLL         pair<LL,LL>
#define SORT(x)     sort(x.begin(),x.end())
#define SORTD(x)    sort(x.rbegin(),x.rend())
#define mem(x)      memset(x,0,size of x)
#define READ(f)     freopen(f, "r", stdin)
#define WRITE(f)    freopen(f, "w", stdout)
#define TEST()      cout<<"Wroking"<<endl
#define TEST2(x)    cout<<x<<endl
#define Fast_Input  ios_base :: sync_with_stdio(false);  cin.tie(NULL);
const LL mod=1e6+3,mx=1e6+5,lim=25;

LL dp[mx];
void Fact() {
    dp[0]=1;
    for(LL i=1; i<mx; i++) {
        dp[i]= ((dp[i-1]%mod)*(i%mod))%mod;
    }
}

LL GCD(LL a, LL b) {
    if (a == 0)
        return b;
    return GCD(b%a, a);
}

LL power(LL x, ULL y, ULL m) {
    if (y == 0)
        return 1;
    LL p = power(x, y/2, m) % m;
    p = (p * p) % m;
    return (y%2 == 0)? p:(x * p) % m;
}

LL ModularInverse(LL a,LL m) {
    //LL g=GCD(a,m);
//    if(g != 1) return -1;
    return power(a, m-2, m);
}

int main() {
    int t=1,cas=0;
    Fact();
    scanf("%d",&t);
    LL n,r,ans;
    while(t--) {
        scanf("%lld %lld",&n,&r);  ///nCr= n!/(r! *(n-r)!)
        ans= ((dp[r]%mod)*(dp[n-r]%mod))%mod;  /// (a*b)%m= (a%m * b%m)%m
        ans= ModularInverse(ans,mod);
        ans= ((dp[n]%mod)*(ans%mod))%mod;
        printf("Case %d: %lld\n",++cas,ans);
    }
    return 0;
}
