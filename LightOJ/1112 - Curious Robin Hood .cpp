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
int arr[mx];
int tree[mx * 3];
void init(int node, int b, int e) {
    if (b == e) {
        tree[node] = arr[b];
        return;
    }
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    init(Left, b, mid);
    init(Right, mid + 1, e);
    tree[node] = tree[Left] + tree[Right];
}
int query(int node, int b, int e, int i, int j) {
    if (i > e || j < b)
        return 0;
    if (b >= i && e <= j)
        return tree[node];
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    int p1 = query(Left, b, mid, i, j);
    int p2 = query(Right, mid + 1, e, i, j);
    return p1 + p2;
}
void update(int node, int b, int e, int i, int newvalue) {
    if (i > e || i < b)
        return;
    if (b >= i && e <= i) {
        if(newvalue== -1) {
            tree[node] = 0;
        } else
            tree[node] += newvalue;
        return;
    }
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    update(Left, b, mid, i, newvalue);
    update(Right, mid + 1, e, i, newvalue);
    tree[node] = tree[Left] + tree[Right];
}
int main() {

    int t,n,q,cas=0,a,b,c;
    scanf("%d",&t);
    while(t--) {
        scanf("%d %d",&n,&q);
        memset(arr,0,sizeof arr);
        memset(tree,0,sizeof tree);
        for(int i=1; i<=n; i++) {
            scanf("%d",&arr[i]);
        }
        init(1,1,n);
        printf("Case %d:\n",++cas);
        for(int i=0; i<q; i++) {
            scanf("%d",&a);
            if(a==1) {
               scanf("%d",&b);
                printf("%d\n",query(1,1,n,b+1,b+1));
                update(1,1,n,b+1,-1);
            } else if(a==2) {
                scanf("%d %d",&b,&c);
                update(1,1,n,b+1,c);
            } else {
                scanf("%d %d",&b,&c);
                printf("%d\n",query(1,1,n,b+1,c+1));
            }
        }
    }
    return 0;
}




