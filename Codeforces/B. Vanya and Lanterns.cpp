
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
        int n,l;
        cin>>n>>l;
        int ar[n+4];
        for(int i=0; i<n; i++)
            cin>> ar[i];
        sort(ar,ar+n);
        double ans= (double)ar[0];
        for(int i=1; i<n; i++) {
            int k= ar[i]-ar[i-1];

            ans= max(ans, (double)k/2.0 );
        }
        ans=max(ans, (double)(l-ar[n-1]));

        cout<<fixed<<setprecision(10)<<ans<<endl;
    }
    return 0;
}


