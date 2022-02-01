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

const LL mod=1e9+7,mx=1e8,lim=25;
LL NumOfTrailingZero(LL n) {
    LL cnt=0, i=5;
    while(n/i>=1) {
        cnt+= n/i;
        i*=5;
    }
    return cnt;
}

LL BinarySearch(LL n) {
    LL left=5,right=9*mx;
    while(left<=right) {
        LL mid=(left+right)/2;
        LL  a= NumOfTrailingZero(mid);
        if(a==n) {
            return mid;
        } else if(a<n) {
            left= mid+1;
        } else {
            right=mid-1;
        }
    }
    return -1;
}


int main() {
    int t,cas=0;
    scanf("%d",&t);
    LL n,q, x,y,z;
    while(t--) {
        scanf("%lld",&n);
        x=BinarySearch(n);
        printf("Case %d: ",++cas);
        if(x==-1) {
            printf("impossible\n");
        } else
            printf("%lld\n",x-(x%5));
    }
    return 0;
}

