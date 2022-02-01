#include <bits/stdc++.h>
using namespace std;
#define SF          scanf
#define SFI(x)      scanf("%d",&x)
#define SFL(x)      scanf("%lld",&x)
#define SFDI(x,y)    scanf("%d %d",&x,&y)
#define SFDL(x,y)    scanf("%lld %lld",&x,&y)
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
///----
//int dx[]= {-1,-1,-1, 0,0, 1,1,1} , dy[]= {-1, 0, 1,-1,1,-1,0,1}; // Eight Side
//int dx[]= {0,0,1,-1}, dy[]= {1,-1,0,0};  //Four Side
///----
const int mod=1e9+7,mx=1e6+5,lim=25;
int N,M,u,v,w;
LL HURM(LL n) {
    LL half=(n/2);
    LL res =n+(n-half);
    for(LL i = 3; i*i<n; i++ ) {
        res += ((half-(n/i))*(i-1));
        half=n/i;
    }
    for(LL j=2; j<=half; j++)
        res+=(n/j);
    return res;
}
int main() {
//    Fast_Input
//    READ("3in.txt");
//    WRITE("3out.txt");
    int T,cas=0;
    SFI(T);
    LL n,m;
    while(T--) {
        SFL(n);
        PF("Case %d: ",++cas);
        if(n==1) {
            PF("1\n");
        } else {
            PF("%lld\n",HURM(n));
        }
    }
    return 0;
}

