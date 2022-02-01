
#include <bits/stdc++.h>
using namespace std;
#define LL          long long
#define ULL         unsigned long long
#define PII         pair<int,int>
#define PII         pair<int,int>
#define PLL         pair<LL,LL>
#define SORT(x)     sort(x.begin(),x.end())
#define SORTD(x)    sort(x.rbegin(),x.rend())
#define TEST()      cout<<"Wroking"<<endl
#define READ(x)    freopen(x,"r",stdin)
#define WRITE(x)   freopen(x,"w",stdout)
#define Fast_Input  ios_base :: sync_with_stdio(false);  cin.tie(NULL);
const int mod=1e9+7,mx=1e6+5,lim=25;
int t=1,cas=0;

int main() {
    Fast_Input

    int x,n,ans;
    while(t--) {
        cin>>n;
        ans=0;
        for(int i=0; i<n; i++){
            cin>>x;
            if(ans<=0) ans+=x;
            else ans= ans-x;
        }
        cout<<x<<endl;
    }
    return 0;
}

