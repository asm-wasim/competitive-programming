
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
int testCase=1,cas=0;

int main() {
    Fast_Input

    while(testCase--) {
        LL a,b,n,r,avg;
        cin>>n>>r>>avg;

        LL need= n*avg, found=0,minn=mx;
        PII  ar[n+5];
        for(int i=0; i<n; i++){
            cin>>ar[i].second>>ar[i].first;
            found+=ar[i].second;
        }
        sort(ar,ar+n);
        LL cnt=0;
        for(int i=0; found<need && i<n; i++){
            a= r - ar[i].second;
            b= need - found;
            found+= min(a,b);
            cnt+= ( min(a,b)*ar[i].first);
        }
        cout<<cnt<<endl;
    }
    return 0;
}


