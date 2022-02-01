#include <bits/stdc++.h>
using namespace std;
#define SF          scanf
#define SFI(x)      scanf("%d",&x)
#define SFL(x)      scanf("%lld",&x)
#define SFDI(x,y)    scanf("%d %d",&x,&y)
#define SFDL(x,y)    scanf("%lld %lld",&x,&y)
#define SFTI(x,y,z)    scanf("%d %d %d",&x,&y,&z)
#define SFTL(x,y,z)    scanf("%lld %lld %lld",&x,&y,&z)
#define PFI(x)      printf("%d\n",x)
#define PFL(x)      printf("%lld\n",x)
#define TEST()      cout<<"Wroking"<<endl
#define TEST2(x)    PFI(x)
#define PF          printf
#define LL          long long
#define ULL         unsigned long long
#define LD          long double
#define FV          first
#define SV          second
#define PB          push_back
#define MP          make_pair
#define IN          insert
#define PII         pair<int,int>
#define PLL         pair<LL,LL>
#define SORT(x)     sort(x.begin(),x.end());
#define FOR(x,y,z)  for(int x=y; x<z; x++)
#define READ(f)     freopen(f, "r", stdin)
#define WRITE(f)    freopen(f, "w", stdout)
#define Fast_Input  ios_base :: sync_with_stdio(false);  cin.tie(NULL);
///==========================================
const int MOD=1e9+7,mx=1e6+5,lim=25;

int main() {
    int t=1,cas=0;
//    SFI(t);
    LL n,q,x,y,z;
    while(t--) {
        SFL(n);
        SFL(q);
        for(int i=1; i<n; i++) {
            SFL(y);
            q= __gcd(q,y);
        }
        LL cnt=0,val= sqrt(q*1.0)+1;
        for(LL i=1; i<val; i++) {
            if(q%i==0) {
                if(q/i==i)
                    cnt++;
                else
                    cnt+=2;
            }
        }
        PFL(cnt);
    }
    return 0;
}

