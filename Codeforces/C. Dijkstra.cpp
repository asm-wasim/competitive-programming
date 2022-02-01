#include <bits/stdc++.h>
using namespace std;
#define SF scanf
#define SFI(x) scanf("%d",&x)
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
const LL INFF =1e17;
const LL mx=1e5+5;
struct node {
    LL u;
    LL cost;
    node(LL _u, LL _cost) {
        u = _u;
        cost = _cost;
    }
    bool operator < ( const node& p ) const {
        return cost > p.cost;      //Operator overloading
    }

};
LL N,M,dis[mx],path[mx];
vector <LL> cost[mx],edge[mx];

bool Dijkstra(LL s) {
    for(LL i=0; i<=N; i++)
        dis[i]=INFF;
    priority_queue <node> Q;
    Q.push(node(s,0));
    dis[s]=0;
    path[s]=-1;
    while(!Q.empty()) {
        node x=Q.top();
        Q.pop();
        LL u=x.u;
        if(u==N)
            return true;
        for(LL i=0; i< edge[u].size(); i++) {
            LL v=edge[u][i];
            if(dis[u]+cost[u][i] < dis[v]) {
                dis[v]=dis[u]+cost[u][i];
                Q.push(node(v,dis[v]));
                path[v]=u;
            }
        }
    }
    return false;
//    for(int i=1; i<=N; i++) {
//        //cout<<s<<" --> "<<i<<" = "<<dis[i]<<endl;
//        cout<<path[i]<<" ";
//    }
}

int main() {
    SF("%lld %lld",&N,&M);
    LL u,v,w;
    for(LL i=0; i<M; i++) {
        SF("%lld %lld %lld",&u,&v,&w);
        edge[u].PB(v);
        edge[v].PB(u);
        cost[u].PB(w);
        cost[v].PB(w);
    }
    bool flag = Dijkstra(1);
    if(!flag) {
        PF("-1");
    } else {
        vector <LL> p;
        for(LL i=N; i != -1; i=path[i])
            p.PB(i);
        for(LL i=p.size()-1; i>=0; i--) {
            PF("%lld ",p[i]);
        }
    }
    PF("\n");
    return 0;
}
