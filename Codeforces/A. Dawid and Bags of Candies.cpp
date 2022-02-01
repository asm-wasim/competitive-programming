
#include <bits/stdc++.h>
using namespace std;
#define LL          long long
#define ULL         unsigned long long
#define LD          long double
#define PII         pair<int,int>
#define PLL         pair<LL,LL>
#define SORT(x)     sort(x.begin(),x.end())
#define SORTD(x)    sort(x.rbegin(),x.rend())
#define mem(x)      memset(x,0,size of x)
#define READ(f)     freopen(f, "r", stdin)
#define WRITE(f)    freopen(f, "w", stdout)
#define TEST()      cout<<"Wroking"<<endl
#define TEST2(x)    cout<<x<<endl
#define Fast_Input  ios_base :: sync_with_stdio(false);  cin.tie(NULL);
const int mod=1e9+7,mx=1e6+5,lim=25;
int aa,bb,cc,dd,xx,yy,zz;

int main() {
    int t=1,cas=0;
    //scanf("%d",&t);
    while(t--) {
        int ar[5];
        cin>>ar[0]>>ar[1]>>ar[2]>>ar[3];
        sort(ar,ar+4);
        bool flag=false;
        if(ar[3]==(ar[2]+ar[1]+ar[0])) {
            flag=true;
        } else if(ar[3]+ar[0]==ar[1]+ar[2]) {
            flag=true;
        }
        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
