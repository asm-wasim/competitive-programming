
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
const int lim=755;
const double INFF=20000.0;
struct node {
    int u,v;
    double w;
};
struct pos {
    int n,x,y;
};
bool  compare(node a,node b) {
    return a.w < b.w;
}
vector <pos> Town;
vector <node> edge,Final;
int par[lim];
int vis[lim][lim];
int N,M,X,Y;
void init() {
    for(int i=0; i<=N; i++) {
        par[i]=i;
        for(int j=0; j<=N; j++)
            vis[i][j]=0;
    }
    Town.clear();
    edge.clear();
    Final.clear();
}
int find_par(int x) {
    return par[x]==x? x:par[x]=find_par(par[x]);
}
void KRUSKAL() {
    sort(edge.begin(),edge.end(),compare);
    int cnt=0;
    node key;
    for(int i=0; i<edge.size(); i++) {
        int p=find_par(edge[i].u);
        int q=find_par(edge[i].v);
        if(p!=q) {
            cnt++;
            par[q]=p;
            key.u=p;
            key.v=q;
            key.w=1.0;
            Final.PB(key);
            //if(cnt==N-1)
                //break;
        }
    }
}
int main() {
    READ("2in.txt");
    int T;
    SFI(T);
    while(T--) {
        SF("%d",&N);
        init();
        pos k;
        for(int i=1; i<=N; i++) {
            SF("%d %d",&X,&Y);
            k.n=i;
            k.x=X;
            k.y=Y;
            Town.PB(k);
        }
        node key;
        SF("%d",&M);
        for(int i=1; i<=M; i++) {
            SF("%d %d",&X,&Y);
            key.u=X;
            key.v=Y;
            key.w=0.0;
            edge.PB(key);
            vis[X][Y]=1;
            vis[Y][X]=1;
        }
        for(int i=1; i<=N; i++) {
            for(int j=1; j<=N; j++) {
                if(i==j)
                    continue;
                if(!vis[i][j]) {
                    double a= (double)(Town[i].x - Town[j].x);
                    double b= (double)(Town[i].y - Town[j].y);
                    double len= sqrt((a*a)+(b*b));
                    TEST();
                    PF("%d %d %f\n",i,j,len);
                    key.u=i;
                    key.v=j;
                    key.w=len;
                    edge.PB(key);
                    vis[i][j]=1;
                    vis[j][i]=1;
                }
            }
        }
        KRUSKAL();
        TEST();
        TEST();
        TEST();
        for(int i=0; i<edge.size(); i++) {
            PF("%d %d %f\n",edge[i].u,edge[i].v,edge[i].w);
        }
        TEST();
        TEST();
        for(int i=0; i<Final.size(); i++) {
            PF("%d %d\n",Final[i].u,Final[i].v);
        }
    }
    return 0;
}


