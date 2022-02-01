/****************#####  Bismillah-ir-Rahman-ir-Rahim   #####*************
__________________________________________________________________________
######################   A.S.M. Wasim (Exo_Tic)  #########################
######################        LU-CSE-47          #########################
*************************************************************************/

#include <bits/stdc++.h>
using namespace std;
#define LL          long long
#define ULL         unsigned long long
#define LD          long double
#define PII         pair<int,int>
#define PLL         pair<LL,LL>
#define SORT(x)     sort(x.begin(),x.end())
#define SORTD(x)    sort(x.rbegin(),x.rend())
#define mem(x)      memset(x,0,size of x)
#define READ(f)     freopen(f, "r", stdin)
#define WRITE(f)    freopen(f, "w", stdout)
#define TEST()      cout<<"Wroking"<<endl
#define TEST2(x)    cout<<x<<endl
#define Fast_Input  ios_base :: sync_with_stdio(false);  cin.tie(NULL);
const int mod=1e9+7,mx=1e6+5,lim=505;
struct type {
    int u,v,w;
    type(int a,int b,int c) {
        u=a,v=b,w=c;
    }
};
bool compare(type a,type b) {
    return a.w < b.w;
}

int aa,bb,cc,dd,xx,yy,zz;
int node,edge;
vector <type> graph;
vector <int> Mgraph[lim],cost[lim];
int dis[lim],vis[lim],par[lim];

void init() {
    for(int i=0; i<=node; i++) {
        Mgraph[i].clear();
        cost[i].clear();
        vis[i]=0;
        dis[i]=-1;
        par[i]=i;
    }
    graph.clear();
}

int Find(int x) {
    return par[x]==x? x:par[x]=Find(par[x]);
}

void MST() {
    sort(graph.begin(),graph.end(),compare);
    int cnt=0;
    for(int i=0; i<graph.size(); i++) {
        int x=graph[i].u;
        int y=graph[i].v;
        int a=Find(x),b=Find(y);
        if(a!= b) {
            cnt++;
            par[b]=a;
            Mgraph[x].push_back(y);
            Mgraph[y].push_back(x);
            cost[x].push_back(graph[i].w);
            cost[y].push_back(graph[i].w);
            if(cnt==node-1)
                return;
        }
    }
}


void dfs(int st) {
    vis[st]=1;
    for(int i=0; i<Mgraph[st].size(); i++) {
        int x=Mgraph[st][i];
        if(!vis[x]) {
            dis[x]= max(dis[st],cost[st][i]);
            dfs(x);
        }
    }

}
int main() {
    int t=1,cas=0;
    scanf("%d",&t);
    while(t--) {
        scanf("%d %d",&node,&edge);
        init();
        for(int i=0; i<edge; i++) {
            scanf("%d %d %d",&aa,&bb,&cc);
            graph.push_back(type(aa,bb,cc));
        }
        MST();
        scanf("%d",&aa);
        dis[aa]=0;
        dfs(aa);
        printf("Case %d:\n",++cas);
        for(int i=0; i<node; i++) {
            if(dis[i]<0)
                printf("Impossible\n");
            else
                printf("%d\n",dis[i]);
        }
    }
    return 0;
}
