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
    int t,cas=0;
    cin>>t;
    string str,base;
    int x,y,z;
    while(t--) {
        cin>>str;
        base="1";
        int cnt=0,i=0;
        for(; i<str.size(); i++)
            if(str[i]=='.') {
                str.erase(i,1);
                break;
            }
        for(; i<str.size(); i++)
            base+="0";
        stringstream s(base);
        s>>x;
        stringstream ss(str);
        ss>>y;
        z=__gcd(x,y);
        cout<<x/z<<endl;
    }
    return 0;
}

