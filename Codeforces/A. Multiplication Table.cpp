
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
    int t=1,cas=0;
    //scanf("%d",&t);
    int a,b,c,m,n,p,q,x,y,z;
    while(t--) {
        scanf("%d %d",&n,&x);
        y=0;
        for(int i=1; i<=n; i++){
            if(x%i==0 && x/i<=n)
                y++;
        }
        printf("%d\n",y);
    }
    return 0;
}

