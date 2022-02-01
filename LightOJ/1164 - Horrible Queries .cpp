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

#define mx 100005
struct exo{
    LL pro,sum;
};

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

    int t,n,q,p,cas=0,a,b,c;
    scanf("%d ",&t);
    while(t--) {
       scanf("%d %d",&n,&q);
        printf("Case %d:\n",++cas);
        for(int i=0; i<q; i++) {
            scanf("%d ",&p);
            if(p==0) {
                scanf("%d %d %d",&a,&b,&c);
                update(1,1,n,a+1,b+1,c);
            } else {
                scanf("%d %d",&b,&c);;
                printf("%lld\n",query(1,1,n,b+1,c+1,0));
            }
        }
        memset(tree,0,sizeof tree);
    }
    return 0;
}
