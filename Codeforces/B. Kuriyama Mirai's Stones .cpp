
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
    Fast_Input
    int t=1,cas=0,n;
    //cin>>t;
    while(t--) {
        int n;
        cin>>n;
        LL ar[n+5],br[n+5],type1[n+5],type2[n+5];
        ar[n+5]=br[0]=type1[0]=type2[0]=0;
        for(int i=1; i<=n; i++){
            cin>>ar[i]; br[i]=ar[i];
        }
        sort(br,br+n+1);

        for(int i=1; i<=n; i++){
            type1[i]=type1[i-1]+ar[i];
            type2[i]=type2[i-1]+br[i];
        }
        int a,b,c,q; cin>>q;
        for(int i=0; i<q; i++){
            cin>>a>>b>>c;
            if(a==1) cout<<type1[c]-type1[b-1]<<endl;
            else cout<<type2[c]-type2[b-1]<<endl;
        }

    }
    return 0;
}

