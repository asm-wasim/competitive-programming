
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

///Implementation 1
const int mod=1e9+7,mx=1e5+5,lim=25;
#define red 2
#define green 3
vector <int> G[mx];
int N,vis[mx],cnt,check[mx],clor[mx];
int BFS(int st){
    clor[st]=red;
    vis[st]=1;
    int Red=1,Green=0;
    queue<int> Q;
    Q.push(st);
    while(!Q.empty()){
        int u=Q.front();
        Q.pop();
        for(int i=0; i<G[u].size(); i++){
            int v= G[u][i];
            if(!vis[v]){
                if(clor[u]==red){
                    clor[v]=green;
                    Green++;
                }else{
                    clor[v]=red;
                    Red++;
                }
                vis[v]=1;
                Q.push(v);
            }
        }
    }
    return max(Red,Green);
}
void init(int x){
    for(int i=0; i<=x; i++){
        G[i].clear();
        vis[i]=clor[i]=check[i]=0;
    }
}
int main() {
    int t=1,cas=0;
    scanf("%d",&t);
    int a,b,c,m,n,p,q,x,y,z;
    while(t--) {
        scanf("%d",&n);
        x=0;
        for(int i=0; i<n; i++){
            scanf("%d %d",&a,&b);
            G[a].push_back(b);
            G[b].push_back(a);
            check[a]=check[b]=1;
            x=max(x,max(a,b));
        }
        cnt=0;
        for(int i=1; i<=x; i++){
            if(check[i]==1 && vis[i]==0){
                cnt+=BFS(i);
            }
        }
        printf("Case %d: %d\n",++cas,cnt);
        init(x);
    }
    return 0;
}





















///Implementation 2
//#include <bits/stdc++.h>
//using namespace std;
//#define SF scanf
//#define PF printf
//#define LL long long
//#define ULL unsigned long long
//#define LD long double
//#define FV first
//#define SV second
//#define PB push_back
//#define MP make_pair
//#define IN insert
//#define FOR(x,y,z) for(int x=y; x<z; x++)
//#define READ(f) freopen(f, "r", stdin)
//#define WRITE(f) freopen(f, "w", stdout)
//#define Fast_Input ios_base :: sync_with_stdio(false);  cin.tie(NULL);
//#define MCI map<char,int>
//#define MII map<int,int>
//#define SII set<int>
//#define PII pair<int,int>
//const int mod=1e6+7;
//const int mx=1e6+5;
//const int temp_mx= 20005;
//map <int,vector <int> >graph;
//set<int> fighter;
//set<int> ::iterator it;
//int color[temp_mx];
//bool visited[temp_mx];
//int cas=0;
//void BFS() {
//    int mx=0;
//    for(it=fighter.begin(); it!=fighter.end(); it++) {
//        if(visited[*it])
//            continue;
//        int red=0,green=0;
//        visited[*it]=true;
//        color[*it]=2; /// 2= green ,,, 3=red
//        green++;
//        queue <int> Q;
//        Q.push(*it);
//        while(!Q.empty()) {
//            int x=Q.front();
//            Q.pop();
//            FOR(i,0,graph[x].size()) {
//                int y=graph[x][i];
//                if(!visited[y]) {
//                    if(color[x]==2) {
//                        color[y]=3;
//                        red++;
//                    } else {
//                        color[y]=2;
//                        green++;
//                    }
//                    visited[y]=true;
//                    Q.push(y);
//                }
//            }
//            ///cout<<green<<" "<<red<<endl;
//        }
//        mx+=max(red,green);
//    }
//
//    cout<<"Case "<<++cas<<": "<<mx<<endl;
//}
//void reset() {
//        graph.clear();
//        fighter.clear();
//        memset(visited,0,sizeof visited);
//        memset(color,0,sizeof color);
//}
//int main() {
//    Fast_Input
//    int t,n,u,v;
//    cin>>t;
//    while(t--) {
//        cin>>n;
//        while(n--) {
//            cin>>u>>v;
//            graph[u].PB(v);
//            graph[v].PB(u);
//            fighter.IN(u);
//            fighter.IN(v);
//        }
//        BFS();
//        reset();
//    }
//    return 0;
//}
//

