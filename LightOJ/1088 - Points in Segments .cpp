
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
const int mod=1e9+7,mx=1e5+5,lim=25;


int main() {
    int t,cas=0;
    scanf("%d",&t);
    int n,q,x,y,z;
    vector <int> ar;
    vector <int> ::iterator it,it2;
    while(t--) {
        scanf("%d %d",&n,&q);
        for(int i=0; i<n; i++) {
            scanf("%d",&x);
            ar.push_back(x);
        }
        printf("Case %d:\n",++cas);
        for(int i=0; i<q; i++) {
            scanf("%d %d",&x,&y);
            it=lower_bound(ar.begin(),ar.end(),x);
            it2=lower_bound(ar.begin(),ar.end(),y);
            if(*it2==y)
                it2++;
            printf("%d\n",it2-it);
        }
        ar.clear();
    }
    return 0;
}
