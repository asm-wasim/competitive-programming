

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
    int t=1,cas=0,n;
    cin>>t;
    int cnt,k,d;
    set<int> myset;
    while(t--) {
        cin>>n>>k>>d;
        int ar[n+5];
        for(int i=1; i<=n; i++)
            cin>>ar[i];
        cnt=1000000;
        for(int i=1; i<=n; i++) {
            myset.clear();
            for(int j=i; i+d<=n+1 && j< i+d; j++) {
                myset.insert(ar[j]);
            }
            int cc= myset.size();
            if(i+d<=n+1)
                cnt=min(cnt,cc);
            else
                break;
        }

        cout<<cnt<<endl;
    }
    return 0;
}


