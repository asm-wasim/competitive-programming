#include <bits/stdc++.h>
using namespace std;
#define SF scanf
#define SFI(x) scanf("%d",&x)
#define PFI(x) printf("%d\n",x)
#define TEST() cout<<"Wroking"<<endl
#define PF printf
#define LL long long
#define ULL unsigned long long
#define LD long double
#define FV first
#define SV second
#define PB push_back
#define MP make_pair
#define IN insert
#define FOR(x,y,z) for(int x=y; x<z; x++)
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
#define Fast_Input ios_base :: sync_with_stdio(false);  cin.tie(NULL);
#define PII pair<int,int>
///-------------------------------------------
//int dx[]= {-1,-1,-1, 0,0, 1,1,1} , dy[]= {-1, 0, 1,-1,1,-1,0,1}; // Eight Side
//int dx[]= {0,0,1,-1}, dy[]= {1,-1,0,0};  //Four Side
///-------------------------------------------
const int mod=1e9+7;
const int mx=1e6+5;
const int lim=300000+5;

struct node {
    int u,v,w;
    node(int _u,_v,_w) {
        u=_u,v=_v,w=_w;
    }
    bool operator < (const node& p) const {
        return cost> p.cost;
    }
};

int N,M,vis[lim],pre,cnt;
vector <node> edge[lim];

void dfs(int x) {
    vis[x]=1;
    for(int i=0; i<edge.size(); i++){

    }
    cnt++;
    ans=max(ans,cnt);
}

int main() {
    int u,v,w;
    SF("%d %d",&N,&M);
    for(int i=0; i<M; i++) {
        SF("%d %d %d",&u,&v,&w);
        edge.PB(node(u,v,w));
    }
    int ans=0;
    for(int i=1; i<=N; i++) {
        if(!vis[i]) {
            cnt=0;
            dfs(i);
        }
    }
    cout<<ans<<endl;

}
