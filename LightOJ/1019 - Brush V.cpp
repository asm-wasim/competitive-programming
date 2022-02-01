#include <bits/stdc++.h>
using namespace std;
#define SF scanf
#define SFI(x) scanf("%d",&x)
#define PFI(x) printf("%d\n",x)
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
const int mod=1e9+7, mx=1e6+5, lim=105;
struct node {
    int u,cost;
    node(int _u, int _cost) {
        u=_u;
        cost=_cost;
    }
    bool operator <(const node& p) const {
        return  cost> p.cost;
    }
};
int N,M,u,v,w,dis[lim];
vector <int> edge[lim],cost[lim];
void init() {
    for(int i=0; i<=N; i++) {
        edge[i].clear();
        cost[i].clear();
        dis[i]=INT_MAX;
    }
}
bool Dijkstra(int s) {
    dis[s]=0;
    priority_queue <node> Q;
    Q.push(node(s,0));
    while(!Q.empty()) {
        int u= Q.top().u;
        if(u==N)
            return true;
        Q.pop();
        for(int i=0; i<edge[u].size(); i++) {
            int v= edge[u][i];
            if(dis[u]+cost[u][i] < dis[v]) {
                dis[v]=dis[u]+cost[u][i];
                Q.push(node(v,dis[v]));
            }
        }
    }
    return false;
}
int main() {
    int T,cas=0;
    SFI(T);
    while(T--) {
        SF("%d %d",&N,&M);
        init();
        for(int i=0; i<M; i++) {
            SF("%d %d %d",&u,&v,&w);
            edge[u].PB(v);
            edge[v].PB(u);
            cost[u].PB(w);
            cost[v].PB(w);
        }
        if(Dijkstra(1))
            PF("Case %d: %d\n",++cas,dis[N]);
        else
            PF("Case %d: Impossible\n",++cas);
    }
    return 0;
}

