
#include <bits/stdc++.h>
using namespace std;
#define LL          long long
#define ULL         unsigned long long
#define LD          long double
#define PII         pair<int,int>
#define PLL         pair<LL,LL>
#define SORT(x)     sort(x.begin(),x.end())
#define SORTD(x)     sort(x.rbegin(),x.rend())
#define READ(f)     freopen(f, "r", stdin)
#define WRITE(f)    freopen(f, "w", stdout)
#define TEST()      cout<<"Wroking"<<endl
#define TEST2(x)    cout<<x<<endl
#define Fast_Input  ios_base :: sync_with_stdio(false);  cin.tie(NULL);
const int mod=1e9+7,mx=50005,lim=25;

vector <int> graph[mx],town;
int vis[mx],rasta[mx];
void init() {
    town.clear();
    for(int i=0; i<mx; i++) {
        graph[i].clear();
        vis[i]=0;
        rasta[i]=i;
    }
}
void BFS(int st,int en) {
    vis[st]=1;
    queue <int> Q;
    Q.push(st);
    while(!Q.empty()) {
        int u=Q.front();
        Q.pop();
        if(u==en)
            return;
        for(int i=0; i<graph[u].size(); i++) {
            int v=graph[u][i];
            if(!vis[v]) {
                vis[v]=1;
                rasta[v]=u;
                Q.push(v);
            }
        }
    }
}
void PrintMap(int x) {
    if(x==rasta[x]) {
        printf("%d",x);
        return;
    }
    PrintMap(rasta[x]);
    printf(" %d",x);
}
int main() {
//    READ("3loji.txt");
    int t=1,cas=0;
    scanf("%d",&t);
    int n;
    while(t--) {
        init();
        scanf("%d",&n);
        int st,en,a,b;
        scanf("%d",&a);
        town.push_back(a);
        for(int i=1; i<n; i++) {
            scanf("%d",&b);
            graph[a].push_back(b);
            graph[b].push_back(a);
            a=b;
            town.push_back(a);
        }
        int siz=town.size();
        for(int i=0; i<siz; i++) {
            SORT(graph[town[i]]);
        }
        BFS(town[0],town[siz-1]);
        printf("Case %d:\n",++cas);
        PrintMap(town[siz-1]);
        puts("");
    }
    return 0;
}

