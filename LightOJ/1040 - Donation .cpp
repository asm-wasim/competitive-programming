
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
const int lim=55;
struct node {
    int u,v,w;
};
vector <node> graph;
int par[lim],cnt;
void init(int n) {
    for(int i=0; i<=n; i++) {
        par[i]=i;
    }
    graph.clear();
}
bool com(node a,node b) {
    return a.w < b.w;
}
int find_par(int x) {
    return par[x]==x? x: par[x]=find_par(par[x]);
}
int MST() {
    sort(graph.begin(),graph.end(),com);
    int cost=0;
    for(int i=0; i<graph.size(); i++) {
        int x= find_par(graph[i].u);
        int y= find_par(graph[i].v);
        if(x!=y) {
            cnt++;
            par[y]=x;
            cost+=graph[i].w;
        }
    }
    return cost;
}
int main() {
    int T,n,cas=0;
    SFI(T);
    while(T--) {
        SFI(n);
        init(n);
        int u,v,w, total=0,extra=0;
        node pus;
        for(int i=1; i<=n; i++) {
            for(int j=1; j<=n; j++) {
                SFI(w);
                if(i==j) {
                    extra+=w;
                } else if(w!=0) {
                    pus.u=i;
                    pus.v=j;
                    pus.w=w;
                    graph.PB(pus);
                    total+=w;
                }
            }
        }
        cnt=0;
        int minn=MST();
        if(cnt != n-1) {
            PF("Case %d: -1\n",++cas);
        } else {
            PF("Case %d: %d\n",++cas,extra+(total-minn));
        }
    }
    return 0;
}
