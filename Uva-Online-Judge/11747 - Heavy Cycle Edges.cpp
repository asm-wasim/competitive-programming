#include <bits/stdc++.h>
using namespace std;
#define SF scanf
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
const int lim=1005;
///-------------------------------------------
//int dx[]= {-1,-1,-1, 0,0, 1,1,1} , dy[]= {-1, 0, 1,-1,1,-1,0,1}; // Eight Side
//int dx[]= {0,0,1,-1}, dy[]= {1,-1,0,0};  //Four Side
///-------------------------------------------
struct node {
    int u,v,w;
};
bool compare(node a,node b) {
    return a.w < b.w;
}
int n,m;
vector <node> graph;
vector <int> print;
int parent[lim];
map<int,int>vis;
map<int,int>::iterator it;
void clr() {
    for(int i=0; i<=n; i++) {
        parent[i]=i;
    }
}
int find_par(int x) {
    if(parent[x]==x)
        return x;
    return parent[x]=find_par(parent[x]);
}
void KMST(int n) {
    clr();
    sort(graph.begin(),graph.end(),compare);
    int cnt=0;
    for(int i=0; i<graph.size(); i++) {
        int x= find_par(graph[i].u);
        int y= find_par(graph[i].v);
        if(x != y) {
            cnt++;
            parent[y]=x;
            //cout<<x<<" "<<y<<endl;
            vis[graph[i].w]++;
            //vis[y]++;
            if(cnt== n-1)
                break;
        }
    }
}

int main() {
    while(SF("%d %d",&n,&m)==2) {
        if(n==0 && m==0)
            break;
        int u,v,w;
        node get;
        for(int i=0; i<m; i++) {
            SF("%d %d %d",&u,&v,&w);
            get.u=u;
            get.v=v;
            get.w=w;
            graph.push_back(get);
            vis[w]=0;
            //vis[v]=0;
        }
        KMST(n);
        for(it=vis.begin(); it!=vis.end(); it++) {
            if(it->SV == 0) {
                print.PB(it->FV);
            }
        }
        int len=print.size();
        if(len==0)
            cout<<"forest";
        else {
            for(int i=0; i<len-1; i++)
                cout<<print[i]<<" ";
            cout<<print[len-1];
        }
        cout<<endl;
        graph.clear();
        vis.clear();
        print.clear();
    }
    return 0;
}

