
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
    scanf("%d",&t);
    while(t--) {
        int x1,y1,x2,y2,x3,y3,x4,y4,x5,y5,x6,y6;
        cin>> x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4>>x5>>y5>>x6>>y6;
        if(x5<=x1 && x6>=x2 && y5<=y1 && x3<=x1 && x4>=x2 && y4>=y2 && y3<=y6){
            cout<<"NO"<<endl;
        }else
            cout<<"YES"<<endl;
    }
    return 0;
}

