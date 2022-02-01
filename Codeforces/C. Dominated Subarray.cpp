
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
const int inf=1e8,mx=1e5+5,lim=25;
int testCase=1,cas=0;

int main() {
    Fast_Input
    cin>>testCase;

    while(testCase--) {
        int n,x;
        cin>>n;
        int ans= INT_MAX;
        map <int,int> myMap;

        for(int i=0; i<n; i++){
            cin>>x;
            if(myMap.count(x)){
                ans= min(ans, i-myMap[x]+1);
            }
            myMap[x]=i;
        }
        if(ans==INT_MAX) cout<<-1<<endl;
        else    cout<<ans<<endl;
    }
    return 0;
}
