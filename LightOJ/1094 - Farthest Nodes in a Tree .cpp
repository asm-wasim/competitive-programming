#include <bits/stdc++.h>
using namespace std;
#define LL          long long
#define ULL         unsigned long long
#define LD          long double
#define PII         pair<int,int>
#define PLL         pair<LL,LL>
#define SORT(x)     sort(x.begin(),x.end());
#define READ(f)     freopen(f, "r", stdin)
#define WRITE(f)    freopen(f, "w", stdout)
#define TEST()      cout<<"Wroking"<<endl
#define TEST2(x)    cout<<x<<endl
#define Fast_Input  ios_base :: sync_with_stdio(false);  cin.tie(NULL);
const int mod=1e9+7,mx=1e4+3,lim=25;
vector<int> graph[3*mx],cost[3*mx];
int vis[3*mx],dis[3*mx];
int N,p,q,maxx;

void init() {
    for(int i=0; i<=N; i++) {
        graph[i].clear();
        cost[i].clear();
        vis[i]=dis[i]=0;
    }
}
void clr() {
    for(int i=0; i<=N; i++) {
        vis[i]=dis[i]=0;
    }
}

void DFS(int x) {
    vis[x]=1;
    for(int i=0; i<graph[x].size(); i++) {
        int y=graph[x][i];
        if(!vis[y]) {
            dis[y]=dis[x]+cost[x][i];
            if(dis[y]>maxx) {
                maxx=dis[y];
                q=y;
            }
            DFS(y);
        }
    }
}

int main() {
//    READ("in.txt");
    int t=1,cas=0;
    scanf("%d",&t);
    int a,b,c,m,n,x,y,z;
    while(t--) {
        scanf("%d",&N);
        init();
        for(int i=1; i<N; i++) {
            scanf("%d %d %d",&x,&y,&z);
            graph[x].push_back(y);
            graph[y].push_back(x);
            cost[x].push_back(z);
            cost[y].push_back(z);
        }
        maxx=0;
        DFS(0);
        clr();
        maxx=0;
        DFS(q);
        printf("Case %d: %d\n",++cas,maxx);
    }
    return 0;
}
