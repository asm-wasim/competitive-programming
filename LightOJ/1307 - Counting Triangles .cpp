
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
const int mod=1e9+7,mx=1e6+5,lim=2005;

int main() {
    int n,t=1,cas=0,x;
    scanf("%d",&t);
    while(t--) {
        scanf("%d ",&n);
        vector<int> ar;
        vector<int> ::iterator it;
        for(int i=0; i<n; i++) {
            scanf("%d",&x);
            ar.push_back(x);
        }
        SORT(ar);
        int cnt=0,pos;
        for(int i=0; i<n-1; i++) {
            for(int j=i+1; j<n; j++) {
                it= upper_bound(ar.begin(),ar.end(),ar[i]+ar[j]-1);
                it--;
                pos= it-ar.begin();
                cnt+= (pos-j);
            }
        }
        printf("Case %d: %d\n",++cas,cnt);
    }
    return 0;
}
