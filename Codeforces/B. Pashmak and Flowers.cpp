
#include <bits/stdc++.h>
using namespace std;
#define SF scanf
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
#define MCI map<char,int>
#define MII map<int,int>
#define SII set<int,int>
#define PII pair<int,int>
const int mod=1e6+7;
const int mx=1e6+5;
int main() {
    LL n;
    cin>>n;
    LL aa[n+4];
    for(int i=0; i<n; i++) {
        cin>>aa[i];
    }
    sort(aa,aa+n);
    LL cnt1=1,cnt2=1,ans=0;
    if(aa[n-1]==aa[0]) {
        for(int i=n-1; i>0; i--)
            ans+=i;

    } else {
        for(int i=1; i<n; i++) {
            if(aa[i]==aa[0])
                cnt1++;
            else
                break;
        }
        for(int i=n-2; i>=0; i--) {
            if(aa[i]==aa[n-1])
                cnt2++;
            else
                break;
        }
        ans=cnt1*cnt2;
    }
    cout<<aa[n-1]-aa[0]<<" "<<ans<<endl;
    return 0;
}
