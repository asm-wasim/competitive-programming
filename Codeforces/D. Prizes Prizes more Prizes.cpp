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
const int mod=1e9+7,mx=1e6+5,lim=25;
int main() {
    Fast_Input
//    READ("3in.txt");
//    WRITE("3out.txt");
    int T,cas=0;
    LL n,ar[55],pr[6],cnt[6],total=0,used=0;
    cin>>n;
    for(int i=0; i<n; i++) {
        cin>>ar[i];
        //total+=ar[i];
    }
    for(int i=0; i<5; i++) {
        cin>>pr[i];
        cnt[i]=0;
    }
    LL temp=0,mo,div;
    for(int i=0; i<n; i++) {
        temp+=ar[i];

        cnt[4]+=temp/pr[4];
        temp%=pr[4];

        cnt[3]+=temp/pr[3];
        temp%=pr[3];

        cnt[2]+=temp/pr[2];
        temp%=pr[2];

        cnt[1]+=temp/pr[1];
        temp%=pr[1];

        cnt[0]+=temp/pr[0];
        temp%=pr[0];
    }
    for(int i=0; i<4; i++)
        cout<<cnt[i]<<' ';
    cout<<cnt[4]<<endl;
    cout<<temp<<endl;
    return 0;
}

