
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

int main() {
    int t=1,cas=0,n;
    //cin>>t;
    while(t--) {
        cin>>n;
        int pos[n+5]={0};
        for(int i=1; i<=n; i++){
            cin>>cas;
            pos[cas]=i;
        }
        LL L=0,R=0;
        int q;
        cin>>q;
        for(int i=0; i<q; i++){
            cin>>cas;
            L+=(pos[cas]);
            R+=(n-pos[cas]+1);
        }
        cout<<L<<" "<<R<<endl;
    }
    return 0;
}


