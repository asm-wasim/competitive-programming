#include <bits/stdc++.h>
using namespace std;
#define SF scanf
#define SFI(x) scanf("%d",&x)
#define PFI(x) scanf("%d\n",x)
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
///-------------------------------------------
//int dx[]= {-1,-1,-1, 0,0, 1,1,1} , dy[]= {-1, 0, 1,-1,1,-1,0,1}; // Eight Side
//int dx[]= {0,0,1,-1}, dy[]= {1,-1,0,0};  //Four Side
///-------------------------------------------
const int mod=1e9+7;
const int mx=1e6+5;
const int lim=1000;
struct node {
    int u,v,w;
};
bool compare(node a,node b) {
    return a.w < b.w;
}
vector <node> graph;
map <string,int> mark;
int parent[lim],cnt;
void clr(int n) {
    for(int i=0; i<=n; i++) {
        parent[i]=i;
    }
}
int find_par(int x) {
    if(parent[x]==x)
        return x;
    return parent[x]=find_par(parent[x]);
}
int KMST(int n) {
    clr(n);
    sort(graph.begin(),graph.end(),compare);
    cnt=0;
    int min_cost=0;
    for(int i=0; i<graph.size(); i++) {
        int x= find_par(graph[i].u);
        int y= find_par(graph[i].v);
        if(x != y) {
            cnt++;
            parent[y]=x;
            min_cost+= graph[i].w;
        }
    }
    return min_cost;
}

int main() {
    //READ("3in.txt");
    int t,m,cas=0;
    SFI(t);
    while(t--){
        SFI(m);
        node p;
        int city=0,total=0,u,v,w;
        char s1[55],s2[55];
        for(int i=0; i<m; i++){
            SF("%s %s %d",s1,s2,&w);
            if(mark[s1]==0){
                city++;
                mark[s1]=city;
            }
            if(mark[s2]==0){
                city++;
                mark[s2]=city;
            }
            p.u=mark[s1];
            p.v=mark[s2];
            p.w=w;
            graph.PB(p);
            total+=w;
        }
        int minn=KMST(city);
        if(cnt != city-1){
            PF("Case %d: Impossible\n",++cas);
        }else{
            PF("Case %d: %d\n",++cas,minn);
        }
        mark.clear();
        graph.clear();
    }
    return 0;
}
