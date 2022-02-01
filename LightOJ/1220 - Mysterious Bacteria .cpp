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
int main() {
    //READ("3in.txt");
    int T,cas=0;
    SFI(T);
    LL ans,n,cnt,lim;
    while(T--) {
        SFL(n);
        ans=1;
        if(n>0) {
            for(LL k=2; k*k<=n; k++) {
                cnt=0,lim=n;
                while(lim%k==0) {
                    lim/=k;
                    cnt++;
                }
                if(lim==1) {
                    ans=cnt;
                    break;
                }
            }
        } else {
            n=abs(n);
            for(LL k=2; k*k<=n; k++) {
                cnt=0,lim=n;
                while(lim%k==0) {
                    lim/=k;
                    cnt++;
                }
                //cout<<lim<<" "<<k<<" "<<cnt<<endl;
                if(lim==1 && cnt&1) {
                    ans=cnt;
                    break;
                }
            }
        }
        PF("Case %d: %lld\n",++cas,ans);
    }
    return 0;
}

