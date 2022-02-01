
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
struct exo {
    int pro,sum;
};

exo tree[mx * 3];
char str[mx+5];

void init(int node, int b, int e) {
    if (b == e) {
        int val= str[b-1]-'0';
        tree[node].sum = val;
        return;
    }
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    init(Left, b, mid);
    init(Right, mid + 1, e);
    tree[node].sum = tree[Left].sum+tree[Right].sum;
}
int query(int node, int b, int e, int i, int j,int carry=0) {
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
void update(int node, int b, int e, int i,int j, int newvalue) {
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
//    READ("0in.txt");
    int t=1,cas=0,q,a,b;
    scanf("%d",&t);
    char ch;
    while(t--) {
        getchar();
        scanf("%s %d",str,&q);
        int n= strlen(str);
        init(1,1,n);
        printf("Case %d:\n",++cas);
        while(q--) {
            getchar();
            scanf("%c",&ch);
            getchar();
            if(ch=='I') {
                scanf("%d %d",&a,&b);
                update(1,1,n,a,b,1);
            } else {
                scanf("%d",&a);
                int res= query(1,1,n,a,a,0);
                if(res==0 || res%2==0) {
                    printf("0");
                } else {
                    printf("1");
                }
                puts("");
            }
        }
        memset(tree,0,sizeof tree);   ///Reset
    }
    return 0;
}


