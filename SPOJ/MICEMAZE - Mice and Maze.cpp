#include <bits/stdc++.h>
using namespace std;
#define SF          scanf
#define SFI(x)      scanf("%d",&x)
#define SFL(x)      scanf("%lld",&x)
#define SFDI(x,y)    scanf("%d %d",&x,&y)
#define SFDL(x,y)    scanf("%lld %lld",&x,&y)
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
const int mod=1e9+7,mx=1e6+5,lim=105;
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
int N,E,T,M,u,v,w,dis[lim];
vector <int> edge[lim],cost[lim];
void init() {
    for(int i=0; i<=N; i++) {
        edge[i].clear();
        cost[i].clear();
        dis[i]=INT_MAX;
    }
}
bool Dijkstra(int s) {
    for(int i=0; i<=N; i++) {
        dis[i]=INT_MAX;
    }
    dis[s]=0;
    priority_queue <node> Q;
    Q.push(node(s,0));
    while(!Q.empty()) {
        int u= Q.top().u;
        if(u==E)
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
    SF("%d %d %d %d",&N,&E,&T,&M);
    init();
    for(int i=0; i<M; i++) {
        SF("%d %d %d",&u,&v,&w);
        edge[u].PB(v);
        edge[v].PB(u);
        cost[u].PB(w);
        cost[v].PB(w);
    }
    int cnt=1;
    for(int i=1; i<=N; i++)
        if(i!=E &&Dijkstra(i) && dis[E]<=T)
            cnt++;
    PFI(cnt);
    return 0;
}

