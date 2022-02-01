

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
    int t=1,cas=0,n,ar[1005];
    while(t-- && cin>>n) {
        for(int i=1; i<=n; i++)  cin>>ar[i];

        int ans=0,cnt=0,minn;

        for(int i=1; i<=n; i++) {
            cnt=0,minn=ar[i];
            for(int j=i; ar[j]<=ar[i] && j>0; j--){
                if(ar[j]>minn) break;
                cnt++;
                minn=ar[j];
            }
            minn=ar[i];
            for(int j=i+1; ar[j]<=ar[i] && j<=n; j++){
                if(ar[j]>minn) break;
                cnt++;
                minn=ar[j];
            }
            //cout<<i<<" "<<cnt<<" "<<endl;
            ans=max(ans,cnt);
        }
        cout<<ans<<endl;
    }
    return 0;
}



