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
const int lim=50000+5;
///Using DFS
vector <int> graph[lim];
int vis[lim],N,M;
void init() {
    for(int i=0; i<=N; i++) {
        graph[i].clear();
        vis[i]=0;
    }

}
void dfs(int x) {
    vis[x]=1;
    for(int i=0; i<graph[x].size(); i++) {
        int y=graph[x][i];
        if(!vis[y]) {
            dfs(y);
        }
    }
}

int main() {
    //READ("2in.txt");
    int x,y,cas=0;
    while(SF("%d %d",&N,&M)==2) {
        if(N==0 && M==0)
            break;
        init();
        for(int i=0; i<M; i++) {
            SF("%d %d",&x,&y);
            graph[x].PB(y);
            graph[y].PB(x);

        }
        int cnt=0;
        for(int i=1; i<=N; i++) {
            if(!vis[i]) {
                cnt++;
                dfs(i);
            }
        }
        PF("Case %d: %d\n",++cas,cnt);
    }
    return 0;
}
// Using Union Find
//int par[lim],N,M,Rank[lim];
//map<int,int> mp;
//void init(){
//    for(int i=0; i<=N; i++){
//        par[i]=i;
//    }
//    mp.clear();
//}
//int find_par(int x){
//    return par[x]==x? x:par[x]=find_par(par[x]);
//}
//void make_union(int x,int y){
//    int p=find_par(x);
//    int q=find_par(y);
//    if(p!=q){
//        par[q]=p;
//    }
//}
//
//int main(){
//    int x,y,cas=0;
//    while(SF("%d %d",&N,&M)==2){
//        if(N==0 && M==0)
//            break;
//        init();
//        for(int i=0; i<M; i++){
//            SF("%d %d",&x,&y);
//            make_union(x,y);
//        }
//        for(int i=1; i<=N; i++){
//            mp[find_par(i)]++;
//        }
//       PF("Case %d: %d\n",++cas,mp.size());
//    }
//    return 0;
//}
