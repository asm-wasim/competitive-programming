
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

int main(){
    Fast_Input
    cin>>testCase;

    while(testCase--){
        int n,x,a,b;
        cin>>n>>x>>a>>b;
        while(x>0 && b<n) b++, x--;
        while(x>0 && a>1) a-- , x--;
        cout<<b-a<<endl;
    }
    return 0;
}
