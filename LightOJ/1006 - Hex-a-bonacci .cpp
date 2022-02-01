/****************#####  Bismillah-ir-Rahman-ir-Rahim   #####*************
__________________________________________________________________________
######################   A.S.M. Wasim (Exo_Tic)  #########################
######################        LU-CSE-47          #########################
*************************************************************************/

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

LL hexa[10005];
LL a, b, c, d, e, f,n;
///Method 1
/*LL fn(LL n) {
    if( n == 0 ) return a;
    if( n == 1 ) return b;
    if( n == 2 ) return c;
    if( n == 3 ) return d;
    if( n == 4 ) return e;
    if( n == 5 ) return f;
    if(hexa[n]!=-1) {
        return hexa[n];
    }
    LL ans=(fn(n-1)+fn(n-2)+fn(n-3)+fn(n-4)+fn(n-5)+fn(n-6))%mod;
    hexa[n]=ans;
    return hexa[n];
}*/

///Method 2
LL fn(LL n) {
    hexa[0]=a;
    hexa[1]=b;
    hexa[2]=c;
    hexa[3]=d;
    hexa[4]=e;
    hexa[5]=f;
    for(int i=6; i<=n; i++) {
        hexa[i]=hexa[i-1]+hexa[i-2]+hexa[i-3]+hexa[i-4]+hexa[i-5]+hexa[i-6];
        hexa[i]%=mod;
    }
    return hexa[n];
}
int main() {
    int t,cas=0;
    scanf("%d",&t);
    while(t--) {
        memset(hexa,-1,sizeof hexa);
        scanf("%lld %lld %lld %lld %lld %lld %lld", &a, &b, &c, &d, &e, &f, &n);
        printf("Case %d: %lld\n", ++cas, fn(n)%mod);
    }
    return 0;
}
