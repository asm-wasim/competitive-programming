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
const int mod=1e9+7,mx=1e4+5,lim=25;

int node,edge;
vector<int> graph[mx];
vector <int> indegree(mx,0);
void init() {
    for(int i=0; i<=node; i++) {
        graph[i].clear();
        indegree[i]=0;
    }
}

bool TopSortKhan() {
    queue<int> q;
    for (int i = 0; i < node; ++i)
        if (indegree[i] == 0)
            q.push(i);
    int cnt = 0;
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        ++cnt;
        for (int i = 0; i < (int) graph[u].size(); ++i) {
            int v = graph[u][i];
            --indegree[v];
            if (indegree[v] == 0)
                q.push(v);
        }
    }
    if (cnt != node)
        return 0;
    return 1;
}

int main() {
    int t=1,cas=0;
    scanf("%d",&t);
    map<string,int> Rank;
    string u,v;
    while(t--) {
        scanf("%d",&edge);
        int id=0;
        for(int i=0; i<edge; i++) {
            cin>>u>>v;
            if(Rank[u]==0) {
                Rank[u]=id;
                id++;
            }
            if(Rank[v]==0) {
                Rank[v]=id;
                id++;
            }
            graph[Rank[u]].push_back(Rank[v]);
            indegree[Rank[v]]++;
        }
        node=id;
        bool flag =TopSortKhan();
        printf("Case %d: ",++cas);
        if(flag)
            printf("Yes\n");
        else
            printf("No\n");
        init();
        Rank.clear();
    }
    return 0;
}



