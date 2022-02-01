#include <bits/stdc++.h>
using namespace std;
#define SF          scanf
#define SFI(x)      scanf("%d",&x)
#define SFL(x)      scanf("%lld",&x)
#define SFDI(x,y)    scanf("%d %d",&x,&y)
#define SFDL(x,y)    scanf("%lld %lld",&x,&y)
#define SFTI(x,y)    scanf("%d %d %lld",&x,&y,&z)
#define SFTL(x,y)    scanf("%lld %lld %lld",&x,&y,&z)
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
const int mod=1e9+7,mx=1e6+5,lim=2005;
int N,M,vis[lim],color[lim];
vector <int> graph[lim];
bool flag;
void init() {
    for(int i=0; i<=N; i++) {
        graph[i].clear();
        vis[i]=0;
        color[i]=0;
    }
    flag=true;
}
void BFS(int x) {
    vis[x]=1;
    color[x]=2;
    queue<int> Q;
    Q.push(x);
    while(!Q.empty()) {
        int u=Q.front();
        Q.pop();
        for(int i=0; i<graph[u].size(); i++) {
            int v=graph[u][i];
            if(!vis[v]) {
                vis[v]=1;
                Q.push(v);
                if(color[u]==2)
                    color[v]=3;
                else
                    color[v]=2;
            } else if(color[u]==color[v]) {
                flag=false;
                return;
            }
        }
    }
}

int main() {
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
        for(int i=1; i<=N; i++) {
            if(!vis[i]) {
                BFS(i);
            }
        }
        PF("Scenario #%d:\n",++cas);
        if(flag) {
            PF("No suspicious bugs found!\n");
        } else {
            PF("Suspicious bugs found!\n");
        }
    }
    return 0;
}

