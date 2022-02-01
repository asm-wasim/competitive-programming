
#include <bits/stdc++.h>
using namespace std;
#define SF          scanf
#define SFI(x)      scanf("%d",&x)
#define SFL(x)      scanf("%lld",&x)
#define SFDI(x,y)    scanf("%d %d",&x,&y)
#define SFDL(x,y)    scanf("%lld %lld",&x,&y)
#define SFTI(x,y,z)    scanf("%d %d %d",&x,&y,&z)
#define SFTL(x,y,z)    scanf("%lld %lld %lld",&x,&y,&z)
#define PFI(x)      printf("%d\n",x)
#define PFL(x)      printf("%lld\n",x)
#define TEST()      cout<<"Wroking"<<endl
#define TEST2(x)    PFI(x)
#define PF          printf
#define LL          long long
#define ULL         unsigned long long
#define LD          long double
#define FV          first
#define SV          second
#define PB          push_back
#define MP          make_pair
#define IN          insert
#define PII         pair<int,int>
#define PLL         pair<LL,LL>
#define SORT(x)     sort(x.begin(),x.end());
#define FOR(x,y,z)  for(int x=y; x<z; x++)
#define READ(f)     freopen(f, "r", stdin)
#define WRITE(f)    freopen(f, "w", stdout)
#define Fast_Input  ios_base :: sync_with_stdio(false);  cin.tie(NULL);
const int MOD=1e9+7,mx=1e6+5,lim=25;
LL ar[mx],tree[3*mx],level[3*mx];

void init(LL node, LL b, LL e) {
    if (b == e) {
        tree[node] = ar[b];
        level[node]=1;
        return;
    }
    LL Left = node * 2;
    LL Right = node * 2 + 1;
    LL mid = (b + e) / 2;
    init(Left, b, mid);
    init(Right, mid + 1, e);
    level[node] = level[Left]+1;
    if(level[node]&1) {
        tree[node] = tree[Left] ^ tree[Right];
    } else {
        tree[node] = tree[Left] | tree[Right];
    }
}

void update(LL node, LL b, LL e, LL i, LL newvalue) {
    if (i > e || i < b)
        return;
    if (b >= i && e <= i) {
        tree[node] = newvalue;
        return;
    }
    LL Left = node * 2;
    LL Right = node * 2 + 1;
    LL mid = (b + e) / 2;
    update(Left, b, mid, i, newvalue);
    update(Right, mid + 1, e, i, newvalue);
    if(level[node]&1) {
        tree[node] = tree[Left] ^ tree[Right];
    } else {
        tree[node] = tree[Left] | tree[Right];
    }
}

int main() {
    LL n,m,x,y;
    SFDL(n,m);
    n= 1<<n;
    for(int i=1; i<=n; i++) {
        SFL(ar[i]);
    }
    init(1,1,n);
    for(int i=0; i<m; i++) {
        SFDL(x,y);
        update(1,1,n,x,y);
        PFL(tree[1]);
    }
    return 0;
}
