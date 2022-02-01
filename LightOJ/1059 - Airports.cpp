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
const int lim=10000+5;
struct node {
    int u,v,w;
};
bool com(node a,node b) {
    return a.w < b.w;
}
vector <node> graph;
vector <int> edge[lim],weight[lim];
int par[lim],cost,vis[lim],N,M,A,air;
void init(int n) {
    for(int i=0; i<=n; i++) {
        par[i]=i;
        vis[i]=0;
        edge[i].clear();
        weight[i].clear();
    }
    graph.clear();
}
int find_par(int x) {
    return par[x]==x? x: par[x]=find_par(par[x]);
}
void MST() {
    sort(graph.begin(),graph.end(),com);
    for(int i=0; i<graph.size(); i++) {
        int x= find_par(graph[i].u);
        int y= find_par(graph[i].v);
        if(x!=y) {
            par[y]=x;
            edge[graph[i].u].PB(graph[i].v);
            edge[graph[i].v].PB(graph[i].u);
            weight[graph[i].u].PB(graph[i].w);
            weight[graph[i].v].PB(graph[i].w);
        }
    }
}
void dfs(int x) {
    vis[x]=1;
    for(int i=0; i<edge[x].size(); i++) {
        int y=edge[x][i];
        if(!vis[y]) {
            if(weight[x][i] >= A) {
                air++;
            } else
                cost+=weight[x][i];
            dfs(y);
        }
    }
}
int main() {
    int T,cas=0;
    SFI(T);
    int u,v,w;
    node nn;
    while(T--) {
        SF("%d %d %d",&N,&M,&A);
        init(N);
        for(int i=0; i<M; i++) {
            SF("%d %d %d",&u,&v,&w);
            nn.u=u,nn.v=v,nn.w=w;
            graph.PB(nn);
        }
        MST();
        air=0;
        cost=0;
        for(int i=1; i<=N; i++) {
            if(!vis[i]) {
                air++;
                dfs(i);
            }
        }
        LL ans=(LL)(cost+(air*A));
        PF("Case %d: %lld %d\n",++cas,ans,air);
    }
    return 0;
}
