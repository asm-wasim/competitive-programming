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
const int mod=1e9+7,mx=1e6+5,lim=25;

struct Node{
    int u,v,w;
    Node(int a,int b,int c){
        u=a,v=b,w=c;
    }
};
bool compare(Node a, Node b){
    return a.w < b.w;
}

int n,m,cost,par[2005];
vector <Node> graph;

void init(){
    graph.clear();
    for(int i=0; i<=n; i++)
        par[i]=i;
}

int Find(int x){
    return x==par[x]? x: par[x]=Find(par[x]);
}

int MST(){
    sort(graph.begin(),graph.end(),compare);
    cost=0;
    int cnt=0;
    int siz=graph.size();
    for(int i=0; i<siz; i++){
        int x= Find(graph[i].u);
        int y= Find(graph[i].v);
        if(x!=y){
            cnt++;
            par[y]=x;
            cost+= graph[i].w;
            if(cnt==n-1) break;
        }
    }
    return cost;
}

int main() {
    int t=1,cas=0;
    scanf("%d",&t);
    char b[11],c[10];
    map<string,int> Rank;
    int e,id;
    while(t--) {
        Rank.clear();
        scanf("%d %d",&n,&m);
        getchar();

        init();
        id=0;
        for(int i=0; i<m; i++){
            scanf("%s %s %d",b,c,&e);
            getchar();

            if(!Rank[b]) {Rank[b]= ++id;}
            if(!Rank[c]) {Rank[c]= ++id;}

            graph.push_back(Node(Rank[b],Rank[c],e));
        }
        printf("%d\n",MST());
        if(t) puts("");
    }
    return 0;
}

