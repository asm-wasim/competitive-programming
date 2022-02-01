
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
const int lim=1000000+5;
struct node {
    int u,v,w;
};
bool compare(node a,node b) {
    return a.w < b.w;
}
vector <node> G1,G2;
int N,K,par[lim],M;
void init() {
    for(int i=0; i<=N; i++) {
        par[i]=i;
    }
    G1.clear();
    G2.clear();
}
int Find(int x) {
    return par[x]==x? x: par[x]=Find(par[x]);
}
int MST(vector <node> G) {
    int cnt=0,cost=0;
    sort(G.begin(),G.end(),compare);
    for(int i=0; i<G.size(); i++) {
        int x=Find(G[i].u);
        int y=Find(G[i].v);
        if(x!=y) {
            par[y]=x;
            cnt++;
            cost+=G[i].w;
            if(cnt==N-1)
                break;
        }
    }
    return cost;
}
int main() {
    //READ("2in.txt");
    int u,v,w,cas=0;
    while(cin>>N) {
        init();
        node nn;
        if(cas>0)
            puts("");
        cas++;
        for(int i=1; i<N; i++) {
            SF("%d %d %d",&u,&v,&w);
            nn.u=u;
            nn.v=v;
            nn.w=w;
            G1.PB(nn);
        }
        PF("%d\n",MST(G1));
        init();
        SFI(K);
        for(int i=1; i<=K; i++) {
            SF("%d %d %d",&u,&v,&w);
            nn.u=u;
            nn.v=v;
            nn.w=w;
            G2.PB(nn);
        }
        SFI(M);
        for(int i=1; i<=M; i++) {
            SF("%d %d %d",&u,&v,&w);
            nn.u=u;
            nn.v=v;
            nn.w=w;
            G2.PB(nn);
        }
        PF("%d\n",MST(G2));
    }
    return 0;
}
