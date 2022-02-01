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
    while(1) {
        Fast_Input
        LL n,l,r;
        cin>>n>>l>>r;
        LL sum1=1,sum2=1;
        LL temp=2,x=l-1,y=r-1;
        while(x--) {
            sum1+=temp;
            temp*=2;
        }
        sum1+=(n-l);
        temp=2;
        while(y--) {
            //cout<<sum2<<" "<<temp<<endl;
            sum2+=temp;
            temp*=2;
        }
        sum2+=((temp/2) * (n-r));
        cout<<sum1<<" "<<sum2<<endl;
        return 0;
    }
}

