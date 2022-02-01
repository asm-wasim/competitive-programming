
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
int main() {
    Fast_Input
    int t,cas=0;
    cin>>t;
    while(t--) {
        double ox,oy,ax,ay,bx,by,ab,ob,oa;
        cin>>ox>>oy>>ax>>ay>>bx>>by;
        ab = sqrt(((bx-ax)*(bx-ax)) + ((by-ay)*(by-ay)));
        ob= sqrt(((ox-bx)*(ox-bx)) + ((oy-by)*(oy-by)));
        oa = sqrt(((ox-ax)*(ox-ax)) + ((oy-ay)*(oy-ay)));
        double theta=acos(((oa*oa)+(ob*ob)-(ab*ab))/(2.0*oa*ob));
        cout<<"Case "<<++cas<<": "<<setprecision(12)<<oa*theta<<endl;
    }
    return 0;
}







