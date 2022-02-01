#include <bits/stdc++.h>
using namespace std;
#define SF scanf
#define SFI(x) scanf("%d",&x)
#define PFI(x) printf("%d\n",x)
#define TEST() cout<<"Wroking"<<endl
#define PF printf
#define LL long long
#define ULL unsigned long long
#define LD long double
#define FV first
#define SV second
#define PB push_back
#define MP make_pair
#define IN insert
#define FOR(x,y,z) for(int x=y; x<z; x++)
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
#define Fast_Input ios_base :: sync_with_stdio(false);  cin.tie(NULL);
#define PII pair<int,int>
const LL mx=1e5+5;
const LL mod=1000000007 ;
LL DP[mx];
int main() {
    LL T,K,a,b;
    SF("%lld %lld",&T,&K);
    for(int i=1; i<K; i++)
        DP[i]=1;
    DP[K]=2;
    for(int i=K+1; i<mx; i++) { ///Pattern
        DP[i]=((DP[i-1]%mod)+(DP[i-K]%mod))%mod;
    }
    for(int i=1; i<mx; i++) { ///Cumulative Sum
        DP[i]=((DP[i]%mod)+(DP[i-1]%mod))%mod;
    }
    while(T--) {
        cin>>a>>b;
        LL ans=(DP[b]-DP[a-1])%mod;
        if(ans<0) ans+=mod;
        PF("%lld\n",ans);
    }
    return 0;
}
