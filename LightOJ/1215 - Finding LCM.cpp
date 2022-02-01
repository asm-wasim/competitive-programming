#include <bits/stdc++.h>
using namespace std;
#define SF          scanf
#define SFI(x)      scanf("%d",&x)
#define SFL(x)      scanf("%lld",&x)
#define SFDI(x,y)    scanf("%d %d",&x,&y)
#define SFDL(x,y)    scanf("%lld %lld",&x,&y)
#define PFI(x)      printf("%d\n",x)
#define PFL(x)      printf("%lld\n",x)
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
///----
//int dx[]= {-1,-1,-1, 0,0, 1,1,1} , dy[]= {-1, 0, 1,-1,1,-1,0,1}; // Eight Side
//int dx[]= {0,0,1,-1}, dy[]= {1,-1,0,0};  //Four Side
///----
const int mod=1e9+7,mx=1e6+5,lim=25;
LL a,b,c,L;
vector <LL> d;
LL GCD(LL a,LL b) {
    if (b == 0)
        return a;
    return GCD(b, a % b);
}
LL LCM(LL a, LL b) {
    return (a*b)/GCD(a, b);
}

void make() {
    for(LL i=1; i<=sqrt(L); i++) {
        if(L%i==0) {
            if(L/i==i) {
                d.PB(i);
            } else {
                d.PB(i);
                d.PB(L/i);
            }
        }
    }
    SORT(d);
//    for(int i=0; i<d.size(); i++)
//        cout<<d[i]<<" ";
//    cout<<endl;
}
int main() {
//    Fast_Input
   // READ("3in.txt");
//    WRITE("3out.txt");
    int T,cas=0;
    SFI(T);
    LL ans,x,y;
    while(T--) {
        SF("%lld %lld %lld",&a,&b,&L);
        x=LCM(a,b);
        make();
        ans=-1;
        //cout<<x<<endl;
        for(int i=0; i<d.size(); i++) {
            if(LCM(x,d[i])==L) {
                ans=d[i];
                break;
            }
        }
        PF("Case %d: ",++cas);
        if(ans != -1) {
            PF("%lld\n",ans);
        } else {
            PF("impossible\n");
        }
        d.clear();
    }
    return 0;
}

