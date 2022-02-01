
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
        int n;
        cin>>n;
        int cnt=0, lev=0;
        while(cnt<=n){
            lev++;
            cnt+=(lev*(lev+1))/2;
        }
        cout<<lev-1<<endl;
    }
    return 0;
}


