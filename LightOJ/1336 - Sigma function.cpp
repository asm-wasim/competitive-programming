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
const LL mod=1e14,mx=1e12+5,lim=25;

vector <LL> DP;
void make_list() {
    DP.PB(1);
    DP.PB(2);
    int cnt=0;
    for(LL i=2; i*i<=mx; i++) {
        DP.PB(i*i);
        cnt++;
    }
    for(int i=2; i<cnt; i++) {
        if(2*DP[i]<=mx)
            DP.PB(2*DP[i]);
    }
    SORT(DP);
}
LL Find(LL n){
    vector<LL> ::iterator it;
    it=lower_bound(DP.begin(),DP.end(),n);
    LL ans= it-DP.begin();
    if(*it==n) return  ans+1;
    return ans;
}
int main() {
    //READ("3in.txt");
    int t,cas=0;
    make_list();
    SFI(t);
    LL n;
    while(t--){
        //SFL(n);
        for(n=1; n<=100; n++)
        PF("Case %d: %lld\n",++cas,n-Find(n));
    }

}
