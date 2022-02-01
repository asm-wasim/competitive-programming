
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
const int mod=1e9+7,mx=1e5+5,lim=25;
int N,M,vis[2*mx],W[2*mx],par[2*mx];
struct node
{
    int u,v,w;
    node(int a,int b,int c)
    {
        u=a,v=b,w=c;
    }
};
bool compare(node a,node b)
{
    return a.w > b.w;
}
LL dis[2*mx],ans=0;
vector <node> edge;
vector <int> cost[lim],new_edge[lim];
void init()
{
    for(int i=0; i<=N; i++)
    {
        dis[i]=0;
        vis[i]=0;
        par[i]=i;
    }
}
int Find(int x)
{
    return par[x]==x? x:par[x]=Find(par[x]);
}
void MST()
{
    sort(edge.begin(),edge.end(),compare);
    int cnt=0;
    for(int i=0; i<edge.size(); i++)
    {
        int x=Find(edge[i].u);
        int y=Find(edge[i].v);
        if(x!=y)
        {
            par[y]=x;
            new_edge[edge[i].u].push_back(edge[i].v);
            new_edge[edge[i].v].push_back(edge[i].u);
            cost[edge[i].u].push_back(edge[i].w);
            cost[edge[i].v].push_back(edge[i].w);
            cnt++;
            if(cnt==N-1)
                break;
        }
    }
}
void dfs(int u)
{
    vis[u]=1;
    for(int i=0; i<new_edge[u].size(); i++)
    {
        int y=new_edge[u][i];
        if(!vis[y])
        {
            dis[y]=(dis[u]+cost[u][i]);
            ans=max(ans,dis[y]);
            dfs(y);
        }
    }
}
int main()
{
    int a,b,c,m,n,p,q,x,y,z;
    scanf("%d %d",&N,&M);
    init();
    for(int i=1; i<=N; i++)
    {
        scanf("%d",&W[i]);
    }
    for(int i=0; i<M; i++)
    {
        scanf("%d %d",&a,&b);
        edge.push_back(node(a,b,W[b]));
    }
    scanf("%d",&a);
    MST();
    dfs(a);
    printf("%I64d\n",ans+W[a]);
    return 0;
}

