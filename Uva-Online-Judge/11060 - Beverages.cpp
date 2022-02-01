
#include <bits/stdc++.h>
using namespace std;
#define SF scanf
#define SFI(x) scanf("%d",&x)
#define PFI(x) printf("%d\n",x)
#define TEST() cout<<"Wroking"<<endl
#define PF printf
#define LL long long
#define ULL unsigned long long
#define LD long double
#define FV first
#define SV second
#define PB push_back
#define MP make_pair
#define IN insert
#define FOR(x,y,z) for(int x=y; x<z; x++)
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
#define Fast_Input ios_base :: sync_with_stdio(false);  cin.tie(NULL);
#define PII pair<int,int>
///-------------------------------------------
//int dx[]= {-1,-1,-1, 0,0, 1,1,1} , dy[]= {-1, 0, 1,-1,1,-1,0,1}; // Eight Side
//int dx[]= {0,0,1,-1}, dy[]= {1,-1,0,0};  //Four Side
///-------------------------------------------
const int mod=1e9+7;
const int mx=1e6+5;
const int lim=105;
int main() {
    freopen("2in.txt","r",stdin);
    int n, m, cases = 0, x, y, tn, i;
    char cmd[105], name[105][105];
    while(scanf("%d", &n) == 1) {
        map<string, int> R;
        vector<int> g[105];
        int indeg[105] = {};
        for(i = 0; i < n; i++) {
            scanf("%s", name[i]);
            R[name[i]] = i;
        }
        scanf("%d", &m);
        while(m--) {
            scanf("%s", cmd);
            x = R[cmd];
            scanf("%s", cmd);
            y = R[cmd];
            g[x].push_back(y);
            indeg[y]++;
        }
        priority_queue<int, vector<int>, greater<int> > Q;
        for(i = 0; i < n; i++)
            if(indeg[i] == 0)
                Q.push(i);
        printf("Case #%d: Dilbert should drink beverages in this order:", ++cases);
        while(!Q.empty()) {
            tn = Q.top();
            Q.pop();
            for(vector<int>::iterator it = g[tn].begin();
                    it != g[tn].end(); it++) {
                indeg[*it]--;
                if(indeg[*it] == 0)
                    Q.push(*it);
            }
            printf(" %s", name[tn]);
        }
        puts(".\n");
    }
    return 0;
}
//const int mx=105;
//int N,M,adj[mx][mx],color[mx],strtime[mx],endtime[mx],Time=1;
//map<string,int> mark;
//map<int,string> mark2;
//stack <int> ans;
//void init() {
//    for(int i=0; i<=N; i++) {
//        color[i]=0;
//        strtime[i]=0;
//        endtime[i]=0;
//        for(int j=0; j<=N; j++) {
//            adj[i][j]=0;
//        }
//    }
//    mark.clear();
//    mark2.clear();
//}
//
//void dfsvisit(int x) {
//    color[x]=2;
//    strtime[x]=Time++;
//    for(int i=1; i<=N; i++) {
//        if(adj[x][i]==1 && color[i]==0) {
//            dfsvisit(i);
//        }
//    }
//    endtime[x]=Time++;
//    color[x]=1;
//    ans.push(x);
//}
//
//void dfs() {
//    for(int i=1; i<=N; i++) {
//        if(color[i]==0) {
//            dfsvisit(i);
//        }
//    }
//}
//int main() {
//    freopen("2in.txt","r",stdin);
//    char a[60],b[60];
//    int cas=0;
//    while(cin>>N) {
//        init();
//        getchar();
//        for(int i=1; i<=N; i++) {
//            scanf("%s",a);
//            mark[a]=i;
//            mark2[i]=a;
//        }
//        scanf("%d",&M);
//        getchar();
//        for(int i=0; i<M; i++) {
//            scanf("%s %s",a,b);
//            adj[mark[a]][mark[b]]=1;
//        }
//        dfs();
//        printf("Case #%d: Dilbert should drink beverages in this order: ",++cas);
//        while(!ans.empty()){
//            int x=ans.top();
//            cout<<mark2[x]<<" ";
//            //cout<<vec[x].second<<" ";
//            ans.pop();
//        }
//        cout<<endl;
//    }
//    return 0;
//}

