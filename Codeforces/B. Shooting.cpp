

#include <bits/stdc++.h>
using namespace std;
#define LL          long long
#define ULL         unsigned long long
#define LD          long double
#define PII         pair<int,int>
#define PLL         pair<LL,LL>
#define SORT(x)     sort(x.begin(),x.end());
#define READ(f)     freopen(f, "r", stdin)
#define WRITE(f)    freopen(f, "w", stdout)
#define TEST()      cout<<"Wroking"<<endl
#define TEST2(x)    cout<<x<<endl
#define Fast_Input  ios_base :: sync_with_stdio(false);  cin.tie(NULL);
const int mod=1e9+7,mx=1e6+5,lim=25;
int dx[]= {0,0,1,-1}, dy[]= {1,-1,0,0};  //Four Side
int main() {
    Fast_Input
    int t=1,cas=0;
    //scanf("%d",&t);
    while(t--) {
        int x,n;
        vector <PII> ve;
        cin>>n;
        for(int i=1; i<=n; i++){
            cin>>x;
            ve.push_back({x,i});
        }
        SORT(ve);
        int cnt=0,sum=0,cost=0;
        for(int i=n-1; i>=0; i--){
            cost= ve[i].first * cnt +1;
            sum+=cost;
            cnt++;
        }
        cout<<sum<<endl;
        for(int i=n-1; i>=0; i--){
            cout<<ve[i].second<<" ";
        }
        cout<<endl;
    }
    return 0;
}
