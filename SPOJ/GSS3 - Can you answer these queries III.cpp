

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
const int MOD=1e9+7,mx=1e4,lim=25;
int ar[5*mx], tree[15*mx];

void init(int node ,int b,int e){
    if(b==e){
        tree[node]=ar[b];
        return;
    }
    int L= node*2, R=L+1;
    int mid=(b+e)/2;
    init(L,b,mid);
    init(R,mid+1,e);
    tree[node]= max(tree[L]+tree[R],max(tree[L],tree[R]));
}

void update(int node ,int b,int e,int pos,int value){
    if(b > pos || e < pos)
        return;
    if(b >= pos && e <= pos){
        tree[node]=value;
        return;
    }
    int L= node*2, R=L+1;
    int mid=(b+e)/2;
    update(L,b,mid,pos,value);
    update(R,mid+1,e,pos,value);
    tree[node]= max(tree[L]+tree[R],max(tree[L],tree[R]));
}

int query(int node,int b,int e,int x,int y){
    if(x > e || y < b)
        return INT_MIN;
    if(b >= x && y >= e)
        return tree[node];
    int L=node*2, R=L+1;
    int mid= (b+e)/2;
    int p1=query(L,b,mid,x,y),p2=query(R,mid+1,e,x,y);
    return max(p1+p2,max(p1,p2));
}

int main() {
    READ("4 in.txt");
    Fast_Input
    int n,q,m,x,y;
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>ar[i];
    init(1,1,n);
    cin>>q;
    for(int i=0; i<q; i++){
        cin>>m>>x>>y;
        if(m==0){
            update(1,1,n,x,y);
        }else{
            cout<<query(1,1,n,x,y)<<endl;
        }
    }
    return 0;
}
