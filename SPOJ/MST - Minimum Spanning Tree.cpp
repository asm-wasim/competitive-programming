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
const int mod=1e9+7,mx=1e4+5,lim=25;
const LL INF=1e18;
struct node {
    LL u,v,w;
    node(LL _u,LL _v,LL _w) {
        u=_u,v=_v,w=_w;
    }
};
bool compare(node a,node b) {
    return a.w < b.w;
}
int N,M,parent[mx],Rank[mx];
LL ans=0;
vector<node> graph;
void init() {
    for(int i=0; i<=N; i++)
        parent[i]=i,Rank[i]=0;
    graph.clear();
}
int find_par(int x) {
    return parent[x]==x? x : parent[x]=find_par(parent[x]);
}
void MST() {
    sort(graph.begin(),graph.end(),compare);
    int cnt=0;
    for(int i=0; i<graph.size(); i++) {
        int x= find_par(graph[i].u);
        int y= find_par(graph[i].v);
        if(x!=y) {
            cnt++;
            ans+=graph[i].w;
            if(Rank[y]>Rank[x])
                parent[y]=x;
            else{
                parent[x]=y;
                Rank[y]++;
            }
            if(cnt==N-1)
                break;
        }
    }

}
int main() {
    SFDI(N,M);
    LL u,v,w;
    init();
    for(int i=0; i<M; i++) {
        SF("%lld %lld %lld",&u,&v,&w);
        graph.PB(node(u,v,w));
    }
    MST();
    PF("%lld\n",ans);
    return 0;
}


