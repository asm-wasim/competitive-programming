#include <bits/stdc++.h>
using namespace std;
#define LL           long long
#define ULL          unsigned long long
#define PII          pair<int,int>
#define PII          pair<int,int>
#define PLL          pair<LL,LL>
#define SORT(x)      sort(x.begin(),x.end())
#define SORTD(x)     sort(x.rbegin(),x.rend())
#define isWorking()  cout<<"Wroking"<<endl
#define READ(x)      freopen(x,"r",stdin)
#define WRITE(x)     freopen(x,"w",stdout)
#define Fast_Input   ios_base :: sync_with_stdio(false);  cin.tie(NULL);
const LL mod=1e9+7,inf=1e8,mx=1e5+5,lim=25;
int testCase=1,cas=0,N;

int main() {
    Fast_Input

    int n,m;
    while(testCase--) {
        cin>>n>>m;

        LL ans=0,ar[n+5];
        for(int i=0; i<n; i++) cin>>ar[i];

        sort(ar,ar+n);

        for(int i=0; i<n; i++){
            cout<<ar[i]<<" ";
            if(i>=m) ar[i]+=ar[i-m];
            ans+=ar[i];
//            cout<<ans<<" ";
        }
        cout<<"\n";
    }
    return 0;
}


