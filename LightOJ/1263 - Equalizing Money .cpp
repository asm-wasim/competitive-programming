
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
const int mod=1e9+7,mx=1e6+5,lim=25;

int t_cost,cnt;
int N,M,vis[1005],cost[1005];
vector <int> graph[1005];
void init() {
    for(int i=0; i<=N; i++) {
        graph[i].clear();
        vis[i]=0;
        cost[i]=0;
    }
}

void DFS(int x) {
    vis[x]=1;
    cnt++;
    t_cost+=cost[x];
    for(int i=0; i<graph[x].size(); i++) {
        int y=graph[x][i];
        if(!vis[y]) {
            DFS(y);
        }
    }
}
int main() {
    int t=1,cas=0;
    scanf("%d",&t);
    int x,y,z;
    vector<int> ve;
    while(t--) {
        scanf("%d %d",&N,&M);
        init();
        for(int i=1; i<=N; i++)
            scanf("%d",&cost[i]);
        for(int i=0; i<M; i++) {
            scanf("%d %d",&x,&y);
            graph[x].push_back(y);
            graph[y].push_back(x);
        }
        bool flag=true;
        for(int i=1; i<=N; i++) {
            if(!vis[i]) {
                t_cost=cnt=0;
                DFS(i);
                if(t_cost%cnt==0) {
                    ve.push_back(t_cost/cnt);
                } else {
                    flag=false;
                }
            }
        }
        printf("Case %d: ",++cas);
        if(flag) {
            SORT(ve);
            if(ve[0]==ve[ve.size()-1])
                printf("Yes\n");
            else
                printf("No\n");
        } else {
            printf("No\n");
        }
        ve.clear();
    }
    return 0;
}
