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
int dis[1005],K,N,M,vis[1005],id;
vector<int> graph[1005];
void init() {
    for(int i=0; i<=N; i++) {
        graph[i].clear();
        vis[i]=0;
        dis[i]=0;
    }
}
//void BFS(int x) {
//    vis[x]=1;
//    queue<int> Q;
//    Q.push(x);
//    while(!Q.empty()) {
//        int x=Q.front();
//        Q.pop();
//        for(int i=0; i<graph[x].size(); i++) {
//            int y=graph[x][i];
//            if(!vis[y]) {
//                vis[y]=1;
//                    dis[y]+=dis[x];
//                Q.push(y);
//            }
//        }
//    }
//}
void DFS(int x) {
    vis[x]=1;
    for(int i=0; i<graph[x].size(); i++) {
        int y=graph[x][i];
        if(!vis[y]) {
            dis[y]+=dis[x];
            DFS(y);
        }
    }
}
int main() {
    //READ("3in.txt");
    int t,cas=0;
    SFI(t);
    int x,y,z;
    while(t--) {
        SFI(K);
        SFDI(N,M);
        init();
        for(int i=0; i<K; i++) {
            SFI(x);
            dis[x]++;
        }
        for(int i=0; i<M; i++) {
            SFDI(x,y);
            graph[x].PB(y);
        }
        int cnt=0;
        for(int i=1; i<=N; i++) {
            if(dis[i]!=0) {
                memset(vis,0,sizeof vis);
                id=0;
                DFS(i);
            }
        }
        for(int i=1; i<=N; i++) {
            if(dis[i]>=K)
                cnt++;
        }
        PF("Case %d: %d\n",++cas,cnt);
    }
    return 0;
}



