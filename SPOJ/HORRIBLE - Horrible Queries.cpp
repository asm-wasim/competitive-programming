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
const int mod=1e6+7;
#define mx 100005
struct exo{
    LL pro,sum;
};
//LL arr[mx];
exo tree[mx * 3];
LL query(int node, int b, int e, int i, int j,LL carry=0) {
    if (i > e || j < b)
        return 0;

    if (b >= i && e <= j)
        return tree[node].sum+carry*(e-b+1);

    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    LL p1 = query(Left, b, mid, i, j,carry+tree[node].pro);
    LL p2 = query(Right, mid + 1, e, i, j,carry+tree[node].pro);
    return p1 + p2;
}
void update(int node, int b, int e, int i,int j, LL newvalue) {
    if (i > e || j < b)
        return;
    if (b >= i && e <= j) {
        tree[node].sum +=((e-b+1)* newvalue);
        tree[node].pro +=newvalue;
        return;
    }
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    update(Left, b, mid, i,j, newvalue);
    update(Right, mid + 1, e, i,j, newvalue);
    tree[node].sum = tree[Left].sum + tree[Right].sum+(e-b+1)*tree[node].pro;
}
int main() {
//    READ("in.txt");
    int t,n,q,p,cas=0,a,b,c;
    SFI(t);
    while(t--) {
        SFDI(n,q);
        for(int i=0; i<q; i++) {
            SFI(p);
            if(p==0) {
                SFTI(a,b,c);
                update(1,1,n,a,b,c);
            } else {
                SFDI(b,c);
                PF("%lld\n",query(1,1,n,b,c,0));
            }
        }
        memset(tree,0,sizeof tree);
    }
    return 0;
}






