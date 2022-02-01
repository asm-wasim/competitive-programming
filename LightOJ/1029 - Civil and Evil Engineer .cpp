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
#define MCI map<char,int>
#define MII map<int,int>
#define SII set<int,int>
#define PII pair<int,int>
const int mod=1e9+7;
const int mx=1e6+5;
const int lim=105;
struct node {
    int u,v,w;
    node(int a,int b,int c){
        u=a,v=b,w=c;
    }
};
bool compare(node a,node b) {
    return a.w < b.w;
}
vector <node> graph;
int parent[lim];
void clr(int n) {
    for(int i=0; i<=n; i++)
        parent[i]=i;
}
int find_par(int x) {
    return parent[x]==x? x: parent[x]=find_par(parent[x]);
}
int k_mist(int n) {
    sort(graph.begin(),graph.end(),compare);
    clr(n);
    int cnt=0,cost=0;
    for(int i=0; i<graph.size(); i++) {
        int x=find_par(graph[i].u);
        int y=find_par(graph[i].v);
        if(x!=y) {
            cnt++;
            parent[y]=x;
            cost+=graph[i].w;
            if(cnt==n)
                return cost;
        }
    }
}
int k_mast(int n) {
    clr(n);
    int cnt=0,cost=0;
    for(int i=graph.size()-1; i>=0; i--) {
        int x=find_par(graph[i].u);
        int y=find_par(graph[i].v);
        if(x!=y) {
            cnt++;
            parent[y]=x;
            cost+=graph[i].w;
            if(cnt==n)
                return cost;
        }
    }
}
int main() {
    //READ("3in.txt");
    int t,cas=0,n,minn,maxx;
    SFI(t);
    while(t--) {
        SFI(n);
        int u,v,w;
        while(SF("%d %d %d",&u,&v,&w)==3) {
            if(u+v+w==0)
                break;
            graph.PB(node(u,v,w));
        }
        minn=k_mist(n);
        maxx=k_mast(n);
        if((minn+maxx)&1)
            PF("Case %d: %d/2\n",++cas,(minn+maxx));
        else
            PF("Case %d: %d\n",++cas,(minn+maxx)/2);
        graph.clear();
    }
    return 0;
}
