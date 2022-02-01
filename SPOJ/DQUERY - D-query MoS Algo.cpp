
#include <bits/stdc++.h>
using namespace std;
#define ll           long long
#define pii          pair<int,int>
#define pll          pair<ll,ll>
#define SORT(x)      sort(x.begin(),x.end())
#define isWorking()  cout<<"Wroking"<<endl
#define READ(x)      freopen(x,"r",stdin)
#define WRITE(x)     freopen(x,"w",stdout)
#define Fast_Input   ios_base :: sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
const ll mod=1e6+7,INF=1e18,mx= 1e6+7,mn=100;
int testCase=1,cas=0;

int ans[mx],k,n,q,ar[mx],L,R,curDiff;

struct Query {

    int QueryNo,L,R;

    bool operator < (const Query &a) const {
        int x= L/k;
        int y= a.L/k;
        if(x==y)
            return R < a.R;
        return x < y;
    }

} query[mx];

int main() {



    scanf("%d",&n);
    k=(int)sqrt(n);
    for(int i=0; i<n; i++)
        scanf("%d",&ar[i]);

    scanf("%d",&q);
    for(int i=0; i<q; i++) {
        scanf("%d %d",&query[i].L, &query[i].R);
        query[i].L--;
        query[i].R--;
        query[i].QueryNo=i;
    }
    sort(query,query+q);

    vector<int> frequency(mx,0);
    L=0,R=-1,curDiff=0;

    for(int i=0; i<q; i++) {

        while(L<query[i].L) {
            frequency[ ar[L] ]--;
            curDiff-=(frequency[ ar[L] ]==0);
            L++;
        }

        while(R<query[i].R) {
            R++;
            frequency[ ar[R] ]++;
            curDiff+=(frequency[ ar[R] ]==1);
        }

        while(L > query[i].L) {
            L--;
            frequency[ ar[L] ]++;
            curDiff+=(frequency[ ar[L] ]==1);
        }

        while(R > query[i].R) {
            frequency[ ar[R] ]--;
            curDiff-=(frequency[ ar[R] ]==0);
            R--;
        }
        ans[ query[i].QueryNo ]=curDiff;
    }

    for(int i=0; i<q; i++)
        printf("%d\n",ans[i]);

    return 0;
}
