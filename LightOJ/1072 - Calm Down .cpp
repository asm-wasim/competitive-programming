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
const double PI =acos(-1);
int main() {
    int t,cas=0;
    scanf("%d",&t);
    double n,q,R,r,x,y,z;
    while(t--) {
        scanf("%lf %lf",&R,&n);
        y= sin(PI/n);
        r= (R*y)/(1+y);
        printf("Case %d: %.10lf\n",++cas,r);
    }
    return 0;
}

