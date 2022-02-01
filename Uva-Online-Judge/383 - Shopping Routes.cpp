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
const int lim=35;
int N,M,P,vis[lim],dis[lim],cnt;
map<string , int>mark;
vector <int> edge[lim];
void init(){
    for(int i=0; i<=N; i++){
        edge[i].clear();
        vis[i]=0;
    }
    mark.clear();
}
bool BFS(int st,int en){
    queue<int> Q;
    Q.push(st);
    vis[st]=1;
    dis[st]=0;
    while(!Q.empty()){
        int u= Q.front();
        Q.pop();
        if(u==en)
        return true;
        for(int i=0; i<edge[u].size(); i++){
            int v=edge[u][i];
            if(!vis[v]){
                dis[v]=dis[u]+1;
                vis[v]=1;
                Q.push(v);
            }
        }
    }
    return false;
}
int main(){
    //READ("2in.txt");
    //WRITE("2out.txt");
    int T,x,cas=0;
    SFI(T);
    char u[4],v[4];
    PF("SHIPPING ROUTES OUTPUT\n");
    while(T--){
        SF("%d %d %d",&N,&M,&P);
        getchar();
        init();
        for(int i=1; i<=N; i++){
            SF("%s",u);
            mark[u]=i;
        }
        for(int i=0; i<M; i++){
            SF("%s %s",u,v);
            edge[mark[u]].PB(mark[v]);
            edge[mark[v]].PB(mark[u]);
        }
        PF("\nDATA SET  %d\n\n",++cas);
        for(int i=0; i<P; i++){
            SF("%d",&x);
            getchar();
            SF("%s %s",u,v);
            memset(vis,0,sizeof vis);
            memset(dis,0,sizeof dis);
            cnt=0;
            if(BFS(mark[u],mark[v])){
                PF("$%d\n",100*(dis[mark[v]])*x);
            }else{
                PF("NO SHIPMENT POSSIBLE\n");
            }
        }
    }
    PF("\nEND OF OUTPUT\n");
    return 0;
}

