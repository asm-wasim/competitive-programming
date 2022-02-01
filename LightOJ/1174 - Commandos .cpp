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
const int mod=1e9+7,mx=1e6+5,lim=25;
///Floid Warshall
//int N,M,dis[105][105];
//
//void init() {
//    for(int i=0; i<=N; i++) {
//        for(int j=0; j<=N; j++) {
//            if(i==j)
//                dis[i][j]=0;
//            else
//                dis[i][j]=INT_MAX;
//        }
//    }
//}
//
//void Floid() {
//    for(int via=0; via<N; via++) {
//        for(int from=0; from<N; from++) {
//            for(int to=0; to<N; to++) {
//                if(dis[from][via]!=INT_MAX && dis[via][to]!=INT_MAX) {
//                    dis[from][to]=min(dis[from][to],dis[from][via]+dis[via][to]);
//                }
//            }
//        }
//    }
//
//}
//int main() {
//    //READ("3in.txt");
//    int t,cas=0;
//    SFI(t);
//    int u,v;
//    while(t--) {
//        SFDI(N,M);
//        init();
//        for(int i=0; i<M; i++) {
//            SFDI(u,v);
//            dis[u][v]=1;
//            dis[v][u]=1;
//        }
//        SFDI(u,v);
//        Floid();
//        int ans=0;
////        for(int i=0; i<N; i++) {
////            for(int j=0; j<N; j++) {
////                cout<<dis[i][j]<<" ";
////            }
////            puts(" ");
////        }
//        for(int i=0; i<N; i++) {
//            ans=max(dis[u][i]+dis[i][v],ans);
//        }
//        PF("Case %d: %d\n",++cas,ans);
//    }
//    return 0;
//}




/// BFS
int N,M,source[105],vis[105],des[105];
vector <int> graph[105];
void init() {
    for(int i=0; i<=N; i++) {
        graph[i].clear();
        source[i]=0;
        des[i]=0;
    }
}
void BFS(int x,int *dis){
    vis[x]=1;
    dis[x]=0;
    queue<int> Q;
    Q.push(x);
    while(!Q.empty()){
        int u=Q.front();
        Q.pop();
        for(int i=0; i<graph[u].size(); i++){
            int v=graph[u][i];
            if(!vis[v]){
                vis[v]=1;
                dis[v]=dis[u]+1;
                Q.push(v);
            }
        }
    }
}
int main() {
    //READ("3in.txt");
    int t,cas=0;
    SFI(t);
    int x,y,z;
    while(t--) {
        SFDI(N,M);
        init();
        for(int i=0; i<M; i++) {
            SFDI(x,y);
            graph[x].PB(y);
            graph[y].PB(x);
        }
        SFDI(x,y);
        memset(vis,0,sizeof vis);
        BFS(x,source);
        memset(vis,0,sizeof vis);
        BFS(y,des);
        int ans=0;
        for(int i=0; i<N; i++){
            ans=max(ans,source[i]+des[i]);
        }
        PF("Case %d: %d\n",++cas,ans);
    }
    return 0;
}

