
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

const int mx=100005;
int ar[mx],tree_max[3*mx],tree_min[3*mx];

void init(int node,int st,int en){
    if(st==en){
        tree_max[node]=ar[st];
        tree_min[node]=ar[st];
        return;
    }
    int L=2*node,R=L+1,mid=(st+en)/2;
    init(L,st,mid);
    init(R,mid+1,en);
    tree_max[node]=max(tree_max[L],tree_max[R]);
    tree_min[node]=min(tree_min[L],tree_min[R]);
}

int query_max(int node,int st,int en,int x,int y){
    if(st>y || en<x) return INT_MIN;
    if(st>= x && en<=y){
        return tree_max[node];
    }
    int L=node*2,R=L+1,mid=(st+en)/2;
    int a= query_max(L,st,mid,x,y);
    int b= query_max(R,mid+1,en,x,y);
    return max(a,b);
}
int query_min(int node,int st,int en,int x,int y){
    if(st>y || en<x) return INT_MAX;
    if(st>= x && en<=y){
        return tree_min[node];
    }
    int L=node*2,R=L+1,mid=(st+en)/2;
    int a= query_min(L,st,mid,x,y);
    int b= query_min(R,mid+1,en,x,y);
    return min(a,b);
}
void clr(){
    for(int i=0; i<mx; i++){
        ar[i]=tree_max[i]=tree_min[i]=0;
    }
}
int main() {

    int t,cas=0;
    scanf("%d",&t);
    int n,d,q,x,y,z;
    while(t--) {
        scanf("%d  %d",&n,&d);
        for(int i=1; i<=n; i++){
            scanf("%d",&ar[i]);
        }
        init(1,1,n);
        int ans=INT_MIN,rn=n-d;
        for(int i=1; i<=rn; i++){
            x= query_max(1,1,n,i,i+d-1);
            y= query_min(1,1,n,i,i+d-1);
            ans=max(ans,x-y);
        }
        if(ans<0) ans=0;
        printf("Case %d: %d\n",++cas,ans);
        clr();
    }
    return 0;
}

