

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
LL  bigmod ( LL a, int p, int m ) {
    if ( p == 0 )
        return 1;
    if ( p % 2 ) {
        return ( ( a % m ) * ( bigmod ( a, p - 1, m ) ) ) % m;
    } else {
        LL c = bigmod ( a, p / 2, m );
        return ( (c%m) * (c%m) ) % m;
    }
}
int main() {
    LL t,cas=0,b,p,m;
    while(cin>> b>>p>>m) {
        cout<<bigmod(b,p,m)<<endl;
    }
    return 0;
}


