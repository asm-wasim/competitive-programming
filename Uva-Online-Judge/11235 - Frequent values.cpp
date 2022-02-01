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

const int MOD=1e9+7,mx=1e5+5,lim=25;
struct seg_tree {
    int val, fre;
};
int ans, flag,ar[mx];
seg_tree tree[3*mx];

void init(int node, int st,int en) {
    if(st==en) {
        tree[node].val=ar[st];
        tree[node].fre=1;
        return;
    }
    int L=node*2,R=L+1,mid=(st+en)/2;
    init(L,st,mid);
    init(R,mid+1,en);
    if(tree[L].val == tree[R].val) {
        tree[node].val=tree[L].val;
        tree[node].fre=tree[L].fre + tree[R].fre;
    } else {
        if(tree[L].fre >=tree[R].fre) {
            tree[node].val=tree[L].val;
            tree[node].fre=tree[L].fre;
        } else {
            tree[node].val=tree[R].val;
            tree[node].fre=tree[R].fre;
        }
    }
}

seg_tree query(int node,int st,int en,int x,int y) {
    if(st>y || en<x)
        return {INT_MIN,0};
    if(st>=x && en<=y ) {
        return tree[node];
    }
    int L=node*2,R=L+1,mid=(st+en)/2;
    seg_tree p1,p2,p3;
    p1= query(L,st,mid,x,y);
    p2= query(R,mid+1,en,x,y);
    if(p1.val==p2.val){
        p3.fre= p1.fre+p2.fre;
        p3.val=p1.val;
    }else{
        if(p1.fre>=p2.fre){
            p3.fre=p1.fre;
        }else{
            p3.fre=p2.fre;
        }
        p3.val=p1.val;
    }
    return p3;
}

int main() {
    int t,cas=0;
    int n,q, x,y,z;
    while(SFI(n)==1) {
        if(n==0) break;
        SFI(q);
        for(int i=1; i<=n; i++)
            SFI(ar[i]);
        init(1,1,n);
        for(int i=0; i<30; i++)
            cout<<i<<" "<<tree[i].val<<" "<<tree[i].fre<<endl;
        for(int i=0; i<q; i++) {
            SFDI(x,y);
            ans=flag=0;
            seg_tree tm=query(1,1,n,x,y);
            PF("%d\n", tm.fre);
        }
        memset(ar,0,sizeof ar);
        memset(tree,0,sizeof tree);
    }
    return 0;
}

