

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

int main() {
    int n,t=1,cas=0,a,b;
    scanf("%d",&t);
    while(t--) {
        scanf("%d : %d",&a,&b);
        double r= sqrt((a*a) + (b*b))/2.0;
        double val=((2*r*r)-(b*b))/(2*r*r);
        double ang= acos(val);
        double s= r * ang;
        double common = 400.0/(2*s + 2*a);
        printf("Case %d: %.10lf %.10lf\n",++cas,a*common,b*common);
    }
    return 0;
}
