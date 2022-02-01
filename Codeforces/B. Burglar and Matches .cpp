

#include <bits/stdc++.h>
using namespace std;
#define LL          long long
#define ULL         unsigned long long
#define PII         pair<int,int>
#define PII         pair<int,int>
#define PLL         pair<LL,LL>
#define SORT(x)     sort(x.begin(),x.end())
#define SORTD(x)    sort(x.rbegin(),x.rend())
#define mem(x)      memset(x,0,size of x)
#define TEST()      cout<<"Wroking"<<endl
#define READ(x)    freopen(x,"r",stdin)
#define WRITE(x)   freopen(x,"w",stdout)
#define Fast_Input  ios_base :: sync_with_stdio(false);  cin.tie(NULL);
const int mod=1e9+7,mx=1e6+5,lim=25;

int main() {
    Fast_Input
    LL t=1,cas=0,n,m,x,y,ans;
//    cin>>t;
    while(t-- && cin>>n>>m) {
        vector <PLL> mat;
        ans=0;
        for(int i=0; i<m; i++){
            cin>>x>>y;
            mat.push_back({y,x});
        }
        SORT(mat);
        for(int i=m-1; n>0 && i>=0; i--){
            LL temp= mat[i].first *(min(mat[i].second,n));
            ans+=temp;
            n-= min(mat[i].second,n);
            //cout<<n<<" "<<ans<<" "<<mat[i].first<<" "<<mat[i].second<<endl;
        }
        cout<<ans<<endl;
    }
    return 0;
}



